#ifndef GUARD_GRAPHICS_H
#define GUARD_GRAPHICS_H

#ifndef NONMATCHING

#ifndef ROM_START
#define ROM_START 0x08000000 // why is this not already a fucking define 
#endif

#define GFX_BASE_ADDR (ROM_START + 0x180000)

#define gUnknown_08180000 ((u8*)(ROM_START + 0x180000))
#define gUnknown_08180200 ((u8*)(ROM_START + 0x180200))
#define gUnknown_08182D08 ((u8*)(ROM_START + 0x182D08))
#define gUnknown_08182F08 ((u8*)(ROM_START + 0x182F08))
#define gUnusedAsciiCharSet ((u8*)(ROM_START + 0x185D20))
#define gUnknown_08186520 ((u8*)(GFX_BASE_ADDR + 0x6520))
#define gUnknown_08186540 ((u8*)(ROM_START + 0x186540))
#define gUnknown_08187540 ((u8*)(ROM_START + 0x187540))
#define gUnknown_0818BD40 ((u8*)(GFX_BASE_ADDR + 0xBD40))
#define gUnknown_0818C040 ((u8*)(GFX_BASE_ADDR + 0xC040))
#define gUnknown_0818E4C0 ((u8*)(ROM_START + 0x18E4C0))
#define gUnknown_0818F4C0 ((u8*)(GFX_BASE_ADDR + 0xF4C0))
#define gUnknown_0818F6C0 ((u8*)(ROM_START + 0x18F6C0))
#define gUnknown_0818F8C0 ((u8*)(ROM_START + 0x18F8C0))
#define gUnknown_081900C0 ((u8*)(ROM_START + 0x1900C0))
#define gUnknown_081904C0 ((u8*)(GFX_BASE_ADDR + 0x104C0))
#define gUnknown_081906C0 ((u8*)(GFX_BASE_ADDR + 0x106C0))
#define gUnknown_081908C0 ((u8*)(ROM_START + 0x1908C0))
#define gUnknown_08190AC0 ((u8*)(ROM_START + 0x190AC0))
#define gUnknown_08190FC0 ((u8*)(ROM_START + 0x190FC0))
#define gUnknown_081911C0 ((u8*)(ROM_START + 0x1911C0))
#define gUnknown_081914A0 ((u8*)(ROM_START + 0x1914A0))
#define gUnknown_08191CA0 ((u8*)(ROM_START + 0x191CA0))
#define gUnknown_081924A0 ((u8*)(ROM_START + 0x1924A0))
#define gUnknown_08192CA0 ((u8*)(ROM_START + 0x192CA0))
#define gUnknown_08193CA0 ((u8*)(ROM_START + 0x193CA0))
#define gUnknown_081940A0 ((u8*)(ROM_START + 0x1940A0))
#define gUnknown_081940E0 ((u8*)(GFX_BASE_ADDR + 0x140E0))
#define gUnknown_08194200 ((u8*)(GFX_BASE_ADDR + 0x14200))
#define gUnknown_08194240 ((u8*)(GFX_BASE_ADDR + 0x14240))
#define gUnknown_08194260 ((u8*)(GFX_BASE_ADDR + 0x14260))
#define gUnknown_08194280 ((u8*)(ROM_START + 0x194280))
#define gUnknown_081942A0 ((u8*)(ROM_START + 0x1942A0))
#define gUnknown_081942C0 ((u8*)(GFX_BASE_ADDR + 0x142C0))
#define gUnknown_081944E0 ((u8*)(ROM_START + 0x1944E0))
#define gUnknown_08194500 ((u8*)(ROM_START + 0x194500))
#define gUnknown_08194520 ((u8*)(ROM_START + 0x194520))
#define gUnknown_08194540 ((u8*)(ROM_START + 0x194540))
#define gUnknown_08194560 ((u8*)(ROM_START + 0x194560))
#define gUnknown_08194580 ((u8*)(ROM_START + 0x194580))
#define gUnknown_08194640 ((u8*)(ROM_START + 0x194640))
#define gUnknown_081946C0 ((u8*)(ROM_START + 0x1946C0))
#define gUnknown_081954A8 ((u8*)(ROM_START + 0x1954A8))
#define gUnknown_081964A8 ((u8*)(ROM_START + 0x1964A8))
#define gUnknown_08196CA8 ((u8*)(ROM_START + 0x196CA8))
#define gUnknown_081970DC ((u8*)(ROM_START + 0x1970DC))
#define gUnknown_08197514 ((u8*)(ROM_START + 0x197514))
#define gUnknown_08197928 ((u8*)(ROM_START + 0x197928))
#define gUnknown_08197D18 ((u8*)(ROM_START + 0x197D18))
#define gUnknown_081981A0 ((u8*)(ROM_START + 0x1981A0))
#define gUnknown_081985D8 ((u8*)(ROM_START + 0x1985D8))
#define gUnknown_08198A84 ((u8*)(ROM_START + 0x198A84))
#define gUnknown_08198E5C ((u8*)(ROM_START + 0x198E5C))
#define gUnknown_08199228 ((u8*)(ROM_START + 0x199228))
#define gUnknown_08199690 ((u8*)(ROM_START + 0x199690))
#define gUnknown_08199AEC ((u8*)(ROM_START + 0x199AEC))
#define gUnknown_08199EC8 ((u8*)(ROM_START + 0x199EC8))
#define gUnknown_0819A2E4 ((u8*)(ROM_START + 0x19A2E4))
#define gUnknown_0819A700 ((u8*)(ROM_START + 0x19A700))
#define gUnknown_0819ABBC ((u8*)(ROM_START + 0x19ABBC))
#define gUnknown_0819B028 ((u8*)(ROM_START + 0x19B028))
#define gUnknown_0819B428 ((u8*)(ROM_START + 0x19B428))
#define gUnknown_0819B868 ((u8*)(ROM_START + 0x19B868))
#define gUnknown_0819BCE4 ((u8*)(ROM_START + 0x19BCE4))
#define gUnknown_0819C0D8 ((u8*)(ROM_START + 0x19C0D8))
#define gUnknown_0819C434 ((u8*)(ROM_START + 0x19C434))
#define gUnknown_0819C810 ((u8*)(ROM_START + 0x19C810))
#define gUnknown_0819CC44 ((u8*)(ROM_START + 0x19CC44))
#define gUnknown_0819D028 ((u8*)(ROM_START + 0x19D028))
#define gUnknown_0819D4C8 ((u8*)(ROM_START + 0x19D4C8))
#define gUnknown_0819D90C ((u8*)(ROM_START + 0x19D90C))
#define gUnknown_0819DDAC ((u8*)(ROM_START + 0x19DDAC))
#define gUnknown_0819E18C ((u8*)(ROM_START + 0x19E18C))
#define gUnknown_0819E5A0 ((u8*)(ROM_START + 0x19E5A0))
#define gUnknown_0819E9D8 ((u8*)(ROM_START + 0x19E9D8))
#define gUnknown_0819EDF0 ((u8*)(ROM_START + 0x19EDF0))
#define gUnknown_0819F208 ((u8*)(ROM_START + 0x19F208))
#define gUnknown_0819F5C0 ((u8*)(ROM_START + 0x19F5C0))
#define gUnknown_0819F9E8 ((u8*)(ROM_START + 0x19F9E8))
#define gUnknown_0819FD84 ((u8*)(ROM_START + 0x19FD84))
#define gUnknown_081A0120 ((u8*)(ROM_START + 0x1A0120))
#define gUnknown_081A0580 ((u8*)(ROM_START + 0x1A0580))
#define gUnknown_081A09E4 ((u8*)(ROM_START + 0x1A09E4))
#define gUnknown_081A0E58 ((u8*)(ROM_START + 0x1A0E58))
#define gUnknown_081A1324 ((u8*)(ROM_START + 0x1A1324))
#define gUnknown_081A1728 ((u8*)(ROM_START + 0x1A1728))
#define gUnknown_081A1A10 ((u8*)(ROM_START + 0x1A1A10))
#define gUnknown_081A1E1C ((u8*)(ROM_START + 0x1A1E1C))
#define gUnknown_081A22A4 ((u8*)(ROM_START + 0x1A22A4))
#define gUnknown_081A26BC ((u8*)(ROM_START + 0x1A26BC))
#define gUnknown_081A2AE4 ((u8*)(ROM_START + 0x1A2AE4))
#define gUnknown_081A2EE4 ((u8*)(ROM_START + 0x1A2EE4))
#define gUnknown_081A3330 ((u8*)(ROM_START + 0x1A3330))
#define gUnknown_081A3714 ((u8*)(ROM_START + 0x1A3714))
#define gUnknown_081A3B44 ((u8*)(ROM_START + 0x1A3B44))
#define gUnknown_081A3FF8 ((u8*)(ROM_START + 0x1A3FF8))
#define gUnknown_081A439C ((u8*)(ROM_START + 0x1A439C))
#define gUnknown_081A47D4 ((u8*)(ROM_START + 0x1A47D4))
#define gUnknown_081A4BD4 ((u8*)(ROM_START + 0x1A4BD4))
#define gUnknown_081A4FF0 ((u8*)(ROM_START + 0x1A4FF0))
#define gUnknown_081A541C ((u8*)(ROM_START + 0x1A541C))
#define gUnknown_081A5828 ((u8*)(ROM_START + 0x1A5828))
#define gUnknown_081A5BF4 ((u8*)(ROM_START + 0x1A5BF4))
#define gUnknown_081A5FA4 ((u8*)(ROM_START + 0x1A5FA4))
#define gUnknown_081A639C ((u8*)(ROM_START + 0x1A639C))
#define gUnknown_081A675C ((u8*)(ROM_START + 0x1A675C))
#define gUnknown_081A6B88 ((u8*)(ROM_START + 0x1A6B88))
#define gUnknown_081A6F68 ((u8*)(ROM_START + 0x1A6F68))
#define gUnknown_081A7310 ((u8*)(ROM_START + 0x1A7310))
#define gUnknown_081A775C ((u8*)(ROM_START + 0x1A775C))
#define gUnknown_081A7B68 ((u8*)(ROM_START + 0x1A7B68))
#define gUnknown_081A7FA4 ((u8*)(ROM_START + 0x1A7FA4))
#define gUnknown_081A83C4 ((u8*)(ROM_START + 0x1A83C4))
#define gUnknown_081A8828 ((u8*)(ROM_START + 0x1A8828))
#define gUnknown_081A8C30 ((u8*)(ROM_START + 0x1A8C30))
#define gUnknown_081A8F4C ((u8*)(ROM_START + 0x1A8F4C))
#define gUnknown_081A9380 ((u8*)(ROM_START + 0x1A9380))
#define gUnknown_081A97CC ((u8*)(ROM_START + 0x1A97CC))
#define gUnknown_081A9BC8 ((u8*)(ROM_START + 0x1A9BC8))
#define gUnknown_081AA054 ((u8*)(ROM_START + 0x1AA054))
#define gUnknown_081AA458 ((u8*)(ROM_START + 0x1AA458))
#define gUnknown_081AA894 ((u8*)(ROM_START + 0x1AA894))
#define gUnknown_081AACDC ((u8*)(ROM_START + 0x1AACDC))
#define gUnknown_081AB178 ((u8*)(ROM_START + 0x1AB178))
#define gUnknown_081AB574 ((u8*)(ROM_START + 0x1AB574))
#define gUnknown_081AB9FC ((u8*)(ROM_START + 0x1AB9FC))
#define gUnknown_081ABE00 ((u8*)(ROM_START + 0x1ABE00))
#define gUnknown_081AC2B0 ((u8*)(ROM_START + 0x1AC2B0))
#define gUnknown_081AC75C ((u8*)(ROM_START + 0x1AC75C))
#define gUnknown_081ACBFC ((u8*)(ROM_START + 0x1ACBFC))
#define gUnknown_081AD02C ((u8*)(ROM_START + 0x1AD02C))
#define gUnknown_081AD448 ((u8*)(ROM_START + 0x1AD448))
#define gUnknown_081AD864 ((u8*)(ROM_START + 0x1AD864))
#define gUnknown_081ADCD4 ((u8*)(ROM_START + 0x1ADCD4))
#define gUnknown_081AE0DC ((u8*)(ROM_START + 0x1AE0DC))
#define gUnknown_081AE4FC ((u8*)(ROM_START + 0x1AE4FC))
#define gUnknown_081AE938 ((u8*)(ROM_START + 0x1AE938))
#define gUnknown_081AED3C ((u8*)(ROM_START + 0x1AED3C))
#define gUnknown_081AF15C ((u8*)(ROM_START + 0x1AF15C))
#define gUnknown_081AF5A8 ((u8*)(ROM_START + 0x1AF5A8))
#define gUnknown_081AF9DC ((u8*)(ROM_START + 0x1AF9DC))
#define gUnknown_081AFE0C ((u8*)(ROM_START + 0x1AFE0C))
#define gUnknown_081B01D0 ((u8*)(ROM_START + 0x1B01D0))
#define gUnknown_081B0594 ((u8*)(ROM_START + 0x1B0594))
#define gUnknown_081B0984 ((u8*)(ROM_START + 0x1B0984))
#define gUnknown_081B0DC4 ((u8*)(ROM_START + 0x1B0DC4))
#define gUnknown_081B1150 ((u8*)(ROM_START + 0x1B1150))
#define gUnknown_081B14EC ((u8*)(ROM_START + 0x1B14EC))
#define gUnknown_081B18C0 ((u8*)(ROM_START + 0x1B18C0))
#define gUnknown_081B1CBC ((u8*)(ROM_START + 0x1B1CBC))
#define gUnknown_081B2150 ((u8*)(ROM_START + 0x1B2150))
#define gUnknown_081B25F0 ((u8*)(ROM_START + 0x1B25F0))

