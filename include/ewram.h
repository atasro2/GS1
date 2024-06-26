#ifndef GUARD_EWRAM_H
#define GUARD_EWRAM_H

#define eGeneralScratchpadBuffer ((void *)EWRAM_START+0xAFC0)
#define eScriptHeap ((void*) (EWRAM_START + 0x11FC0))
#define eBGDecompBuffer ((void*) (EWRAM_START + 0x2CFC0))
#define eVRAMScratchpadBuffer ((void*) (EWRAM_START + 0x31FC0))

#endif//GUARD_EWRAM_H
