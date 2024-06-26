#include "global.h"
#include "save.h"
#include "animation.h"
#include "ewram.h"
#include "script.h"
#include "background.h"
#include "sound.h"
#include "court.h"
#include "agb_sram.h"
#include "case_data.h"
#include "court_record.h"
#include "investigation.h"
#include "graphics.h"
#include "constants/script.h"
#include "constants/songs.h"
#include "constants/process.h"
#include "constants/oam_allocations.h"

const char gSaveVersion[0x30] = "2001 CAPCOM GBA GYAKUTEN-SAIBAN 06/15 Ver 1.000-";

void (*gSaveGameProcessStates[])(struct Main *) = {
	SaveGameInit1,
	SaveGameInit2,
	SaveGameInitButtons,
	SaveGameWaitForInput,
	SaveGameExitSaveScreen,
	SaveGame5,
	SaveGame6,
	SaveGame7
};

u32 SaveGameData()
{
    gSaveDataBuffer.main.saveContinueFlags |= 0x10;
    DmaCopy16(3, gSaveVersion, gSaveDataBuffer.saveDataVer, sizeof(gSaveVersion));
    CalculateSaveChecksum();
    return WriteSramEx((void*)&gSaveDataBuffer, SRAM_START, sizeof(gSaveDataBuffer));
}

u32 LoadSaveData()
{
    u32 i;
    char * sramVer;
    ReadSram(SRAM_START, (void*)&gSaveDataBuffer, 0x29D0);
    sramVer = gSaveDataBuffer.saveDataVer;
    for(i = 0; i < 0x30; i++)
    {
        if(gSaveVersion[i] != *sramVer)
        {
            gMain.saveContinueFlags = 0;
            return 2;
        }
        sramVer++;
    }
    gMain.caseEnabledFlags = gSaveDataBuffer.main.caseEnabledFlags;
    if(CheckSaveChecksum() == FALSE)
    {
        gMain.saveContinueFlags = 0;
        return 1;
    }
    gMain.saveContinueFlags = 0x10;
    return 0;
}

void CalculateSaveChecksum()
{
    u8 *saveData;
    u32 magic;
    u32 size;
    gSaveDataBuffer.magic = 0;
    magic = 0;
    size = sizeof(gSaveDataBuffer);
    saveData = (void *) (&gSaveDataBuffer.main);
    while (saveData < (((u8 *) (&gSaveDataBuffer)) + size))
    {
        magic += saveData[0];
        saveData += 4;
    }
    magic += 2343;
    gSaveDataBuffer.magic = magic;
}

bool32 CheckSaveChecksum()
{
    u32 magic = 0;
    u8 * saveData = (u8 *)&gSaveDataBuffer.main;
    while(saveData < (u8 *)&gSaveDataBuffer+sizeof(gSaveDataBuffer))
    {
        magic += *saveData;
        saveData += 4;
    }
    magic += 2343;
    if(magic == gSaveDataBuffer.magic)
    {
        return TRUE;
    }
    return FALSE;
}