#define gUnknown_081B290C ((u8*)(GFX_BASE_ADDR + 0x3290C))

//~ extern u8 gTextPal[0x20];
#define gTextPal ((u8*)(ROM_START + 0x1d310c))
#define gCharSet ((u8*)(GFX_BASE_ADDR + 0x5312C))

#define gUnknown_081FD92C ((u8*)(ROM_START + 0x1FD92C))
#define gUnknown_081FD94C ((u8*)(ROM_START + 0x1FD94C))
	
#define gUnknown_081FD96C ((u8*)(ROM_START + 0x1FD96C))
#define gUnknown_081FE16C ((u8*)(ROM_START + 0x1FE16C))
#define gUnknown_081FE96C ((u8*)(ROM_START + 0x1FE96C))
#define gUnknown_081FF16C ((u8*)(ROM_START + 0x1FF16C))
#define gUnknown_081FF96C ((u8*)(ROM_START + 0x1FF96C))
#define gUnknown_0820016C ((u8*)(ROM_START + 0x20016C))
#define gUnknown_0820096C ((u8*)(ROM_START + 0x20096C))
#define gUnknown_0820116C ((u8*)(ROM_START + 0x20116C))
#define gUnknown_0820196C ((u8*)(ROM_START + 0x20196C))
#define gUnknown_0820216C ((u8*)(ROM_START + 0x20216C))
#define gUnknown_0820296C ((u8*)(ROM_START + 0x20296C))
#define gUnknown_0820316C ((u8*)(ROM_START + 0x20316C))
#define gUnknown_0820396C ((u8*)(ROM_START + 0x20396C))
#define gUnknown_0820416C ((u8*)(ROM_START + 0x20416C))
#define gUnknown_0820496C ((u8*)(ROM_START + 0x20496C))
#define gUnknown_0820516C ((u8*)(ROM_START + 0x20516C))
#define gUnknown_0820596C ((u8*)(ROM_START + 0x20596C))
#define gUnknown_0820616C ((u8*)(ROM_START + 0x20616C))
#define gUnknown_0820696C ((u8*)(ROM_START + 0x20696C))
#define gUnknown_0820716C ((u8*)(ROM_START + 0x20716C))
#define gUnknown_0820796C ((u8*)(ROM_START + 0x20796C))
#define gUnknown_0820816C ((u8*)(ROM_START + 0x20816C))
#define gUnknown_0820896C ((u8*)(ROM_START + 0x20896C))
#define gUnknown_0820916C ((u8*)(ROM_START + 0x20916C))
#define gUnknown_0820996C ((u8*)(ROM_START + 0x20996C))
#define gUnknown_0820A16C ((u8*)(ROM_START + 0x20A16C))
#define gUnknown_0820A96C ((u8*)(ROM_START + 0x20A96C))
#define gUnknown_0820B16C ((u8*)(ROM_START + 0x20B16C))
#define gUnknown_0820B96C ((u8*)(ROM_START + 0x20B96C))
#define gUnknown_0820C16C ((u8*)(ROM_START + 0x20C16C))
#define gUnknown_0820C96C ((u8*)(ROM_START + 0x20C96C))
#define gUnknown_0820D16C ((u8*)(ROM_START + 0x20D16C))
#define gUnknown_0820D96C ((u8*)(ROM_START + 0x20D96C))
#define gUnknown_0820E16C ((u8*)(ROM_START + 0x20E16C))
#define gUnknown_0820E96C ((u8*)(ROM_START + 0x20E96C))
#define gUnknown_0820F16C ((u8*)(ROM_START + 0x20F16C))
#define gUnknown_0820F96C ((u8*)(ROM_START + 0x20F96C))
#define gUnknown_0821016C ((u8*)(ROM_START + 0x21016C))
#define gUnknown_0821096C ((u8*)(ROM_START + 0x21096C))
#define gUnknown_0821116C ((u8*)(ROM_START + 0x21116C))
#define gUnknown_0821196C ((u8*)(ROM_START + 0x21196C))
#define gUnknown_0821216C ((u8*)(ROM_START + 0x21216C))
#define gUnknown_0821296C ((u8*)(ROM_START + 0x21296C))
#define gUnknown_0821316C ((u8*)(ROM_START + 0x21316C))
#define gUnknown_0821396C ((u8*)(ROM_START + 0x21396C))
#define gUnknown_0821416C ((u8*)(ROM_START + 0x21416C))
#define gUnknown_0821496C ((u8*)(ROM_START + 0x21496C))
#define gUnknown_0821516C ((u8*)(ROM_START + 0x21516C))
#define gUnknown_0821596C ((u8*)(ROM_START + 0x21596C))
#define gUnknown_0821616C ((u8*)(ROM_START + 0x21616C))
#define gUnknown_0821696C ((u8*)(ROM_START + 0x21696C))
#define gUnknown_0821716C ((u8*)(ROM_START + 0x21716C))
#define gUnknown_0821796C ((u8*)(ROM_START + 0x21796C))
#define gUnknown_0821816C ((u8*)(ROM_START + 0x21816C))
#define gUnknown_0821896C ((u8*)(ROM_START + 0x21896C))
#define gUnknown_0821916C ((u8*)(ROM_START + 0x21916C))
#define gUnknown_0821996C ((u8*)(ROM_START + 0x21996C))
#define gUnknown_0821A16C ((u8*)(ROM_START + 0x21A16C))
#define gUnknown_0821A96C ((u8*)(ROM_START + 0x21A96C))
#define gUnknown_0821B16C ((u8*)(ROM_START + 0x21B16C))
#define gUnknown_0821B96C ((u8*)(ROM_START + 0x21B96C))
#define gUnknown_0821C16C ((u8*)(ROM_START + 0x21C16C))
#define gUnknown_0821C96C ((u8*)(ROM_START + 0x21C96C))
#define gUnknown_0821D16C ((u8*)(ROM_START + 0x21D16C))
#define gUnknown_0821D96C ((u8*)(ROM_START + 0x21D96C))
#define gUnknown_0821E16C ((u8*)(ROM_START + 0x21E16C))
#define gUnknown_0821E96C ((u8*)(ROM_START + 0x21E96C))
#define gUnknown_0821F16C ((u8*)(ROM_START + 0x21F16C))
#define gUnknown_0821F96C ((u8*)(ROM_START + 0x21F96C))
#define gUnknown_0822016C ((u8*)(ROM_START + 0x22016C))
#define gUnknown_0822096C ((u8*)(ROM_START + 0x22096C))
#define gUnknown_0822116C ((u8*)(ROM_START + 0x22116C))
#define gUnknown_0822196C ((u8*)(ROM_START + 0x22196C))
#define gUnknown_0822216C ((u8*)(ROM_START + 0x22216C))
#define gUnknown_0822296C ((u8*)(ROM_START + 0x22296C))
#define gUnknown_0822316C ((u8*)(ROM_START + 0x22316C))
#define gUnknown_0822396C ((u8*)(ROM_START + 0x22396C))
#define gUnknown_0822416C ((u8*)(ROM_START + 0x22416C))
#define gUnknown_0822496C ((u8*)(ROM_START + 0x22496C))
#define gUnknown_0822516C ((u8*)(ROM_START + 0x22516C))
#define gUnknown_0822596C ((u8*)(ROM_START + 0x22596C))
#define gUnknown_0822616C ((u8*)(ROM_START + 0x22616C))
#define gUnknown_0822696C ((u8*)(ROM_START + 0x22696C))
#define gUnknown_0822716C ((u8*)(ROM_START + 0x22716C))
#define gUnknown_0822796C ((u8*)(ROM_START + 0x22796C))
#define gUnknown_0822816C ((u8*)(ROM_START + 0x22816C))
#define gUnknown_0822896C ((u8*)(ROM_START + 0x22896C))
#define gUnknown_0822916C ((u8*)(ROM_START + 0x22916C))
#define gUnknown_0822996C ((u8*)(ROM_START + 0x22996C))
#define gUnknown_0822A16C ((u8*)(ROM_START + 0x22A16C))
#define gUnknown_0822A96C ((u8*)(ROM_START + 0x22A96C))
#define gUnknown_0822B16C ((u8*)(ROM_START + 0x22B16C))
#define gUnknown_0822B96C ((u8*)(ROM_START + 0x22B96C))
#define gUnknown_0822C16C ((u8*)(ROM_START + 0x22C16C))
#define gUnknown_0822C96C ((u8*)(ROM_START + 0x22C96C))
#define gUnknown_0822D16C ((u8*)(ROM_START + 0x22D16C))
#define gUnknown_0822D96C ((u8*)(ROM_START + 0x22D96C))
#define gUnknown_0822E16C ((u8*)(ROM_START + 0x22E16C))
#define gUnknown_0822E96C ((u8*)(ROM_START + 0x22E96C))
#define gUnknown_0822F16C ((u8*)(ROM_START + 0x22F16C))
#define gUnknown_0822F96C ((u8*)(ROM_START + 0x22F96C))
#define gUnknown_0823016C ((u8*)(ROM_START + 0x23016C))
#define gUnknown_0823096C ((u8*)(ROM_START + 0x23096C))
#define gUnknown_0823116C ((u8*)(ROM_START + 0x23116C))
#define gUnknown_0823196C ((u8*)(ROM_START + 0x23196C))
#define gUnknown_0823216C ((u8*)(ROM_START + 0x23216C))
#define gUnknown_0823296C ((u8*)(ROM_START + 0x23296C))
#define gUnknown_0823316C ((u8*)(ROM_START + 0x23316C))
#define gUnknown_0823396C ((u8*)(ROM_START + 0x23396C))
#define gUnknown_0823416C ((u8*)(ROM_START + 0x23416C))
#define gUnknown_0823496C ((u8*)(ROM_START + 0x23496C))
#define gUnknown_0823516C ((u8*)(ROM_START + 0x23516C))
#define gUnknown_0823596C ((u8*)(ROM_START + 0x23596C))
#define gUnknown_0823616C ((u8*)(ROM_START + 0x23616C))
#define gUnknown_0823696C ((u8*)(ROM_START + 0x23696C))
#define gUnknown_0823716C ((u8*)(ROM_START + 0x23716C))
#define gUnknown_0823796C ((u8*)(ROM_START + 0x23796C))
#define gUnknown_0823816C ((u8*)(ROM_START + 0x23816C))
#define gUnknown_0823896C ((u8*)(ROM_START + 0x23896C))
#define gUnknown_0823916C ((u8*)(ROM_START + 0x23916C))
#define gUnknown_0823996C ((u8*)(ROM_START + 0x23996C))
#define gUnknown_0823A16C ((u8*)(ROM_START + 0x23A16C))
#define gUnknown_0823A96C ((u8*)(ROM_START + 0x23A96C))
#define gUnknown_0823B16C ((u8*)(ROM_START + 0x23B16C))
#define gUnknown_0823B96C ((u8*)(ROM_START + 0x23B96C))
#define gUnknown_0823C16C ((u8*)(ROM_START + 0x23C16C))
#define gUnknown_0823C96C ((u8*)(ROM_START + 0x23C96C))
#define gUnknown_0823D16C ((u8*)(ROM_START + 0x23D16C))
#define gUnknown_0823D96C ((u8*)(ROM_START + 0x23D96C))
#define gUnknown_0823E16C ((u8*)(ROM_START + 0x23E16C))
#define gUnknown_0823E96C ((u8*)(ROM_START + 0x23E96C))
#define gUnknown_0823F16C ((u8*)(ROM_START + 0x23F16C))
#define gUnknown_0823F96C ((u8*)(ROM_START + 0x23F96C))
#define gUnknown_0824016C ((u8*)(ROM_START + 0x24016C))
#define gUnknown_0824096C ((u8*)(ROM_START + 0x24096C))
#define gUnknown_0824116C ((u8*)(ROM_START + 0x24116C))
#define gUnknown_0824196C ((u8*)(ROM_START + 0x24196C))
#define gUnknown_0824216C ((u8*)(ROM_START + 0x24216C))
#define gUnknown_0824296C ((u8*)(ROM_START + 0x24296C))
#define gUnknown_0824316C ((u8*)(ROM_START + 0x24316C))
#define gUnknown_0824396C ((u8*)(ROM_START + 0x24396C))
#define gUnknown_0824416C ((u8*)(ROM_START + 0x24416C))
#define gUnknown_0824496C ((u8*)(ROM_START + 0x24496C))
#define gUnknown_0824516C ((u8*)(ROM_START + 0x24516C))
#define gUnknown_0824596C ((u8*)(ROM_START + 0x24596C))
#define gUnknown_0824616C ((u8*)(ROM_START + 0x24616C))
#define gUnknown_0824696C ((u8*)(ROM_START + 0x24696C))
#define gUnknown_0824698C ((u8*)(ROM_START + 0x24698C))
#define gUnknown_08246A0C ((u8*)(ROM_START + 0x246A0C))
#define gUnknown_08246A8C ((u8*)(ROM_START + 0x246A8C))
#define gUnknown_08246E8C ((u8*)(ROM_START + 0x246E8C))
#define gUnknown_08246ECC ((u8*)(ROM_START + 0x246ECC))
#define gUnknown_082476CC ((u8*)(ROM_START + 0x2476CC))
#define gUnknown_08247ECC ((u8*)(ROM_START + 0x247ECC))
#define gUnknown_082486CC ((u8*)(ROM_START + 0x2486CC))
#define gUnknown_0824874C ((u8*)(ROM_START + 0x24874C))
#define gUnknown_0824884C ((u8*)(ROM_START + 0x24884C))
#define gUnknown_082488CC ((u8*)(ROM_START + 0x2488CC))
#define gUnknown_0824890C ((u8*)(ROM_START + 0x24890C))
#define gUnknown_08248B0C ((u8*)(ROM_START + 0x248B0C))
#define gUnknown_08248C0C ((u8*)(ROM_START + 0x248C0C))
#define gUnknown_08248C4C ((u8*)(ROM_START + 0x248C4C))
#define gUnknown_0825280C ((u8*)(ROM_START + 0x25280C))
#define gUnknown_08257F28 ((u8*)(ROM_START + 0x257F28))
#define gUnknown_0825CCCC ((u8*)(ROM_START + 0x25CCCC))
#define gUnknown_0825EF64 ((u8*)(ROM_START + 0x25EF64))
#define gUnknown_082610F0 ((u8*)(ROM_START + 0x2610F0))
#define gUnknown_08263898 ((u8*)(ROM_START + 0x263898))
#define gUnknown_0826B6DC ((u8*)(ROM_START + 0x26B6DC))
#define gUnknown_08271DE8 ((u8*)(ROM_START + 0x271DE8))
#define gUnknown_08278824 ((u8*)(ROM_START + 0x278824))
#define gUnknown_0827CEEC ((u8*)(ROM_START + 0x27CEEC))
#define gUnknown_08282870 ((u8*)(ROM_START + 0x282870))
#define gUnknown_08288AE0 ((u8*)(ROM_START + 0x288AE0))
#define gUnknown_08291ADC ((u8*)(ROM_START + 0x291ADC))
#define gUnknown_08293DC0 ((u8*)(ROM_START + 0x293DC0))
#define gUnknown_08296138 ((u8*)(ROM_START + 0x296138))
#define gUnknown_08296E28 ((u8*)(ROM_START + 0x296E28))
#define gUnknown_0829A23C ((u8*)(ROM_START + 0x29A23C))
#define gUnknown_0829E7A4 ((u8*)(ROM_START + 0x29E7A4))
#define gUnknown_082A3BA8 ((u8*)(ROM_START + 0x2A3BA8))
#define gUnknown_082A8E3C ((u8*)(ROM_START + 0x2A8E3C))
#define gUnknown_082AE378 ((u8*)(ROM_START + 0x2AE378))
#define gUnknown_082B6B78 ((u8*)(ROM_START + 0x2B6B78))
#define gUnknown_082BDC88 ((u8*)(ROM_START + 0x2BDC88))
#define gUnknown_082BFC24 ((u8*)(ROM_START + 0x2BFC24))
#define gUnknown_082C5020 ((u8*)(ROM_START + 0x2C5020))
#define gUnknown_082C9600 ((u8*)(ROM_START + 0x2C9600))
#define gUnknown_082CE308 ((u8*)(ROM_START + 0x2CE308))
#define gUnknown_082D1A90 ((u8*)(ROM_START + 0x2D1A90))
#define gUnknown_082D79EC ((u8*)(ROM_START + 0x2D79EC))
#define gUnknown_082D8974 ((u8*)(ROM_START + 0x2D8974))
#define gUnknown_082DC188 ((u8*)(ROM_START + 0x2DC188))
#define gUnknown_082E1FA4 ((u8*)(ROM_START + 0x2E1FA4))
#define gUnknown_082E6BBC ((u8*)(ROM_START + 0x2E6BBC))
#define gUnknown_082EB2B8 ((u8*)(ROM_START + 0x2EB2B8))
#define gUnknown_082EF904 ((u8*)(ROM_START + 0x2EF904))
#define gUnknown_082F7D4C ((u8*)(ROM_START + 0x2F7D4C))
#define gUnknown_082FAF44 ((u8*)(ROM_START + 0x2FAF44))
#define gUnknown_082FE610 ((u8*)(ROM_START + 0x2FE610))
#define gUnknown_083022F0 ((u8*)(ROM_START + 0x3022F0))
#define gUnknown_083081E4 ((u8*)(ROM_START + 0x3081E4))
#define gUnknown_0830D2D8 ((u8*)(ROM_START + 0x30D2D8))
#define gUnknown_0831002C ((u8*)(ROM_START + 0x31002C))
#define gUnknown_08312664 ((u8*)(ROM_START + 0x312664))
#define gUnknown_08314F8C ((u8*)(ROM_START + 0x314F8C))
#define gUnknown_0831E8E0 ((u8*)(ROM_START + 0x31E8E0))
#define gUnknown_0831F624 ((u8*)(ROM_START + 0x31F624))
#define gUnknown_08320328 ((u8*)(ROM_START + 0x320328))
#define gUnknown_083230C0 ((u8*)(ROM_START + 0x3230C0))
#define gUnknown_08323EDC ((u8*)(ROM_START + 0x323EDC))
#define gUnknown_08327074 ((u8*)(ROM_START + 0x327074))
#define gUnknown_0832AFB8 ((u8*)(ROM_START + 0x32AFB8))
#define gUnknown_0832E7B0 ((u8*)(ROM_START + 0x32E7B0))
#define gUnknown_08331B38 ((u8*)(ROM_START + 0x331B38))
#define gUnknown_08335A58 ((u8*)(ROM_START + 0x335A58))
#define gUnknown_08339144 ((u8*)(ROM_START + 0x339144))
#define gUnknown_0833DC0C ((u8*)(ROM_START + 0x33DC0C))
#define gUnknown_0833F720 ((u8*)(ROM_START + 0x33F720))
#define gUnknown_08342908 ((u8*)(ROM_START + 0x342908))
#define gUnknown_0834863C ((u8*)(ROM_START + 0x34863C))
#define gUnknown_0834F218 ((u8*)(ROM_START + 0x34F218))
#define gUnknown_0835699C ((u8*)(ROM_START + 0x35699C))
#define gUnknown_08357870 ((u8*)(ROM_START + 0x357870))
#define gUnknown_0835ABD8 ((u8*)(ROM_START + 0x35ABD8))
	
