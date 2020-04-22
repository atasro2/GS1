#ifndef GUARD_STRUCTS_H //TODO: get rid of this file and move everything to the place they should be in
#define GUARD_STRUCTS_H

struct OamAttrs // why tho capcom there is already a struct called OamData that is the same thing as what you have here please for the love of god
				// maybe it's because of access times for u16 vs u32 but idk it seems too insignificant
{
    u16 attr0;
    u16 attr1;
    u16 attr2;
    u16 attr3;
};

struct Struct3000800 // unknown size
{
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u8 fillerC[0x34];
    struct Struct3000840
    {
        u32 unk0;
        u32 unk4;
        u32 unk8;
        u16 unkC;
        u8 unkE;
        u8 fillerF[0x1];
        u16 unk10;
        u16 unk12;
        u8 filler14[0x14];
        u16 unk28;
        u8 filler2A[0x10];
        u8 unk3A;
        u8 unk3B;
        s16 unk3C;
        u16 unk3E;
    } unk40[0x1f];
};

struct Struct3003930 // ExplCharData
{ 
    u8 id; 
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5; // status
    u8 unk6;
    u8 unk7;
    u16 attr0; /* +0x8 */
    u16 attr1; /* +0xA */
    u16 attr2; /* +0xC */
    u16 oamIdx; /* +0xE */
    u8 *volatile vramPtr; /* +0x10 */
};

struct ScriptContext
{
    u16 unk0; // message status
    u16 waitTimer; // wait timer
    u16 * scriptPtr; /* +4 */
    u16 * scriptPtr2; /* +8 */
    u16 unkC;
    u8 unkE;
    u8 unkF;
    u8 unk10;
    u8 unk11;
    u8 unk12;
    u8 unk13;
    u8 unk14;
    u8 unk15;
    u8 unk16;
    u8 unk17;
    u16 unk18;
    u16 unk1A;
    u16 unk1C;
    u16 currentSection; /* +0x1E */
    u16 nextSection; /* +0x20 */
    u16 previousSection; /* +0x22 */
    u8 textColor; /* +0x24 */
    u8 textSpeed; /* +0x25 */
    u8 unk26;
    u8 unk27;
    u16 unk28;
    u16 unk2A;
    u16 unk2C;
    u8 unk2E;
    u8 filler2F[0x3];
    u8 unk32;
    u8 unk33;
    u8 unk34;
    u8 unk35;
    u8 unk36;
    u8 unk37;
    u8 unk38;
    u8 unk39;
    u8 filler3A[0x2];
    u8 * unk3C;
};

struct SaveData
{
    char saveDataVer[0x30];
    u32 magic;
    u8 fill38[0x2998]; /*  other structs maybe? */
    u8 unk29D0;       /**/
};

struct Struct3002840
{
    u8 filler0[0x10];
    u8 unk10;
    u8 unk11;
    u8 filler12[0x6];
    u8 unk18[0x20];
    u8 unk38[0x20];
};

struct TalkData
{
    /* // ?? TODO: is this all just u8s in GS1?
    public uint room;

    public uint pl_id;

    public uint dm;

    public uint sw;

    public uint[] tag = new uint[4];

    public uint[] flag = new uint[4];

    public uint[] mess = new uint[4];
    */
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 filler4[0x10];
};

struct Struct30028A0
{
    struct TalkData talkData[32];
};

struct Struct3003A50
{
    u16 unk0;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
    u8 filler10[0x6];
    u8 unk16;
    u8 unk17;
};

struct Struct3003AB0
{
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u16 unk4;
    u8 filler6[0x2];
};

struct Struct3003C00
{
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
};

struct CourtScroll
{
    u8 * unk0;
    u16 unk4;
    u8 filler6[0x6];
    s16 unkC;
    s16 unkE;
};

struct Point4 // shamelessly stolen from unity
{
    u16 x0;
    u16 y0;
    u16 x1;
    u16 y1;
    u16 x2;
    u16 y2;
    u16 x3;
    u16 y3;
};

struct Point // shamelessly stolen from unity
{
    u16 x;
    u16 y;
};

struct Struct80187C8
{
    u8 * tiles;
    u16 size;
    u16 attr0;
    u16 attr1;
    u16 attr2;
};

#endif//GUARD_STRUCTS_H