void ClearSaveProcess(struct Main *main)
{
    struct OamAttrs * oam;
    u32 i;
    switch (main->process[GAME_PROCESS_STATE])
    {
    case 0:
        DmaCopy16(3, gUnusedAsciiCharSet, VRAM + 0x3800, 0x800);
        DmaCopy16(3, GetBGPalettePtr(0), PLTT, BG_PLTT_SIZE);
        DmaCopy16(3, gGfxSaveGameTiles, VRAM, 0x1000);
        DmaCopy16(3, gGfxSaveYesOrNo, OBJ_VRAM0 + 0x3C00, 0x800);
        DmaCopy16(3, gPalChoiceSelected, OBJ_PLTT + 0x120, 0x40);
        DmaCopy16(3, gTextPal, OBJ_PLTT, 0x20);
        gIORegisters.lcd_bg0cnt = BGCNT_PRIORITY(0) | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(28) | BGCNT_16COLOR | BGCNT_WRAP | BGCNT_TXT256x256;
        gIORegisters.lcd_bg1cnt = BGCNT_PRIORITY(1) | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(29) | BGCNT_16COLOR | BGCNT_WRAP | BGCNT_TXT256x256;
        gIORegisters.lcd_bg2cnt = BGCNT_PRIORITY(0) | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(30) | BGCNT_16COLOR | BGCNT_WRAP | BGCNT_TXT256x256;
        i = BGCNT_PRIORITY(3) | BGCNT_CHARBASE(1) | BGCNT_SCREENBASE(31) | BGCNT_MOSAIC | BGCNT_256COLOR | BGCNT_WRAP | BGCNT_TXT256x256; // scrub scrub CC!!11
        gIORegisters.lcd_bg3cnt = i;
        DecompressBackgroundIntoBuffer(0x43);
        CopyBGDataToVram(0x43);
        for(i = 0; i < 0x400; i++)
        {
            gBG2MapBuffer[i] = 0;
        }
        SlideInBG2Window(6, 8);
        gIORegisters.lcd_dispcnt = DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_BG2_ON | DISPCNT_BG3_ON | DISPCNT_OBJ_ON;
        main->tilemapUpdateBits = 0xC;
        gIORegisters.lcd_bg2cnt = BGCNT_PRIORITY(1) | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(30) | BGCNT_16COLOR | BGCNT_WRAP | BGCNT_TXT256x256;
        gIORegisters.lcd_bldy = 0x10;
        main->selectedButton = 1;
        StartHardwareBlend(1, 1, 1, 0x1F);
        main->process[GAME_PROCESS_STATE]++;
        break;
    case 1:
        if(main->blendMode == 0)
        {
            UpdateBG2Window(&gCourtRecord);
            if(gCourtRecord.windowScrollSpeed == 0)
            {
                main->advanceScriptContext = TRUE;
                main->showTextboxCharacters = TRUE;
                gScriptContext.currentSection = 0xFFFF;
                ChangeScriptSection(4);
                gScriptContext.textXOffset = 9;
                gScriptContext.textYOffset = 52;
                oam = &gOamObjects[OAM_IDX_SAVE_PROMPT];
                oam->attr0 = SPRITE_ATTR0(96, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_BLEND, FALSE, ST_OAM_4BPP, ST_OAM_H_RECTANGLE);
                oam->attr1 = SPRITE_ATTR1_NONAFFINE(48, FALSE, FALSE, 3);
                oam->attr2 = SPRITE_ATTR2(0x1E0, 0, 10);
                oam++;
                oam->attr0 = SPRITE_ATTR0(96, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_BLEND, FALSE, ST_OAM_4BPP, ST_OAM_H_RECTANGLE);
                oam->attr1 = SPRITE_ATTR1_NONAFFINE(128, FALSE, FALSE, 3);
                oam->attr2 = SPRITE_ATTR2(0x200, 0, 10); 
                main->blendCounter = 0;
                main->blendDelay = 1;
                main->blendDeltaY = 0x10;
                gIORegisters.lcd_bldcnt = BLDCNT_TGT2_BG3 | BLDCNT_EFFECT_BLEND;
                gIORegisters.lcd_bldalpha = BLDALPHA_BLEND(0, main->blendDeltaY);
                main->process[GAME_PROCESS_STATE]++;
            }
        }
        break;
    case 2:
        if(gScriptContext.flags & SCRIPT_LOOP)
        {
            if(gJoypad.pressedKeys & (DPAD_RIGHT|DPAD_LEFT))
            {
                PlaySE(SE000_MENU_CHANGE);
                main->selectedButton ^= 1;
            }
            else if(gJoypad.pressedKeys & A_BUTTON)
            {
                PlaySE(SE001_MENU_CONFIRM);
                StartHardwareBlend(2, 1, 1, 0x1F);
                main->tilemapUpdateBits = 0;
                main->process[GAME_PROCESS_STATE]++;
            }
        }
        oam = &gOamObjects[OAM_IDX_SAVE_PROMPT];
        if(main->selectedButton == 0)
        {
            oam->attr2 = SPRITE_ATTR2(0x1E0, 0, 9);
            oam++;
            oam->attr2 = SPRITE_ATTR2(0x200, 0, 10);
        }
        else
        {
            oam->attr2 = SPRITE_ATTR2(0x1E0, 0, 10);
            oam++;
            oam->attr2 = SPRITE_ATTR2(0x200, 0, 9);
        }
        if(main->process[GAME_PROCESS_STATE] == 2)
        {
            if(main->blendDeltaY > 0)
            {
                main->blendCounter++;
                if(main->blendCounter >= main->blendDelay)
                {
                    main->blendCounter = 0;
                    main->blendDeltaY--;
                }
                gIORegisters.lcd_bldalpha = BLDALPHA_BLEND(0x10-main->blendDeltaY, main->blendDeltaY);
            }
        }
        break;
    case 3:
        if(main->blendMode == 0)
        {
            if(main->selectedButton == 0)
            {
                DmaFill32(3, 0, &gSaveDataBuffer, sizeof(gSaveDataBuffer));
                WriteSramEx((void*)&gSaveDataBuffer, SRAM_START, sizeof(gSaveDataBuffer));
            }
            SET_PROCESS_PTR(CAPCOM_LOGO_PROCESS, 0, 0, 0, main);
        }
        break;
    default:
        break;
    }
}