#define gUnknown_08360834 ((u8*)(ROM_START + 0x360834))
#define gUnknown_08360854 ((u16*)(ROM_START + 0x360854))
#define gUnknown_08360D04 ((u8*)(ROM_START + 0x360D04))
#define gUnknown_08362524 ((u8*)(ROM_START + 0x362524))
#define gUnknown_08362544 ((u16*)(ROM_START + 0x362544))
#define gUnknown_083629F4 ((u8*)(ROM_START + 0x3629F4))
#define gUnknown_08364794 ((u8*)(ROM_START + 0x364794))
#define gUnknown_08365640 ((u8*)(ROM_START + 0x365640))
#define gUnknown_08368BC4 ((u8*)(ROM_START + 0x368BC4))
#define gUnknown_08369890 ((u8*)(GFX_BASE_ADDR + 0x1E9890))
#define gUnknown_0836B924 ((u8*)(ROM_START + 0x36B924))
#define gUnknown_08372D2C ((u8*)(ROM_START + 0x372D2C))
#define gUnknown_0837920C ((u8*)(ROM_START + 0x37920C))
#define gUnknown_0837E52C ((u8*)(ROM_START + 0x37E52C))
#define gUnknown_083899C4 ((u8*)(GFX_BASE_ADDR + 0x2099C4))
#define gUnknown_0838A6F4 ((u8*)(ROM_START + 0x38A6F4))
#define gUnknown_0838B364 ((u8*)(ROM_START + 0x38B364))
#define gUnknown_0838D370 ((u8*)(ROM_START + 0x38D370))
#define gUnknown_08392118 ((u8*)(ROM_START + 0x392118))
#define gUnknown_08396EB0 ((u8*)(ROM_START + 0x396EB0))
#define gUnknown_0839CD04 ((u8*)(ROM_START + 0x39CD04))
#define gUnknown_083A3504 ((u8*)(ROM_START + 0x3A3504))
#define gUnknown_083A6934 ((u8*)(ROM_START + 0x3A6934))
#define gUnknown_083A7790 ((u8*)(ROM_START + 0x3A7790))
#define gUnknown_083A8648 ((u8*)(ROM_START + 0x3A8648))
#define gUnknown_083A9514 ((u8*)(ROM_START + 0x3A9514))
#define gUnknown_083AFCC8 ((u8*)(ROM_START + 0x3AFCC8))
#define gUnknown_083B0A94 ((u8*)(ROM_START + 0x3B0A94))
#define gUnknown_083B3724 ((u8*)(ROM_START + 0x3B3724))
#define gUnknown_083B6C8C ((u8*)(ROM_START + 0x3B6C8C))
#define gUnknown_083BF1BC ((u8*)(ROM_START + 0x3BF1BC))
#define gUnknown_083C3724 ((u8*)(ROM_START + 0x3C3724))
#define gUnknown_083C7654 ((u8*)(ROM_START + 0x3C7654))
#define gUnknown_083CB0BC ((u8*)(ROM_START + 0x3CB0BC))
#define gUnknown_083D27A8 ((u8*)(ROM_START + 0x3D27A8))
#define gUnknown_083D5E64 ((u8*)(ROM_START + 0x3D5E64))
#define gUnknown_083DAAC0 ((u8*)(ROM_START + 0x3DAAC0))
#define gUnknown_083E1514 ((u8*)(ROM_START + 0x3E1514))
#define gUnknown_083E74E8 ((u8*)(ROM_START + 0x3E74E8))
#define gUnknown_083EAB84 ((u8*)(ROM_START + 0x3EAB84))
#define gUnknown_083EEAC0 ((u8*)(ROM_START + 0x3EEAC0))
#define gUnknown_083F2BA4 ((u8*)(ROM_START + 0x3F2BA4))
#define gUnknown_083F6C48 ((u8*)(ROM_START + 0x3F6C48))
#define gUnknown_083FB1D4 ((u8*)(ROM_START + 0x3FB1D4))
#define gUnknown_083FD8D4 ((u8*)(ROM_START + 0x3FD8D4))
#define gUnknown_084037F8 ((u8*)(ROM_START + 0x4037F8))
#define gUnknown_0840AC3C ((u8*)(ROM_START + 0x40AC3C))
#define gUnknown_0840D3C8 ((u8*)(ROM_START + 0x40D3C8))
#define gUnknown_0840F8C0 ((u8*)(ROM_START + 0x40F8C0))
#define gUnknown_0841B0F4 ((u8*)(ROM_START + 0x41B0F4))
#define gUnknown_0841BD7C ((u8*)(ROM_START + 0x41BD7C))
#define gUnknown_0841EFC4 ((u8*)(ROM_START + 0x41EFC4))
#define gUnknown_08427608 ((u8*)(ROM_START + 0x427608))
	
