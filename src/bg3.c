#include "global.h"
#include "background.h"
#include "ewram.h"
#include "animation.h"
#include "utils.h"
#include "constants/bg.h"

#include "data/background.h"

// BG_all_init
void InitBGs()
{
    u32 i;
    u16 *temp;
    DmaFill16(3, 0, &gBG0MapBuffer, sizeof(gBG0MapBuffer));
    for (temp = gBG1MapBuffer, i = 0; i < ARRAY_COUNT(gTextboxTiles); i++, temp++)
    {
        (*temp) = gTextboxTiles[i];
    }
    DmaFill16(3, 0, &gBG2MapBuffer, sizeof(gBG2MapBuffer));
    gIORegisters.lcd_bg2vofs = 0;
    gIORegisters.lcd_bg2hofs = 8;
    InitBG3();
}

// BG256_init
void InitBG3()
{
    u32 i = 0;
    u32 j = 0;
    struct IORegisters *ioRegsp = &gIORegisters;

    for (i = 0; i < 30; i++)
    {
        gBG3MapBuffer[GET_MAP_TILE_INDEX(0, i, 0, 1)] = 600 + i; // TODO: ??? this line doesn't ever appear in the game
    }
    for (i = 0; i < 21; i++)
    {
        for (j = 0; j < 30; j++)
        {
            gBG3MapBuffer[GET_MAP_TILE_INDEX(i, j, 1, 1)] = j + i * 30;
        }
    }
    ioRegsp->lcd_bg3vofs = 8;
    ioRegsp->lcd_bg3hofs = 8;
    DmaFill16(3, 0, VRAM + 0xDD80, 0x40); // empty 8bpp tile
}

void bg256_right_scroll_end(struct Main * main, u32 sp0) // holy shit my braincells
{
    u32 i;
    u32 r8; //r8
    u32 sp4; // sp4
    u32 sl; // sl
    u8 * r6; // r6
    main->Bg256_next_line = 30;
    main->Bg256_buff_pos++;
    if(main->Bg256_buff_pos > 30)
        main->Bg256_buff_pos = 0;
    r8 = sp0 & 0x80000000 ? 4 : 8;
    sp4 = sp0 & ~0x80000000;
    sp0 = sp4 * r8;
    sl = r8 * 8;
    r8 *= 248;
    r6 = eBGDecompBuffer;
    r6 += main->Bg256_next_line * 0x40;
    for(i = 1; i < 21; i++)
    {
        void * ptr;
        ptr = &gBG3MapBuffer[i*32];
        DmaCopy16(3, ptr, &gBG3MapBuffer[i*32+31], 2); // dear capcom dev who wrote a dma copy with size of 2 here, i am sincerely sorry but fuck you
        ptr = ((void*)BG_CHAR_ADDR(1) + (main->Bg256_buff_pos * sl) + (i-1) * r8);
        DmaCopy16(3, r6, ptr, sl);
        r6 += sp0;
    }
    if(++main->Bg256_buff_pos > 30)
        main->Bg256_buff_pos = 0;
    if(sp4 == 360)
        main->Bg256_stop_line = 0x2F;
    else
        main->Bg256_stop_line = 1;
    main->Bg256_next_line++;
    main->isBGScrolling = FALSE;
    main->Bg256_dir &= ~0x10;
    main->Bg256_dir |= 0x20;
    if(main->Bg256_pos_x < 0)
        main->horizontolBGScrollSpeed -= main->Bg256_pos_x;
    main->Bg256_pos_x = 0;
    main->Bg256_scroll_x = 0;
}

void bg256_right_scroll(struct Main * main, u32 sp0)
{
    u32 i;
    u32 sp4; // sp4
    u32 sp8; // sp8
    u32 spC; // sl
    u32 sp10;
    u8 * r6; // r6
    sp4 = main->Bg256_scroll_x / -8;
    sp8 = sp0 & 0x80000000 ? 4 : 8;
    sp10 = sp0;
    sp0 *= sp8;
    spC = sp8 * 8;
    sp8 *= 248;
    do
    {
        u8 * buf;
        buf = eBGDecompBuffer;
        buf += main->Bg256_next_line * 0x40;
        for(i = 1; i < 21; i++)
        {
            void * ptr1;
            void * ptr2;
            ptr1 = &gBG3MapBuffer[i*32];
            ptr2 = &gTilemapBuffer[i*32];
            DmaCopy16(3, ptr1, ptr2, 30*2); // copy row of tiles to buffer copy
            ptr2 = &gBG3MapBuffer[i*32+30];
            DmaCopy16(3, ptr2, ptr1, 2); // stop with the size 2 dmacopies
            ptr1 = &gTilemapBuffer[i*32];
            ptr2 = &gBG3MapBuffer[i*32+1];
            DmaCopy16(3, ptr1, ptr2, 30*2);
            ptr1 = (void*)BG_CHAR_ADDR(1) + (main->Bg256_buff_pos * spC) + (i-1) * sp8;
            DmaCopy16(3, buf, ptr1, spC);
            buf += sp0;
        }
        if(--main->Bg256_buff_pos < 0)
            main->Bg256_buff_pos = 30;
        if(--main->Bg256_next_line < 0)
            main->Bg256_next_line = 59;
        if(main->Bg256_next_line == main->Bg256_stop_line)
        {
            bg256_right_scroll_end(main, sp10);
            break;
        }
    }
    while(--sp4);
    main->Bg256_scroll_x %= 8;
}

