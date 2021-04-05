#include "global.h"
#include "background.h"
#include "ewram.h"
#include "script.h"
#include "sound.h"

const u8 gUnknown_080189A4[152] = {
	0x01, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x04, 0x05, 0x06, 0x07, 0x01,
	0x08, 0x16, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x0a, 0x0b, 0x05, 0x06, 0x07, 0x01, 0x08,
	0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x0b, 0x05, 0x06, 0x07, 0x01, 0x08, 0x0c,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x0b, 0x05, 0x06, 0x07, 0x01, 0x08, 0x0c, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x0b, 0x05, 0x06, 0x07, 0x01, 0x08, 0x0c, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x0b, 0x05, 0x06, 0x07, 0x01, 0x08, 0x0c, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x0d, 0x0b, 0x05, 0x06, 0x07, 0x01, 0x08, 0x0c, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x0d, 0x0b, 0x05, 0x06, 0x07, 0x01, 0x0e, 0x0f, 0x10, 0x10, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x11, 0x12, 0x05, 0x06, 0x07, 0x01, 0x13, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14,
	0x14, 0x14, 0x15, 0x05, 0x06, 0x07, 0x00, 0x00
};

#ifdef NONMATCHING
void GameOverScreenProcess(struct Main *main)
{
    struct IORegisters *ioRegsp = &gIORegisters; // r4
    struct OamAttrs * oam = &gOamObjects[49]; // r3 
    u32 i, j;
    u8 * ptr;
    u16 * ptr2;
    switch (main->process[GAME_SUBPROCESS])
    {
    case 0:
        oam->attr0 = SPRITE_ATTR0(48, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
        oam->attr1 = SPRITE_ATTR1_NONAFFINE((-64-24) & 0x1FF, FALSE, FALSE, 3);
        oam->attr2 = SPRITE_ATTR2(0x1A0, 0, 5);
        oam++;
        oam->attr0 = SPRITE_ATTR0(48, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
        oam->attr1 = SPRITE_ATTR1_NONAFFINE(DISPLAY_WIDTH+24, FALSE, FALSE, 3);
        oam->attr2 = SPRITE_ATTR2(0x1E0, 0, 5);
        DmaCopy16(3, gUnknown_081911C0, VRAM+0x1400, 0x2E0);
        DmaCopy16(3, gUnknown_08194500, PLTT+0x20, 0x20);
        DmaCopy16(3, gUnknown_08192CA0, VRAM+0x13400, 0x1000);
        DmaCopy16(3, gUnknown_08194560, PLTT+0x2A0, 0x20);
        for(i = 0; i < 0x400; i++)
        {
            gBG2MapBuffer[i] = 0;
        }
        ioRegsp->lcd_bg2vofs = 0;
        ioRegsp->lcd_bg2hofs = 8;
        ioRegsp->lcd_bg2cnt = BGCNT_PRIORITY(0) | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(30) | BGCNT_16COLOR | BGCNT_WRAP | BGCNT_TXT256x256;
        ioRegsp->lcd_dispcnt = DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_BG0_ON | DISPCNT_BG2_ON | DISPCNT_BG3_ON | DISPCNT_OBJ_ON;
        main->tilemapUpdateBits = 13;
        main->process[GAME_SUBPROCESS]++;
        main->process[GAME_PROCESSUNK2] = 0;
        break;
    case 1:
        oam->attr1 = (((oam->attr1 & 0x1FF) + 8) & 0x1FF) + (oam->attr1 & ~0x1FF); // shitty way to add 8 to the X coordinate but ok
        oam++;
        oam->attr1 -= 8;
        ptr = &gUnknown_080189A4[0xE];
        for(i = 0; i < 10; i++)
        {
            u8 * ptr3 = &ptr[i * 0xF];
            ptr2 = &gBG2MapBuffer[i*32+main->process[GAME_PROCESSUNK2]];
            for(j = 0; j < main->process[GAME_PROCESSUNK2]; j++)
            {
                u32 tile = 0x10A0 + *ptr3;
                *ptr2 = tile;
                *(ptr2+0x140) = tile; 
                ptr2--;
                ptr3--;
            }
        }
        ptr = &gUnknown_080189A4[0xE];
        for(i = 0; i < 10; i++)
        {
            u8 * ptr3 = &ptr[i * 0xF];
            ptr2 = &gBG2MapBuffer[(i*32)+0x1F-main->process[GAME_PROCESSUNK2]];
            for(j = 0; j < main->process[GAME_PROCESSUNK2]; j++)
            {
                u32 tile = 0x14A0 + *ptr3;
                *ptr2 = tile;
                *(ptr2+0x140) = tile; 
                ptr2++;
                ptr3--;
            }
        }
        if(main->process[GAME_PROCESSUNK2] < 0xF)
        {
            main->process[GAME_PROCESSUNK2]++;
        }
        else
        {
            PlaySE(0x56);
            main->process[GAME_SUBPROCESS]++;
            main->process[GAME_PROCESSUNK2] = 0;
        }
        break;
    case 2:
        if(main->process[GAME_PROCESSUNK2] > 120) // 2 seconds?
        {
            StartHardwareBlend(2, 3, 1, 0x1F);
            main->process[GAME_SUBPROCESS]++;
        }
        else
        {
            main->process[GAME_PROCESSUNK2]++;
        }
        break;
    case 3:
        if(main->blendMode == 0)
        {
            DmaFill16(3, 0, PLTT, 0x400);
            SET_PROCESS_PTR(1, 0, 0, 0, main);
        }
        break;
    default:
        break;
    }
}
#else
NAKED
void GameOverScreenProcess(struct Main * main)
{
    asm_unified("GameOverScreenProcess: @ 0x08007E78\n\
	push {r4, r5, r6, r7, lr}\n\
	mov r7, sl\n\
	mov r6, sb\n\
	mov r5, r8\n\
	push {r5, r6, r7}\n\
	sub sp, #4\n\
	adds r6, r0, #0\n\
	ldr r4, _08007E9C\n\
	ldr r3, _08007EA0\n\
	ldrb r0, [r6, #5]\n\
	cmp r0, #1\n\
	beq _08007F80\n\
	cmp r0, #1\n\
	bgt _08007EA4\n\
	cmp r0, #0\n\
	beq _08007EB2\n\
	b _0800809E\n\
	.align 2, 0\n\
_08007E9C: .4byte gIORegisters\n\
_08007EA0: .4byte gOamObjects+0x188\n\
_08007EA4:\n\
	cmp r0, #2\n\
	bne _08007EAA\n\
	b _0800805C\n\
_08007EAA:\n\
	cmp r0, #3\n\
	bne _08007EB0\n\
	b _0800807C\n\
_08007EB0:\n\
	b _0800809E\n\
_08007EB2:\n\
	movs r1, #0x30\n\
	strh r1, [r3]\n\
	ldr r0, _08007F38\n\
	strh r0, [r3, #2]\n\
	ldr r0, _08007F3C\n\
	strh r0, [r3, #4]\n\
	adds r3, #8\n\
	strh r1, [r3]\n\
	ldr r0, _08007F40\n\
	strh r0, [r3, #2]\n\
	ldr r0, _08007F44\n\
	strh r0, [r3, #4]\n\
	ldr r0, _08007F48\n\
	ldr r1, _08007F4C\n\
	str r1, [r0]\n\
	ldr r1, _08007F50\n\
	str r1, [r0, #4]\n\
	ldr r1, _08007F54\n\
	str r1, [r0, #8]\n\
	ldr r1, [r0, #8]\n\
	ldr r1, _08007F58\n\
	str r1, [r0]\n\
	ldr r1, _08007F5C\n\
	str r1, [r0, #4]\n\
	ldr r2, _08007F60\n\
	str r2, [r0, #8]\n\
	ldr r1, [r0, #8]\n\
	ldr r1, _08007F64\n\
	str r1, [r0]\n\
	ldr r1, _08007F68\n\
	str r1, [r0, #4]\n\
	ldr r1, _08007F6C\n\
	str r1, [r0, #8]\n\
	ldr r1, [r0, #8]\n\
	ldr r1, _08007F70\n\
	str r1, [r0]\n\
	ldr r1, _08007F74\n\
	str r1, [r0, #4]\n\
	str r2, [r0, #8]\n\
	ldr r0, [r0, #8]\n\
	movs r5, #0\n\
	ldr r2, _08007F78\n\
	adds r3, r4, #0\n\
	adds r3, #0x4a\n\
	movs r1, #0\n\
	ldr r0, _08007F7C\n\
_08007F0E:\n\
	strh r1, [r0]\n\
	adds r0, #2\n\
	adds r5, #1\n\
	cmp r5, r2\n\
	bls _08007F0E\n\
	movs r1, #0\n\
	movs r0, #0\n\
	strh r0, [r4, #0x12]\n\
	movs r0, #8\n\
	strh r0, [r4, #0x10]\n\
	movs r0, #0xf8\n\
	lsls r0, r0, #6\n\
	strh r0, [r4, #4]\n\
	movs r0, #0xea\n\
	lsls r0, r0, #5\n\
	strh r0, [r3]\n\
	movs r0, #0xd\n\
	strb r0, [r6, #0x16]\n\
	ldrb r0, [r6, #5]\n\
	adds r0, #1\n\
	b _0800804A\n\
	.align 2, 0\n\
_08007F38: .4byte 0x0000C1A8\n\
_08007F3C: .4byte 0x000051A0\n\
_08007F40: .4byte 0x0000C108\n\
_08007F44: .4byte 0x000051E0\n\
_08007F48: .4byte 0x040000D4\n\
_08007F4C: .4byte gUnknown_081911C0\n\
_08007F50: .4byte 0x06001400\n\
_08007F54: .4byte 0x80000170\n\
_08007F58: .4byte gUnknown_08194500\n\
_08007F5C: .4byte 0x05000020\n\
_08007F60: .4byte 0x80000010\n\
_08007F64: .4byte gUnknown_08192CA0\n\
_08007F68: .4byte 0x06013400\n\
_08007F6C: .4byte 0x80000800\n\
_08007F70: .4byte gUnknown_08194560\n\
_08007F74: .4byte 0x050002A0\n\
_08007F78: .4byte 0x000003FF\n\
_08007F7C: .4byte gBG2MapBuffer\n\
_08007F80:\n\
	ldrh r1, [r3, #2]\n\
	ldr r0, _08008050\n\
	adds r2, r0, #0\n\
	ands r2, r1\n\
	adds r2, #8\n\
	ands r2, r0\n\
	movs r0, #0xfe\n\
	lsls r0, r0, #8\n\
	ands r0, r1\n\
	adds r0, r0, r2\n\
	strh r0, [r3, #2]\n\
	ldrh r0, [r3, #0xa]\n\
	subs r0, #8\n\
	strh r0, [r3, #0xa]\n\
	movs r5, #0\n\
	ldr r0, _08008054\n\
	mov sb, r0\n\
	mov r8, r5\n\
	ldr r0, _08008058\n\
	adds r0, #0xe\n\
	mov sl, r0\n\
_08007FAA:\n\
	lsls r0, r5, #6\n\
	mov r1, sb\n\
	adds r3, r0, r1\n\
	ldrb r1, [r6, #6]\n\
	lsls r0, r1, #1\n\
	adds r3, r3, r0\n\
	movs r4, #0\n\
	cmp r4, r1\n\
	bhs _08007FE0\n\
	mov r1, r8\n\
	add r1, sl\n\
	movs r2, #0x85\n\
	lsls r2, r2, #5\n\
	mov ip, r2\n\
	movs r7, #0xa0\n\
	lsls r7, r7, #2\n\
_08007FCA:\n\
	ldrb r2, [r1]\n\
	add r2, ip\n\
	strh r2, [r3]\n\
	adds r0, r3, r7\n\
	strh r2, [r0]\n\
	subs r3, #2\n\
	subs r1, #1\n\
	adds r4, #1\n\
	ldrb r0, [r6, #6]\n\
	cmp r4, r0\n\
	blo _08007FCA\n\
_08007FE0:\n\
	movs r1, #0xf\n\
	add r8, r1\n\
	adds r5, #1\n\
	cmp r5, #9\n\
	bls _08007FAA\n\
	movs r5, #0\n\
	ldr r0, _08008058\n\
	adds r0, #0xe\n\
	mov r8, r0\n\
_08007FF2:\n\
	lsls r0, r5, #6\n\
	mov r2, sb\n\
	adds r3, r0, r2\n\
	ldrb r1, [r6, #6]\n\
	movs r0, #0x1f\n\
	subs r0, r0, r1\n\
	lsls r0, r0, #1\n\
	adds r3, r3, r0\n\
	movs r4, #0\n\
	adds r7, r5, #1\n\
	cmp r4, r1\n\
	bhs _08008032\n\
	lsls r0, r5, #4\n\
	subs r0, r0, r5\n\
	mov r2, r8\n\
	adds r1, r0, r2\n\
	movs r0, #0xa5\n\
	lsls r0, r0, #5\n\
	mov ip, r0\n\
	movs r5, #0xa0\n\
	lsls r5, r5, #2\n\
_0800801C:\n\
	ldrb r2, [r1]\n\
	add r2, ip\n\
	strh r2, [r3]\n\
	adds r0, r3, r5\n\
	strh r2, [r0]\n\
	adds r3, #2\n\
	subs r1, #1\n\
	adds r4, #1\n\
	ldrb r2, [r6, #6]\n\
	cmp r4, r2\n\
	blo _0800801C\n\
_08008032:\n\
	adds r5, r7, #0\n\
	cmp r5, #9\n\
	bls _08007FF2\n\
	ldrb r0, [r6, #6]\n\
	cmp r0, #0xe\n\
	bls _08008076\n\
	movs r0, #0x56\n\
	bl PlaySE\n\
	ldrb r0, [r6, #5]\n\
	adds r0, #1\n\
	movs r1, #0\n\
_0800804A:\n\
	strb r0, [r6, #5]\n\
	strb r1, [r6, #6]\n\
	b _0800809E\n\
	.align 2, 0\n\
_08008050: .4byte 0x000001FF\n\
_08008054: .4byte gBG2MapBuffer\n\
_08008058: .4byte gUnknown_080189A4\n\
_0800805C:\n\
	ldrb r0, [r6, #6]\n\
	cmp r0, #0x77\n\
	bls _08008076\n\
	movs r0, #2\n\
	movs r1, #3\n\
	movs r2, #1\n\
	movs r3, #0x1f\n\
	bl StartHardwareBlend\n\
	ldrb r0, [r6, #5]\n\
	adds r0, #1\n\
	strb r0, [r6, #5]\n\
	b _0800809E\n\
_08008076:\n\
	adds r0, #1\n\
	strb r0, [r6, #6]\n\
	b _0800809E\n\
_0800807C:\n\
	adds r0, r6, #0\n\
	adds r0, #0x76\n\
	ldrh r1, [r0]\n\
	cmp r1, #0\n\
	bne _0800809E\n\
	mov r0, sp\n\
	strh r1, [r0]\n\
	ldr r1, _080080B0\n\
	str r0, [r1]\n\
	movs r0, #0xa0\n\
	lsls r0, r0, #0x13\n\
	str r0, [r1, #4]\n\
	ldr r0, _080080B4\n\
	str r0, [r1, #8]\n\
	ldr r0, [r1, #8]\n\
	movs r0, #1\n\
	str r0, [r6, #4]\n\
_0800809E:\n\
	add sp, #4\n\
	pop {r3, r4, r5}\n\
	mov r8, r3\n\
	mov sb, r4\n\
	mov sl, r5\n\
	pop {r4, r5, r6, r7}\n\
	pop {r0}\n\
	bx r0\n\
	.align 2, 0\n\
_080080B0: .4byte 0x040000D4\n\
_080080B4: .4byte 0x81000200\n");
}
#endif