#define gUnknown_08427D88 ((u8*)(ROM_START + 0x427D88))
#define gUnknown_08427DA8 ((u8*)(ROM_START + 0x427DA8))
#define gUnknown_0842C8A8 ((u8*)(ROM_START + 0x42C8A8))
#define gUnknown_0842C8C8 ((u8*)(ROM_START + 0x42C8C8))
#define gUnknown_084313C8 ((u8*)(ROM_START + 0x4313C8))
#define gUnknown_084313E8 ((u8*)(ROM_START + 0x4313E8))
#define gUnknown_08435EE8 ((u8*)(ROM_START + 0x435EE8))
#define gUnknown_08435F08 ((u8*)(ROM_START + 0x435F08))
#define gUnknown_0843AA08 ((u8*)(ROM_START + 0x43AA08))
#define gUnknown_0843AA28 ((u8*)(ROM_START + 0x43AA28))
#define gUnknown_0843F528 ((u8*)(ROM_START + 0x43F528))
#define gUnknown_0843F548 ((u8*)(ROM_START + 0x43F548))
#define gUnknown_08444048 ((u8*)(ROM_START + 0x444048))
#define gUnknown_08444068 ((u8*)(ROM_START + 0x444068))
#define gUnknown_08448B68 ((u8*)(ROM_START + 0x448B68))
#define gUnknown_08448B88 ((u8*)(ROM_START + 0x448B88))
#define gUnknown_0844D688 ((u8*)(ROM_START + 0x44D688))
#define gUnknown_0844D6A8 ((u8*)(ROM_START + 0x44D6A8))
#define gUnknown_084521A8 ((u8*)(ROM_START + 0x4521A8))
#define gUnknown_084521C8 ((u8*)(ROM_START + 0x4521C8))
#define gUnknown_08456CC8 ((u8*)(ROM_START + 0x456CC8))
#define gUnknown_08456CE8 ((u8*)(ROM_START + 0x456CE8))
#define gUnknown_0845B7E8 ((u8*)(ROM_START + 0x45B7E8))
#define gUnknown_0845B808 ((u8*)(ROM_START + 0x45B808))
#define gUnknown_08460308 ((u8*)(ROM_START + 0x460308))
#define gUnknown_08460328 ((u8*)(ROM_START + 0x460328))
#define gUnknown_08464E28 ((u8*)(ROM_START + 0x464E28))
#define gUnknown_08464E48 ((u8*)(ROM_START + 0x464E48))
#define gUnknown_08469948 ((u8*)(ROM_START + 0x469948))
#define gUnknown_08469968 ((u8*)(ROM_START + 0x469968))
#define gUnknown_0846E468 ((u8*)(ROM_START + 0x46E468))
#define gUnknown_0846E488 ((u8*)(ROM_START + 0x46E488))
#define gUnknown_08472F88 ((u8*)(ROM_START + 0x472F88))
#define gUnknown_08472FA8 ((u8*)(ROM_START + 0x472FA8))
#define gUnknown_08477AA8 ((u8*)(ROM_START + 0x477AA8))
#define gUnknown_08477AC8 ((u8*)(ROM_START + 0x477AC8))
#define gUnknown_0847C5C8 ((u8*)(ROM_START + 0x47C5C8))
#define gUnknown_0847C5E8 ((u8*)(ROM_START + 0x47C5E8))
#define gUnknown_084810E8 ((u8*)(ROM_START + 0x4810E8))
#define gUnknown_08481108 ((u8*)(ROM_START + 0x481108))
#define gUnknown_08485C08 ((u8*)(ROM_START + 0x485C08))
#define gUnknown_08485C28 ((u8*)(ROM_START + 0x485C28))
#define gUnknown_0848A728 ((u8*)(ROM_START + 0x48A728))
#define gUnknown_0848A748 ((u8*)(ROM_START + 0x48A748))
#define gUnknown_0848F248 ((u8*)(ROM_START + 0x48F248))
#define gUnknown_0848F268 ((u8*)(ROM_START + 0x48F268))
#define gUnknown_08493D68 ((u8*)(ROM_START + 0x493D68))
#define gUnknown_08493D88 ((u8*)(ROM_START + 0x493D88))
#define gUnknown_08498888 ((u8*)(ROM_START + 0x498888))
#define gUnknown_084988A8 ((u8*)(ROM_START + 0x4988A8))
#define gUnknown_0849D3A8 ((u8*)(ROM_START + 0x49D3A8))
#define gUnknown_0849D3C8 ((u8*)(ROM_START + 0x49D3C8))
#define gUnknown_084A1EC8 ((u8*)(ROM_START + 0x4A1EC8))
#define gUnknown_084A1EE8 ((u8*)(ROM_START + 0x4A1EE8))
#define gUnknown_084A69E8 ((u8*)(ROM_START + 0x4A69E8))
#define gUnknown_084A6A08 ((u8*)(ROM_START + 0x4A6A08))
#define gUnknown_084AB508 ((u8*)(ROM_START + 0x4AB508))
#define gUnknown_084AB528 ((u8*)(ROM_START + 0x4AB528))
#define gUnknown_084B0028 ((u8*)(ROM_START + 0x4B0028))
#define gUnknown_084B0048 ((u8*)(ROM_START + 0x4B0048))
#define gUnknown_084B4B48 ((u8*)(ROM_START + 0x4B4B48))
#define gUnknown_084B4B68 ((u8*)(ROM_START + 0x4B4B68))
#define gUnknown_084B9668 ((u8*)(ROM_START + 0x4B9668))
#define gUnknown_084B9688 ((u8*)(ROM_START + 0x4B9688))
#define gUnknown_084BE188 ((u8*)(ROM_START + 0x4BE188))
#define gUnknown_084BE1A8 ((u8*)(ROM_START + 0x4BE1A8))
#define gUnknown_084C2CA8 ((u8*)(ROM_START + 0x4C2CA8))
#define gUnknown_084C2CC8 ((u8*)(ROM_START + 0x4C2CC8))
#define gUnknown_084C77C8 ((u8*)(ROM_START + 0x4C77C8))
#define gUnknown_084C77E8 ((u8*)(ROM_START + 0x4C77E8))
#define gUnknown_084CC2E8 ((u8*)(ROM_START + 0x4CC2E8))
#define gUnknown_084CC308 ((u8*)(ROM_START + 0x4CC308))
#define gUnknown_084D0E08 ((u8*)(ROM_START + 0x4D0E08))
#define gUnknown_084D0E28 ((u8*)(ROM_START + 0x4D0E28))
#define gUnknown_084D5928 ((u8*)(ROM_START + 0x4D5928))
#define gUnknown_084D5948 ((u8*)(ROM_START + 0x4D5948))
#define gUnknown_084DA448 ((u8*)(ROM_START + 0x4DA448))
#define gUnknown_084DA468 ((u8*)(ROM_START + 0x4DA468))
#define gUnknown_084DEF68 ((u8*)(ROM_START + 0x4DEF68))
#define gUnknown_084DEF88 ((u8*)(ROM_START + 0x4DEF88))
#define gUnknown_084E3A88 ((u8*)(ROM_START + 0x4E3A88))
#define gUnknown_084E3AA8 ((u8*)(ROM_START + 0x4E3AA8))
#define gUnknown_084E85A8 ((u8*)(ROM_START + 0x4E85A8))
#define gUnknown_084E85C8 ((u8*)(ROM_START + 0x4E85C8))
#define gUnknown_084ED0C8 ((u8*)(ROM_START + 0x4ED0C8))
#define gUnknown_084ED0E8 ((u8*)(ROM_START + 0x4ED0E8))
#define gUnknown_084F1BE8 ((u8*)(ROM_START + 0x4F1BE8))
#define gUnknown_084F1C08 ((u8*)(ROM_START + 0x4F1C08))
#define gUnknown_084F6708 ((u8*)(ROM_START + 0x4F6708))
#define gUnknown_084F6728 ((u8*)(ROM_START + 0x4F6728))
#define gUnknown_084FB228 ((u8*)(ROM_START + 0x4FB228))
#define gUnknown_084FB248 ((u8*)(ROM_START + 0x4FB248))
#define gUnknown_084FFD48 ((u8*)(ROM_START + 0x4FFD48))
#define gUnknown_084FFD68 ((u8*)(ROM_START + 0x4FFD68))
#define gUnknown_08504868 ((u8*)(ROM_START + 0x504868))
#define gUnknown_08504888 ((u8*)(ROM_START + 0x504888))
#define gUnknown_08509388 ((u8*)(ROM_START + 0x509388))
#define gUnknown_08532B84 ((u8*)(ROM_START + 0x532B84))
#define gUnknown_08536720 ((u8*)(ROM_START + 0x536720))
#define gUnknown_08555EF4 ((u8*)(ROM_START + 0x555EF4))
#define gUnknown_0855DCE4 ((u8*)(ROM_START + 0x55DCE4))
#define gUnknown_08569D8C ((u8*)(ROM_START + 0x569D8C))
#define gUnknown_0856C438 ((u8*)(ROM_START + 0x56C438))
#define gUnknown_08575EC0 ((u8*)(ROM_START + 0x575EC0))
#define gUnknown_08577ADC ((u8*)(ROM_START + 0x577ADC))
#define gUnknown_0857CA00 ((u8*)(ROM_START + 0x57CA00))
#define gUnknown_0857D794 ((u8*)(ROM_START + 0x57D794))
#define gUnknown_085B76BC ((u8*)(ROM_START + 0x5B76BC))
#define gUnknown_085C2C94 ((u8*)(ROM_START + 0x5C2C94))
#define gUnknown_085E3388 ((u8*)(ROM_START + 0x5E3388))
#define gUnknown_085E8A48 ((u8*)(ROM_START + 0x5E8A48))
#define gUnknown_0860EF60 ((u8*)(ROM_START + 0x60EF60))
#define gUnknown_08612014 ((u8*)(ROM_START + 0x612014))
#define gUnknown_0862057C ((u8*)(ROM_START + 0x62057C))
#define gUnknown_08622F20 ((u8*)(ROM_START + 0x622F20))
#define gUnknown_08626564 ((u8*)(ROM_START + 0x626564))
#define gUnknown_08626AD0 ((u8*)(ROM_START + 0x626AD0))
#define gUnknown_0862ADB4 ((u8*)(ROM_START + 0x62ADB4))
#define gUnknown_0862BA68 ((u8*)(ROM_START + 0x62BA68))
#define gUnknown_08651F00 ((u8*)(ROM_START + 0x651F00))
#define gUnknown_0865787C ((u8*)(ROM_START + 0x65787C))
#define gUnknown_0866E26C ((u8*)(ROM_START + 0x66E26C))
#define gUnknown_08670494 ((u8*)(ROM_START + 0x670494))
#define gUnknown_08675038 ((u8*)(ROM_START + 0x675038))
#define gUnknown_086758CC ((u8*)(ROM_START + 0x6758CC))
#define gUnknown_0867EAB4 ((u8*)(ROM_START + 0x67EAB4))
#define gUnknown_086812FC ((u8*)(ROM_START + 0x6812FC))
#define gUnknown_086851E0 ((u8*)(ROM_START + 0x6851E0))
#define gUnknown_08685AEC ((u8*)(ROM_START + 0x685AEC))
#define gUnknown_0868FCF4 ((u8*)(ROM_START + 0x68FCF4))
#define gUnknown_08691040 ((u8*)(ROM_START + 0x691040))
#define gUnknown_086A146C ((u8*)(ROM_START + 0x6A146C))
#define gUnknown_086A3A80 ((u8*)(ROM_START + 0x6A3A80))
#define gUnknown_086B0EA8 ((u8*)(ROM_START + 0x6B0EA8))
#define gUnknown_086B4504 ((u8*)(ROM_START + 0x6B4504))
#define gUnknown_086C4B90 ((u8*)(ROM_START + 0x6C4B90))
#define gUnknown_086C7128 ((u8*)(ROM_START + 0x6C7128))
#define gUnknown_086C9ECC ((u8*)(ROM_START + 0x6C9ECC))
#define gUnknown_086CA0FC ((u8*)(ROM_START + 0x6CA0FC))
#define gUnknown_086CCA60 ((u8*)(ROM_START + 0x6CCA60))
#define gUnknown_086CCD04 ((u8*)(ROM_START + 0x6CCD04))
#define gUnknown_086D7AEC ((u8*)(ROM_START + 0x6D7AEC))
#define gUnknown_086DA640 ((u8*)(ROM_START + 0x6DA640))
#define gUnknown_086EF710 ((u8*)(ROM_START + 0x6EF710))
#define gUnknown_086F328C ((u8*)(ROM_START + 0x6F328C))
#define gUnknown_087195C8 ((u8*)(ROM_START + 0x7195C8))
#define gUnknown_0871CF30 ((u8*)(ROM_START + 0x71CF30))
#define gUnknown_0871E9F4 ((u8*)(ROM_START + 0x71E9F4))

