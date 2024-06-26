#include "global.h"
#include "court.h"
#include "utils.h"
#include "sound.h"
#include "save.h"
#include "script.h"
#include "animation.h"
#include "graphics.h"
#include "constants/script.h"
#include "constants/animation.h"
#include "constants/process.h"
#include "constants/songs.h"
#include "constants/persons.h"
#include "constants/process.h"
#include "constants/oam_allocations.h"

void SetCurrentEpisodeBit()
{
    struct Main * main = &gMain;
    switch(main->scenarioIdx)
    {
        case 1:
        case 2:
        case 3:
        case 4:
            main->caseEnabledFlags |= 2;
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            main->caseEnabledFlags |= 4;
            break;
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
            main->caseEnabledFlags |= 8;
            break;
        case 0:
        default:
            main->caseEnabledFlags |= 1;
    }
}

void (*gCourtProcessStates[])(struct Main *) = {
	CourtInit,
	CourtMain,
	CourtExit
};

void CourtProcess(struct Main * main)
{
    gCourtProcessStates[main->process[GAME_PROCESS_STATE]](main);
}

void CourtInit(struct Main * main)
{
    struct IORegisters * ioRegs = &gIORegisters;
    DmaFill16(3, 0, &gTestimony, sizeof(gTestimony));
    DmaFill16(3, 0, &gInvestigation, sizeof(gInvestigation));
    HideAllSprites();
    InitBGs();
    ResetAnimationSystem();
    LoadCurrentScriptIntoRam();
    ioRegs->lcd_dispcnt = DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_BG_ALL_ON | DISPCNT_OBJ_ON;
    ioRegs->lcd_bg0cnt = BGCNT_PRIORITY(0) | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(28) | BGCNT_16COLOR | BGCNT_WRAP | BGCNT_TXT256x256;
    ioRegs->lcd_bg1cnt = BGCNT_PRIORITY(1) | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(29) | BGCNT_16COLOR | BGCNT_WRAP | BGCNT_TXT256x256;
    ioRegs->lcd_bg2cnt = BGCNT_PRIORITY(0) | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(30) | BGCNT_16COLOR | BGCNT_WRAP | BGCNT_TXT256x256;
    ioRegs->lcd_bg3cnt = BGCNT_PRIORITY(3) | BGCNT_CHARBASE(1) | BGCNT_SCREENBASE(31) | BGCNT_MOSAIC | BGCNT_256COLOR | BGCNT_WRAP | BGCNT_TXT256x256;
    DmaCopy16(3, gUnusedAsciiCharSet, VRAM + 0x3800, 0x800);
    DmaCopy16(3, gGfxSaveGameTiles, VRAM, 0x1000);
    DmaCopy16(3, &gPalInvestigationExamineCursors[0], OBJ_PLTT+0x100, 0x20);
    DmaCopy16(3, gGfx4bppTrialLife, OBJ_VRAM0 + 0x3780, 0x80);
    DmaCopy16(3, gPalCrossExaminationUI, OBJ_PLTT+0x60, 0x20);
    DecompressBackgroundIntoBuffer(1);
    CopyBGDataToVram(1);
    CopyBGDataToVram(0xFF);
    ioRegs->lcd_bg1vofs = ~80; // ??????
    ioRegs->lcd_dispcnt &= ~DISPCNT_BG1_ON; // what the fuck is this doing
    InitializeCourtRecordForScenario(main, &gCourtRecord);
    DmaFill32(3, 0, main->scriptFlags, sizeof(main->scriptFlags));
    if(main->scenarioIdx > 1)
       ChangeFlag(0, 0x41, TRUE); 
    main->gameStateFlags = 0;
    main->tilemapUpdateBits = 0xF;
    main->advanceScriptContext = TRUE;
    main->showTextboxCharacters = TRUE;
    gScriptContext.currentSection = 0xFFFF;
    ChangeScriptSection(0x80);
    main->health = 5;
    main->previousHealth = 0xFF;
    SetCurrentEpisodeBit();
    SetTimedKeysAndDelay(DPAD_RIGHT | DPAD_LEFT, 15);
    StartHardwareBlend(1, 1, 1, 0x1F);
    ioRegs->lcd_bldy = 0x10;
    SET_PROCESS(COURT_PROCESS, COURT_MAIN, 0, 0);
}

