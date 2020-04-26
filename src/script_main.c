#include "global.h"
#include "main.h"
#include "script.h"
#include "sound_control.h"
#include "ewram.h"

static void sub_80055B0(struct ScriptContext *scriptCtx);
extern void sub_8005890(struct ScriptContext *scriptCtx);
static void PutCharInTextbox(u32, u32, u32);
extern bool32 (*gScriptCmdFuncs[0x5F])(struct ScriptContext *);

void sub_8005408(void)
{
    u32 i;
    DmaCopy16(3, gTextPal, PALETTE + 0x200, sizeof(gTextPal));

    for (i = 0; i < ARRAY_COUNT(gUnknown_03003C00); i++)
    {
        gUnknown_03003C00[i].unk0 &= ~0x8000;
    }

    LZ77UnCompWram(gScriptTable[gMain.unk8D], eScriptHeap);
}

void sub_8005470(void)
{
    if (gMain.unk14 && gMain.blendMode == 0)
    {
        sub_80055B0(&gScriptContext);
    }
    sub_8005890(&gScriptContext);
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
    struct Struct3003930 * structPtr;
    for (i = 0; i < ARRAY_COUNT(gUnknown_03003C00); i++)
    {
        gUnknown_03003C00[i].unk0 &= ~0x8000;
    }
    scriptCtx->unkE = 0;
    scriptCtx->unkF = 0;
    if (gMain.unk4[0] != 4 || gMain.unk4[1] != 8)
        scriptCtx->unk13 = 0;
    scriptCtx->unk15 = 0;
    scriptCtx->unk14 = 8;
    scriptCtx->unk16 = 1;
    scriptCtx->unk17 = 0;
    scriptCtx->unk18 = 9;
    scriptCtx->unk1A = 0x74;
    scriptCtx->nextSection = scriptCtx->currentSection + 1;
    scriptCtx->unk2C = 0;
    scriptCtx->unk2E = 0;
    scriptCtx->unk34 = 0;
    scriptCtx->unk36 = 0;
    scriptCtx->unk37 = 0;
    scriptCtx->unk0 = 0;
    scriptCtx->waitTimer = 0;
    scriptCtx->textColor = 0;
    scriptCtx->textSpeed = 3;
    scriptCtx->unk26 = 3;
    scriptCtx->unk27 = 0;
    scriptCtx->unk28 = 0x18;
    scriptCtx->unk2A = 0x56;
    {
        void *r1;
        u32 *r0;
        if (scriptCtx->currentSection > 0x7F)
        {
            r1 = eScriptHeap;
            r0 = (scriptCtx->currentSection-0x80) + (u32 *)eScriptHeap;
            scriptCtx->scriptPtr = r1 + r0[1];
            scriptCtx->scriptPtr2 = scriptCtx->scriptPtr;
            scriptCtx->unk1C = *(u16*)r1;
        }
        else
        {
            r1 = common_scripts;
            r0 = &common_scripts[scriptCtx->currentSection];
            scriptCtx->scriptPtr = r1 + r0[1];
            scriptCtx->scriptPtr2 = scriptCtx->scriptPtr;
            scriptCtx->unk1C = *(u16*)r1;
        }
    }
    scriptCtx->unk3C = (void*)(VRAM + 0x11800);
    for (i = 0; i < ARRAY_COUNT(gUnknown_03003930); i++)
    {
        structPtr = &gUnknown_03003930[i];
        structPtr->id |= 0xFF;
        structPtr->unk1 = 0;
        structPtr->unk5 = 0;
        structPtr->attr0 = SPRITE_ATTR0(0, ST_OAM_AFFINE_DOUBLE_MASK, 0, 0, 0, 0);
    }
}