#define sIsEpisodePartOver process[GAME_PROCESS_VAR2]

void SaveGameProcess(struct Main *main)
{
    gSaveGameProcessStates[gMain.process[GAME_PROCESS_STATE]](&gMain);
}


void SaveGameInit1(struct Main *main)
{
    u32 i;
    DmaCopy16(3, gBG1MapBuffer, gSaveDataBuffer.bg1Map, sizeof(gBG1MapBuffer));
    DmaCopy16(3, gBG2MapBuffer, gSaveDataBuffer.bg2Map, sizeof(gBG2MapBuffer));
    DmaCopy16(3, gTextBoxCharacters, gSaveDataBuffer.textBoxCharacters, sizeof(gTextBoxCharacters));
    DmaCopy16(3, &gScriptContext, &gSaveDataBuffer.scriptCtx, sizeof(gScriptContext));
    DmaCopy16(3, &gIORegisters, &gSaveDataBuffer.ioRegs, sizeof(gIORegisters));
    DmaCopy16(3, gMapMarker, gSaveDataBuffer.mapMarker, sizeof(gMapMarker));
    for(i = 0; i < ARRAY_COUNT(gMapMarker); i++)
    {
        gMapMarker[i].id |= 0xFF;
    }
    SaveAnimationDataToBuffer(gSaveDataBuffer.backupAnimations);
    main->advanceScriptContext = FALSE;
    StartHardwareBlend(2, 0, 1, 0x1F);
    main->process[GAME_PROCESS_STATE]++;
}