void CourtMain(struct Main * main)
{
    struct TestimonyStruct * testimony = &gTestimony;
    if(main->blendMode)
        return;
    if((gJoypad.pressedKeys & START_BUTTON) &&
    !(main->gameStateFlags & 0x10) &&
    gScriptContext.flags & (SCRIPT_FULLSCREEN | 1))
    {
        PauseBGM();
        DmaCopy16(3, gOamObjects, gSaveDataBuffer.oam, sizeof(gOamObjects));
        DmaCopy16(3, &gMain, &gSaveDataBuffer.main, sizeof(gMain));
        PlaySE(SE007_MENU_OPEN_SUBMENU);
        main->gameStateFlags &= ~1;
        BACKUP_PROCESS_PTR(main);
        SET_PROCESS_PTR(SAVE_GAME_PROCESS, 0, 0, 0, main);
    }
    else if((gJoypad.pressedKeys & R_BUTTON) &&
    !(main->gameStateFlags & 0x10) &&
    gScriptContext.flags & (SCRIPT_FULLSCREEN | 1))
    {
        PlaySE(SE007_MENU_OPEN_SUBMENU);
        BACKUP_PROCESS_PTR(main);
        SET_PROCESS_PTR(COURT_RECORD_PROCESS, RECORD_INIT, 0, 0, main);
    }
    if(main->gameStateFlags & 0x400)
    {
        if(testimony->healthPointX > 160)
            testimony->healthPointX -= 4;
        UpdateHealthSprites(main, testimony);
    }
}

void CourtExit(struct Main * main)
{
    DmaCopy16(3, &gMain, &gSaveDataBuffer.main, sizeof(gMain));
    SET_PROCESS_PTR(SAVE_GAME_PROCESS, 0, 0, 1, main);
    if(main->scenarioIdx == 1)
    {
        if(!(main->caseEnabledFlags & 2))
            SET_PROCESS_PTR(EPISODE_CLEAR_PROCESS, 0, 0, 1, main);
    }
    else if(main->scenarioIdx == 5)
    {
        if(!(main->caseEnabledFlags & 4))
            SET_PROCESS_PTR(EPISODE_CLEAR_PROCESS, 0, 0, 2, main);
    }
    else if(main->scenarioIdx == 11)
    {
        if(!(main->caseEnabledFlags & 8))
            SET_PROCESS_PTR(EPISODE_CLEAR_PROCESS, 0, 0, 3, main);
    }
}

void TestimonyAnim(struct Main * main)
{
    struct AnimationListEntry * animation;
    struct AnimationListEntry * animation2;
    struct AnimationListEntry * animation3;
    switch(main->process[GAME_PROCESS_VAR1])
    {
        case 0:
            PlayAnimation(ANIM_TESTIMONY_START_LEFT);
            PlayAnimation(ANIM_TESTIMONY_START_RIGHT);
            PlaySE(SE029_BEGIN_QUESTIONING);
            gTestimony.testimonyAnimMoveAmount = 0;
            main->process[GAME_PROCESS_VAR1]++;
            break;
        case 1:
            animation = FindAnimationFromAnimId(ANIM_TESTIMONY_START_LEFT);
            animation2 = FindAnimationFromAnimId(ANIM_TESTIMONY_START_RIGHT);
            animation->animationInfo.xOrigin += 10;
            animation->flags |= ANIM_ACTIVE;
            animation2->animationInfo.xOrigin -= 10;
            animation2->flags |= ANIM_ACTIVE;
            if(animation->animationInfo.xOrigin >= 120)
            {
                StartHardwareBlend(3, 1, 8, 0x1F);
                DestroyAnimation(animation);
                DestroyAnimation(animation2);
                PlayAnimation(ANIM_TESTIMONY_START);
                main->process[GAME_PROCESS_VAR1]++;
            }
            break;
        case 2: // why not just do it in the next case like please
            if(main->blendMode == 0)
                main->process[GAME_PROCESS_VAR1]++;
            break;
        case 3:
            animation3 = FindAnimationFromAnimId(ANIM_TESTIMONY_START);
            if(!(animation3->flags & ANIM_PLAYING))
            {
                DestroyAnimation(animation3);
                PlayAnimationAtCustomOrigin(ANIM_TESTIMONY_START_LEFT, 120, 60);
                PlayAnimationAtCustomOrigin(ANIM_TESTIMONY_START_RIGHT, 120, 60);
                main->process[GAME_PROCESS_VAR1]++;
            }
            break;
        case 4:
            animation = FindAnimationFromAnimId(ANIM_TESTIMONY_START_LEFT);
            animation2 = FindAnimationFromAnimId(ANIM_TESTIMONY_START_RIGHT);
            animation->animationInfo.xOrigin += gTestimony.testimonyAnimMoveAmount;
            animation->flags |= ANIM_ACTIVE;
            animation2->animationInfo.xOrigin -= gTestimony.testimonyAnimMoveAmount;
            animation2->flags |= ANIM_ACTIVE;
            gTestimony.testimonyAnimMoveAmount++;
            if(gTestimony.testimonyAnimMoveAmount > 12)
                gTestimony.testimonyAnimMoveAmount = 12;
            if(animation->animationInfo.xOrigin > 300)
            {
                DestroyAnimation(animation);
                DestroyAnimation(animation2);
                main->process[GAME_PROCESS_STATE] = TESTIMONY_MAIN;
            }
        default:
            break;
    }
}

