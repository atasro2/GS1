#include "global.h"
#include "main.h"
#include "script.h"
#include "sound.h"
#include "ewram.h"
#include "graphics.h"
#include "constants/script.h"
#include "constants/songs.h"
#include "constants/process.h"
#include "constants/oam_allocations.h"

static void AdvanceScriptContext(struct ScriptContext *);
static void DrawTextAndMapMarkers(struct ScriptContext *);
static void PutCharInTextbox(u32, u32, u32);

extern u8 gTextColorTileBuffer[0x80];

const u8 * const gScriptTable[] = {
    scenario_0_script,
    scenario_1_0_script,
    scenario_1_1_script,
    scenario_1_2_script,
    scenario_1_3_script,
    scenario_2_0_script,
    scenario_2_1_script,
    scenario_2_2_script,
    scenario_2_3_script,
    scenario_2_4_script,
    scenario_2_5_script,
    scenario_3_0_script,
    scenario_3_1_script,
    scenario_3_2_script,
    scenario_3_3_script,
    scenario_3_4_script,
    scenario_3_5_script,
};

bool32 (*gScriptCmdFuncs[0x60])(struct ScriptContext *) = {
	Command00,
	Command01,
	Command02,
	Command03,
	Command04,
	Command05,
	Command06,
	Command02,
	Command08,
	Command09,
	Command02,
	Command0B,
	Command0C,
	Command0D,
	Command0E,
	Command0F,
	Command10,
	Command11,
	Command12,
	Command13,
	Command14,
	Command15,
	Command16,
	Command17,
	Command18,
	Command19,
	Command1A,
	Command1B,
	Command1C,
	Command1D,
	Command1E,
	Command1F,
	Command20,
	Command21,
	Command22,
	Command23,
	Command24,
	Command25,
	Command26,
	Command27,
	Command28,
	Command29,
	Command2A,
	Command2B,
	Command2C,
	Command02,
	Command2E,
	Command2F,
	Command30,
	Command31,
	Command32,
	Command33,
	Command34,
	Command35,
	Command36,
	Command37,
	Command38,
	Command39,
	Command3A,
	Command3B,
	Command3C,
	Command3D,
	Command3E,
	Command3F,
	Command40,
	Command41,
	Command42,
	Command43,
	Command44,
	Command15,
	Command46,
	Command47,
	Command48,
	Command49,
	Command4A,
	Command4B,
	Command4C,
	Command4D,
	Command4E,
	Command4F,
	Command50,
	Command51,
	Command52,
	Command53,
	Command54,
	Command55,
	Command56,
	Command57,
	Command58,
	Command59,
	Command5A,
	Command5B,
	Command5C,
	Command5D,
	Command5E,
	Command5F,
};

void LoadCurrentScriptIntoRam(void)
{
    u32 i;
    DmaCopy16(3, gTextPal, OBJ_PLTT, 0x20);

    for (i = 0; i < ARRAY_COUNT(gTextBoxCharacters); i++)
    {
        gTextBoxCharacters[i].state &= ~0x8000;
    }

    LZ77UnCompWram(gScriptTable[gMain.scenarioIdx], eScriptHeap);
}

void RunScriptContext(void)
{
    if (gMain.advanceScriptContext && gMain.blendMode == 0)
    {
        AdvanceScriptContext(&gScriptContext);
    }
    DrawTextAndMapMarkers(&gScriptContext);
}

void ChangeScriptSection(u32 newSection)
{
    gScriptContext.previousSection = gScriptContext.currentSection;
    gScriptContext.currentSection = newSection;
    InitScriptSection(&gScriptContext);
    gScriptContext.scriptPtr++;
}