void SaveGameInit2(struct Main *main)
{
    struct OamAttrs * oam;
    u32 i;
    if(main->blendMode != 0)
        return;
    DmaCopy16(3, gBG0MapBuffer, gSaveDataBuffer.bg0Map, sizeof(gBG0MapBuffer));
    DmaCopy16(3, &gCourtRecord, &gSaveDataBuffer.courtRecord, sizeof(gCourtRecord));
    DmaCopy16(3, &gInvestigation, &gSaveDataBuffer.investigation, sizeof(gInvestigation));
    DmaCopy16(3, &gTestimony, &gSaveDataBuffer.testimony, sizeof(gTestimony));
    DmaCopy16(3, &gCourtScroll, &gSaveDataBuffer.courtScroll, sizeof(gCourtScroll))
    DmaCopy16(3, gExaminationData, gSaveDataBuffer.examinationData, sizeof(gExaminationData));
    DmaCopy16(3, gTalkData, gSaveDataBuffer.talkData, sizeof(gTalkData));
    DmaCopy16(3, gGfxNewGameContinue, OBJ_VRAM0 + 0x3800, 0x400);
    DmaCopy16(3, gPalNewGameContinue, OBJ_PLTT + 0x100, 0xC0);
    DmaCopy16(3, gGfxSaveYesOrNo, OBJ_VRAM0 + 0x3C00, 0x800);
    DmaCopy16(3, gPalChoiceSelected, OBJ_PLTT + 0x120, 0x40);
    DecompressBackgroundIntoBuffer(0x43);
    CopyBGDataToVram(0x43);
    main->animationFlags &= ~3;
    oam = gOamObjects;
    for(i = 0; i < MAX_OAM_OBJ_COUNT; i++)
    {
        oam++->attr0 = SPRITE_ATTR0_CLEAR;
    }
    for(i = 0; i < ARRAY_COUNT(gBG2MapBuffer); i++)
    {
        gBG2MapBuffer[i] = 0;
    }
    SlideInBG2Window(6, 8);
    gIORegisters.lcd_dispcnt = DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_BG2_ON | DISPCNT_BG3_ON | DISPCNT_OBJ_ON;
    main->tilemapUpdateBits = 0xC;
    gIORegisters.lcd_bg2cnt = BGCNT_PRIORITY(1) | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(30) | BGCNT_16COLOR | BGCNT_WRAP | BGCNT_TXT256x256;
    gIORegisters.lcd_bg3vofs = 8;
    gIORegisters.lcd_bg3hofs = 8;
    gIORegisters.lcd_bg1vofs = 0;
    gIORegisters.lcd_bg1hofs = 0;
    main->showTextboxCharacters = FALSE;
    StartHardwareBlend(1, 0, 1, 0x1F);
    main->process[GAME_PROCESS_STATE]++;
}

void SaveGameInitButtons(struct Main *main)
{
    struct OamAttrs * oam;
    UpdateBG2Window(&gCourtRecord);
    if(gCourtRecord.windowScrollSpeed == 0) // ?
    {
        main->advanceScriptContext = TRUE;
        main->showTextboxCharacters = TRUE;
        gScriptContext.currentSection = 0xFFFF;
        if(main->sIsEpisodePartOver)
            ChangeScriptSection(0);
        else
            ChangeScriptSection(1);
        gScriptContext.textXOffset = 9;
        gScriptContext.textYOffset = 52;
        oam = &gOamObjects[OAM_IDX_SAVE_PROMPT];
        oam->attr0 = SPRITE_ATTR0(96, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_BLEND, FALSE, ST_OAM_4BPP, ST_OAM_H_RECTANGLE);
        oam->attr1 = SPRITE_ATTR1_NONAFFINE(48, FALSE, FALSE, 3);
        oam->attr2 = SPRITE_ATTR2(0x1E0, 0, 10);
        oam++;
        oam->attr0 = SPRITE_ATTR0(96, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_BLEND, FALSE, ST_OAM_4BPP, ST_OAM_H_RECTANGLE);
        oam->attr1 = SPRITE_ATTR1_NONAFFINE(128, FALSE, FALSE, 3);
        oam->attr2 = SPRITE_ATTR2(0x200, 0, 10);
        main->blendCounter = 0;
        main->blendDelay = 1;
        main->blendDeltaY = 0x10;
        gIORegisters.lcd_bldcnt = BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG3;
        gIORegisters.lcd_bldalpha = BLDALPHA_BLEND(0, main->blendDeltaY);
        if(main->sIsEpisodePartOver)
            main->selectedButton = 0;
        else
            main->selectedButton = 1;
        main->process[GAME_PROCESS_STATE]++;
    }
}

