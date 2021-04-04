#include "global.h"
#include "main.h"
#include "case_data.h"
#include "investigation.h"
#include "sound.h"
#include "animation.h"

void sub_800318C(struct Main *main)
{
    DmaCopy16(3, gUnknown_08015520, gMain.roomData, 0x30);
    DmaCopy16(3, gUnknown_0801541C, gTalkData, 0x104);
    main->currentRoomId = 2;
}

void sub_80031D0(struct Main * main)
{
    DmaFill16(3, 0xFFFF, gExaminationData, sizeof(gExaminationData));
    switch(main->currentRoomId) {
        case 0: {
            if(!GetFlag(0, 0x74)) {
                if(!GetFlag(0, 0x7B)) {
                    sub_8002CCC(0x80, 0x7B);
                }
                LOADEXAMDATA(gUnknown_08015550);
            }
            else {
                if(!GetFlag(0, 0x7C)) {
                    sub_8002CCC(0x87, 0x7C);
                }
                else if(GetFlag(0, 0x75)) {
                    PlayBGM(0xC);
                }
                else {
                    PlayBGM(0x19);
                }
                LOADEXAMDATA(gUnknown_080155B4);
            }
            break;
        }
        case 2: {
            LOADEXAMDATA(gUnknown_08015618);
            if(!GetFlag(0, 0x80)) {
                if(!GetFlag(0, 0x7D)) {
                    sub_8002CCC(0x9A, 0x7D);
                }
                else {
                    sub_8002C98(0x16, 0x1D0C, 0x1D0C);
                    PlayBGM(0x16);
                }
            }
            else if(!GetFlag(0, 0x70)) {
                if(!GetFlag(0, 0x7E)) {
                    sub_8002CCC(0xA2, 0x7E);
                }
                else {
                    sub_8002C98(0x16, 0x1D0C, 0x1D0C);
                    PlayBGM(0x16);
                }
            }
            else if(!GetFlag(0, 0x7F)) {
                sub_8002CCC(0xB0, 0x7F);
            }
            break;
        }
        case 3: {
            LOADEXAMDATA(gUnknown_08015640);
            if(!GetFlag(0, 0x72)) {
                if(!GetFlag(0, 0x80)) {
                    sub_8002CCC(0xB9, 0x80);
                }
                PlayAnimation(0xD);
            }
            else if(!GetFlag(0, 0x73)) {
                if(!GetFlag(0, 0x81)) {
                    sub_8002CCC(0xCB, 0x81);
                }
            }
            else if(!GetFlag(0, 0x70)) {
                if(!GetFlag(0, 0x83)) {
                    sub_8002CCC(0xD4, 0x83);
                }
                else {
                    sub_8002C98(0xC, 0x2C8, 0x2C8);
                    PlayBGM(0x1A);
                }
            }
            else if(!GetFlag(0, 0x82)) {
                sub_8002CCC(0xE4, 0x82);
            }
            else {
                sub_8002C98(0xC, 0x2C8, 0x2C8);
                if(GetFlag(0, 0x88)) {
                    PlayBGM(0xC);
                }
                else {
                    PlayBGM(0x1A);
                }
            }
            break;
        }
        case 4: {
            if(!GetFlag(0, 0x75)) {
                if(!GetFlag(0, 0x84)) {
                    sub_8002CCC(0x11A, 0x84);
                }
                else {
                    sub_8002C98(0x15, 0x2564, 0x2564);
                    PlayBGM(0xC);
                }
                LOADEXAMDATA(gUnknown_080156B8);
            }
            else {
                if(!GetFlag(0, 0x85)) {
                    sub_8002CCC(0x12C, 0x85);
                }
                else {
                    sub_8002C98(0x15, 0x2564, 0x2564);
                    PlayBGM(0xC);
                }
                LOADEXAMDATA(gUnknown_0801571C);
            }
            break;
        }
        case 5: {
            if(!GetFlag(0, 0x73)) {
                if(!GetFlag(0, 0x86)) {
                    sub_8002CCC(0x100, 0x86);
                }
                else {
                    sub_8002C98(0x17, 0x894, 0x894);
                    PlayBGM(0x19);
                }
                LOADEXAMDATA(gUnknown_08015780);
            }
            else {
                if(!GetFlag(0, 0x87)) {
                    sub_8002CCC(0x112, 0x87);
                }
                LOADEXAMDATA(gUnknown_080157F8);
            }
            
            break;
        }
    }
}

void sub_8003544(struct Main * main)
{
    if(main->currentRoomId == 4) {
        if(!GetFlag(0, 0x71) && GetFlag(0, 0x70)) {
            LOADEXAMDATA(gUnknown_0801571C);
            ChangeFlag(0, 0x71, 1);
        }
    }
}