void bg256_left_scroll_end(struct Main * main, u32 r6)
{
    u32 i;
    u32 sl;
    u32 sp0;
    u32 sp4;
    u8 * r5;
    sl = r6 & 0x80000000 ? 4 : 8;
    r6 &= ~0x80000000;
    sp4 = r6 / 2;
    r6 *= sl;
    sp0 = sl * 8;
    sl *= 248;
    if(sp4 == 360) // i have no idea what this code is doing but the assembly didn't do the decrements but it makes the code match
    {
        main->Bg256_next_line = 15;
        main->Bg256_next_line--;
    }
    else
    {
        main->Bg256_next_line = 30;
        main->Bg256_next_line--;
    }
    if(--main->Bg256_buff_pos < 0)
        main->Bg256_buff_pos = 30;
    r5 = eBGDecompBuffer;
    r5 += main->Bg256_next_line * 0x40;
    for(i = 1; i < 21; i++)
    {
        void * ptr;
        ptr = &gBG3MapBuffer[i*32+31];
        DmaCopy16(3, &gBG3MapBuffer[i*32+31], &gBG3MapBuffer[i*32], 2); // dear capcom dev who wrote a dma copy with size of 2 here, i am sincerely sorry but fuck you
        ptr = ((void*)BG_CHAR_ADDR(1) + (main->Bg256_buff_pos * sp0) + (i-1) * sl);
        DmaCopy16(3, r5, ptr, sp0);
        r5 += r6;
    }
    if(--main->Bg256_buff_pos < 0)
        main->Bg256_buff_pos = 30;
    main->Bg256_next_line--;
    main->Bg256_stop_line = 58;
    main->isBGScrolling = FALSE;
    main->Bg256_dir &= ~0x20;
    main->Bg256_dir |= 0x10;
    if(main->Bg256_pos_x > sp4)
        main->horizontolBGScrollSpeed -= main->Bg256_pos_x - sp4;
    main->Bg256_pos_x = sp4;
    main->Bg256_scroll_x = 0;
}

void bg256_left_scroll(struct Main * main, u32 sp0)
{
    u32 i;
    u32 sp4;
    u32 sp8;
    u32 spC;
    u32 sp10;
    u8 * buf;
    
    sp4 = main->Bg256_scroll_x / 8;
    sp8 = sp0 & 0x80000000 ? 4 : 8;
    sp10 = sp0;
    sp0 *= sp8; // this doesn't clear the MSB hmm
    spC = sp8 * 8;
    sp8 *= 248;
    do
    {
        buf = eBGDecompBuffer;
        buf += main->Bg256_next_line * 0x40;
        for(i = 1; i < 21; i++)
        {
            void * ptr1;
            void * ptr2;
            ptr1 = &gBG3MapBuffer[i*32+1];
            ptr2 = &gTilemapBuffer[i*32];
            DmaCopy16(3, ptr1, ptr2, 62);
            ptr1 = &gBG3MapBuffer[i*32];
            DmaCopy16(3, ptr2, ptr1, 62);
            ptr2 = &gBG3MapBuffer[i*32+31];
            DmaCopy16(3, ptr1, ptr2, 2);
            ptr1 = (void*)BG_CHAR_ADDR(1) + (main->Bg256_buff_pos * spC) + (i-1) * sp8;
            DmaCopy16(3, buf, ptr1, spC);
            buf += sp0;
        }
        if(++main->Bg256_buff_pos > 30)
            main->Bg256_buff_pos = 0;
        if(++main->Bg256_next_line > 59)
            main->Bg256_next_line = 0;
        if(main->Bg256_next_line == main->Bg256_stop_line)
        {
            bg256_left_scroll_end(main, sp10);
            break;
        }
    }
    while(--sp4);
    main->Bg256_scroll_x %= 8;
}