void sub_80055B0(struct ScriptContext * scriptCxt)
{
    if(scriptCxt->unk13 && (gJoypad.pressedKeysRaw & A_BUTTON || gJoypad.heldKeysRaw & B_BUTTON)) // text skip
        scriptCxt->unk13 = 2;
    
    loop:
    scriptCxt->unkC = *scriptCxt->scriptPtr;
    if(scriptCxt->unkC < 0x80)
    {
        if(gScriptCmdFuncs[scriptCxt->unkC](scriptCxt))
            return;
        else
            goto loop;
    }
    if(scriptCxt->unk13 > 1)
    {
        scriptCxt->textSpeed = 0;
    }
    scriptCxt->unk27++;
    if(scriptCxt->unk27 >= scriptCxt->textSpeed)
    {
        scriptCxt->unk27 = 0;
        scriptCxt->unkC -= 0x80;
        if (scriptCxt->unk0 & 4)
        {
            PutCharInTextbox(scriptCxt->unkC, scriptCxt->unk11, scriptCxt->unk10);
            scriptCxt->unk10++;
            scriptCxt->unk12++;
        }
        else
        {
            PutCharInTextbox(scriptCxt->unkC, scriptCxt->unkF, scriptCxt->unkE);
            scriptCxt->unkE++;
        }

        scriptCxt->scriptPtr++;
        
        if ((scriptCxt->currentSection != 0x80 || gMain.unk8D) && scriptCxt->unkC != 0xFF)
        {
                if ( scriptCxt->textSpeed )
                {
                    if ( !scriptCxt->unk16 || scriptCxt->textSpeed > 4 )
                    {
                        if ( scriptCxt->unk17 != 2 )
                            scriptCxt->unk16 = 1;

                        if (!(gMain.unk198 & 0x4))
                        {
                            if ( scriptCxt->unk17 == 2 )
                            {
                                PlaySE(68);
                            }
                            else if ( scriptCxt->unk17 == 1 )
                            {
                                PlaySE(46);
                            }
                            else
                            {
                                PlaySE(45);
                            }
                        }
                    }
                    else
                    {
                        scriptCxt->unk16--;
                    }
                }
            
        }
        if(scriptCxt->textSpeed == 0)
        {
            goto loop;
        }
        else
        {
            return;
        }
    }
}

