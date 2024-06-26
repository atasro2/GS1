#include "global.h"
#include "background.h"
#include "ewram.h"
#include "script.h"
#include "sound.h"
#include "graphics.h"
#include "constants/songs.h"
#include "constants/process.h"
#include "constants/oam_allocations.h"

const u8 gMapTrialGameOverDoors[152] = {
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

void GameOverScreenProcess(struct Main *main)
{
    struct IORegisters *ioRegsp = &gIORegisters; // r4
    struct OamAttrs * oam = &gOamObjects[OAM_IDX_GAME_OVER]; // r3 
    u32 i, j;
    u32 temp;
    switch (main->process[GAME_PROCESS_STATE])
    {
    case 0:
        oam->attr0 = SPRITE_ATTR0(48, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
        oam->attr1 = SPRITE_ATTR1_NONAFFINE((-64-24) & 0x1FF, FALSE, FALSE, 3);
        oam->attr2 = SPRITE_ATTR2(0x1A0, 0, 5);
        oam++;
        oam->attr0 = SPRITE_ATTR0(48, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
        oam->attr1 = SPRITE_ATTR1_NONAFFINE(DISPLAY_WIDTH+24, FALSE, FALSE, 3);
        oam->attr2 = SPRITE_ATTR2(0x1E0, 0, 5);
        DmaCopy16(3, gGfxTrialGameOverDoors, VRAM+0x1400, 0x2E0);
        DmaCopy16(3, gPalTrialGameOverDoors, PLTT+0x20, 0x20);
        DmaCopy16(3, gGfxTrialGameOverText, VRAM+0x13400, 0x1000);
        DmaCopy16(3, gPalTrialGameOverText, PLTT+0x2A0, 0x20);
        for(i = 0; i < 0x400; i++)
        {
            gBG2MapBuffer[i] = 0;
        }
        ioRegsp->lcd_bg2vofs = 0;
        ioRegsp->lcd_bg2hofs = 8;
        ioRegsp->lcd_bg2cnt = BGCNT_PRIORITY(0) | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(30) | BGCNT_16COLOR | BGCNT_WRAP | BGCNT_TXT256x256;
        ioRegsp->lcd_dispcnt = DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_BG0_ON | DISPCNT_BG2_ON | DISPCNT_BG3_ON | DISPCNT_OBJ_ON;
        main->tilemapUpdateBits = 13;
        main->process[GAME_PROCESS_STATE]++;
        main->process[GAME_PROCESS_VAR1] = 0;
        break;
    case 1:
        temp = oam->attr1 & 0x1FF;
        temp += 8;
        temp &= 0x1FF;
        oam->attr1 &= ~0x1FF;
        oam->attr1 += temp;
        oam++;
        oam->attr1 -= 8;
        for(i = 0; i < 10; i++)
        {
            u16 * ptr2 = &gBG2MapBuffer[i*32];
            ptr2 += main->process[GAME_PROCESS_VAR1];
            for(j = 0; j < main->process[GAME_PROCESS_VAR1]; j++)
            {
                temp = gMapTrialGameOverDoors[0xE - j + i * 0xF] + 0x10A0;
                *ptr2 = temp;
                *(ptr2+0x140) = temp; 
                ptr2--;
            }
        }
        for(i = 0; i < 10; i++)
        {
            u16 * ptr2 = &gBG2MapBuffer[i*32];
            ptr2 += 0x1F-main->process[GAME_PROCESS_VAR1];
            for(j = 0; j < main->process[GAME_PROCESS_VAR1]; j++)
            {
                temp = gMapTrialGameOverDoors[0xE - j + i * 0xF] + 0x14A0;
                *ptr2 = temp;
                *(ptr2+0x140) = temp; 
                ptr2++;
            }
        }
        if(main->process[GAME_PROCESS_VAR1] < 0xF)
        {
            main->process[GAME_PROCESS_VAR1]++;
        }
        else
        {
            PlaySE(SE02C_GAME_OVER);
            main->process[GAME_PROCESS_STATE]++;
            main->process[GAME_PROCESS_VAR1] = 0;
        }
        break;
    case 2:
        if(main->process[GAME_PROCESS_VAR1] >= 120) // 2 seconds?
        {
            StartHardwareBlend(2, 3, 1, 0x1F);
            main->process[GAME_PROCESS_STATE]++;
        }
        else
        {
            main->process[GAME_PROCESS_VAR1]++;
        }
        break;
    case 3:
        if(main->blendMode == 0)
        {
            DmaFill16(3, 0, PLTT, 0x400);
            SET_PROCESS_PTR(TITLE_SCREEN_PROCESS, 0, 0, 0, main);
        }
        break;
    default:
        break;
    }
}