void SaveGameWaitForInput(struct Main *main)
{
    struct OamAttrs * oam;
    if(gScriptContext.flags & SCRIPT_LOOP)
    {
        if(gJoypad.pressedKeys & (DPAD_RIGHT | DPAD_LEFT))
        {
            main->selectedButton ^= 1;
            PlaySE(SE000_MENU_CHANGE);
        }
        else if(gJoypad.pressedKeys & A_BUTTON)
        {
            PlaySE(SE016_CONFIRM_SAVE);
            if(main->selectedButton == 0)
            {
                if(main->sIsEpisodePartOver)
                    gSaveDataBuffer.main.saveContinueFlags &= 0xF0;
                else
                    gSaveDataBuffer.main.saveContinueFlags |= 0x1;
                if(SaveGameData())
                {
                    gScriptContext.currentSection = 0xFFFF;
                    ChangeScriptSection(3);
                    gScriptContext.textXOffset = 9;
                    gScriptContext.textYOffset = 52;
                    main->process[GAME_PROCESS_STATE] = 6;
                    return;
                }
                if(!main->sIsEpisodePartOver)
                {
                    gScriptContext.currentSection = 0xFFFF;
                    ChangeScriptSection(6);
                    gScriptContext.textXOffset = 9;
                    gScriptContext.textYOffset = 52;
                    main->blendCounter = 0;
                    main->blendDelay = 1;
                    main->blendDeltaY = 0;
                }
            }
            main->process[GAME_PROCESS_STATE] = 7;
            main->process[GAME_PROCESS_VAR1] = 0;
        }
        else if(!main->sIsEpisodePartOver && gJoypad.pressedKeys & B_BUTTON)
        {
            PlaySE(SE002_MENU_CANCEL);
            main->selectedButton = 1;
            StartHardwareBlend(2, 0, 1, 0x1F);
            main->process[GAME_PROCESS_STATE] = 4;
            return;
        }
    }
    oam = &gOamObjects[OAM_IDX_SAVE_PROMPT];
    if(main->selectedButton == 0)
    {
        oam->attr0 = SPRITE_ATTR0(96, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_BLEND, FALSE, ST_OAM_4BPP, ST_OAM_H_RECTANGLE);
        oam->attr1 = SPRITE_ATTR1_NONAFFINE(48, FALSE, FALSE, 3);
        oam->attr2 = SPRITE_ATTR2(0x1E0, 0, 9);
        oam++;
        oam->attr0 = SPRITE_ATTR0(96, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_BLEND, FALSE, ST_OAM_4BPP, ST_OAM_H_RECTANGLE);
        oam->attr1 = SPRITE_ATTR1_NONAFFINE(128, FALSE, FALSE, 3);
        oam->attr2 = SPRITE_ATTR2(0x200, 0, 10);
    }
    else
    {
        oam->attr0 = SPRITE_ATTR0(96, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_BLEND, FALSE, ST_OAM_4BPP, ST_OAM_H_RECTANGLE);
        oam->attr1 = SPRITE_ATTR1_NONAFFINE(48, FALSE, FALSE, 3);
        oam->attr2 = SPRITE_ATTR2(0x1E0, 0, 10);
        oam++;
        oam->attr0 = SPRITE_ATTR0(96, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_BLEND, FALSE, ST_OAM_4BPP, ST_OAM_H_RECTANGLE);
        oam->attr1 = SPRITE_ATTR1_NONAFFINE(128, FALSE, FALSE, 3);
        oam->attr2 = SPRITE_ATTR2(0x200, 0, 9);
    }
    if(main->process[GAME_PROCESS_STATE] == 3)
    {
        if(main->blendDeltaY > 0)
        {
            main->blendCounter++;
            if(main->blendCounter >= main->blendDelay)
            {
                main->blendCounter = 0;
                main->blendDeltaY--;
            }
            gIORegisters.lcd_bldalpha = BLDALPHA_BLEND(0x10 - main->blendDeltaY, main->blendDeltaY);
        }
    }
}

