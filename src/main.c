#include "gba/gba.h"

struct Struct3003730 
{
    u32 unk0;
    u8 unk4;
    u8 filler5[0x7];
    u8 unkC;
    u8 unkD;
    u8 fillerE[0x1A];
    u16 unk28;
    s16 unk2A;
    s8 unk2C;
};

extern struct Struct3003730 gUnknown_03003730;

void sub_080001EC() 
{
    u16 *input;
    u16 keys;
    if(!gUnknown_03003730.unk4) 
    {
        input = (u16 *)0x04000130;
        keys = (0x3FF ^ *input);
        if (A_BUTTON & keys)
            gUnknown_03003730.unk4 = 0xe;
    }
}