#define gUnknown_0871EBBC ((u8*)(GFX_BASE_ADDR + 0x59EBBC))
#define gUnknown_0871FCF4 ((u8*)(GFX_BASE_ADDR + 0x59FCF4))

#define gUnknown_0871FD14 ((u8*)(ROM_START + 0x71FD14))
#define gUnknown_0871FD60 ((u8*)(ROM_START + 0x71FD60))
#define gUnknown_0871FD80 ((u8*)(ROM_START + 0x71FD80))
#define gUnknown_0871FDAC ((u8*)(ROM_START + 0x71FDAC))
#define gUnknown_0871FDD0 ((u8*)(ROM_START + 0x71FDD0))

#define gUnknown_0871FDF8 ((u8*)(GFX_BASE_ADDR + 0x59FDF8))
#define gUnknown_08748218 ((u8*)(GFX_BASE_ADDR + 0x5C8218))

#define gUnknown_08748340 ((u8*)(ROM_START + 0x748340))
#define gUnknown_08748468 ((u8*)(ROM_START + 0x748468))
#define gUnknown_08748488 ((u8*)(ROM_START + 0x748488))
#define gUnknown_087484A8 ((u8*)(ROM_START + 0x7484A8))
#define gUnknown_087484C8 ((u8*)(ROM_START + 0x7484C8))
#define gUnknown_087484E8 ((u8*)(ROM_START + 0x7484E8))
#define gUnknown_08748520 ((u8*)(ROM_START + 0x748520))
#define gUnknown_08748558 ((u8*)(ROM_START + 0x748558))
#define gUnknown_08748590 ((u8*)(ROM_START + 0x748590))
#define gUnknown_087485C0 ((u8*)(ROM_START + 0x7485C0))
#define gUnknown_087485F4 ((u8*)(ROM_START + 0x7485F4))
#define gUnknown_08748684 ((u8*)(ROM_START + 0x748684))
#define gUnknown_08748774 ((u8*)(ROM_START + 0x748774))
#define gUnknown_08748AB4 ((u8*)(ROM_START + 0x748AB4))
#define gUnknown_08748AEC ((u8*)(ROM_START + 0x748AEC))
#define gUnknown_08748B24 ((u8*)(ROM_START + 0x748B24))
#define gUnknown_08748C38 ((u8*)(ROM_START + 0x748C38))
#define gUnknown_08748CA0 ((u8*)(ROM_START + 0x748CA0))
#define gUnknown_08748D74 ((u8*)(ROM_START + 0x748D74))
#define gUnknown_08748D98 ((u8*)(ROM_START + 0x748D98))
#define gUnknown_08748DB8 ((u8*)(ROM_START + 0x748DB8))
#define gUnknown_08748E0C ((u8*)(ROM_START + 0x748E0C))
#define gUnknown_08748EE4 ((u8*)(ROM_START + 0x748EE4))
#define gUnknown_08748F44 ((u8*)(ROM_START + 0x748F44))
#define gUnknown_08748F80 ((u8*)(ROM_START + 0x748F80))
#define gUnknown_08748FA4 ((u8*)(ROM_START + 0x748FA4))
#define gUnknown_08748FDC ((u8*)(ROM_START + 0x748FDC))
#define gUnknown_08749000 ((u8*)(ROM_START + 0x749000))
#define gUnknown_08749044 ((u8*)(ROM_START + 0x749044))
#define gUnknown_087490B0 ((u8*)(ROM_START + 0x7490B0))
#define gUnknown_0874911C ((u8*)(ROM_START + 0x74911C))
#define gUnknown_08749158 ((u8*)(ROM_START + 0x749158))
#define gUnknown_08749194 ((u8*)(ROM_START + 0x749194))
#define gUnknown_087491C4 ((u8*)(ROM_START + 0x7491C4))
#define gUnknown_087491EC ((u8*)(ROM_START + 0x7491EC))
#define gUnknown_08749210 ((u8*)(ROM_START + 0x749210))
#define gUnknown_08749240 ((u8*)(ROM_START + 0x749240))
#define gUnknown_08749268 ((u8*)(ROM_START + 0x749268))
#define gUnknown_08749290 ((u8*)(ROM_START + 0x749290))
#define gUnknown_087492C0 ((u8*)(ROM_START + 0x7492C0))
#define gUnknown_08749314 ((u8*)(ROM_START + 0x749314))
#define gUnknown_08749334 ((u8*)(ROM_START + 0x749334))
#define gUnknown_08749360 ((u8*)(ROM_START + 0x749360))
#define gUnknown_08749384 ((u8*)(ROM_START + 0x749384))
#define gUnknown_087493A8 ((u8*)(ROM_START + 0x7493A8))
#define gUnknown_087493D4 ((u8*)(ROM_START + 0x7493D4))
#define gUnknown_08749404 ((u8*)(ROM_START + 0x749404))