void InitScriptSection(struct ScriptContext *scriptCtx)
{
    u32 i;
    for (i = 0; i < ARRAY_COUNT(gTextBoxCharacters); i++)
    {
        gTextBoxCharacters[i].state &= ~0x8000;
    }
    scriptCtx->textX = 0;
    scriptCtx->textY = 0;
    if (!(gMain.process[GAME_PROCESS] == INVESTIGATION_PROCESS && gMain.process[GAME_PROCESS_STATE] == INVESTIGATION_TALK))
        scriptCtx->textSkip = 0;
    scriptCtx->unused15 = 0;
    scriptCtx->paragraphSkipDelayCounter = 8;
    scriptCtx->soundCueSkip = 1;
    scriptCtx->currentSoundCue = 0;
    scriptCtx->textXOffset = 9;
    scriptCtx->textYOffset = 0x74;
    scriptCtx->nextSection = scriptCtx->currentSection + 1;
    scriptCtx->holdItSection = 0;
    scriptCtx->holdItFlag = 0;
    scriptCtx->textboxNameId = 0;
    scriptCtx->textboxDownArrowIndex = 0;
    scriptCtx->textboxDownArrowDelayCounter = 0;
    scriptCtx->flags = 0;
    scriptCtx->waitTimer = 0;
    scriptCtx->textColor = 0;
    scriptCtx->textSpeed = 3;
    scriptCtx->prevTextSpeed = 3;
    scriptCtx->textDelayTimer = 0;
    scriptCtx->fullscreenTextXOffset = 0x18;
    scriptCtx->fullscreenTextYOffset = 0x56;
    {
        const void *r1;
        const u32 *r0;
        if (scriptCtx->currentSection >= 0x80)
        {
            r1 = eScriptHeap;
            r0 = (u32 *)eScriptHeap + (scriptCtx->currentSection-0x80);
            scriptCtx->scriptPtr = r1 + r0[1];
            scriptCtx->scriptSectionPtr = scriptCtx->scriptPtr;
            scriptCtx->scriptHeaderSize = *(u16*)r1;
        }
        else
        {
            r1 = std_scripts;
            r0 = &std_scripts[scriptCtx->currentSection];
            scriptCtx->scriptPtr = r1 + r0[1];
            scriptCtx->scriptSectionPtr = scriptCtx->scriptPtr;
            scriptCtx->scriptHeaderSize = *(u16*)r1;
        }
    }
    scriptCtx->mapMarkerVramPtr = (void*)(VRAM + 0x11800);
    for (i = 0; i < ARRAY_COUNT(gMapMarker); i++)
    {
        gMapMarker[i].id |= 0xFF;
        gMapMarker[i].isBlinking = 0;
        gMapMarker[i].flags = 0;
        gMapMarker[i].attr0 = SPRITE_ATTR0_CLEAR;
    }
}

static void AdvanceScriptContext(struct ScriptContext * scriptCtx)
{
    if(scriptCtx->textSkip > 0 && (gJoypad.pressedKeys & A_BUTTON || gJoypad.heldKeys & B_BUTTON)) // text skip
        scriptCtx->textSkip = 2;
    
    continueScript:
    scriptCtx->currentToken = *scriptCtx->scriptPtr;
    if(scriptCtx->currentToken < 0x80)
    {
        if(gScriptCmdFuncs[scriptCtx->currentToken](scriptCtx))
            return;
        else
            goto continueScript;
    }
    if(scriptCtx->textSkip > 1)
    {
        scriptCtx->textSpeed = 0;
    }
    scriptCtx->textDelayTimer++;
    if(scriptCtx->textDelayTimer >= scriptCtx->textSpeed)
    {
        scriptCtx->textDelayTimer = 0;
        scriptCtx->currentToken -= 0x80;
        if (scriptCtx->flags & SCRIPT_FULLSCREEN)
        {
            PutCharInTextbox(scriptCtx->currentToken, scriptCtx->fullscreenTextY, scriptCtx->fullscreenCharCount);
            scriptCtx->fullscreenCharCount++;
            scriptCtx->fullscreenTextX++;
        }
        else
        {
            PutCharInTextbox(scriptCtx->currentToken, scriptCtx->textY, scriptCtx->textX);
            scriptCtx->textX++;
        }

        scriptCtx->scriptPtr++;
        
        if (!(scriptCtx->currentSection == 0x80 && gMain.scenarioIdx == 0) && scriptCtx->currentToken != 0xFF)
        {
            if ( scriptCtx->textSpeed > 0)
            {
                if ( scriptCtx->soundCueSkip == 0 || scriptCtx->textSpeed > 4 )
                {
                    if ( scriptCtx->currentSoundCue != 2 )
                        scriptCtx->soundCueSkip = 1;

                    if (!(gMain.soundFlags & SOUND_FLAG_DISABLE_CUE))
                    {
                        if (scriptCtx->currentSoundCue == 2)
                        {
                            PlaySE(SE01A_TEXT_TYPEWRITER_LOW);
                        }
                        else if (scriptCtx->currentSoundCue == 1)
                        {
                            PlaySE(SE004_TEXT_BLIP_FEMALE);
                        }
                        else
                        {
                            PlaySE(SE003_TEXT_BLIP_MALE);
                        }
                    }
                }
                else
                {
                    scriptCtx->soundCueSkip--;
                }
            }
        }
        if(scriptCtx->textSpeed == 0)
        {
            goto continueScript;
        }
    }
}