void bg256_down_scroll_end(struct Main * main, u32 r1)
{
    u32 i;
    u32 r5;
    u32 r6;
    void * ptr1;
    void * ptr2;
    main->Bg256_next_line = 21;
    r5 = r1 & 0x80000000 ? 4 : 8;
    r6 = r1 & ~0x80000000; // r1 -> r6
    r5 *= 240;
    if(++main->Bg256_buff_pos > 20)
        main->Bg256_buff_pos = 0;
    ptr1 = &gBG3MapBuffer[0];
    ptr2 = &gBG3MapBuffer[0x2A0];
    DmaCopy16(3, ptr1, ptr2, 64);
    ptr1 = (void*)BG_CHAR_ADDR(1) + main->Bg256_buff_pos * r5;
    ptr2 = eBGDecompBuffer + main->Bg256_next_line * r5;
    ptr2 -= r5;
    DmaCopy16(3, ptr2, ptr1, r5);
    if(++main->Bg256_buff_pos > 20)
        main->Bg256_buff_pos = 0;
    if(r6 == 320)
        main->Bg256_stop_line = 1;
    else
        main->Bg256_stop_line = 0x20;
    main->isBGScrolling = 0;
    main->Bg256_dir &= ~0x40;
    main->Bg256_dir |= 0x80;
    if(main->Bg256_pos_y < 0)
        main->verticalBGScrollSpeed -= main->Bg256_pos_y;
    main->Bg256_pos_y = 0;
    main->Bg256_scroll_y = 0;
}

void bg256_down_scroll(struct Main * main, u32 sp0)
{
    u32 i;
    u32 r8;
    u32 r6;
    u16 * map;
    r8 = main->Bg256_scroll_y / -8;
    r6 = sp0 & 0x80000000 ? 4 : 8;
    r6 *= 240;
    do
    {
        void * ptr;
        void * buf;
        DmaCopy16(3, gBG3MapBuffer, gTilemapBuffer, 0x540);
        ptr = gBG3MapBuffer + 0x20;
        DmaCopy16(3, gTilemapBuffer, ptr, 0x540);;
        DmaCopy16(3, gBG3MapBuffer + 0x2A0, gBG3MapBuffer, 0x40);
        buf = eBGDecompBuffer;
        buf += main->Bg256_next_line * r6;
        ptr = (void*)BG_CHAR_ADDR(1) + main->Bg256_buff_pos * r6;
        DmaCopy16(3, buf, ptr, r6);
        if(--main->Bg256_buff_pos < 0)
            main->Bg256_buff_pos = 20;
        if(--main->Bg256_next_line < 0)
            main->Bg256_next_line = 39;
        if(main->Bg256_next_line == main->Bg256_stop_line)
        {
            bg256_down_scroll_end(main, sp0);
            break;
        }
    }
    while(--r8);
    main->Bg256_scroll_y %= 8;
}

void bg256_up_scroll_end(struct Main * main, u32 r4)
{
    u32 r5;
    void * buf;
    void * ptr1;
    void * ptr2;
    r5 = r4 & 0x80000000 ? 4 : 8;
    r4 &= ~0x80000000;
    r5 *= 240;
    if(r4 == 320)
        main->Bg256_next_line = 18;
    else
        main->Bg256_next_line = 8;
    if(--main->Bg256_buff_pos < 0)
        main->Bg256_buff_pos = 20;
    ptr1 = gBG3MapBuffer + 0x2A0;
    ptr2 = gBG3MapBuffer;
    DmaCopy16(3, ptr1, ptr2, 0x40);
    buf = eBGDecompBuffer + main->Bg256_next_line * r5;
    buf += r5;
    ptr1 = (void*)BG_CHAR_ADDR(1) + main->Bg256_buff_pos * r5;
    DmaCopy16(3, buf, ptr1, r5);
    if(--main->Bg256_buff_pos < 0)
        main->Bg256_buff_pos = 20;
    main->Bg256_stop_line = 0x26;
    main->isBGScrolling = FALSE;
    main->Bg256_dir &= ~0x80;
    main->Bg256_dir |= 0x40;
    r4 /= 2;
    if(main->Bg256_pos_y > r4)
        main->verticalBGScrollSpeed -= main->Bg256_pos_y - r4;
    main->Bg256_pos_y = r4;
    main->Bg256_scroll_y = 0;
}

void bg256_up_scroll(struct Main * main, u32 arg0)
{
    u32 i;
    u32 sp0;
    u32 r8;
    u32 r6;
    r8 = main->Bg256_scroll_y >> 3; // oh yeah you know all those divisions we did in those function before this? yeah forget about them just do a fucking right shift 
    r6 = arg0 & 0x80000000 ? 4 : 8;
    sp0 = arg0;
    r6 *= 240;
    do
    {
        void * ptr1;
        void * ptr2;
        void * buf;

        ptr1 = gBG3MapBuffer + 0x20;
        ptr2 = gBG3MapBuffer + 0x2C0;
        DmaCopy16(3, ptr1, ptr2, 0x40);
        DmaCopy16(3, gBG3MapBuffer, gTilemapBuffer, 0x5C0);
        ptr2 = gTilemapBuffer + 0x20;
        do{}while(0); // TODO: find actual match, gBG3MapBuffer gets loaded from the pool instead of ptr1 - 0x40
        DmaCopy16(3, ptr2, gBG3MapBuffer, 0x580);
        buf = eBGDecompBuffer;
        buf += main->Bg256_next_line * r6;
        ptr2 = (void*)BG_CHAR_ADDR(1) + main->Bg256_buff_pos * r6;
        DmaCopy16(3, buf, ptr2, r6);
        if(++main->Bg256_buff_pos > 20)
            main->Bg256_buff_pos = 0;
        if(++main->Bg256_next_line > 39)
            main->Bg256_next_line = 0;
        if(main->Bg256_next_line == main->Bg256_stop_line)
        {
            bg256_up_scroll_end(main, sp0);
            break;
        }
    }
    while(--r8);
    main->Bg256_scroll_y %= 8;
}