void (*gTestimonyProcessStates[])(struct Main *) = {
	TestimonyInit,
	TestimonyMain,
	TestimonyExit,
	TestimonyAnim
};

void TestimonyProcess(struct Main * main)
{
    gTestimonyProcessStates[main->process[GAME_PROCESS_STATE]](main);
}

void TestimonyInit(struct Main * main)
{
    DmaCopy16(3, gGfx4bppTestimonyTextTiles, OBJ_VRAM0+0x3000, 0x800);
    DmaCopy16(3, gPalTrialTestimonyTextTiles, OBJ_PLTT+0xA0, 0x20);
    gTestimony.timer = 0;
    main->process[GAME_PROCESS_STATE] = TESTIMONY_ANIM;
}

void TestimonyMain(struct Main * main)
{
    struct OamAttrs * oam;
    if(main->blendMode)
        return;
    if((gJoypad.pressedKeys & START_BUTTON) &&
    !(main->gameStateFlags & 0x10) &&
    gScriptContext.flags & (SCRIPT_FULLSCREEN | 1))
    {
        PauseBGM();
        DmaCopy16(3, gOamObjects, gSaveDataBuffer.oam, sizeof(gOamObjects));
        DmaCopy16(3, &gMain, &gSaveDataBuffer.main, sizeof(gMain));
        PlaySE(SE007_MENU_OPEN_SUBMENU);
        main->gameStateFlags &= ~1;
        BACKUP_PROCESS_PTR(main);
        SET_PROCESS_PTR(SAVE_GAME_PROCESS, 0, 0, 0, main);
    }
    else if((gJoypad.pressedKeys & R_BUTTON) &&
    !(main->gameStateFlags & 0x10) &&
    gScriptContext.flags & (SCRIPT_FULLSCREEN | 1))
    {
        PlaySE(SE007_MENU_OPEN_SUBMENU);
        BACKUP_PROCESS_PTR(main);
        SET_PROCESS_PTR(COURT_RECORD_PROCESS, RECORD_INIT, 0, 0, main);
    }
    gTestimony.timer++;
    if(gTestimony.timer > 100)
        gTestimony.timer = 0;
    oam = &gOamObjects[OAM_IDX_ITESTIMONY_INDICATOR];
    if(gTestimony.timer <= 80)
    {
        oam->attr0 = SPRITE_ATTR0(0, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_H_RECTANGLE);
        oam->attr1 = SPRITE_ATTR1_NONAFFINE(0, FALSE, FALSE, 3);
        oam->attr2 = SPRITE_ATTR2(0x180, 2, 5);
    }
    else
        oam->attr0 = SPRITE_ATTR0_CLEAR;
}

void TestimonyExit(struct Main * main)
{
    struct OamAttrs * oam = &gOamObjects[OAM_IDX_ITESTIMONY_INDICATOR];
    oam->attr0 = SPRITE_ATTR0_CLEAR;
    SET_PROCESS_PTR(COURT_PROCESS, COURT_MAIN, 0, 0, main);
}

void QuestioningAnim(struct Main * main)
{
    struct AnimationListEntry * animation;
    struct AnimationListEntry * animation2;
    struct AnimationListEntry * animation3;
    switch(main->process[GAME_PROCESS_VAR1])
    {
        case 0:
            PlayAnimation(ANIM_CROSS_EXAMINATION_START_LEFT);
            PlayAnimation(ANIM_CROSS_EXAMINATION_START_RIGHT);
            PlaySE(SE029_BEGIN_QUESTIONING);
            main->process[GAME_PROCESS_VAR1]++;
            break;
        case 1:
            animation = FindAnimationFromAnimId(ANIM_CROSS_EXAMINATION_START_LEFT);
            animation2 = FindAnimationFromAnimId(ANIM_CROSS_EXAMINATION_START_RIGHT);
            animation->animationInfo.xOrigin += 10;
            animation->flags |= ANIM_ACTIVE;
            animation2->animationInfo.xOrigin -= 10;
            animation2->flags |= ANIM_ACTIVE;
            if(animation->animationInfo.xOrigin >= 120)
            {
                StartHardwareBlend(3, 1, 8, 0x1F);
                DestroyAnimation(animation);
                DestroyAnimation(animation2);
                PlayAnimation(ANIM_CROSS_EXAMINATION_START);
                main->process[GAME_PROCESS_VAR1]++;
            }
            break;
        case 2: // why not just do it in the next case like please
            if(main->blendMode == 0)
                main->process[GAME_PROCESS_VAR1]++;
            break;
        case 3:
            animation3 = FindAnimationFromAnimId(ANIM_CROSS_EXAMINATION_START);
            if(!(animation3->flags & ANIM_PLAYING))
            {
                DestroyAnimation(animation3);
                PlayAnimationAtCustomOrigin(ANIM_CROSS_EXAMINATION_START_LEFT, 120, 60);
                PlayAnimationAtCustomOrigin(ANIM_CROSS_EXAMINATION_START_RIGHT, 120, 60);
                main->process[GAME_PROCESS_VAR1]++;
            }
            break;
        case 4:
            animation = FindAnimationFromAnimId(ANIM_CROSS_EXAMINATION_START_LEFT);
            animation2 = FindAnimationFromAnimId(ANIM_CROSS_EXAMINATION_START_RIGHT);
            animation->animationInfo.yOrigin -= 7;
            animation->flags |= ANIM_ACTIVE;
            animation2->animationInfo.yOrigin += 7;
            animation2->flags |= ANIM_ACTIVE;
            if(animation->animationInfo.yOrigin < -60)
            {
                DestroyAnimation(animation);
                DestroyAnimation(animation2);
                main->process[GAME_PROCESS_STATE] = QUESTIONING_MAIN;
                main->process[GAME_PROCESS_VAR1] = 0;
            }
        default:
            break;
    }
}