static void PutCharInTextbox(u32 characterCode, u32 y, u32 x)
{
    uintptr_t i;
    uintptr_t temp = characterCode*0x80;
    temp += (uintptr_t)gCharSet;
    if(gScriptContext.textColor)
    {
        u8 * vram;
        u8 * pixel;
        DmaCopy16(3, temp, gTextColorTileBuffer, 0x80);
        pixel = gTextColorTileBuffer;
        temp = gScriptContext.textColor * 3;
        for(i = 0; i < 0x80; i++)
        {
            u32 pixelLeft, pixelRight;
            pixelLeft = pixelRight = *pixel;
            pixelLeft &= 0xF;
            pixelRight &= 0xF0;
            if(pixelLeft)
                pixelLeft += temp;
            if(pixelRight)
                pixelRight += temp << 4;
            *pixel++ = pixelLeft | pixelRight;
        }
        i = (uintptr_t)OBJ_VRAM0;
        i += x * 0x80;
        if(gScriptContext.flags & 4)
            i += 0x80 * (2 * 16);
        else
            i += 0x80 * (y * 16);
        DmaCopy16(3, gTextColorTileBuffer, i, 0x80);
    }
    else
    {
        i = (uintptr_t)OBJ_VRAM0;
        i += x * 0x80;
        if(gScriptContext.flags & 4)
            i += 0x80 * (2 * 16);
        else
            i += 0x80 * (y * 16);
        DmaCopy16(3, temp, i, 0x80);
    }
    if(gScriptContext.flags & 4)
    {
        temp = x + 2 * 0x10;
        gTextBoxCharacters[temp].x = gScriptContext.fullscreenTextX * (16-2); 
        gTextBoxCharacters[temp].y = (y - 2) * (16+4);
        gTextBoxCharacters[temp].objAttr2 = 2 * 0x40 + x * 4;
    }
    else
    {
        temp = x + y * 0x10;
        gTextBoxCharacters[temp].x = x * (16-2); 
        gTextBoxCharacters[temp].y = y * (16+2);
        gTextBoxCharacters[temp].objAttr2 = y * 0x40 + x * 4;
    }
    gTextBoxCharacters[temp].objAttr2 += 0x400;
    gTextBoxCharacters[temp].state = characterCode | 0x8000;
    gTextBoxCharacters[temp].color = gScriptContext.textColor;
}