#else
extern u8 gUnknown_08180000[];
extern u8 gUnknown_08180200[];
extern u8 gUnknown_08182D08[];
extern u8 gUnknown_08182F08[];
extern u8 gUnusedAsciiCharSet[];
extern u8 gUnknown_08186520[];
extern u8 gUnknown_08186540[];
extern u8 gUnknown_08187540[];
extern u8 gUnknown_0818BD40[];
extern u8 gUnknown_0818C040[];
extern u8 gUnknown_0818E4C0[];
extern u8 gUnknown_0818F4C0[];
extern u8 gUnknown_0818F6C0[];
extern u8 gUnknown_0818F8C0[];
extern u8 gUnknown_081900C0[];
extern u8 gUnknown_081904C0[];
extern u8 gUnknown_081906C0[];
extern u8 gUnknown_081908C0[];
extern u8 gUnknown_08190AC0[];
extern u8 gUnknown_08190FC0[];
extern u8 gUnknown_081911C0[];
extern u8 gUnknown_081914A0[];
extern u8 gUnknown_08191CA0[];
extern u8 gUnknown_081924A0[];
extern u8 gUnknown_08192CA0[];
extern u8 gUnknown_08193CA0[];
extern u8 gUnknown_081940A0[];
extern u8 gUnknown_081940E0[];
extern u8 gUnknown_08194200[];
extern u8 gUnknown_08194240[];
extern u8 gUnknown_08194260[];
extern u8 gUnknown_08194280[];
extern u8 gUnknown_081942A0[];
extern u8 gUnknown_081942C0[];
extern u8 gUnknown_081944E0[];
extern u8 gUnknown_08194500[];
extern u8 gUnknown_08194520[];
extern u8 gUnknown_08194540[];
extern u8 gUnknown_08194560[];
extern u8 gUnknown_08194580[];
extern u8 gUnknown_08194640[];
extern u8 gUnknown_081946C0[];
extern u8 gUnknown_081954A8[];
extern u8 gUnknown_081964A8[];
extern u8 gUnknown_08196CA8[];
extern u8 gUnknown_081970DC[];
extern u8 gUnknown_08197514[];
extern u8 gUnknown_08197928[];
extern u8 gUnknown_08197D18[];
extern u8 gUnknown_081981A0[];
extern u8 gUnknown_081985D8[];
extern u8 gUnknown_08198A84[];
extern u8 gUnknown_08198E5C[];
extern u8 gUnknown_08199228[];
extern u8 gUnknown_08199690[];
extern u8 gUnknown_08199AEC[];
extern u8 gUnknown_08199EC8[];
extern u8 gUnknown_0819A2E4[];
extern u8 gUnknown_0819A700[];
extern u8 gUnknown_0819ABBC[];
extern u8 gUnknown_0819B028[];
extern u8 gUnknown_0819B428[];
extern u8 gUnknown_0819B868[];
extern u8 gUnknown_0819BCE4[];
extern u8 gUnknown_0819C0D8[];
extern u8 gUnknown_0819C434[];
extern u8 gUnknown_0819C810[];
extern u8 gUnknown_0819CC44[];
extern u8 gUnknown_0819D028[];
extern u8 gUnknown_0819D4C8[];
extern u8 gUnknown_0819D90C[];
extern u8 gUnknown_0819DDAC[];
extern u8 gUnknown_0819E18C[];
extern u8 gUnknown_0819E5A0[];
extern u8 gUnknown_0819E9D8[];
extern u8 gUnknown_0819EDF0[];
extern u8 gUnknown_0819F208[];
extern u8 gUnknown_0819F5C0[];
extern u8 gUnknown_0819F9E8[];
extern u8 gUnknown_0819FD84[];
extern u8 gUnknown_081A0120[];
extern u8 gUnknown_081A0580[];
extern u8 gUnknown_081A09E4[];
extern u8 gUnknown_081A0E58[];
extern u8 gUnknown_081A1324[];
extern u8 gUnknown_081A1728[];
extern u8 gUnknown_081A1A10[];
extern u8 gUnknown_081A1E1C[];
extern u8 gUnknown_081A22A4[];
extern u8 gUnknown_081A26BC[];
extern u8 gUnknown_081A2AE4[];
extern u8 gUnknown_081A2EE4[];
extern u8 gUnknown_081A3330[];
extern u8 gUnknown_081A3714[];
extern u8 gUnknown_081A3B44[];
extern u8 gUnknown_081A3FF8[];
extern u8 gUnknown_081A439C[];
extern u8 gUnknown_081A47D4[];
extern u8 gUnknown_081A4BD4[];
extern u8 gUnknown_081A4FF0[];
extern u8 gUnknown_081A541C[];
extern u8 gUnknown_081A5828[];
extern u8 gUnknown_081A5BF4[];
extern u8 gUnknown_081A5FA4[];
extern u8 gUnknown_081A639C[];
extern u8 gUnknown_081A675C[];
extern u8 gUnknown_081A6B88[];
extern u8 gUnknown_081A6F68[];
extern u8 gUnknown_081A7310[];
extern u8 gUnknown_081A775C[];
extern u8 gUnknown_081A7B68[];
extern u8 gUnknown_081A7FA4[];
extern u8 gUnknown_081A83C4[];
extern u8 gUnknown_081A8828[];
extern u8 gUnknown_081A8C30[];
extern u8 gUnknown_081A8F4C[];
extern u8 gUnknown_081A9380[];
extern u8 gUnknown_081A97CC[];
extern u8 gUnknown_081A9BC8[];
extern u8 gUnknown_081AA054[];
extern u8 gUnknown_081AA458[];
extern u8 gUnknown_081AA894[];
extern u8 gUnknown_081AACDC[];
extern u8 gUnknown_081AB178[];
extern u8 gUnknown_081AB574[];
extern u8 gUnknown_081AB9FC[];
extern u8 gUnknown_081ABE00[];
extern u8 gUnknown_081AC2B0[];
extern u8 gUnknown_081AC75C[];
extern u8 gUnknown_081ACBFC[];
extern u8 gUnknown_081AD02C[];
extern u8 gUnknown_081AD448[];
extern u8 gUnknown_081AD864[];
extern u8 gUnknown_081ADCD4[];
extern u8 gUnknown_081AE0DC[];
extern u8 gUnknown_081AE4FC[];
extern u8 gUnknown_081AE938[];
extern u8 gUnknown_081AED3C[];
extern u8 gUnknown_081AF15C[];
extern u8 gUnknown_081AF5A8[];
extern u8 gUnknown_081AF9DC[];
extern u8 gUnknown_081AFE0C[];
extern u8 gUnknown_081B01D0[];
extern u8 gUnknown_081B0594[];
extern u8 gUnknown_081B0984[];
extern u8 gUnknown_081B0DC4[];
extern u8 gUnknown_081B1150[];
extern u8 gUnknown_081B14EC[];
extern u8 gUnknown_081B18C0[];
extern u8 gUnknown_081B1CBC[];
extern u8 gUnknown_081B2150[];
extern u8 gUnknown_081B25F0[];
extern u8 gUnknown_081B290C[];
extern u8 gUnknown_081B290C_pal[];
extern u8 gUnknown_081B290C_gfx[];
extern u8 gUnknown_081B312C_pal[];
extern u8 gUnknown_081B312C_gfx[];
extern u8 gUnknown_081B394C_pal[];
extern u8 gUnknown_081B394C_gfx[];
extern u8 gUnknown_081B416C_pal[];
extern u8 gUnknown_081B416C_gfx[];
extern u8 gUnknown_081B498C_pal[];
extern u8 gUnknown_081B498C_gfx[];
extern u8 gUnknown_081B51AC_pal[];
extern u8 gUnknown_081B51AC_gfx[];
extern u8 gUnknown_081B59CC_pal[];
extern u8 gUnknown_081B59CC_gfx[];
extern u8 gUnknown_081B61EC_pal[];
extern u8 gUnknown_081B61EC_gfx[];
extern u8 gUnknown_081B6A0C_pal[];
extern u8 gUnknown_081B6A0C_gfx[];
extern u8 gUnknown_081B722C_pal[];
extern u8 gUnknown_081B722C_gfx[];
extern u8 gUnknown_081B7A4C_pal[];
extern u8 gUnknown_081B7A4C_gfx[];
extern u8 gUnknown_081B826C_pal[];
extern u8 gUnknown_081B826C_gfx[];
extern u8 gUnknown_081B8A8C_pal[];
extern u8 gUnknown_081B8A8C_gfx[];
extern u8 gUnknown_081B92AC_pal[];
extern u8 gUnknown_081B92AC_gfx[];
extern u8 gUnknown_081B9ACC_pal[];
extern u8 gUnknown_081B9ACC_gfx[];
extern u8 gUnknown_081BA2EC_pal[];
extern u8 gUnknown_081BA2EC_gfx[];
extern u8 gUnknown_081BAB0C_pal[];
extern u8 gUnknown_081BAB0C_gfx[];
extern u8 gUnknown_081BB32C_pal[];
extern u8 gUnknown_081BB32C_gfx[];
extern u8 gUnknown_081BBB4C_pal[];
extern u8 gUnknown_081BBB4C_gfx[];
extern u8 gUnknown_081BC36C_pal[];
extern u8 gUnknown_081BC36C_gfx[];
extern u8 gUnknown_081BCB8C_pal[];
extern u8 gUnknown_081BCB8C_gfx[];
extern u8 gUnknown_081BD3AC_pal[];
extern u8 gUnknown_081BD3AC_gfx[];
extern u8 gUnknown_081BDBCC_pal[];
extern u8 gUnknown_081BDBCC_gfx[];
extern u8 gUnknown_081BE3EC_pal[];
extern u8 gUnknown_081BE3EC_gfx[];
extern u8 gUnknown_081BEC0C_pal[];
extern u8 gUnknown_081BEC0C_gfx[];
extern u8 gUnknown_081BF42C_pal[];
extern u8 gUnknown_081BF42C_gfx[];
extern u8 gUnknown_081BFC4C_pal[];
extern u8 gUnknown_081BFC4C_gfx[];
extern u8 gUnknown_081C046C_pal[];
extern u8 gUnknown_081C046C_gfx[];
extern u8 gUnknown_081C0C8C_pal[];
extern u8 gUnknown_081C0C8C_gfx[];
extern u8 gUnknown_081C14AC_pal[];
extern u8 gUnknown_081C14AC_gfx[];
extern u8 gUnknown_081C1CCC_pal[];
extern u8 gUnknown_081C1CCC_gfx[];
extern u8 gUnknown_081C24EC_pal[];
extern u8 gUnknown_081C24EC_gfx[];
extern u8 gUnknown_081C2D0C_pal[];
extern u8 gUnknown_081C2D0C_gfx[];
extern u8 gUnknown_081C352C_pal[];
extern u8 gUnknown_081C352C_gfx[];
extern u8 gUnknown_081C3D4C_pal[];
extern u8 gUnknown_081C3D4C_gfx[];
extern u8 gUnknown_081C456C_pal[];
extern u8 gUnknown_081C456C_gfx[];
extern u8 gUnknown_081C4D8C_pal[];
extern u8 gUnknown_081C4D8C_gfx[];
extern u8 gUnknown_081C55AC_pal[];
extern u8 gUnknown_081C55AC_gfx[];
extern u8 gUnknown_081C5DCC_pal[];
extern u8 gUnknown_081C5DCC_gfx[];
extern u8 gUnknown_081C65EC_pal[];
extern u8 gUnknown_081C65EC_gfx[];
extern u8 gUnknown_081C6E0C_pal[];
extern u8 gUnknown_081C6E0C_gfx[];
extern u8 gUnknown_081C762C_pal[];
extern u8 gUnknown_081C762C_gfx[];
extern u8 gUnknown_081C7E4C_pal[];
extern u8 gUnknown_081C7E4C_gfx[];
extern u8 gUnknown_081C866C_pal[];
extern u8 gUnknown_081C866C_gfx[];
extern u8 gUnknown_081C8E8C_pal[];
extern u8 gUnknown_081C8E8C_gfx[];
extern u8 gUnknown_081C96AC_pal[];
extern u8 gUnknown_081C96AC_gfx[];
extern u8 gUnknown_081C9ECC_pal[];
extern u8 gUnknown_081C9ECC_gfx[];
extern u8 gUnknown_081CA6EC_pal[];
extern u8 gUnknown_081CA6EC_gfx[];
extern u8 gUnknown_081CAF0C_pal[];
extern u8 gUnknown_081CAF0C_gfx[];
extern u8 gUnknown_081CB72C_pal[];
extern u8 gUnknown_081CB72C_gfx[];
extern u8 gUnknown_081CBF4C_pal[];
extern u8 gUnknown_081CBF4C_gfx[];
extern u8 gUnknown_081CC76C_pal[];
extern u8 gUnknown_081CC76C_gfx[];
extern u8 gUnknown_081CCF8C_pal[];
extern u8 gUnknown_081CCF8C_gfx[];
extern u8 gUnknown_081CD7AC_pal[];
extern u8 gUnknown_081CD7AC_gfx[];
extern u8 gUnknown_081CDFCC_pal[];
extern u8 gUnknown_081CDFCC_gfx[];
extern u8 gUnknown_081CE7EC_pal[];
extern u8 gUnknown_081CE7EC_gfx[];
extern u8 gUnknown_081CF00C_pal[];
extern u8 gUnknown_081CF00C_gfx[];
extern u8 gUnknown_081CF82C_pal[];
extern u8 gUnknown_081CF82C_gfx[];
extern u8 gUnknown_081D004C_pal[];
extern u8 gUnknown_081D004C_gfx[];
extern u8 gUnknown_081D086C_pal[];
extern u8 gUnknown_081D086C_gfx[];
extern u8 gUnknown_081D108C_pal[];
extern u8 gUnknown_081D108C_gfx[];
extern u8 gUnknown_081D18AC_pal[];
extern u8 gUnknown_081D18AC_gfx[];
extern u8 gUnknown_081D20CC_pal[];
extern u8 gUnknown_081D20CC_gfx[];
extern u8 gUnknown_081D28EC_pal[];
extern u8 gUnknown_081D28EC_gfx[];
extern u8 gTextPal[];
extern u8 gCharSet[];  
extern u8 gUnknown_081FD92C[];
extern u8 gUnknown_081FD94C[];
	