void SaveGameExitSaveScreen(struct Main *main)
{
    u32 i;
    if(main->blendMode != 0)
        return;
    if(main->selectedButton == 0)
    {
        SET_PROCESS_PTR(TITLE_SCREEN_PROCESS, 0, 0, 0, main);
        return;
    }
    main->currentBG = gSaveDataBuffer.main.currentBG;
    main->previousBG = gSaveDataBuffer.main.previousBG;
    main->currentBgStripe = gSaveDataBuffer.main.currentBgStripe;
    main->isBGScrolling = gSaveDataBuffer.main.isBGScrolling;
    main->Bg256_stop_line = gSaveDataBuffer.main.Bg256_stop_line;
    main->Bg256_scroll_x = gSaveDataBuffer.main.Bg256_scroll_x;
    main->Bg256_scroll_y = gSaveDataBuffer.main.Bg256_scroll_y;
    main->Bg256_pos_x = gSaveDataBuffer.main.Bg256_pos_x;
    main->Bg256_pos_y = gSaveDataBuffer.main.Bg256_pos_y;
    main->unused38 = gSaveDataBuffer.main.unused38;
    main->Bg256_dir = gSaveDataBuffer.main.Bg256_dir;
    main->horizontolBGScrollSpeed = gSaveDataBuffer.main.horizontolBGScrollSpeed;
    main->verticalBGScrollSpeed = gSaveDataBuffer.main.verticalBGScrollSpeed;
    main->Bg256_next_line = gSaveDataBuffer.main.Bg256_next_line;
    main->Bg256_buff_pos = gSaveDataBuffer.main.Bg256_buff_pos;
    main->bgStripeDestPtr = gSaveDataBuffer.main.bgStripeDestPtr;
    for(i = 0; i < 12; i++)
    {
        main->bgStripeOffsets[i] = gSaveDataBuffer.main.bgStripeOffsets[i];
    }
    DecompressBackgroundIntoBuffer(main->currentBG);
    CopyBGDataToVramAndScrollBG(main->currentBG);
    DmaCopy16(3, gSaveDataBuffer.bg2Map, gBG2MapBuffer, sizeof(gBG2MapBuffer));
    DmaCopy16(3, gSaveDataBuffer.textBoxCharacters, gTextBoxCharacters, sizeof(gTextBoxCharacters));
    RedrawTextboxCharacters();
    DmaCopy16(3, &gSaveDataBuffer.scriptCtx, &gScriptContext, sizeof(gScriptContext));
    DmaCopy16(3, &gSaveDataBuffer.ioRegs, &gIORegisters, sizeof(gIORegisters));
    DmaCopy16(3, gSaveDataBuffer.mapMarker, gMapMarker, sizeof(gMapMarker));
    DmaCopy16(3, gSaveDataBuffer.talkData, gTalkData, sizeof(gTalkData));
    main->advanceScriptContext = gSaveDataBuffer.main.advanceScriptContext;
    main->showTextboxCharacters = gSaveDataBuffer.main.showTextboxCharacters;
    main->gameStateFlags = gSaveDataBuffer.main.gameStateFlags;
    main->shakeTimer = gSaveDataBuffer.main.shakeTimer;
    main->tilemapUpdateBits = gSaveDataBuffer.main.tilemapUpdateBits;
    RestoreAnimationsFromBuffer(gSaveDataBuffer.backupAnimations);
    gMain.animationFlags |= 3;
    DmaCopy16(3, gSaveDataBuffer.oam, gOamObjects, sizeof(gOamObjects));
    DmaCopy16(3, &gPalInvestigationExamineCursors[0], OBJ_PLTT+0x100, 0x20);
    RESTORE_PROCESS_PTR(main);
    if(main->process[GAME_PROCESS] == INVESTIGATION_PROCESS && main->process[GAME_PROCESS_VAR1] == 3)
    {
        if(main->process[GAME_PROCESS_STATE] == INVESTIGATION_MOVE)
            LoadLocationChoiceGraphics();
        else if(main->process[GAME_PROCESS_STATE] == INVESTIGATION_TALK)
            LoadTalkChoiceGraphics();
    }
    FadeInBGM(0x1E, 0xFF); // unpause BGM
    StartHardwareBlend(1, 0, 1, 0x1F);
}