void UpdateBackground() // BG256_main
{
    struct Main * main = &gMain;
    struct IORegisters * ioRegs = &gIORegisters;
    u32 unk0;
    u32 unk1;

    if(gCourtScroll.state != 0 && (gCourtScroll.frameCounter & 1) == 0) // frameCounter divisible by 2?
    {
        u8 * ptr = gCourtScroll.frameDataPtr;
        ioRegs->lcd_bg3cnt &= ~BGCNT_256COLOR;
        ptr += gCourtScroll.frameCounter / 2 * (0x4B00 + 0x20);
        DmaCopy16(3, ptr, PLTT+0x40, 0x20);
        ptr += 0x20;
        DmaCopy16(3, ptr, BG_CHAR_ADDR(1), 0x4B00);
    }
    if(main->isBGScrolling == FALSE)
        return;
    unk0 = gBackgroundTable[main->currentBG].controlBits;
    if(unk0 & BG_MODE_SPECIAL_SPEEDLINE)
    {
        ioRegs->lcd_bg3hofs += main->horizontolBGScrollSpeed;
        ioRegs->lcd_bg3hofs &= 0x1FF;
        return;
    }
    else if(unk0 & BG_MODE_SCROLL_SPECIAL_SLOW)
    {
        if(main->currentBG == 0x4A)
            ioRegs->lcd_bg2hofs += 1;
        else
            ioRegs->lcd_bg2hofs -= 1;
        ioRegs->lcd_bg2hofs &= 0x1FF;
        main->Bg256_pos_y += 1;
        ioRegs->lcd_bg3vofs = main->Bg256_pos_y / 40 + 8;
        return;
    }
    unk0 = main->Bg256_dir;
    if(unk0 & 0x10)
    {
        if(main->horizontolBGScrollSpeed > 0)
        {
            main->isBGScrolling = FALSE;
            return;
        }
        main->Bg256_scroll_x += main->horizontolBGScrollSpeed;
        main->Bg256_pos_x += main->horizontolBGScrollSpeed;
        unk0 = gBackgroundTable[main->currentBG].controlBits & BG_MODE_SIZE_480x160 ? 480 : 360;
        unk1 = gBackgroundTable[main->currentBG].controlBits & 0x80000000;
        unk0 |= unk1;
        if(main->Bg256_scroll_x <= -8)
            bg256_right_scroll(main, unk0);
        else if(main->Bg256_pos_x < 0)
        {
            if(--main->Bg256_buff_pos < 0)
                main->Bg256_buff_pos = 30;
            bg256_right_scroll_end(main, unk0);
        }
        OffsetAllAnimations(-main->horizontolBGScrollSpeed, 0);
    }
    else if(unk0 & 0x20)
    {
        if(main->horizontolBGScrollSpeed < 0)
        {
            main->isBGScrolling = FALSE;
            return;
        }
        main->Bg256_scroll_x += main->horizontolBGScrollSpeed;
        main->Bg256_pos_x += main->horizontolBGScrollSpeed;
        unk0 = gBackgroundTable[main->currentBG].controlBits & BG_MODE_SIZE_480x160 ? 480 : 360;
        unk1 = gBackgroundTable[main->currentBG].controlBits & 0x80000000;
        unk0 |= unk1;
        if(main->Bg256_scroll_x >= 8)
            bg256_left_scroll(main, unk0);
        if(main->Bg256_pos_x > unk0/2)
        {
            if(++main->Bg256_buff_pos > 30)
                main->Bg256_buff_pos = 0;
            bg256_left_scroll_end(main, unk0);
        }
        OffsetAllAnimations(-main->horizontolBGScrollSpeed, 0);
    }
    else if(unk0 & 0x40)
    {
        if(main->verticalBGScrollSpeed > 0)
        {
            main->isBGScrolling = FALSE;
            return;
        }
        main->Bg256_scroll_y += main->verticalBGScrollSpeed;
        main->Bg256_pos_y += main->verticalBGScrollSpeed;
        unk0 = gBackgroundTable[main->currentBG].controlBits & BG_MODE_SIZE_240x320 ? 320 : 240;
        unk1 = gBackgroundTable[main->currentBG].controlBits & 0x80000000;
        unk0 |= unk1;
        if(main->Bg256_scroll_y <= -8)
            bg256_down_scroll(main, unk0);
        else if(main->Bg256_pos_y <= 0)
        {
            if(--main->Bg256_buff_pos < 0)
                main->Bg256_buff_pos = 20;
            bg256_down_scroll_end(main, unk0);
        }
        OffsetAllAnimations(0, -main->verticalBGScrollSpeed);
    }
    else if(unk0 & 0x80)
    {
        if(main->horizontolBGScrollSpeed < 0) // why horizontolBGScrollSpeed?
        {
            main->isBGScrolling = FALSE;
            return;
        }
        main->Bg256_scroll_y += main->verticalBGScrollSpeed;
        main->Bg256_pos_y += main->verticalBGScrollSpeed;
        unk0 = gBackgroundTable[main->currentBG].controlBits & BG_MODE_SIZE_240x320 ? 320 : 240;
        unk1 = gBackgroundTable[main->currentBG].controlBits & 0x80000000;
        unk0 |= unk1;
        if(main->Bg256_scroll_y >= 8)
            bg256_up_scroll(main, unk0);
        else if(main->Bg256_pos_y > unk0/2)
        {
            if(++main->Bg256_buff_pos > 20)
                main->Bg256_buff_pos = 0;
            bg256_up_scroll_end(main, unk0*2);
        }
        OffsetAllAnimations(0, -main->verticalBGScrollSpeed);
    }
    ioRegs->lcd_bg3vofs = main->Bg256_scroll_y + 8;
    ioRegs->lcd_bg3hofs = main->Bg256_scroll_x + 8;
}