extern u8 gUnknown_081FD96C[];
extern u8 gUnknown_081FE16C[];
extern u8 gUnknown_081FE96C[];
extern u8 gUnknown_081FF16C[];
extern u8 gUnknown_081FF96C[];
extern u8 gUnknown_0820016C[];
extern u8 gUnknown_0820096C[];
extern u8 gUnknown_0820116C[];
extern u8 gUnknown_0820196C[];
extern u8 gUnknown_0820216C[];
extern u8 gUnknown_0820296C[];
extern u8 gUnknown_0820316C[];
extern u8 gUnknown_0820396C[];
extern u8 gUnknown_0820416C[];
extern u8 gUnknown_0820496C[];
extern u8 gUnknown_0820516C[];
extern u8 gUnknown_0820596C[];
extern u8 gUnknown_0820616C[];
extern u8 gUnknown_0820696C[];
extern u8 gUnknown_0820716C[];
extern u8 gUnknown_0820796C[];
extern u8 gUnknown_0820816C[];
extern u8 gUnknown_0820896C[];
extern u8 gUnknown_0820916C[];
extern u8 gUnknown_0820996C[];
extern u8 gUnknown_0820A16C[];
extern u8 gUnknown_0820A96C[];
extern u8 gUnknown_0820B16C[];
extern u8 gUnknown_0820B96C[];
extern u8 gUnknown_0820C16C[];
extern u8 gUnknown_0820C96C[];
extern u8 gUnknown_0820D16C[];
extern u8 gUnknown_0820D96C[];
extern u8 gUnknown_0820E16C[];
extern u8 gUnknown_0820E96C[];
extern u8 gUnknown_0820F16C[];
extern u8 gUnknown_0820F96C[];
extern u8 gUnknown_0821016C[];
extern u8 gUnknown_0821096C[];
extern u8 gUnknown_0821116C[];
extern u8 gUnknown_0821196C[];
extern u8 gUnknown_0821216C[];
extern u8 gUnknown_0821296C[];
extern u8 gUnknown_0821316C[];
extern u8 gUnknown_0821396C[];
extern u8 gUnknown_0821416C[];
extern u8 gUnknown_0821496C[];
extern u8 gUnknown_0821516C[];
extern u8 gUnknown_0821596C[];
extern u8 gUnknown_0821616C[];
extern u8 gUnknown_0821696C[];
extern u8 gUnknown_0821716C[];
extern u8 gUnknown_0821796C[];
extern u8 gUnknown_0821816C[];
extern u8 gUnknown_0821896C[];
extern u8 gUnknown_0821916C[];
extern u8 gUnknown_0821996C[];
extern u8 gUnknown_0821A16C[];
extern u8 gUnknown_0821A96C[];
extern u8 gUnknown_0821B16C[];
extern u8 gUnknown_0821B96C[];
extern u8 gUnknown_0821C16C[];
extern u8 gUnknown_0821C96C[];
extern u8 gUnknown_0821D16C[];
extern u8 gUnknown_0821D96C[];
extern u8 gUnknown_0821E16C[];
extern u8 gUnknown_0821E96C[];
extern u8 gUnknown_0821F16C[];
extern u8 gUnknown_0821F96C[];
extern u8 gUnknown_0822016C[];
extern u8 gUnknown_0822096C[];
extern u8 gUnknown_0822116C[];
extern u8 gUnknown_0822196C[];
extern u8 gUnknown_0822216C[];
extern u8 gUnknown_0822296C[];
extern u8 gUnknown_0822316C[];
extern u8 gUnknown_0822396C[];
extern u8 gUnknown_0822416C[];
extern u8 gUnknown_0822496C[];
extern u8 gUnknown_0822516C[];
extern u8 gUnknown_0822596C[];
extern u8 gUnknown_0822616C[];
extern u8 gUnknown_0822696C[];
extern u8 gUnknown_0822716C[];
extern u8 gUnknown_0822796C[];
extern u8 gUnknown_0822816C[];
extern u8 gUnknown_0822896C[];
extern u8 gUnknown_0822916C[];
extern u8 gUnknown_0822996C[];
extern u8 gUnknown_0822A16C[];
extern u8 gUnknown_0822A96C[];
extern u8 gUnknown_0822B16C[];
extern u8 gUnknown_0822B96C[];
extern u8 gUnknown_0822C16C[];
extern u8 gUnknown_0822C96C[];
extern u8 gUnknown_0822D16C[];
extern u8 gUnknown_0822D96C[];
extern u8 gUnknown_0822E16C[];
extern u8 gUnknown_0822E96C[];
extern u8 gUnknown_0822F16C[];
extern u8 gUnknown_0822F96C[];
extern u8 gUnknown_0823016C[];
extern u8 gUnknown_0823096C[];
extern u8 gUnknown_0823116C[];
extern u8 gUnknown_0823196C[];
extern u8 gUnknown_0823216C[];
extern u8 gUnknown_0823296C[];
extern u8 gUnknown_0823316C[];
extern u8 gUnknown_0823396C[];
extern u8 gUnknown_0823416C[];
extern u8 gUnknown_0823496C[];
extern u8 gUnknown_0823516C[];
extern u8 gUnknown_0823596C[];
extern u8 gUnknown_0823616C[];
extern u8 gUnknown_0823696C[];
extern u8 gUnknown_0823716C[];
extern u8 gUnknown_0823796C[];
extern u8 gUnknown_0823816C[];
extern u8 gUnknown_0823896C[];
extern u8 gUnknown_0823916C[];
extern u8 gUnknown_0823996C[];
extern u8 gUnknown_0823A16C[];
extern u8 gUnknown_0823A96C[];
extern u8 gUnknown_0823B16C[];
extern u8 gUnknown_0823B96C[];
extern u8 gUnknown_0823C16C[];
extern u8 gUnknown_0823C96C[];
extern u8 gUnknown_0823D16C[];
extern u8 gUnknown_0823D96C[];
extern u8 gUnknown_0823E16C[];
extern u8 gUnknown_0823E96C[];
extern u8 gUnknown_0823F16C[];
extern u8 gUnknown_0823F96C[];
extern u8 gUnknown_0824016C[];
extern u8 gUnknown_0824096C[];
extern u8 gUnknown_0824116C[];
extern u8 gUnknown_0824196C[];
extern u8 gUnknown_0824216C[];
extern u8 gUnknown_0824296C[];
extern u8 gUnknown_0824316C[];
extern u8 gUnknown_0824396C[];
extern u8 gUnknown_0824416C[];
extern u8 gUnknown_0824496C[];
extern u8 gUnknown_0824516C[];
extern u8 gUnknown_0824596C[];
extern u8 gUnknown_0824616C[];
extern u8 gUnknown_0824696C[];
extern u8 gUnknown_0824698C[];
extern u8 gUnknown_08246A0C[];
extern u8 gUnknown_08246A8C[];
extern u8 gUnknown_08246E8C[];
extern u8 gUnknown_08246ECC[];
extern u8 gUnknown_082476CC[];
extern u8 gUnknown_08247ECC[];
extern u8 gUnknown_082486CC[];
extern u8 gUnknown_0824874C[];
extern u8 gUnknown_0824884C[];
extern u8 gUnknown_082488CC[];
extern u8 gUnknown_0824890C[];
extern u8 gUnknown_08248B0C[];
extern u8 gUnknown_08248C0C[];
extern u8 gUnknown_08248C4C[];
extern u8 gUnknown_0825280C[];
extern u8 gUnknown_08257F28[];
extern u8 gUnknown_0825CCCC[];
extern u8 gUnknown_0825EF64[];
extern u8 gUnknown_082610F0[];
extern u8 gUnknown_08263898[];
extern u8 gUnknown_0826B6DC[];
extern u8 gUnknown_08271DE8[];
extern u8 gUnknown_08278824[];
extern u8 gUnknown_0827CEEC[];
extern u8 gUnknown_08282870[];
extern u8 gUnknown_08288AE0[];
extern u8 gUnknown_08291ADC[];
extern u8 gUnknown_08293DC0[];
extern u8 gUnknown_08296138[];
extern u8 gUnknown_08296E28[];
extern u8 gUnknown_0829A23C[];
extern u8 gUnknown_0829E7A4[];
extern u8 gUnknown_082A3BA8[];
extern u8 gUnknown_082A8E3C[];
extern u8 gUnknown_082AE378[];
extern u8 gUnknown_082B6B78[];
extern u8 gUnknown_082BDC88[];
extern u8 gUnknown_082BFC24[];
extern u8 gUnknown_082C5020[];
extern u8 gUnknown_082C9600[];
extern u8 gUnknown_082CE308[];
extern u8 gUnknown_082D1A90[];
extern u8 gUnknown_082D79EC[];
extern u8 gUnknown_082D8974[];
extern u8 gUnknown_082DC188[];
extern u8 gUnknown_082E1FA4[];
extern u8 gUnknown_082E6BBC[];
extern u8 gUnknown_082EB2B8[];
extern u8 gUnknown_082EF904[];
extern u8 gUnknown_082F7D4C[];
extern u8 gUnknown_082FAF44[];
extern u8 gUnknown_082FE610[];
extern u8 gUnknown_083022F0[];
extern u8 gUnknown_083081E4[];
extern u8 gUnknown_0830D2D8[];
extern u8 gUnknown_0831002C[];
extern u8 gUnknown_08312664[];
extern u8 gUnknown_08314F8C[];
extern u8 gUnknown_0831E8E0[];
extern u8 gUnknown_0831F624[];
extern u8 gUnknown_08320328[];
extern u8 gUnknown_083230C0[];
extern u8 gUnknown_08323EDC[];
extern u8 gUnknown_08327074[];
extern u8 gUnknown_0832AFB8[];
extern u8 gUnknown_0832E7B0[];
extern u8 gUnknown_08331B38[];
extern u8 gUnknown_08335A58[];
extern u8 gUnknown_08339144[];
extern u8 gUnknown_0833DC0C[];
extern u8 gUnknown_0833F720[];
extern u8 gUnknown_08342908[];
extern u8 gUnknown_0834863C[];
extern u8 gUnknown_0834F218[];
extern u8 gUnknown_0835699C[];
extern u8 gUnknown_08357870[];
extern u8 gUnknown_0835ABD8[];
	