void SaveGame5(struct Main *main)
{
    u32 showNewEpsiode;
    u32 newEpisodeId;
    if(main->blendMode != 0)
        return;

    if(main->scenarioIdx == 1)
    {
        newEpisodeId = 1;
        showNewEpsiode = TRUE;
    }
    else if(main->scenarioIdx == 5)
    {
        newEpisodeId = 2;
        showNewEpsiode = TRUE;
    }
    else if(main->scenarioIdx == 11)
    {
        newEpisodeId = 3;
        showNewEpsiode = TRUE;
    }
    else
        showNewEpsiode = FALSE;

    if(showNewEpsiode)
    {
        main->advanceScriptContext = 0;
        main->showTextboxCharacters = 0;
        SET_PROCESS_PTR(EPISODE_SELECT_PROCESS, 1, 0, newEpisodeId, main);
        return;
    }
    gIORegisters.lcd_dispcnt = 0;
    gScriptContext.currentSection = 0x80;
    SET_PROCESS_PTR(gCaseStartProcess[main->scenarioIdx], 0, 0, 0, main);
}

void SaveGame6(struct Main * main)
{
    if(gScriptContext.flags & SCRIPT_LOOP && gJoypad.pressedKeys & A_BUTTON)
    {
        main->advanceScriptContext = 1;
        main->showTextboxCharacters = 1;
        gScriptContext.currentSection = 0xFFFF;
        if(main->sIsEpisodePartOver)
            ChangeScriptSection(0);
        else
            ChangeScriptSection(1);
        gScriptContext.textXOffset = 9;
        gScriptContext.textYOffset = 52;
        main->blendCounter = 0;
        main->blendDelay = 1;
        main->blendDeltaY = 0x10;
        gIORegisters.lcd_bldcnt = BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG3;
        gIORegisters.lcd_bldalpha = BLDALPHA_BLEND(0, main->blendDeltaY);
        if(main->sIsEpisodePartOver)
            main->selectedButton = 0;
        else
            main->selectedButton = 1;
        main->process[GAME_PROCESS_STATE] = 3;
    }
    else
    {
        struct OamAttrs * oam = &gOamObjects[OAM_IDX_SAVE_PROMPT];
        oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam++;
        oam->attr0 = SPRITE_ATTR0_CLEAR;
    }
}

void SaveGame7(struct Main * main)
{
    struct OamAttrs * oam;
    main->process[GAME_PROCESS_VAR1]++;
    if(main->process[GAME_PROCESS_VAR1] >= 60) // 1 second delay
    {
        StartHardwareBlend(2, 1, 1, 0x1F);
        if(main->sIsEpisodePartOver)
            main->process[GAME_PROCESS_STATE] = 5;
        else
            main->process[GAME_PROCESS_STATE] = 4;
        main->process[GAME_PROCESS_VAR1] = 0;
        oam = &gOamObjects[OAM_IDX_SAVE_PROMPT];
        oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam++;
        oam->attr0 = SPRITE_ATTR0_CLEAR;
    }
    if(main->process[GAME_PROCESS_STATE] == 7 && main->blendDeltaY <= 0xF)
    {
        main->blendCounter++;
        if(main->blendCounter >= main->blendDelay)
        {
            main->blendCounter = 0;
            main->blendDeltaY++;
        }
        gIORegisters.lcd_bldalpha = BLDALPHA_BLEND(0x10 - main->blendDeltaY, main->blendDeltaY);
    }
}

#undef sIsEpisodePartOver