void DecompressCurrentBGStripe(u32 bgId)
{
    u32 i;
    u32 size;
    u32 flags;
    u8 * bgData;
    bgId &= ~0x8000;
    if(bgId == 0xFF)
    {
        gMain.currentBgStripe = 11;
        UpdateAnimations(gMain.previousBG);
        return;
    }
    bgData = (void*)gBackgroundTable[bgId].bgData;
    if(gMain.currentBgStripe == 1)
    {
        u32 * ptr;
        ptr = (u32 *)bgData;
        for(i = 1; i < 11; i++)
            gMain.bgStripeOffsets[i] = *ptr++;
        UpdateAnimations(gMain.previousBG);
    }
    bgData += gMain.bgStripeOffsets[gMain.currentBgStripe];
    flags = gBackgroundTable[bgId].controlBits; 
    if(flags & BG_MODE_SIZE_480x160)
        size = 0x1E00;
    else if(flags & BG_MODE_SIZE_240x320)
        size = 0x1E00;
    else
        size = 0xF00;
    if(flags & BG_MODE_4BPP)
        size /= 2;
    if(gMain.currentBgStripe == 1)
    {
        if(flags & BG_MODE_4BPP)
            bgData += 0x20;
        else
            bgData += 0x200;
        gMain.bgStripeDestPtr = eBGDecompBuffer;
    }
    else
        gMain.bgStripeDestPtr += size;
    LZ77UnCompWram(bgData, gMain.bgStripeDestPtr);
    gMain.currentBgStripe++;
}

void DecompressBackgroundIntoBuffer(u32 bgId)
{
    u32 i;
    u32 size;
    u32 flags;
    u8 * bgData;
    u32 * ptr;
    UpdateAnimations(gMain.previousBG);
    bgId &= ~0x8000;
    if(bgId == 0xFF) 
        return;
    bgData = (void*)gBackgroundTable[bgId].bgData;
    ptr = (u32 *)bgData;
    for(i = 1; i < 11; i++)
        gMain.bgStripeOffsets[i] = *ptr++;
    flags = gBackgroundTable[bgId].controlBits;
    if(flags & BG_MODE_SIZE_480x160)
        size = 0x1E00;
    else if(flags & BG_MODE_SIZE_240x320)
        size = 0x1E00;
    else
        size = 0xF00;
    if(flags & BG_MODE_4BPP)
        size /= 2;

    if(flags & BG_MODE_4BPP)
        bgData += 0x20;
    else
        bgData += 0x200;
    bgData += gMain.bgStripeOffsets[1];
    gMain.bgStripeDestPtr = eBGDecompBuffer;
    LZ77UnCompWram(bgData, gMain.bgStripeDestPtr);
    for(i = 2; i < 11; i++)
    {
        gMain.bgStripeDestPtr += size;
        bgData = gBackgroundTable[bgId].bgData;
        bgData += gMain.bgStripeOffsets[i];
        LZ77UnCompWram(bgData, gMain.bgStripeDestPtr);
    }
}