void (*gQuestioningProcessStates[])(struct Main *) = {
	QuestioningInit,
	QuestioningMain,
	QuestioningExit,
	QuestioningAnim,
	QuestioningHoldIt,
	QuestioningObjection
};

void QuestioningProcess(struct Main * main)
{
    gQuestioningProcessStates[main->process[GAME_PROCESS_STATE]](main);
}

void QuestioningInit(struct Main * main)
{
    DmaCopy16(3, gGfx4bppTrialLife, OBJ_VRAM0+0x3780, 0x80);
    DmaCopy16(3, gPalCrossExaminationUI, OBJ_PLTT+0x60, 0x20);
    DmaCopy16(3, gGfxTrialPressPresentButtons, OBJ_VRAM0+0x3000, 0x400);
    DmaCopy16(3, gPalTrialPressPresentButtons, OBJ_PLTT+0xA0, 0x20);
    DmaCopy16(3, gGfx4bppTestimonyArrows, 0x1A0, 0x80); // ! WHAT, HOW
    DmaCopy16(3, gGfx4bppTestimonyArrows + 12 * TILE_SIZE_4BPP, 0x220, 0x80); // ! WHAT, HOW
    main->testimonyBeginningSection = gScriptContext.currentSection;
    gCourtRecord.recordArrowCounter = 0;
    gCourtRecord.recordArrowFrame++;
    gTestimony.healthPointX = 0xF0;
    gTestimony.pressPromptY = 0xE0;
    gTestimony.presentPromptY = 0xE0;
    gTestimony.displayState = 0;
    main->process[GAME_PROCESS_STATE] = QUESTIONING_ANIM;
}

