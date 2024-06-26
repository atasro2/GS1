#include "global.h"
#include "script.h"
#include "sound.h"
#include "ewram.h"
#include "court.h"
#include "background.h"
#include "investigation.h"
#include "graphics.h"
#include "constants/script.h"
#include "constants/process.h"
#include "constants/oam_allocations.h"

bool32 Command40(struct ScriptContext * scriptCtx)
{
    scriptCtx->scriptPtr++;
    scriptCtx->flags &= ~SCRIPT_SPOTSELECT_SELECTION_MADE;
    gOamObjects[OAM_IDX_POINTER].attr0 = SPRITE_ATTR0_CLEAR;
    return 0;
}

bool32 Command41(struct ScriptContext * scriptCtx)
{
    u32 i;
    struct OamAttrs *oam;
    scriptCtx->scriptPtr++;
    // this has to be outside of the loop, else the load order breaks...
    oam = &gOamObjects[OAM_IDX_INVESTIGATION_ACTIONS];
    for(i = 0; i < OAM_COUNT_INVESTIGATION_ACTIONS; i++)
    {
        oam->attr0 = SPRITE_ATTR0((-32 & 255), ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_H_RECTANGLE);
	// 64x32 sprite size
        oam->attr1 = SPRITE_ATTR1_NONAFFINE(60*i, 0, 0, 3);
        oam->attr2 = SPRITE_ATTR2(0x100+0x20*i, 0, 5);
        oam++;
    }
    SetInactiveActionButtons(&gInvestigation, 0xF);
    gInvestigation.inactiveActionButtonY = 0xE0;
    gInvestigation.selectedActionYOffset = 0;
    gInvestigation.lastActionYOffset = 8;
    gInvestigation.selectedAction = 0;
    gInvestigation.lastAction = 0;
    
    SET_PROCESS(INVESTIGATION_PROCESS,INVESTIGATION_MAIN,0,0);
    return 0;
}

bool32 Command42(struct ScriptContext * scriptCtx)
{
    scriptCtx->scriptPtr++;
    if(*scriptCtx->scriptPtr)
    {
        gMain.soundFlags &= ~SOUND_FLAG_DISABLE_CUE;
    }
    else
    {
        gMain.soundFlags |= SOUND_FLAG_DISABLE_CUE;
    }
    scriptCtx->scriptPtr++;
    return 0;
}

bool32 Command43(struct ScriptContext * scriptCtx)
{
    u32 i;
    struct OamAttrs *oam;
    scriptCtx->scriptPtr++;
    if(*scriptCtx->scriptPtr)
    {
        gTestimony.healthPointX = 0xF0;
        gMain.gameStateFlags |= 0x400;
    }
    else
    {
        gTestimony.healthPointX = 0xF0;
        gMain.gameStateFlags &= ~0x400;
        oam = &gOamObjects[OAM_IDX_HEALTH];
        for(i = 0; i < MAX_HEALTH; i++)
	    {
            oam->attr0 = SPRITE_ATTR0_CLEAR;
            oam++;
        }
    }
    scriptCtx->scriptPtr++;
    return 0;
}