void LoadCase3IntroBackgrounds()
{
    struct Main * main = &gMain;
    struct IORegisters * ioRegs = &gIORegisters;
    void * bgPtr;
    void * tempPtr;
    u32 * ptr;
    u32 stripeSize;
    u32 i, j;
    bgPtr = gGfx_BG069_SteelSamuraiNight;
    bgPtr+=0x28;
    DmaCopy16(3, bgPtr, PLTT+0x40, 0x20);
    ioRegs->lcd_bg3cnt &= ~BGCNT_256COLOR;
    *(u16*)&REG_BG3CNT &= ~BGCNT_256COLOR; // volatile causes code diff lol
    bgPtr = gGfx_BG074_Case3IntroGrass;
    ptr = bgPtr;
    stripeSize = 0xF00;
    stripeSize /= 2;
    for(i = 1; i < 11; i++)
        main->bgStripeOffsets[i] = *ptr++;
    tempPtr = bgPtr + 0x20;
    tempPtr += main->bgStripeOffsets[1]; 
    bgPtr = tempPtr;
    main->bgStripeDestPtr = eBGDecompBuffer+0x5000;
    LZ77UnCompWram(bgPtr, main->bgStripeDestPtr);
    for(i = 2; i < 11; i++)
    {
        main->bgStripeDestPtr += stripeSize;
        bgPtr = gGfx_BG074_Case3IntroGrass + main->bgStripeOffsets[i]; 
        LZ77UnCompWram(bgPtr, main->bgStripeDestPtr);
    }
    bgPtr = gGfx_BG074_Case3IntroGrass;
    bgPtr += 0x28;
    DmaCopy16(3, bgPtr, PLTT+0x60, 0x20);
    gIORegisters.lcd_bg2cnt = BGCNT_PRIORITY(0) | BGCNT_CHARBASE(2) | BGCNT_SCREENBASE(30) | BGCNT_16COLOR | BGCNT_WRAP;
    gIORegisters.lcd_dispcnt |= DISPCNT_BG2_ON;
    for(i = 0; i < 20; i++)
    {
        for (j = 0; j < 30; j++)
        {
            gBG3MapBuffer[j + i * 32 + 0x1 + 0x20] = (j + i * 30) | 0x2000;
            gBG2MapBuffer[j + i * 32 + 0x1] = ((j + i * 30) + 0x80) | 0x3000;
        }
        gBG2MapBuffer[i * 32] = gBG2MapBuffer[i * 32 + 31] = 0x80 | 0x3000;
    }
    for(i = 20; i < 25; i++)
    {
        for (j = 0; j < 30; j++)
            gBG3MapBuffer[GET_MAP_TILE_INDEX(i, j, 1, 1)] = 0x2000;
    }
    DmaCopy16(3, eBGDecompBuffer, BG_CHAR_ADDR(1), 0x9B00);
    gMain.isBGScrolling = TRUE;
}