extern u8 gUnknown_08360834[];
extern u8 gUnknown_08360854[];
extern u8 gUnknown_08360D04[];
extern u8 gUnknown_08362524[];
extern u8 gUnknown_08362544[];
extern u8 gUnknown_083629F4[];
extern u8 gUnknown_08364794[];
extern u8 gUnknown_08365640[];
extern u8 gUnknown_08368BC4[];
extern u8 gUnknown_08369890[];
extern u8 gUnknown_0836B924[];
extern u8 gUnknown_08372D2C[];
extern u8 gUnknown_0837920C[];
extern u8 gUnknown_0837E52C[];
extern u8 gUnknown_083899C4[];
extern u8 gUnknown_0838A6F4[];
extern u8 gUnknown_0838B364[];
extern u8 gUnknown_0838D370[];
extern u8 gUnknown_08392118[];
extern u8 gUnknown_08396EB0[];
extern u8 gUnknown_0839CD04[];
extern u8 gUnknown_083A3504[];
extern u8 gUnknown_083A6934[];
extern u8 gUnknown_083A7790[];
extern u8 gUnknown_083A8648[];
extern u8 gUnknown_083A9514[];
extern u8 gUnknown_083AFCC8[];
extern u8 gUnknown_083B0A94[];
extern u8 gUnknown_083B3724[];
extern u8 gUnknown_083B6C8C[];
extern u8 gUnknown_083BF1BC[];
extern u8 gUnknown_083C3724[];
extern u8 gUnknown_083C7654[];
extern u8 gUnknown_083CB0BC[];
extern u8 gUnknown_083D27A8[];
extern u8 gUnknown_083D5E64[];
extern u8 gUnknown_083DAAC0[];
extern u8 gUnknown_083E1514[];
extern u8 gUnknown_083E74E8[];
extern u8 gUnknown_083EAB84[];
extern u8 gUnknown_083EEAC0[];
extern u8 gUnknown_083F2BA4[];
extern u8 gUnknown_083F6C48[];
extern u8 gUnknown_083FB1D4[];
extern u8 gUnknown_083FD8D4[];
extern u8 gUnknown_084037F8[];
extern u8 gUnknown_0840AC3C[];
extern u8 gUnknown_0840D3C8[];
extern u8 gUnknown_0840F8C0[];
extern u8 gUnknown_0841B0F4[];
extern u8 gUnknown_0841BD7C[];
extern u8 gUnknown_0841EFC4[];
extern u8 gUnknown_08427608[];
	
extern u8 gUnknown_08427D88[];
extern u8 gUnknown_08427DA8[];
extern u8 gUnknown_0842C8A8[];
extern u8 gUnknown_0842C8C8[];
extern u8 gUnknown_084313C8[];
extern u8 gUnknown_084313E8[];
extern u8 gUnknown_08435EE8[];
extern u8 gUnknown_08435F08[];
extern u8 gUnknown_0843AA08[];
extern u8 gUnknown_0843AA28[];
extern u8 gUnknown_0843F528[];
extern u8 gUnknown_0843F548[];
extern u8 gUnknown_08444048[];
extern u8 gUnknown_08444068[];
extern u8 gUnknown_08448B68[];
extern u8 gUnknown_08448B88[];
extern u8 gUnknown_0844D688[];
extern u8 gUnknown_0844D6A8[];
extern u8 gUnknown_084521A8[];
extern u8 gUnknown_084521C8[];
extern u8 gUnknown_08456CC8[];
extern u8 gUnknown_08456CE8[];
extern u8 gUnknown_0845B7E8[];
extern u8 gUnknown_0845B808[];
extern u8 gUnknown_08460308[];
extern u8 gUnknown_08460328[];
extern u8 gUnknown_08464E28[];
extern u8 gUnknown_08464E48[];
extern u8 gUnknown_08469948[];
extern u8 gUnknown_08469968[];
extern u8 gUnknown_0846E468[];
extern u8 gUnknown_0846E488[];
extern u8 gUnknown_08472F88[];
extern u8 gUnknown_08472FA8[];
extern u8 gUnknown_08477AA8[];
extern u8 gUnknown_08477AC8[];
extern u8 gUnknown_0847C5C8[];
extern u8 gUnknown_0847C5E8[];
extern u8 gUnknown_084810E8[];
extern u8 gUnknown_08481108[];
extern u8 gUnknown_08485C08[];
extern u8 gUnknown_08485C28[];
extern u8 gUnknown_0848A728[];
extern u8 gUnknown_0848A748[];
extern u8 gUnknown_0848F248[];
extern u8 gUnknown_0848F268[];
extern u8 gUnknown_08493D68[];
extern u8 gUnknown_08493D88[];
extern u8 gUnknown_08498888[];
extern u8 gUnknown_084988A8[];
extern u8 gUnknown_0849D3A8[];
extern u8 gUnknown_0849D3C8[];
extern u8 gUnknown_084A1EC8[];
extern u8 gUnknown_084A1EE8[];
extern u8 gUnknown_084A69E8[];
extern u8 gUnknown_084A6A08[];
extern u8 gUnknown_084AB508[];
extern u8 gUnknown_084AB528[];
extern u8 gUnknown_084B0028[];
extern u8 gUnknown_084B0048[];
extern u8 gUnknown_084B4B48[];
extern u8 gUnknown_084B4B68[];
extern u8 gUnknown_084B9668[];
extern u8 gUnknown_084B9688[];
extern u8 gUnknown_084BE188[];
extern u8 gUnknown_084BE1A8[];
extern u8 gUnknown_084C2CA8[];
extern u8 gUnknown_084C2CC8[];
extern u8 gUnknown_084C77C8[];
extern u8 gUnknown_084C77E8[];
extern u8 gUnknown_084CC2E8[];
extern u8 gUnknown_084CC308[];
extern u8 gUnknown_084D0E08[];
extern u8 gUnknown_084D0E28[];
extern u8 gUnknown_084D5928[];
extern u8 gUnknown_084D5948[];
extern u8 gUnknown_084DA448[];
extern u8 gUnknown_084DA468[];
extern u8 gUnknown_084DEF68[];
extern u8 gUnknown_084DEF88[];
extern u8 gUnknown_084E3A88[];
extern u8 gUnknown_084E3AA8[];
extern u8 gUnknown_084E85A8[];
extern u8 gUnknown_084E85C8[];
extern u8 gUnknown_084ED0C8[];
extern u8 gUnknown_084ED0E8[];
extern u8 gUnknown_084F1BE8[];
extern u8 gUnknown_084F1C08[];
extern u8 gUnknown_084F6708[];
extern u8 gUnknown_084F6728[];
extern u8 gUnknown_084FB228[];
extern u8 gUnknown_084FB248[];
extern u8 gUnknown_084FFD48[];
extern u8 gUnknown_084FFD68[];
extern u8 gUnknown_08504868[];
extern u8 gUnknown_08504888[];
extern u8 gUnknown_08509388[];
extern u8 gUnknown_08532B84[];
extern u8 gUnknown_08536720[];
extern u8 gUnknown_08555EF4[];
extern u8 gUnknown_0855DCE4[];
extern u8 gUnknown_08569D8C[];
extern u8 gUnknown_0856C438[];
extern u8 gUnknown_08575EC0[];
extern u8 gUnknown_08577ADC[];
extern u8 gUnknown_0857CA00[];
extern u8 gUnknown_0857D794[];
extern u8 gUnknown_085B76BC[];
extern u8 gUnknown_085C2C94[];
extern u8 gUnknown_085E3388[];
extern u8 gUnknown_085E8A48[];
extern u8 gUnknown_0860EF60[];
extern u8 gUnknown_08612014[];
extern u8 gUnknown_0862057C[];
extern u8 gUnknown_08622F20[];
extern u8 gUnknown_08626564[];
extern u8 gUnknown_08626AD0[];
extern u8 gUnknown_0862ADB4[];
extern u8 gUnknown_0862BA68[];
extern u8 gUnknown_08651F00[];
extern u8 gUnknown_0865787C[];
extern u8 gUnknown_0866E26C[];
extern u8 gUnknown_08670494[];
extern u8 gUnknown_08675038[];
extern u8 gUnknown_086758CC[];
extern u8 gUnknown_0867EAB4[];
extern u8 gUnknown_086812FC[];
extern u8 gUnknown_086851E0[];
extern u8 gUnknown_08685AEC[];
extern u8 gUnknown_0868FCF4[];
extern u8 gUnknown_08691040[];
extern u8 gUnknown_086A146C[];
extern u8 gUnknown_086A3A80[];
extern u8 gUnknown_086B0EA8[];
extern u8 gUnknown_086B4504[];
extern u8 gUnknown_086C4B90[];
extern u8 gUnknown_086C7128[];
extern u8 gUnknown_086C9ECC[];
extern u8 gUnknown_086CA0FC[];
extern u8 gUnknown_086CCA60[];
extern u8 gUnknown_086CCD04[];
extern u8 gUnknown_086D7AEC[];
extern u8 gUnknown_086DA640[];
extern u8 gUnknown_086EF710[];
extern u8 gUnknown_086F328C[];
extern u8 gUnknown_087195C8[];
extern u8 gUnknown_0871CF30[];
extern u8 gUnknown_0871E9F4[];
extern u8 gUnknown_0871EBBC[];
extern u8 gUnknown_0871FCF4[];
extern u8 gUnknown_0871FD14[];
extern u8 gUnknown_0871FD60[];
extern u8 gUnknown_0871FD80[];
extern u8 gUnknown_0871FDAC[];
extern u8 gUnknown_0871FDD0[];
extern u8 gUnknown_0871FDF8[];
extern u8 gUnknown_08748218[];
extern u8 gUnknown_08748340[];
extern u8 gUnknown_08748468[];
extern u8 gUnknown_08748488[];
extern u8 gUnknown_087484A8[];
extern u8 gUnknown_087484C8[];
extern u8 gUnknown_087484E8[];
extern u8 gUnknown_08748520[];
extern u8 gUnknown_08748558[];
extern u8 gUnknown_08748590[];
extern u8 gUnknown_087485C0[];
extern u8 gUnknown_087485F4[];
extern u8 gUnknown_08748684[];
extern u8 gUnknown_08748774[];
extern u8 gUnknown_08748AB4[];
extern u8 gUnknown_08748AEC[];
extern u8 gUnknown_08748B24[];
extern u8 gUnknown_08748C38[];
extern u8 gUnknown_08748CA0[];
extern u8 gUnknown_08748D74[];
extern u8 gUnknown_08748D98[];
extern u8 gUnknown_08748DB8[];
extern u8 gUnknown_08748E0C[];
extern u8 gUnknown_08748EE4[];
extern u8 gUnknown_08748F44[];
extern u8 gUnknown_08748F80[];
extern u8 gUnknown_08748FA4[];
extern u8 gUnknown_08748FDC[];
extern u8 gUnknown_08749000[];
extern u8 gUnknown_08749044[];
extern u8 gUnknown_087490B0[];
extern u8 gUnknown_0874911C[];
extern u8 gUnknown_08749158[];
extern u8 gUnknown_08749194[];
extern u8 gUnknown_087491C4[];
extern u8 gUnknown_087491EC[];
extern u8 gUnknown_08749210[];
extern u8 gUnknown_08749240[];
extern u8 gUnknown_08749268[];
extern u8 gUnknown_08749290[];
extern u8 gUnknown_087492C0[];
extern u8 gUnknown_08749314[];
extern u8 gUnknown_08749334[];
extern u8 gUnknown_08749360[];
extern u8 gUnknown_08749384[];
extern u8 gUnknown_087493A8[];
extern u8 gUnknown_087493D4[];
extern u8 gUnknown_08749404[];
#endif


#endif