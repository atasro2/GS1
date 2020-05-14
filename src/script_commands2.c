#include "global.h"
#include "script.h"
#include "sound_control.h"
#include "ewram.h"

u32 sub_8007554(u32 a0) // GetExplCharWorkIndexById
{
    u32 i = 0;
    do 
    {
        if (gUnknown_03003930[i].id == a0)
            return i;
        i++;
    } while (i < ARRAY_COUNT(gUnknown_03003930));
    return 0xFF;
}

bool32 Command40(struct ScriptContext * scriptCtx)
{
    scriptCtx->scriptPtr++;
    scriptCtx->unk0 &= ~0x400;
    gOamObjects[88].attr0 = SPRITE_ATTR0(0, ST_OAM_AFFINE_DOUBLE_MASK, 0, 0, 0, 0);
    return 0;
}

bool32 Command41(struct ScriptContext * scriptCtx)
{
    u32 i;
    struct OamAttrs *oam;
    scriptCtx->scriptPtr++;
    // this has to be outside of the loop, else the load order breaks...
    oam = &gOamObjects[49];
    for(i = 0; i < 4; i++)
    {
        oam->attr0 = SPRITE_ATTR0((-32 & 255), ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_H_RECTANGLE);
	// 64x32 sprite size
        oam->attr1 = SPRITE_ATTR1_NONAFFINE(60*i, 0, 0, 3);
        oam->attr2 = SPRITE_ATTR2(0x100+0x20*i, 0, 5);
        oam++;
    }
    sub_800B7A8(&gUnknown_03003A50, 0xF);
    gUnknown_03003A50.unkD = 0xE0;
    gUnknown_03003A50.unkE = 0;
    gUnknown_03003A50.unkF = 8;
    gUnknown_03003A50.unkA = 0;
    gUnknown_03003A50.unkB = 0;
    
    SET_PROCESS(4,1,0,0);
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
        gUnknown_03003AB0.unk4 = 0xF0;
        gMain.gameStateFlags |= 0x400;
    }
    else
    {
        gUnknown_03003AB0.unk4 = 0xF0;
        gMain.gameStateFlags &= ~0x400;
        oam = &gOamObjects[35];
        for(i = 0; i < 5; i++)
	    {
            oam->attr0 = SPRITE_ATTR0(0, ST_OAM_AFFINE_ERASE, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
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
    oam = &gOamObjects[49];
    scriptCtx->scriptPtr++;
    gMain.unk84 = 0x280;
    BACKUP_PROCESS();
    if(*scriptCtx->scriptPtr) 
    {
        DmaCopy16(3, gUnknown_08191CA0, VRAM+0x13400, 0x1000);
        DmaCopy16(3, gUnknown_08194520, OBJ_PLTT+0xA0, 0x20);
        SET_PROCESS(9,0,0,0);
    }
    else 
    {
        DmaCopy16(3, gUnknown_081914A0, VRAM+0x13400, 0x800);
        DmaCopy16(3, gUnknown_081924A0, VRAM+0x13C00, 0x800);
        DmaCopy16(3, gUnknown_08194540, OBJ_PLTT+0xA0, 0x20);
        SET_PROCESS(9,0,0,1);
    }
    scriptCtx->scriptPtr++;
    oam->attr0 = SPRITE_ATTR0((~16 & 255), ST_OAM_AFFINE_DOUBLE, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
    oam->attr1 = SPRITE_ATTR1_AFFINE((~16 & 511), 0, 3);
    oam->attr2 = SPRITE_ATTR2(0x1A0, 0, 5);
    oam++;
    oam->attr0 = SPRITE_ATTR0(0, ST_OAM_AFFINE_ERASE, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
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
        r6 = gUnknown_08362524;
        r3 = gUnknown_08362544;
    }
    else 
    {
        gMain.horizontolBGScrollSpeed = 0xE;
        r6 = gUnknown_08360834;
        r3 = gUnknown_08360854;
    }
    for(i = 0; i < 20; i++) 
    {
        for(j = 0; j < 30; j++, r3++) 
        {
            gBG2MapBuffer[GET_MAP_TILE_INDEX(i, j, 0, 1)] = *r3 + 0x80;
        }
    }
    r6 += 0x4D0;
    DmaCopy16(3, r6, eUnknown_02031FC0, 0x4B00);
    gLCDIORegisters.lcd_dispcnt |= DISPCNT_BG2_ON;
    gLCDIORegisters.lcd_bg2cnt = BGCNT_PRIORITY(2) | BGCNT_CHARBASE(2) | BGCNT_SCREENBASE(30) | BGCNT_16COLOR | BGCNT_WRAP;
    scriptCtx->unk0 |= 0x40;
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
    ChangeBGMVolume(volume, fadeTime);

    scriptCtx->scriptPtr++;

    return 0;
}

bool32 Command48(struct ScriptContext *scriptCtx)
{
    scriptCtx->scriptPtr++;
    if(*scriptCtx->scriptPtr == 0xFFFF) 
    {
        gLCDIORegisters.lcd_dispcnt |= DISPCNT_BG1_ON;
        scriptCtx->textXOffset = 9;
        scriptCtx->textYOffset = DISPLAY_HEIGHT-44;
        scriptCtx->scriptPtr+=2;
    }
    else 
    {
        gLCDIORegisters.lcd_dispcnt &= ~DISPCNT_BG1_ON;
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
    gMain.unk14 = 0;
    gMain.unk15 = 0;
    SET_PROCESS(1, 0, 0, 0);

    return 0;
}

bool32 Command4A(struct ScriptContext *scriptCtx)
{
    scriptCtx->scriptPtr++;
    if(*scriptCtx->scriptPtr) 
    {
        if(gMain.process[GAME_SUBPROCESS] == 8) 
        {
            scriptCtx->scriptPtr++;
            return 0;
        }
    }
    else 
    {
        if(gMain.process[GAME_SUBPROCESS] == 6) 
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
    res = sub_8007554(*scriptCtx->scriptPtr >> 8);
    if(res != 0xFF) 
    {
        r2 = (*scriptCtx->scriptPtr & 3) << 12;
        // this clears existing hflip/vflip and sets r2 as new flips
        // the current macros dont allow easily setting this
        gUnknown_03003930[res].attr1 = (gUnknown_03003930[res].attr1 & 0xCFFF) + r2;
    }
    gUnknown_03003930[res].unk2 = 0;
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