void CopyBGDataToVram(u32 bgId)
{
    struct Main * main = &gMain; // r8
    struct IORegisters * ioReg = &gIORegisters; // r9 sb
    void * dst;
    const void * src;
    u8 * tempPtr;
    u8 * bgData;
    bool32 is4bpp;
    u32 tempBgCtrl;
    u32 tempSize;
    u32 i, j;

    if(bgId >= 74 && bgId <= 75)
    {
        LoadCase3IntroBackgrounds();
        return;
    }
    MoveAnimationTilesToRam(0);
    MoveSpritesToOAM();
    tempBgCtrl = bgId;
    bgId &= ~0x8000;
    ioReg->lcd_bg3vofs = 8;
    ioReg->lcd_bg3hofs = 8;
    main->isBGScrolling = FALSE;
    main->Bg256_pos_x = 0;
    main->Bg256_pos_y = 0;
    main->currentBG = bgId;
    if(bgId == 0xFF)
    {
        src = gMapSpeedlines;
        dst = gBG3MapBuffer;
        DmaCopy16(3, src, dst, sizeof(gMapSpeedlines));
        DmaFill16(3, 0, BG_PLTT+0x40, 0x1C0);
        DmaFill16(3, 0x2222, VRAM+0x4000, 0x9600);
        return;
    }
    i = gBackgroundTable[bgId].controlBits;
    if(i & BG_MODE_SPECIAL_SPEEDLINE)
    {
        //u32 temp;
        src = gMapSpeedlines;
        dst = gBG3MapBuffer;
        DmaCopy16(3, src, dst, sizeof(gMapSpeedlines));
        j = 0x258;
        j++;j--;
        for(i = 0; i < 20; i++, j++)
            gBG3MapBuffer[i * 0x20 + 0x20] = j | 0x2000;
        for(i = 0; i < 20; i++, j++)
            gBG3MapBuffer[i * 0x20 + 0x3F] = j | 0x2000;
        main->isBGScrolling = TRUE;
        DmaCopy16(3, gGfx_SpeedlinesFirstAndLastColumns, eBGDecompBuffer+0x4B00, 0x500);
    }
    if(tempBgCtrl & 0x8000)
    {
        tempBgCtrl = gBackgroundTable[bgId].controlBits; 
        if(tempBgCtrl & BG_MODE_VSCROLL_TOP)
        {
            tempBgCtrl &= ~BG_MODE_VSCROLL_TOP;
            tempBgCtrl |= BG_MODE_VSCROLL_DOWN;
        }
        else if(tempBgCtrl & BG_MODE_VSCROLL_DOWN)
        {
            tempBgCtrl &= ~BG_MODE_VSCROLL_DOWN;
            tempBgCtrl |= BG_MODE_VSCROLL_TOP;
        }
        else if(tempBgCtrl & BG_MODE_HSCROLL_RIGHT)
        {
            tempBgCtrl &= ~BG_MODE_HSCROLL_RIGHT;
            tempBgCtrl |= BG_MODE_HSCROLL_LEFT;
        }
        else if(tempBgCtrl & BG_MODE_HSCROLL_LEFT)
        {
            tempBgCtrl &= ~BG_MODE_HSCROLL_LEFT;
            tempBgCtrl |= BG_MODE_HSCROLL_RIGHT;
        }   
    }
    else
        tempBgCtrl = gBackgroundTable[bgId].controlBits;
    bgData = gBackgroundTable[bgId].bgData + 0x28;
    if(tempBgCtrl & BG_MODE_4BPP)
    {
        is4bpp = TRUE;
        ioReg->lcd_bg3cnt &= ~BGCNT_256COLOR;
        DmaCopy16(3, bgData, BG_PLTT+0x40, 0x20);
        if(gBackgroundTable[bgId].controlBits & BG_MODE_SPECIAL_SPEEDLINE)
        {
            src = gPal_BG064_BustupPhoenix;
            dst = (void*)BG_PLTT+0x1C0;
            DmaCopy16(3, src, dst, 0x20);
            src = gPal_BG065_BustupEdgeworth;
            dst = (void*)BG_PLTT+0x1E0;
            DmaCopy16(3, src, dst, 0x20);
            src = eBGDecompBuffer + 0x4B00;
            dst = (void *)BG_CHAR_ADDR(1) + 0x4B00;
            DmaCopy16(3, src, dst, 0x5000);
            src = gBG2MapBuffer;
            dst = (void *)BG_SCREEN_ADDR(30);
            DmaCopy16(3, src, dst, 0x580);
            *(u16 *)REG_ADDR_BG2CNT = *(u16 *)&ioReg->lcd_bg2cnt;
        }
        else
        {
            DmaFill16(3, 0, BG_CHAR_ADDR(1)+0x4EC0, 0x20);
        }
    }
    else
    {
        is4bpp = FALSE;
        ioReg->lcd_bg3cnt |= BGCNT_256COLOR;
        DmaCopy16(3, bgData, BG_PLTT, 0x200);
    }
    *(u16*)&REG_DISPCNT = *(u16 *)&gIORegisters.lcd_dispcnt;
    REG_BG3CNT = ioReg->lcd_bg3cnt;
    *(u32*)&REG_BG3HOFS = *(u32*)&ioReg->lcd_bg3hofs;
    main->Bg256_dir = tempBgCtrl;
    bgData = eBGDecompBuffer;
    if((tempBgCtrl & BG_MODE_SIZE_MASK) == 0)
    {
        if((tempBgCtrl & BG_MODE_SPECIAL_SPEEDLINE) == 0)
        {
            src = gMapSpeedlines;
            dst = gBG3MapBuffer;
            DmaCopy16(3, src, dst, sizeof(gMapSpeedlines));
        }
        src = gBG3MapBuffer;
        dst = (void *)BG_SCREEN_ADDR(31);
        DmaCopy16(3, src, dst, 0x800);
        DmaCopy16(3, bgData, BG_CHAR_ADDR(1), 0x9600 >> is4bpp);
        return;
    }
    else
    {
        if(tempBgCtrl & (BG_MODE_SIZE_240x320 | BG_MODE_SIZE_240x240))
        {
            if(tempBgCtrl & BG_MODE_VSCROLL_TOP)
            {
                if(tempBgCtrl & BG_MODE_SIZE_240x320)
                {
                    bgData += 0x9600 >> is4bpp;
                    main->Bg256_next_line = 0x12;
                    main->Bg256_pos_y = 0xA0;        
                }
                else
                {
                    bgData -= 0x4B00 >> is4bpp;
                    main->Bg256_next_line = 0x8;
                    main->Bg256_pos_y = 0x50;
                }
                DmaCopy16(3, bgData, BG_CHAR_ADDR(1), 0x9600 >> is4bpp);
                bgData = eBGDecompBuffer + ((main->Bg256_next_line * 0x780) >> is4bpp); // lol gg good luck
                bgData += 0x780 >> is4bpp;
                DmaCopy16(3, bgData, BG_CHAR_ADDR(1) + (0x9600 >> is4bpp), 0x780 >> is4bpp);
                main->Bg256_buff_pos = 0x13;
                main->Bg256_stop_line = 0x26;
            }
            else
            {
                DmaCopy16(3, bgData, BG_CHAR_ADDR(1), 0x9D80 >> is4bpp);
                main->Bg256_pos_y = 0;
                main->Bg256_buff_pos = 0;
                main->Bg256_next_line = 0x15;
                if(tempBgCtrl & BG_MODE_SIZE_240x320)
                    main->Bg256_stop_line = 1;
                else
                    main->Bg256_stop_line = 0x20;
            }
            for(i = 0; i < 2; i++)
            {
                for(j = 0; j < 30; j++)
                    gBG3MapBuffer[(i * 0x2A0) + 1 + j] = (0x258 + j) | 0x2000;
            }
        }
        else
        {
            tempSize = tempBgCtrl & BG_MODE_SIZE_480x160 ? 0xF00 : 0xB40;
            if(tempBgCtrl & BG_MODE_HSCROLL_RIGHT)
            {
                main->Bg256_buff_pos = 0x1E;
                main->Bg256_stop_line = 0x3A;
                if(tempBgCtrl & BG_MODE_SIZE_480x160)
                {
                    bgData += 0x740;
                    main->Bg256_next_line = 0x1C;
                    main->Bg256_pos_x = 0xF0;
                }
                else
                {
                    bgData += 0x380;
                    main->Bg256_next_line = 0xD;
                    main->Bg256_pos_x = 0x78;
                }
                for(i = 0; i < 20; i++)
                {
                    for(j = 0; j < 31; j++)
                        gBG3MapBuffer[i * 0x20 + 0x20 + j] = (j + i * 0x1F) | 0x2000;
                }
            }
            else if(tempBgCtrl & BG_MODE_HSCROLL_LEFT)
            {
                main->Bg256_next_line = 0x1F;
                main->Bg256_pos_x = 0;
                main->Bg256_buff_pos = 0;
                if(tempBgCtrl & BG_MODE_SIZE_480x160)
                    main->Bg256_stop_line = 1;
                else
                    main->Bg256_stop_line = 0x2F;
                for(i = 0; i < 20; i++)
                {
                    for(j = 0; j < 31; j++)
                        gBG3MapBuffer[i * 0x20 + 0x21 + j] = (j + i * 0x1F) | 0x2000;
                }
            }
            for(i = 0; i < 2; i++)
            {
                for(j = 0; j < 32; j++)
                    gBG3MapBuffer[i * 0x2A0 + j] = 0x276 | 0x2000;
            }
            tempPtr = BG_CHAR_ADDR(1);
            for(i = 0; i < 20; i++)
            {
                DmaCopy16(3, bgData, tempPtr, 0x7C0 >> is4bpp);
                bgData += tempSize >> is4bpp;
                tempPtr += 0x7C0 >> is4bpp; 
            }
        }
        src = gBG3MapBuffer;
        dst = (void*)BG_SCREEN_ADDR(31);
        DmaCopy16(3, src, dst, 0x800);
    }
}