bool32 Command44(struct ScriptContext * scriptCtx)
{
    u32 i;
    struct OamAttrs *oam;
    oam = &gOamObjects[OAM_IDX_VERDICT_KANJI];
    scriptCtx->scriptPtr++;
    gMain.affineScale = 0x280;
    BACKUP_PROCESS();
    if(*scriptCtx->scriptPtr) 
    {
        DmaCopy16(3, gGfxTrialGuilty1, OBJ_VRAM0+0x3400, 0x1000);
        DmaCopy16(3, gPalTrialGuilty, OBJ_PLTT+0xA0, 0x20);
        SET_PROCESS(VERDICT_PROCESS,0,0,0);
    }
    else 
    {
        DmaCopy16(3, gGfxTrialNotGuilty1, OBJ_VRAM0+0x3400, 0x800);
        DmaCopy16(3, gGfxTrialGuiltyNotGuilty2, OBJ_VRAM0+0x3C00, 0x800);
        DmaCopy16(3, gPalTrialNotGuilty, OBJ_PLTT+0xA0, 0x20);
        SET_PROCESS(VERDICT_PROCESS,0,0,1);
    }
    scriptCtx->scriptPtr++;
    oam->attr0 = SPRITE_ATTR0((~16 & 255), ST_OAM_AFFINE_DOUBLE, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
    oam->attr1 = SPRITE_ATTR1_AFFINE((~16 & 511), 0, 3);
    oam->attr2 = SPRITE_ATTR2(0x1A0, 0, 5);
    oam++;
    oam->attr0 = SPRITE_ATTR0_CLEAR;
    return 0;
}

bool32 Command46(struct ScriptContext * scriptCtx)
{
    u32 i, j;
    u8 *r6;
    u16 *r3;
    scriptCtx->scriptPtr++;
    if(*scriptCtx->scriptPtr) 
    {
        gMain.horizontolBGScrollSpeed = -0xE;
        r6 = gPal_BG065_BustupEdgeworth;
        r3 = (u16 *)gMap_BG065_BustupEdgeworth;
    }
    else 
    {
        gMain.horizontolBGScrollSpeed = 0xE;
        r6 = gPal_BG064_BustupPhoenix;
        r3 = (u16 *)gMap_BG064_BustupPhoenix;
    }
    for(i = 0; i < 20; i++) 
    {
        for(j = 0; j < 30; j++, r3++) 
        {
            gBG2MapBuffer[GET_MAP_TILE_INDEX(i, j, 0, 1)] = *r3 + 0x80;
        }
    }
    r6 += 32 + 20*30*2;
    DmaCopy16(3, r6, eVRAMScratchpadBuffer, 30*20*TILE_SIZE_4BPP);
    gIORegisters.lcd_dispcnt |= DISPCNT_BG2_ON;
    gIORegisters.lcd_bg2cnt = BGCNT_PRIORITY(2) | BGCNT_CHARBASE(2) | BGCNT_SCREENBASE(30) | BGCNT_16COLOR | BGCNT_WRAP;
    scriptCtx->flags |= 0x40;
    scriptCtx->scriptPtr++;
    return 0;
}

bool32 Command47(struct ScriptContext *scriptCtx)
{
    u16 volume, fadeTime;
    scriptCtx->scriptPtr++;
    volume = *scriptCtx->scriptPtr;
    scriptCtx->scriptPtr++;
    fadeTime = *scriptCtx->scriptPtr;
    SetBGMVolume(volume, fadeTime);

    scriptCtx->scriptPtr++;

    return 0;
}

bool32 Command48(struct ScriptContext *scriptCtx)
{
    scriptCtx->scriptPtr++;
    if(*scriptCtx->scriptPtr == 0xFFFF) 
    {
        gIORegisters.lcd_dispcnt |= DISPCNT_BG1_ON;
        scriptCtx->textXOffset = 9;
        scriptCtx->textYOffset = DISPLAY_HEIGHT-44;
        scriptCtx->scriptPtr+=2;
    }
    else 
    {
        gIORegisters.lcd_dispcnt &= ~DISPCNT_BG1_ON;
        scriptCtx->textXOffset = *scriptCtx->scriptPtr;
        scriptCtx->scriptPtr++;
        scriptCtx->textYOffset = *scriptCtx->scriptPtr;
        scriptCtx->scriptPtr++;
    }

    return 0;
}

bool32 Command49(struct ScriptContext *scriptCtx)
{
    scriptCtx->scriptPtr++;
    gMain.advanceScriptContext = FALSE;
    gMain.showTextboxCharacters = FALSE;
    SET_PROCESS(TITLE_SCREEN_PROCESS, 0, 0, 0);

    return 0;
}

bool32 Command4A(struct ScriptContext *scriptCtx)
{
    scriptCtx->scriptPtr++;
    if(*scriptCtx->scriptPtr) 
    {
        if(gMain.process[GAME_PROCESS_STATE] == VERDICT_NOTGUILTY_EXIT) 
        {
            scriptCtx->scriptPtr++;
            return 0;
        }
    }
    else 
    {
        if(gMain.process[GAME_PROCESS_STATE] == VERDICT_DRAW_CONFETTI) 
        {
            scriptCtx->scriptPtr++;
            return 0;
        }
    }
    scriptCtx->scriptPtr--;
    return 1;
}

bool32 Command4B(struct ScriptContext *scriptCtx)
{
    u32 res;
    u32 r2;
    scriptCtx->scriptPtr++;
    res = GetMapMarkerIndexFromId(*scriptCtx->scriptPtr >> 8);
    if(res != 0xFF) 
    {
        r2 = (*scriptCtx->scriptPtr & 3) << 12;
        // this clears existing hflip/vflip and sets r2 as new flips
        // the current macros dont allow easily setting this
        gMapMarker[res].attr1 = (gMapMarker[res].attr1 & 0xCFFF) + r2;
    }
    gMapMarker[res].blinkTimer = 0;
    scriptCtx->scriptPtr++;

    return 0;
}

bool32 Command4C(struct ScriptContext *scriptCtx)
{
    if(gMain.isBGScrolling) 
    {
        return 1;
    }
    scriptCtx->scriptPtr++;
    return 0;
}

bool32 Command4D(struct ScriptContext *scriptCtx)
{
    return 0;
}

bool32 Command4E(struct ScriptContext *scriptCtx)
{
    return 0;
}

bool32 Command4F(struct ScriptContext *scriptCtx)
{
    return 0;
}

bool32 Command50(struct ScriptContext *scriptCtx)
{
    return 0;
}

bool32 Command51(struct ScriptContext *scriptCtx)
{
    return 0;
}

bool32 Command52(struct ScriptContext *scriptCtx)
{
    return 0;
}

bool32 Command53(struct ScriptContext *scriptCtx)
{
    return 0;
}

bool32 Command54(struct ScriptContext *scriptCtx)
{
    return 0;
}

bool32 Command55(struct ScriptContext *scriptCtx)
{
    return 0;
}

bool32 Command56(struct ScriptContext *scriptCtx)
{
    return 0;
}

bool32 Command57(struct ScriptContext *scriptCtx)
{
    return 0;
}

bool32 Command58(struct ScriptContext *scriptCtx)
{
    return 0;
}

bool32 Command59(struct ScriptContext *scriptCtx)
{
    return 0;
}

bool32 Command5A(struct ScriptContext *scriptCtx)
{
    return 0;
}

bool32 Command5B(struct ScriptContext *scriptCtx)
{
    return 0;
}

bool32 Command5C(struct ScriptContext *scriptCtx)
{
    return 0;
}

bool32 Command5D(struct ScriptContext *scriptCtx)
{
    return 0;
}

bool32 Command5E(struct ScriptContext *scriptCtx)
{
    return 0;
}

bool32 Command5F(struct ScriptContext *scriptCtx)
{
    return 0;
}