void QuestioningMain(struct Main * main)
{
    struct OamAttrs * oam;

    if(main->blendMode)
        return;
    if((gJoypad.pressedKeys & START_BUTTON))
    {
        if(!(main->gameStateFlags & 0x10) && gScriptContext.flags & (SCRIPT_LOOP | SCRIPT_FULLSCREEN | 1))
        {
            PauseBGM();
            DmaCopy16(3, gOamObjects, gSaveDataBuffer.oam, sizeof(gOamObjects));
            DmaCopy16(3, &gMain, &gSaveDataBuffer.main, sizeof(gMain));
            PlaySE(SE007_MENU_OPEN_SUBMENU);
            main->gameStateFlags &= ~1;
            BACKUP_PROCESS_PTR(main);
            SET_PROCESS_PTR(SAVE_GAME_PROCESS, 0, 0, 0, main);
        }
    }
    else if(gScriptContext.flags & SCRIPT_LOOP)
    {
        u32 section;
        if(gJoypad.pressedKeys & (A_BUTTON | DPAD_RIGHT))
        {
            section = gScriptContext.nextSection;
            PlaySE(SE001_MENU_CONFIRM);
            ChangeScriptSection(section);
            RunScriptContext();
        }
        else if(gJoypad.pressedKeys & (B_BUTTON | DPAD_LEFT))
        {
            if(gScriptContext.currentSection-1 != main->testimonyBeginningSection)
            {
                section = gScriptContext.currentSection-1;
                PlaySE(SE001_MENU_CONFIRM);
                ChangeScriptSection(section);
                RunScriptContext();
            }
        }
        else if(gJoypad.pressedKeys & L_BUTTON)
        {
            if(gScriptContext.holdItSection != 0)
            {
                PlayAnimation(ANIM_HOLDIT_LEFT);
                PlaySE(SE01D_VOICE_PHOENIX_HOLD_IT_JP);
                StartHardwareBlend(3, 1, 4, 0x1F);
                gTestimony.timer = 0x40;
                gTestimony.healthPointX = 0xF0;
                gTestimony.pressPromptY = 0xE0;
                gTestimony.presentPromptY = 0xE0;
                gIORegisters.lcd_dispcnt &= ~DISPCNT_BG1_ON;
                main->advanceScriptContext = FALSE;
                main->showTextboxCharacters = FALSE;
                SetTextboxNametag(0, 0);
                main->process[GAME_PROCESS_STATE] = QUESTIONING_HOLD_IT;
                main->process[GAME_PROCESS_VAR1] = 0;
                return;
            }
        }
        else if(gJoypad.pressedKeys & R_BUTTON)
        {
            PlaySE(SE007_MENU_OPEN_SUBMENU);
            BACKUP_PROCESS_PTR(main);
            SET_PROCESS_PTR(COURT_RECORD_PROCESS, RECORD_INIT, 0, 1, main);
        }
    }
    else if((gJoypad.pressedKeys & R_BUTTON) &&
    !(main->gameStateFlags & 0x10) &&
    gScriptContext.flags & (SCRIPT_FULLSCREEN | 1))
    {
        PlaySE(SE007_MENU_OPEN_SUBMENU);
        BACKUP_PROCESS_PTR(main);
        SET_PROCESS_PTR(COURT_RECORD_PROCESS, RECORD_INIT, 0, 0, main);
    }
    UpdateQuestioningMenuSprites(main, &gTestimony, 1);
    if(main->gameStateFlags & 0x400)
    {
        if(gTestimony.healthPointX > 0xA0)
            gTestimony.healthPointX -= 4;
        UpdateHealthSprites(main, &gTestimony);
    }
    UpdateCourtRecordArrows(&gCourtRecord);
    oam = gOamObjects + OAM_IDX_LR_ARROW;
    if(gScriptContext.flags & SCRIPT_LOOP)
    {
        if(gScriptContext.currentSection-1 != main->testimonyBeginningSection)
            oam->attr0 = SPRITE_ATTR0(128, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
        else
            oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam->attr1 = SPRITE_ATTR1_NONAFFINE(0, FALSE, FALSE, 1);
        oam->attr2 = SPRITE_ATTR2(0x1A0, 0, 3);
        oam++;
        oam->attr0 = SPRITE_ATTR0(128, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
        oam->attr1 = SPRITE_ATTR1_NONAFFINE(DISPLAY_WIDTH-16, FALSE, FALSE, 1);
        oam->attr2 = SPRITE_ATTR2(0x1A4, 0, 3);
    }
    else
    {
        oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam++;
        oam->attr0 = SPRITE_ATTR0_CLEAR;
    }
}

void QuestioningExit(struct Main * main) // ! why a nullsub??
{

}

void QuestioningHoldIt(struct Main * main)
{
    switch(main->process[GAME_PROCESS_VAR1])
    {
        case 0:
            if(gTestimony.timer == 0)
            {
                SetCourtScrollPersonAnim(0, 1, PERSON_ANIM_PHOENIX, 0);
                InitCourtScroll(gGfxCourtscroll01, 0x1E, 0x1F, 1);
                SlideTextbox(0);
                main->process[GAME_PROCESS_VAR1]++;
                break;
            }
            gTestimony.timer--;
            break;
        case 1:
            if(gCourtScroll.state)
                break;
            if(gScriptContext.holdItFlag)
            {
                gMain.advanceScriptContext = TRUE;
                gMain.showTextboxCharacters = TRUE;
                gIORegisters.lcd_bg1vofs = 0;
                gScriptContext.textboxState = 0;
            }
            else
                SlideTextbox(1);
            ChangeScriptSection(gScriptContext.holdItSection);
            gTestimony.healthPointX = 0xF0;
            gTestimony.pressPromptY = 0xE0;
            gTestimony.presentPromptY = 0xE0;
            gTestimony.displayState = 0;
            main->process[GAME_PROCESS_STATE] = QUESTIONING_MAIN;
            main->process[GAME_PROCESS_VAR1] = 0;
            break;
        default:
            break;
    }
    UpdateQuestioningMenuSprites(main, &gTestimony, 0);
    gOamObjects[0].attr0 = SPRITE_ATTR0_CLEAR;
    gOamObjects[1].attr0 = SPRITE_ATTR0_CLEAR;
}

void QuestioningObjection(struct Main * main)
{
    switch(main->process[GAME_PROCESS_VAR1])
    {
        case 0:
            if(gTestimony.timer == 0)
            {
                StartHardwareBlend(3, 1, 4, 0x1F);
                gTestimony.timer = 0x40;
                main->process[GAME_PROCESS_VAR1]++;
                break;
            }
            gTestimony.timer--;
            break;
        case 1:
            if(gTestimony.timer == 0)
            {
                SetCourtScrollPersonAnim(0, 1, PERSON_ANIM_PHOENIX, 0x18D0);
                InitCourtScroll(gGfxCourtscroll01, 0x1E, 0x1F, 1);
                SlideTextbox(0);
                main->process[GAME_PROCESS_VAR1]++;
                break;
            }
            gTestimony.timer--;
            break;
        case 2:
            if(gCourtScroll.state)
                break;
            gTestimony.timer = 0x14;
            main->process[GAME_PROCESS_VAR1]++;
            break;
        case 3:
            if(gTestimony.timer == 0)
            {
                gTestimony.healthPointX = 0xF0;
                gTestimony.pressPromptY = 0xE0;
                gTestimony.presentPromptY = 0xE0;
                gTestimony.displayState = 0;
                if(gScriptContext.slamDesk)
                {
                    gMain.advanceScriptContext = TRUE;
                    gMain.showTextboxCharacters = TRUE;
                    gIORegisters.lcd_bg1vofs = 0;
                    gScriptContext.textboxState = 0;
                }
                else
                    SlideTextbox(1);
                RESTORE_PROCESS_PTR(main);
                break;
            } 
            gTestimony.timer--;
            break;
        default:
            break;
    }
    UpdateQuestioningMenuSprites(main, &gTestimony, 0);
}

void VerdictProcess(struct Main * main)
{
    u32 i;
    s16 temp;
    u32 temp2;
    struct OamAttrs *oam = &gOamObjects[OAM_IDX_VERDICT_KANJI];
    switch(main->process[GAME_PROCESS_STATE]) {
        case VERDICT_SHRINK_KANJI1: { // B088
            gMain.affineScale -= 0x10; // 1/16 steps 
            if(gMain.affineScale <= Q_8_8(1.0)) 
            {
                temp = fix_inverse(Q_8_8(1.0));
                gOamObjects[0].attr3 = fix_mul(_Cos(0), temp);
                gOamObjects[1].attr3 = fix_mul(_Sin(0), temp);
                gOamObjects[2].attr3 = fix_mul(-_Sin(0), temp);
                gOamObjects[3].attr3 = fix_mul(_Cos(0), temp);
                StartHardwareBlend(3, 1, 4, 0x1F);
                PlaySE(SE02C_GAME_OVER);
                main->process[GAME_PROCESS_STATE]++;
                main->process[GAME_PROCESS_VAR1] = 0;
            }
            else {
                temp = fix_inverse(main->affineScale);
                gOamObjects[0].attr3 = fix_mul(_Cos(0), temp);
                gOamObjects[1].attr3 = fix_mul(_Sin(0), temp);
                gOamObjects[2].attr3 = fix_mul(-_Sin(0), temp);
                gOamObjects[3].attr3 = fix_mul(_Cos(0), temp);
            }
            break;
        }
        case VERDICT_WAIT_INIT_KANJI2: { // B164
            if(main->process[GAME_PROCESS_VAR1]++ > 40) {
                gMain.affineScale = Q_8_8(2.5); // 2.5 times scale
                oam++;
                oam->attr0 = SPRITE_ATTR0(255-16, ST_OAM_AFFINE_DOUBLE, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
                oam->attr1 = SPRITE_ATTR1_AFFINE(128, 1, 3);
                oam->attr2 = SPRITE_ATTR2(0x1E0, 0, 5);
                temp = fix_inverse(main->affineScale);
                gOamObjects[4].attr3 = fix_mul(_Cos(0), temp);
                gOamObjects[5].attr3 = fix_mul(_Sin(0), temp);
                gOamObjects[6].attr3 = fix_mul(-_Sin(0), temp);
                gOamObjects[7].attr3 = fix_mul(_Cos(0), temp);
                main->process[GAME_PROCESS_STATE]++;
            }
            break;
        }
        case VERDICT_SHRINK_KANJI2: { // B1FC
            gMain.affineScale -= 0x10; // 1/16 steps
            if(gMain.affineScale <= Q_8_8(1.0)) {
                temp = fix_inverse(Q_8_8(1.0));
                gOamObjects[4].attr3 = fix_mul(_Cos(0), temp);
                gOamObjects[5].attr3 = fix_mul(_Sin(0), temp);
                gOamObjects[6].attr3 = fix_mul(-_Sin(0), temp);
                gOamObjects[7].attr3 = fix_mul(_Cos(0), temp);
                StartHardwareBlend(3, 1, 4, 0x1F);
                PlaySE(SE02C_GAME_OVER);
                gMain.affineScale = Q_8_8(1.0);
                main->process[GAME_PROCESS_STATE]++;
                main->process[GAME_PROCESS_VAR1] = 0;
            }
            else {
                temp = fix_inverse(main->affineScale);
                gOamObjects[4].attr3 = fix_mul(_Cos(0), temp);
                gOamObjects[5].attr3 = fix_mul(_Sin(0), temp);
                gOamObjects[6].attr3 = fix_mul(-_Sin(0), temp);
                gOamObjects[7].attr3 = fix_mul(_Cos(0), temp);
            }
            break;
        }
        case VERDICT_WAIT: { // B2E4
            if(main->process[GAME_PROCESS_VAR1]++ > 64) {
                main->process[GAME_PROCESS_STATE]++;
                main->process[GAME_PROCESS_VAR1] = 0;
            }
            break;
        }
        case VERDICT_GROW_KANJI: { // B300
            if(main->process[GAME_PROCESS_VAR1]++ > 32) {
                oam->attr0 = SPRITE_ATTR0_CLEAR;
                oam++;
                oam->attr0 = SPRITE_ATTR0_CLEAR;
                if(main->process[GAME_PROCESS_VAR2]) {
                    main->process[GAME_PROCESS_STATE]++;
                    main->process[GAME_PROCESS_VAR1] = 0;
                    break;
                }
                RESTORE_PROCESS_PTR(main);
            }
            else {
                main->affineScale += 8; // 1/32 steps
                temp = fix_inverse(main->affineScale);
                gOamObjects[0].attr3 = fix_mul(_Cos(0), temp);
                gOamObjects[1].attr3 = fix_mul(_Sin(0), temp);
                gOamObjects[2].attr3 = fix_mul(-_Sin(0), temp);
                gOamObjects[3].attr3 = fix_mul(_Cos(0), temp);
                gOamObjects[4].attr3 = fix_mul(_Cos(0), temp);
                gOamObjects[5].attr3 = fix_mul(_Sin(0), temp);
                gOamObjects[6].attr3 = fix_mul(-_Sin(0), temp);
                gOamObjects[7].attr3 = fix_mul(_Cos(0), temp);
                oam->attr0--;
                oam++;
                oam->attr0--;
            }
            break;
        }
        case VERDICT_INIT_CONFETTI: { // B3C8
            DmaCopy16(3, gGfxTrialConfetti, OBJ_VRAM0+0x1F80, 0x20);
            DmaCopy16(3, gPalConfetti, OBJ_PLTT+0xA0, 0x80);
            main->process[GAME_PROCESS_STATE]++;
            break;
        }
        case VERDICT_DRAW_CONFETTI: { // B404
            oam = &gOamObjects[OAM_IDX_CONFETTI];
            for(i = 0; i < OAM_COUNT_CONFETTI; i++) 
            {
                temp2 = Random();
                temp2 += i * 32;
                temp2 &= 0x7F;
                oam->attr0 = temp2;
                temp2 = Random() & 0x1F;
                temp2 += i * 32;
                temp2 &= 0xFF;
                oam->attr1 = temp2;
                temp2 = ((Random() & 3) + 5);
                temp2 <<= 12;
                oam->attr2 = temp2 + 0xFC + (1 << 10); // random palette + tile 0xFC + priority
                oam++;
            }
            PlaySE(SE03C_COURTROOM_AUDIENCE_VICTORY);
            main->process[GAME_PROCESS_STATE]++;
            break;
        }
        case VERDICT_ANIMATE_CONFETTI: { // B460
            oam = &gOamObjects[OAM_IDX_CONFETTI];
            if(main->process[GAME_PROCESS_VAR1]++ < 240)
            {
                for(i = 0; i < OAM_COUNT_CONFETTI; i++)
                {
                    
                    u16 attr0, attr1;
                    temp2 = oam->attr0;
                    temp2 += Random() & 3;
                    if(temp2 >= DISPLAY_HEIGHT+4)
                        temp2 = 0;
                    attr0 = oam->attr0 & ~0xFF;
                    oam->attr0 = attr0 + temp2;
                    temp2 = oam->attr1;
                    if(Random() & 1)
                        temp2 += Random() & 3;
                    else
                        temp2 -= Random() & 3;
                    temp2 &= 0xFF;
                    attr1 = oam->attr1 & ~0x1FF;
                    oam->attr1 = attr1 + temp2;
                    oam++;
                }
            }
            else
            {
                for(i = 0; i < OAM_COUNT_CONFETTI; i++)
                {
                    oam->attr0 = SPRITE_ATTR0_CLEAR;
                    oam++;
                }
                main->process[GAME_PROCESS_STATE]++;
            }
            break;
        }
        case VERDICT_NOTGUILTY_EXIT: { // B504
            RESTORE_PROCESS_PTR(main);
            break;
        }
    }
}

void UpdateQuestioningMenuSprites(struct Main * main, struct TestimonyStruct * testimony, u32 arg2) // questioning_menu_disp
{
    u32 i;
    struct OamAttrs * oam;
    if(gScriptContext.holdItSection == 0 || arg2 == 0)
    {
        oam = &gOamObjects[OAM_IDX_BUTTON_PROMPTS];
        oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam++;
        oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam++;
        oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam++;
        oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam = &gOamObjects[OAM_IDX_HEALTH];
        for(i = 0; i < MAX_HEALTH; i++)
        {
            oam->attr0 = SPRITE_ATTR0_CLEAR;
            oam++;
        }
        return;
    }
    if(testimony->displayState == 1)
    {
        if(testimony->pressPromptY > 224)
            testimony->pressPromptY -= 2;
        else
            testimony->pressPromptY = 224;

        if(testimony->presentPromptY > 224)
            testimony->presentPromptY -= 2;
        else
            testimony->presentPromptY = 224;

        if(testimony->healthPointX < 240)
            testimony->healthPointX += 8;
    }
    else if(testimony->displayState == 0)
    {
        if(testimony->pressPromptY > 0)
            testimony->pressPromptY += 2;

        if(testimony->presentPromptY > 0)
            testimony->presentPromptY += 2;

        if(testimony->healthPointX > 160)
            testimony->healthPointX -= 4;
    }
    oam = &gOamObjects[OAM_IDX_BUTTON_PROMPTS];
    if(gScriptContext.holdItSection < 0x80)
    {
        oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam++;
        oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam++;
        oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam++;
        oam->attr0 = SPRITE_ATTR0_CLEAR;
    }
    else
    {
        u32 attr1; // needed for matching
        oam->attr0 = testimony->pressPromptY | 0x4000;
        attr1 = SPRITE_ATTR1_NONAFFINE(0, FALSE, FALSE, 2);
        oam->attr1 = attr1;
        oam->attr2 = SPRITE_ATTR2(0x180, 1, 5);
        oam++;
        oam->attr0 = testimony->pressPromptY | 0x4000;
        attr1 = SPRITE_ATTR1_NONAFFINE(32, FALSE, FALSE, 2);
        oam->attr1 = attr1;
        oam->attr2 = SPRITE_ATTR2(0x188, 1, 5);
        oam++;
        oam->attr0 = testimony->presentPromptY | 0x4000;
        attr1 = SPRITE_ATTR1_NONAFFINE(176, FALSE, FALSE, 2);
        oam->attr1 = attr1;
        oam->attr2 = SPRITE_ATTR2(0x190, 1, 5);
        oam++;
        oam->attr0 = testimony->presentPromptY | 0x4000;
        attr1 = SPRITE_ATTR1_NONAFFINE(208, FALSE, FALSE, 2);
        oam->attr1 = attr1;
        oam->attr2 = SPRITE_ATTR2(0x198, 1, 5);
    }
    UpdateHealthSprites(main, testimony);
}

void UpdateHealthSprites(struct Main * main, struct TestimonyStruct * testimony) // rest_disp
{
    struct OamAttrs * oam = &gOamObjects[OAM_IDX_HEALTH];
    u32 i;
    for(i = 0; i < MAX_HEALTH; i++)
    {
        if(main->previousHealth != 0xFF && (i == MAX_HEALTH-main->previousHealth))
        {
            s32 scale = fix_inverse(0x200);
            gOamObjects[0].attr3 = fix_mul(0x100, scale);
            gOamObjects[1].attr3 = fix_mul(0, scale);
            gOamObjects[2].attr3 = fix_mul(0, scale);
            gOamObjects[3].attr3 = fix_mul(0x100, scale);
            main->damageFrameTimer++;
            if(main->damageFrameTimer > 2)
            {
                main->damageFrameTimer = 0;
                if(main->damageFrame <= 8)
                {
                    u8 * ptr = gGfx4bppTrialLife + main->damageFrame * 0x80;
                    DmaCopy16(3, ptr, OBJ_VRAM0+0x3700, 0x80);
                    main->damageFrame++;
                }
                else
                    main->previousHealth = 0xFF;
            }
            if(main->damageFrame > 4)
                oam->attr0 = SPRITE_ATTR0(8, ST_OAM_AFFINE_DOUBLE, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
            else
                oam->attr0 = SPRITE_ATTR0(16, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
            if(main->damageFrame <= 8)
            {
                if(main->damageFrame > 4)
                    oam->attr1 = SPRITE_ATTR1_AFFINE(0, 0, 1) + testimony->healthPointX + i * 0x10 - 8;
                else
                    oam->attr1 = SPRITE_ATTR1_NONAFFINE(0, FALSE, FALSE, 1) + testimony->healthPointX + i * 0x10;
            }
            else
                oam->attr0 = SPRITE_ATTR0_CLEAR;
            oam->attr2 = SPRITE_ATTR2(0x1B8, 2, 3);
        }
        else if(i >= MAX_HEALTH-main->health)
        {
            oam->attr0 = SPRITE_ATTR0(16, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
            oam->attr1 = SPRITE_ATTR1_NONAFFINE(0, FALSE, FALSE, 1) + testimony->healthPointX + i * 0x10;
            oam->attr2 = SPRITE_ATTR2(0x1BC, 2, 3);
        }
        else
            oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam++;
    }
}