void CopyBGDataToVramAndScrollBG(u32 bgId)
{
    struct Main * main = &gMain;
    u16 sp0 = main->previousBG;
    bool32 r8 = main->isBGScrolling;
    u16 sl = main->Bg256_pos_x;
    u16 spC = main->Bg256_pos_y;
    u8 r6 = main->horizontolBGScrollSpeed;
    u8 r5 = main->verticalBGScrollSpeed;
    u32 unk0;
    CopyBGDataToVram(bgId);
    main->previousBG = sp0;
    main->isBGScrolling = r8;
    main->horizontolBGScrollSpeed = r6;
    main->verticalBGScrollSpeed = r5;
    main->Bg256_scroll_x = main->Bg256_pos_x - sl;
    main->Bg256_scroll_y = main->Bg256_pos_y - spC;
    unk0 = gBackgroundTable[main->currentBG].controlBits;
    if(unk0 & BG_MODE_SPECIAL_SPEEDLINE)
        return;
    unk0 &= BG_MODE_4BPP;
    if(main->Bg256_scroll_x > 0)
    {
        main->Bg256_pos_x = sl;
        main->Bg256_scroll_x *= -1;
        if(gBackgroundTable[main->currentBG].controlBits & BG_MODE_SIZE_480x160)
            unk0 |= 480;
        else
            unk0 |= 360;
        bg256_right_scroll(main, unk0);
    }
    else if(main->Bg256_scroll_x < 0)
    {
        main->Bg256_pos_x = sl;
        main->Bg256_scroll_x *= -1;
        if(gBackgroundTable[main->currentBG].controlBits & BG_MODE_SIZE_480x160)
            unk0 |= 480;
        else
            unk0 |= 360;
        bg256_left_scroll(main, unk0);
    }
    else if(main->Bg256_scroll_y > 0)
    {
        main->Bg256_pos_y = spC;
        main->Bg256_scroll_y *= -1;
        if(gBackgroundTable[main->currentBG].controlBits & BG_MODE_SIZE_240x320)
            unk0 |= 320;
        else
            unk0 |= 240;
        bg256_down_scroll(main, unk0);
    }
    else if(main->Bg256_scroll_y < 0)
    {
        main->Bg256_pos_y = spC;
        main->Bg256_scroll_y *= -1;
        if(gBackgroundTable[main->currentBG].controlBits & BG_MODE_SIZE_240x320)
            unk0 |= 320;
        else
            unk0 |= 240;
        bg256_up_scroll(main, unk0);
    }
}

u32 GetBGControlBits(u32 bgId)
{
    return gBackgroundTable[bgId].controlBits;
}

u8 * GetBGPalettePtr(u32 bgId)
{
    return gBackgroundTable[bgId].bgData + 0x28;
}