static void DrawTextAndMapMarkers(struct ScriptContext * scriptCtx)
{
    struct OamAttrs * oam;
    u32 i;
    u32 y, x;
    if(!(scriptCtx->flags & SCRIPT_FULLSCREEN))
    {
        oam = &gOamObjects[OAM_IDX_MAP_MARKER];
        for(i = 0; i < ARRAY_COUNT(gMapMarker); i++) 
        {
            if(gMapMarker[i].id != 0xFF)
            {    
                oam->attr0 = gMapMarker[i].attr0;
                oam->attr1 = gMapMarker[i].attr1;
                if(gMapMarker[i].isBlinking)
                {
                    gMapMarker[i].blinkTimer++;
                    gMapMarker[i].blinkTimer &= 0x1F;
                    if (gMapMarker[i].blinkTimer < 16)
                        oam->attr0 = SPRITE_ATTR0_CLEAR;
                }
                if(gMapMarker[i].flags & 0x2)
                {
                    gMapMarker[i].distanceMoved += gMapMarker[i].speed;
                    if (gMapMarker[i].distanceMoved >= gMapMarker[i].distanceToMove)
                    {
                        gMapMarker[i].speed -= gMapMarker[i].distanceMoved - gMapMarker[i].distanceToMove;
                        gMapMarker[i].flags &= ~2;
                    }
                    switch(gMapMarker[i].direction)
                    {
                        case 0:
                            y = gMapMarker[i].attr0 & 0xFF;
                            gMapMarker[i].attr0 &= ~0xFF;
                            y -= gMapMarker[i].speed;
                            y &= 0xFF;
                            gMapMarker[i].attr0 += y;
                            oam->attr0 = gMapMarker[i].attr0;
                            break;
                        case 1:
                            y = gMapMarker[i].attr0 & 0xFF;
                            gMapMarker[i].attr0 &= ~0xFF;
                            y += gMapMarker[i].speed;
                            y &= 0xFF;
                            gMapMarker[i].attr0 += y;
                            oam->attr0 = gMapMarker[i].attr0;
                            break;
                        case 2:
                            x = gMapMarker[i].attr1 & 0x1FF;
                            gMapMarker[i].attr1 &= ~0x1FF;
                            x -= gMapMarker[i].speed;
                            x &= 0x1FF;
                            gMapMarker[i].attr1 += x;
                            oam->attr1 = gMapMarker[i].attr1;
                            break;
                        case 3:
                            x = gMapMarker[i].attr1 & 0x1FF;
                            gMapMarker[i].attr1 &= ~0x1FF;
                            x += gMapMarker[i].speed;
                            x &= 0x1FF;
                            gMapMarker[i].attr1 += x;
                            oam->attr1 = gMapMarker[i].attr1;
                            break;
                        default:
                            break;
                    }
                }
                if(gMapMarker[i].flags & 0x4)
                    oam->attr0 = SPRITE_ATTR0_CLEAR;
                oam++;
            }
            else
            {
                oam->attr0 = SPRITE_ATTR0_CLEAR;
                oam++;
            }
        }
        
    }

    if(gMain.showTextboxCharacters)
    {
        oam = &gOamObjects[OAM_IDX_TEXT];
        for(i = 0; i < OAM_COUNT_TEXT; i++)
        {
            
            if(gTextBoxCharacters[i].state & 0x8000)
            {
                oam->attr0 = SPRITE_ATTR0(gTextBoxCharacters[i].y + scriptCtx->textYOffset, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
                oam->attr1 = SPRITE_ATTR1_NONAFFINE(gTextBoxCharacters[i].x + scriptCtx->textXOffset, FALSE, FALSE, 1);
                oam->attr2 = gTextBoxCharacters[i].objAttr2;
            }
            else
                oam->attr0 = SPRITE_ATTR0_CLEAR;
            oam++;
        }   
        if(scriptCtx->flags & SCRIPT_FULLSCREEN)
        {
            oam = &gOamObjects[OAM_IDX_TEXT_FULLSCREEN];
            for(i = 32; i < ARRAY_COUNT(gTextBoxCharacters); i++)
            {
                if(gTextBoxCharacters[i].state & 0x8000)
                {
                    oam->attr0 = SPRITE_ATTR0(gTextBoxCharacters[i].y + scriptCtx->fullscreenTextYOffset, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
                    oam->attr1 = SPRITE_ATTR1_NONAFFINE(gTextBoxCharacters[i].x + scriptCtx->fullscreenTextXOffset, FALSE, FALSE, 1);
                    oam->attr2 = gTextBoxCharacters[i].objAttr2;
                }
                else
                    oam->attr0 = SPRITE_ATTR0_CLEAR;
                oam++;
            }
        }
    }
    else
    {
        oam = &gOamObjects[OAM_IDX_TEXT];
        for(i = 0; i < OAM_COUNT_TEXT; i++)
        {
            oam->attr0 = SPRITE_ATTR0_CLEAR;
            oam++;
        }
        if(scriptCtx->flags & SCRIPT_FULLSCREEN)
        {
            oam = &gOamObjects[OAM_IDX_TEXT_FULLSCREEN];
            for(i = 32; i < ARRAY_COUNT(gTextBoxCharacters); i++)
            {
                oam->attr0 = SPRITE_ATTR0_CLEAR;
                oam++;
            }
        }
    }
}

void RedrawTextboxCharacters()
{
    u32 i;
    u8 * src;
    u8 * dst;
    for(i = 0; i < ARRAY_COUNT(gTextBoxCharacters); i++)
    {
        struct TextBoxCharacter *theCharacter = &gTextBoxCharacters[i];
        if(theCharacter->state & 0x8000)
        {
            u32 temp = theCharacter->state & 0x7FFF;
            temp *= 0x80;
            temp += (u32)gCharSet; //! why tho
            if(theCharacter->color)
            {
                u32 j;
                u8 * tileBuf;
                u32 colorIdx;
                DmaCopy16(3, temp, gTextColorTileBuffer, 0x80);
                tileBuf = gTextColorTileBuffer;
                temp = theCharacter->color * 3;
                for(j = 0; j < 0x80; j++)
                {
                    u32 half1, half2;
                    half2 = *tileBuf; // honestly wtf capcom
                    half1 = half2 & 0xF;
                    half2 = half2 & 0xF0;
                    if(half1)
                        half1 += temp;
                    if(half2)
                        half2 += temp << 4;
                    *tileBuf++ = half1 | half2;
                }
                src = gTextColorTileBuffer;
                dst = (u8*)(OBJ_VRAM0 + i * 0x80);
                DmaCopy16(3, src, dst, 0x80);
            }
            else
            {
                dst = (u8*)(OBJ_VRAM0 + i * 0x80);
                DmaCopy16(3, temp, dst, 0x80);
            }
        }
    }
}