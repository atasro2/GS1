#ifndef GUARD_BACKGROUND_H
#define GUARD_BACKGROUND_H

#include "court_record.h"

#define BG_MODE_SIZE_240x160 0x0
#define BG_MODE_SIZE_480x160 (1 << 0)
#define BG_MODE_SIZE_360x160 (1 << 1)
#define BG_MODE_SIZE_240x320 (1 << 2)
#define BG_MODE_SIZE_240x240 (1 << 3)
#define BG_MODE_SIZE_MASK 0xF

#define BG_MODE_NO_SCROLL 0x0
#define BG_MODE_HSCROLL_RIGHT (1 << 4)
#define BG_MODE_HSCROLL_LEFT (1 << 5)
#define BG_MODE_VSCROLL_TOP (1 << 6)
#define BG_MODE_VSCROLL_DOWN (1 << 7)

#define BG_MODE_SPECIAL_SPEEDLINE (1 << 24)
#define BG_MODE_SCROLL_SPECIAL_SLOW (1 << 25) //used in case 3 for the moon in the intro when it's scrolling down

#define BG_MODE_8BPP 0x0
#define BG_MODE_4BPP (1 << 31)

#define BG_SHIFT_LEFT 0
#define BG_SHIFT_RIGHT 1
#define BG_SHIFT_UP 2
#define BG_SHIFT_DOWN 3

struct Background
{
    /* +0x00 */ u8 * bgData;
    /* +0x04 */ u32 controlBits;
};

extern const struct Background gBackgroundTable[];

extern u16 gBG0MapBuffer[0x400];
extern u16 gBG1MapBuffer[0x400];
extern u16 gBG2MapBuffer[0x400];
extern u16 gBG3MapBuffer[0x400];
extern u16 gTilemapBuffer[0x400];

extern const u8 gTextboxTiles[0x400];
extern const u16 gMapSpeedlines[0x2C0];

struct CourtScroll
{
    /* +0x00 */ u8 * frameDataPtr;
    /* +0x04 */ u16 state;
    /* +0x06 */ u8 scrollMode;
    /* +0x07 */ u8 filler7; // padding
    /* +0x08 */ u16 scrollingPersonAnimId;
    /* +0x0A */ u16 animOffset;
    /* +0x0C */ s16 frameCounter;
    /* +0x0E */ s16 endFrame;
};

extern struct CourtScroll gCourtScroll;

void InitBGs();
void InitBG3();
void UpdateBackground();
void DecompressCurrentBGStripe(u32);
void DecompressBackgroundIntoBuffer(u32);
void CopyBGDataToVram(u32);
u32 GetBGControlBits(u32);
u8 * GetBGPalettePtr(u32);
void CopyBGDataToVramAndScrollBG(u32);
void SetTextboxSize(u32);
void UpdateTextbox();
void SlideTextbox(u32);
void SlideInBG2Window(u32, u32);
void UpdateBG2Window(struct CourtRecord *);
void SetTextboxNametag(u32, u32);
void UpdateBGTilemaps();

#endif//GUARD_BACKGROUND_H