#ifdef NONMATCHING
void PutCharInTextbox(u32 arg0, u32 y, u32 x)
{
    u8 * charTiles = gCharSet[arg0];
    u32 i;
    u32 colorT4;
    u32 idx;
    // gUnknown_030039D0 == text color tile buffer 
    if (gScriptContext.textColor != 0) // if colored 
    {
        u8 * ptr;
        u32 temp;
        u32 color1;
        DmaCopy16(3, charTiles, gUnknown_030039D0, sizeof(gUnknown_030039D0))
        ptr = gUnknown_030039D0;
        color1 = (gScriptContext.textColor * 3); // does some palette stuff probably

        for(i = 0; i < ARRAY_COUNT(gUnknown_030039D0); i++) // add color to all tiles
        {
            u32 val = *ptr;
            u32 half1 = val & 0xF;
            u32 half2 = val & 0xF0;
            if(half1)
            {
                half1 += color1;
            }
            if(half2)
            {
                half2 += color1 << 4;
            }
            *ptr++ = half1 | half2;
        }

        temp = x;
        temp *= 0x80; 
        temp += (VRAM + 0x10000);
        // fuck this
        if (gScriptContext.unk0 & 0x4) // is fullscreen 
        {
            temp += 0x80 * (2 * 16);
        }
        else 
        {
            temp += 0x80 * (y * 16);
        }
        DmaCopy16(3, gUnknown_030039D0, temp, 0x80);
        colorT4 = x * 4;
    }
    else 
    {
        u32 temp = x;
        temp *= 0x80; 
        temp += (VRAM + 0x10000);
        // fuck this
        if (gScriptContext.unk0 & 0x4) // is fullscreen
        {
            temp += 0x80 * (2 * 16);
        }
        else 
        {
            temp += 0x80 * (y * 16);
        }
        DmaCopy16(3, charTiles, temp, 0x80);
        colorT4 = x * 4;
    }
    // matches completely after this other than small regalloc stuff
    if(gScriptContext.unk0 & 4)
    {
        idx = x + 2 * 0x10;
        gUnknown_03003C00[idx].unk4 = gScriptContext.unk12 * 14; 
        gUnknown_03003C00[idx].unk6 = (y - 2) * 20;
        gUnknown_03003C00[idx].unk2 = 2 * 0x40 + colorT4;
    }
    else
    {
        idx = x + y * 0x10;
        gUnknown_03003C00[idx].unk4 = x * 14; 
        gUnknown_03003C00[idx].unk6 = y * 18;
        gUnknown_03003C00[idx].unk2 = y * 0x40 + colorT4;
    }
    gUnknown_03003C00[idx].unk2 += 0x400;
    gUnknown_03003C00[idx].unk0 = arg0 | 0x8000;
    gUnknown_03003C00[idx].unk8 = gScriptContext.textColor;
}
#else
NAKED
void PutCharInTextbox(u32 arg0, u32 y, u32 x)
{
    asm_unified("PutCharInTextbox:\n\
	push {r4, r5, r6, r7, lr}\n\
	mov r7, sl\n\
	mov r6, sb\n\
	mov r5, r8\n\
	push {r5, r6, r7}\n\
	sub sp, #8\n\
	str r0, [sp]\n\
	adds r7, r1, #0\n\
	adds r5, r2, #0\n\
	lsls r3, r0, #7\n\
	ldr r0, _08005770\n\
	adds r3, r3, r0\n\
	ldr r0, _08005774\n\
	adds r6, r0, #0\n\
	adds r6, #0x24\n\
	ldrb r1, [r6]\n\
	cmp r1, #0\n\
	beq _080057A8\n\
	ldr r1, _08005778\n\
	str r3, [r1]\n\
	ldr r2, _0800577C\n\
	str r2, [r1, #4]\n\
	ldr r0, _08005780\n\
	str r0, [r1, #8]\n\
	ldr r0, [r1, #8]\n\
	adds r4, r2, #0\n\
    ldrb r1, [r6]\n\
	lsls r0, r1, #1\n\
	adds r3, r0, r1\n\
	movs r2, #0\n\
	lsls r6, r5, #7\n\
	mov sb, r6\n\
	lsls r0, r5, #2\n\
	mov ip, r0\n\
	movs r1, #0xf\n\
	mov sl, r1\n\
	movs r6, #0xf0\n\
	mov r8, r6\n\
	lsls r0, r3, #4\n\
	str r0, [sp, #4]\n\
_08005730:\n\
	ldrb r1, [r4]\n\
	adds r0, r1, #0\n\
	mov r6, sl\n\
	ands r0, r6\n\
	mov r6, r8\n\
	ands r1, r6\n\
	cmp r0, #0\n\
	beq _08005742\n\
	adds r0, r0, r3\n\
_08005742:\n\
	cmp r1, #0\n\
	beq _0800574A\n\
	ldr r6, [sp, #4]\n\
	adds r1, r1, r6\n\
_0800574A:\n\
	orrs r0, r1\n\
	strb r0, [r4]\n\
	adds r4, #1\n\
	adds r2, #1\n\
	cmp r2, #0x7f\n\
	bls _08005730\n\
	ldr r2, _08005784\n\
	add r2, sb\n\
	movs r0, #4\n\
	ldr r1, _08005774\n\
	ldrh r1, [r1]\n\
	ands r0, r1\n\
	cmp r0, #0\n\
	beq _08005788\n\
	movs r3, #0x80\n\
	lsls r3, r3, #5\n\
	adds r2, r2, r3\n\
	b _0800578C\n\
	.align 2, 0\n\
_08005770: .4byte gCharSet\n\
_08005774: .4byte gScriptContext\n\
_08005778: .4byte 0x040000D4\n\
_0800577C: .4byte gUnknown_030039D0\n\
_08005780: .4byte 0x80000040\n\
_08005784: .4byte 0x06010000\n\
_08005788:\n\
	lsls r0, r7, #0xb\n\
	adds r2, r2, r0\n\
_0800578C:\n\
	ldr r0, _0800579C\n\
	ldr r4, _080057A0\n\
	str r4, [r0]\n\
	str r2, [r0, #4]\n\
	ldr r1, _080057A4\n\
	str r1, [r0, #8]\n\
	ldr r0, [r0, #8]\n\
	b _080057E0\n\
	.align 2, 0\n\
_0800579C: .4byte 0x040000D4\n\
_080057A0: .4byte gUnknown_030039D0\n\
_080057A4: .4byte 0x80000040\n\
_080057A8:\n\
	lsls r0, r5, #7\n\
    ldr r6, _080057C4\n\
	adds r2, r0, r6\n\
	movs r0, #4\n\
	ldr r1, _080057C8\n\
	ldrh r1, [r1]\n\
	ands r0, r1\n\
	cmp r0, #0\n\
	beq _080057CC\n\
	movs r4, #0x80\n\
	lsls r4, r4, #5\n\
	adds r2, r2, r4\n\
	b _080057D0\n\
	.align 2, 0\n\
_080057C4: .4byte 0x06010000\n\
_080057C8: .4byte gScriptContext\n\
_080057CC:\n\
	lsls r0, r7, #0xb\n\
	adds r2, r2, r0\n\
_080057D0:\n\
	ldr r0, _0800581C\n\
	str r3, [r0]\n\
	str r2, [r0, #4]\n\
	ldr r1, _08005820\n\
	str r1, [r0, #8]\n\
	ldr r0, [r0, #8]\n\
	lsls r6, r5, #2\n\
	mov ip, r6\n\
_080057E0:\n\
	movs r0, #4\n\
	ldr r1, _08005824\n\
	ldrh r1, [r1]\n\
	ands r0, r1\n\
	cmp r0, #0\n\
	beq _0800582C\n\
    adds r3, r5, #0\n\
	adds r3, #0x20\n\
    lsls r1, r3, #1\n\
	adds r1, r1, r3\n\
	lsls r1, r1, #2\n\
	ldr r2, _08005828\n\
	adds r1, r1, r2\n\
	ldr r4, _08005824\n\
	ldrb r4, [r4, #0x12]\n\
	lsls r0, r4, #3\n\
	ldr r6, _08005824\n\
	ldrb r6, [r6, #0x12]\n\
	subs r0, r0, r6\n\
	lsls r0, r0, #1\n\
	strh r0, [r1, #4]\n\
	subs r2, r7, #2\n\
	lsls r0, r2, #2\n\
	adds r0, r0, r2\n\
	lsls r0, r0, #2\n\
	strh r0, [r1, #6]\n\
	mov r0, ip\n\
	adds r0, #0x80\n\
	b _0800584E\n\
	.align 2, 0\n\
_0800581C: .4byte 0x040000D4\n\
_08005820: .4byte 0x80000040\n\
_08005824: .4byte gScriptContext\n\
_08005828: .4byte gUnknown_03003C00\n\
_0800582C:\n\
	lsls r0, r7, #4\n\
	adds r3, r5, r0\n\
    lsls r1, r3, #1\n\
	adds r1, r1, r3\n\
	lsls r1, r1, #2\n\
	ldr r0, _08005888\n\
	adds r1, r1, r0\n\
	lsls r0, r5, #3\n\
	subs r0, r0, r5\n\
	lsls r0, r0, #1\n\
	strh r0, [r1, #4]\n\
	lsls r0, r7, #3\n\
	adds r0, r0, r7\n\
	lsls r0, r0, #1\n\
	strh r0, [r1, #6]\n\
	lsls r0, r7, #6\n\
	add r0, ip\n\
_0800584E:\n\
	strh r0, [r1, #2]\n\
	lsls r0, r3, #1\n\
	adds r0, r0, r3\n\
	lsls r0, r0, #2\n\
	ldr r1, _08005888\n\
	adds r0, r0, r1\n\
	ldrh r2, [r0, #2]\n\
	movs r3, #0x80\n\
	lsls r3, r3, #3\n\
	adds r1, r2, r3\n\
	strh r1, [r0, #2]\n\
	movs r4, #0x80\n\
	lsls r4, r4, #8\n\
	adds r1, r4, #0\n\
	ldr r6, [sp]\n\
	orrs r6, r1\n\
	strh r6, [r0]\n\
	ldr r1, _0800588C\n\
	adds r1, #0x24\n\
	ldrb r1, [r1]\n\
	strb r1, [r0, #8]\n\
	add sp, #8\n\
	pop {r3, r4, r5}\n\
	mov r8, r3\n\
	mov sb, r4\n\
	mov sl, r5\n\
	pop {r4, r5, r6, r7}\n\
	pop {r0}\n\
	bx r0\n\
	.align 2, 0\n\
_08005888: .4byte gUnknown_03003C00\n\
_0800588C: .4byte gScriptContext\n");
}
#endif