#include "global.h"
#include "animation.h"
#include "ewram.h"
#include "sound.h"
#include "utils.h"
#include "script.h"
#include "background.h"
#include "graphics.h"
#include "constants/animation.h"
#include "constants/persons.h"
#include "constants/process.h"
#include "constants/animation_offsets.h"

#define DUMMYPERSON { .gfxData = 0, .frameData = 0, .spriteCount = 0, .fillerA = 0 }
#define DUMMYANIMATION { .gfxData = 0, .vramPtr = 0, .frameData = 0, .xOrigin = 0, .yOrigin = 0, .paletteSlot = 0, .spriteCount = 0, .priority = 0, .flags = 0x0, }

const struct PersonAnimationData gPersonAnimData[] = {
	[PERSON_ANIM_NONE] = DUMMYPERSON,
	[PERSON_ANIM_DUMMY01] = DUMMYPERSON,
	[PERSON_ANIM_PHOENIX] = {
		.gfxData = gGfxPixAnimationChar01,
		.frameData = gGfxSeqAnimationChar01,
		.spriteCount = 37,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_DUMMY03] = DUMMYPERSON,
	[PERSON_ANIM_MAYA] = {
		.gfxData = gGfxPixAnimationChar02,
		.frameData = gGfxSeqAnimationChar02,
		.spriteCount = 28,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_SUMMONED_MIA] = {
		.gfxData = gGfxPixAnimationChar03,
		.frameData = gGfxSeqAnimationChar03,
		.spriteCount = 28,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_DUMMY06] = DUMMYPERSON,
	[PERSON_ANIM_MIA] = {
		.gfxData = gGfxPixAnimationChar04,
		.frameData = gGfxSeqAnimationChar04,
		.spriteCount = 28,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_JUDGE] = {
		.gfxData = gGfxPixAnimationChar05,
		.frameData = gGfxSeqAnimationChar05,
		.spriteCount = 19,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_EDGEWORTH] = {
		.gfxData = gGfxPixAnimationChar06,
		.frameData = gGfxSeqAnimationChar06,
		.spriteCount = 38,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_WINSTON_PAYNE] = {
		.gfxData = gGfxPixAnimationChar10,
		.frameData = gGfxSeqAnimationChar10,
		.spriteCount = 23,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_DUMMY11] = DUMMYPERSON,
	[PERSON_ANIM_MARVIN_GROSSBERG] = {
		.gfxData = gGfxPixAnimationChar14,
		.frameData = gGfxSeqAnimationChar14,
		.spriteCount = 33,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_DUMMY13] = DUMMYPERSON,
	[PERSON_ANIM_DUMMY14] = DUMMYPERSON,
	[PERSON_ANIM_DUMMY15] = DUMMYPERSON,
	[PERSON_ANIM_PENNY_NICHOLS] = {
		.gfxData = gGfxPixAnimationChar16,
		.frameData = gGfxSeqAnimationChar16,
		.spriteCount = 14,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_WENDY_OLDBAG] = {
		.gfxData = gGfxPixAnimationChar15,
		.frameData = gGfxSeqAnimationChar15,
		.spriteCount = 29,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_SAL_MANELLA] = {
		.gfxData = gGfxPixAnimationChar18,
		.frameData = gGfxSeqAnimationChar18,
		.spriteCount = 39,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_DUMMY19] = DUMMYPERSON,
	[PERSON_ANIM_GUMSHOE] = {
		.gfxData = gGfxPixAnimationChar07,
		.frameData = gGfxSeqAnimationChar07,
		.spriteCount = 39,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_REDD_WHITE] = {
		.gfxData = gGfxPixAnimationChar08,
		.frameData = gGfxSeqAnimationChar08,
		.spriteCount = 36,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_APRIL_MAY] = {
		.gfxData = gGfxPixAnimationChar09,
		.frameData = gGfxSeqAnimationChar09,
		.spriteCount = 30,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_BELLBOY] = {
		.gfxData = gGfxPixAnimationChar11,
		.frameData = gGfxSeqAnimationChar11,
		.spriteCount = 35,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_DEE_VASQUEZ] = {
		.gfxData = gGfxPixAnimationChar19,
		.frameData = gGfxSeqAnimationChar19,
		.spriteCount = 29,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_LARRY_BUTZ] = {
		.gfxData = gGfxPixAnimationChar12,
		.frameData = gGfxSeqAnimationChar12,
		.spriteCount = 39,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_FRANK_SAWHIT] = {
		.gfxData = gGfxPixAnimationChar13,
		.frameData = gGfxSeqAnimationChar13,
		.spriteCount = 38,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_WILL_POWERS] = {
		.gfxData = gGfxPixAnimationChar17,
		.frameData = gGfxSeqAnimationChar17,
		.spriteCount = 39,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_CODY_HACKINS] = {
		.gfxData = gGfxPixAnimationChar20,
		.frameData = gGfxSeqAnimationChar20,
		.spriteCount = 18,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_BUSTUP_PHOENIX] = {
		.gfxData = gGfxPixAnimationChar21,
		.frameData = gGfxSeqAnimationChar21,
		.spriteCount = 7,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_BUSTUP_EDGEWORTH] = {
		.gfxData = gGfxPixAnimationChar22,
		.frameData = gGfxSeqAnimationChar22,
		.spriteCount = 10,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_LOTTA_HART] = {
		.gfxData = gGfxPixAnimationChar23,
		.frameData = gGfxSeqAnimationChar23,
		.spriteCount = 24,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_YANNI_YOGI] = {
		.gfxData = gGfxPixAnimationChar24,
		.frameData = gGfxSeqAnimationChar24,
		.spriteCount = 29,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_MANFRED_VONKARMA] = {
		.gfxData = gGfxPixAnimationChar25,
		.frameData = gGfxSeqAnimationChar25,
		.spriteCount = 36,
		.fillerA = 0x0,
	},
	[PERSON_ANIM_POLLY] = {
		.gfxData = gGfxPixAnimationChar26,
		.frameData = gGfxSeqAnimationChar26,
		.spriteCount = 10,
		.fillerA = 0x0,
	},
};

const struct AnimationData gAnimationData[] = {
	[0] = DUMMYANIMATION,
	[1] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM0+0x3D00,
		.frameData = gGfxSeqAnimation14,
		.xOrigin = 45,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 7,
		.priority = 0,
		.flags = 0x0,
	},
	[2] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM0+0x3D00,
		.frameData = gGfxSeqAnimation13,
		.xOrigin = 45,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 7,
		.priority = 0,
		.flags = 0x0,
	},
	[3] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM0+0x3D00,
		.frameData = gGfxSeqAnimation13,
		.xOrigin = 190,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 7,
		.priority = 0,
		.flags = 0x0,
	},
	[4] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM0+0x3D00,
		.frameData = gGfxSeqAnimation15,
		.xOrigin = 45,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 7,
		.priority = 0,
		.flags = 0x0,
	},
	[5] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM0+0x3400,
		.frameData = gGfxSeqAnimation21,
		.xOrigin = 60,
		.yOrigin = 80,
		.paletteSlot = 14,
		.spriteCount = 7,
		.priority = 33,
		.flags = 0x0,
	},
	[6] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM0+0x3FC0,
		.frameData = gGfxSeqAnimation22,
		.xOrigin = 260,
		.yOrigin = 80,
		.paletteSlot = 14,
		.spriteCount = 7,
		.priority = 32,
		.flags = 0x0,
	},
	[7] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x22E0,
		.frameData = gGfxSeqAnimation26,
		.xOrigin = 80,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 7,
		.priority = 34,
		.flags = 0x0,
	},
	[8] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x22E0,
		.frameData = gGfxSeqAnimation26,
		.xOrigin = 220,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 7,
		.priority = 34,
		.flags = 0x0,
	},
	[9] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x22E0,
		.frameData = gGfxSeqAnimation26,
		.xOrigin = 360,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 7,
		.priority = 34,
		.flags = 0x0,
	},
	[10] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM0+0x3D00,
		.frameData = gGfxSeqAnimation14,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 7,
		.priority = 32,
		.flags = 0x0,
	},
	[11] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM0+0x3D00,
		.frameData = gGfxSeqAnimation13,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 7,
		.priority = 32,
		.flags = 0x0,
	},
	[12] = {
		.gfxData = gGfxPixAnimationTileset01,
		.vramPtr = OBJ_VRAM1+0x1800,
		.frameData = gGfxSeqAnimation01,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 1,
		.priority = 34,
		.flags = 0x0,
	},
	[13] = {
		.gfxData = gGfxPixAnimationTileset01,
		.vramPtr = OBJ_VRAM1+0x1800,
		.frameData = gGfxSeqAnimation03,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 1,
		.priority = 34,
		.flags = 0x0,
	},
	[14] = {
		.gfxData = gGfxPixAnimationTileset01,
		.vramPtr = OBJ_VRAM1+0x35A0,
		.frameData = gGfxSeqAnimation04,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 4,
		.priority = 34,
		.flags = 0x0,
	},
	[15] = {
		.gfxData = gGfxPixAnimationTileset01,
		.vramPtr = OBJ_VRAM1+0x3BE0,
		.frameData = gGfxSeqAnimation05,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 2,
		.priority = 34,
		.flags = 0x0,
	},
	[16] = {
		.gfxData = gGfxPixAnimationTileset01,
		.vramPtr = OBJ_VRAM1+0x35A0,
		.frameData = gGfxSeqAnimation06,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 3,
		.priority = 34,
		.flags = 0x0,
	},
	[17] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x1000,
		.frameData = gGfxSeqAnimation07,
		.xOrigin = 120,
		.yOrigin = 60,
		.paletteSlot = 6,
		.spriteCount = 3,
		.priority = 32,
		.flags = 0x0,
	},
	[18] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x1000,
		.frameData = gGfxSeqAnimation08,
		.xOrigin = 120,
		.yOrigin = 60,
		.paletteSlot = 6,
		.spriteCount = 3,
		.priority = 32,
		.flags = 0x0,
	},
	[19] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x0C00,
		.frameData = gGfxSeqAnimation09,
		.xOrigin = 0,
		.yOrigin = 60,
		.paletteSlot = 6,
		.spriteCount = 1,
		.priority = 32,
		.flags = 0x0,
	},
	[20] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x0800,
		.frameData = gGfxSeqAnimation10,
		.xOrigin = 240,
		.yOrigin = 60,
		.paletteSlot = 6,
		.spriteCount = 1,
		.priority = 32,
		.flags = 0x0,
	},
	[21] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x0C00,
		.frameData = gGfxSeqAnimation11,
		.xOrigin = 0,
		.yOrigin = 60,
		.paletteSlot = 6,
		.spriteCount = 1,
		.priority = 32,
		.flags = 0x0,
	},
	[22] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x0800,
		.frameData = gGfxSeqAnimation12,
		.xOrigin = 240,
		.yOrigin = 60,
		.paletteSlot = 6,
		.spriteCount = 1,
		.priority = 32,
		.flags = 0x0,
	},
	[23] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x2EC0,
		.frameData = gGfxSeqAnimation16,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 14,
		.spriteCount = 5,
		.priority = 33,
		.flags = 0x0,
	},
	[24] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x2EC0,
		.frameData = gGfxSeqAnimation17,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 14,
		.spriteCount = 6,
		.priority = 33,
		.flags = 0x0,
	},
	[25] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x1800,
		.frameData = gGfxSeqAnimation18,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 1,
		.priority = 32,
		.flags = 0x0,
	},
	[26] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x1800,
		.frameData = gGfxSeqAnimation19,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 1,
		.priority = 32,
		.flags = 0x0,
	},
	[27] = {
		.gfxData = gGfxPixAnimationTileset01,
		.vramPtr = OBJ_VRAM1+0x1800,
		.frameData = gGfxSeqAnimation02,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 12,
		.priority = 34,
		.flags = 0x0,
	},
	[28] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x1800,
		.frameData = gGfxSeqAnimation20,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 12,
		.spriteCount = 15,
		.priority = 32,
		.flags = 0x0,
	},
	[29] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x2800,
		.frameData = gGfxSeqAnimation29,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 12,
		.spriteCount = 6,
		.priority = 32,
		.flags = 0x0,
	},
	[30] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x1800,
		.frameData = gGfxSeqAnimation30,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 4,
		.priority = 32,
		.flags = 0x0,
	},
	[31] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x1800,
		.frameData = gGfxSeqAnimation23,
		.xOrigin = 120,
		.yOrigin = 48,
		.paletteSlot = 13,
		.spriteCount = 12,
		.priority = 32,
		.flags = 0x0,
	},
	[32] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x1800,
		.frameData = gGfxSeqAnimation24,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 4,
		.priority = 32,
		.flags = 0x8,
	},
	[33] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x1800,
		.frameData = gGfxSeqAnimation25,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 13,
		.priority = 32,
		.flags = 0x0,
	},
	[34] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x1800,
		.frameData = gGfxSeqAnimation27,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 1,
		.priority = 32,
		.flags = 0x0,
	},
	[35] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x1A00,
		.frameData = gGfxSeqAnimation28,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 12,
		.spriteCount = 2,
		.priority = 32,
		.flags = 0x0,
	},
	[36] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x1DA0,
		.frameData = gGfxSeqAnimation31,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 15,
		.spriteCount = 8,
		.priority = 32,
		.flags = 0x0,
	},
	[37] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x1C80,
		.frameData = gGfxSeqAnimation32,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 14,
		.spriteCount = 2,
		.priority = 32,
		.flags = 0x0,
	},
	[38] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x0EE0,
		.frameData = gGfxSeqAnimation33,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 7,
		.priority = 32,
		.flags = 0x0,
	},
	[39] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x1120,
		.frameData = gGfxSeqAnimation34,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 10,
		.spriteCount = 2,
		.priority = 32,
		.flags = 0x0,
	},
	[40] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x0A40,
		.frameData = gGfxSeqAnimation35,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 10,
		.spriteCount = 10,
		.priority = 32,
		.flags = 0x0,
	},
	[41] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x1960,
		.frameData = gGfxSeqAnimation36,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 12,
		.spriteCount = 4,
		.priority = 32,
		.flags = 0x0,
	},
	[42] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x1720,
		.frameData = gGfxSeqAnimation37,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 12,
		.spriteCount = 4,
		.priority = 32,
		.flags = 0x1,
	},
	[43] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x02A0,
		.frameData = gGfxSeqAnimation38,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 10,
		.spriteCount = 8,
		.priority = 32,
		.flags = 0x0,
	},
	[44] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x04A0,
		.frameData = gGfxSeqAnimation39,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 10,
		.spriteCount = 8,
		.priority = 32,
		.flags = 0x0,
	},
	[45] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x0A60,
		.frameData = gGfxSeqAnimation40,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 10,
		.spriteCount = 5,
		.priority = 32,
		.flags = 0x0,
	},
	[46] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x08C0,
		.frameData = gGfxSeqAnimation41,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 3,
		.priority = 32,
		.flags = 0x0,
	},
	[47] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x1C20,
		.frameData = gGfxSeqAnimation42,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 14,
		.spriteCount = 2,
		.priority = 32,
		.flags = 0x0,
	},
	[48] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x1CA0,
		.frameData = gGfxSeqAnimation43,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 14,
		.spriteCount = 5,
		.priority = 32,
		.flags = 0x0,
	},
	[49] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x1960,
		.frameData = gGfxSeqAnimation36,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 12,
		.spriteCount = 4,
		.priority = 32,
		.flags = 0x10,
	},
	[50] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x1720,
		.frameData = gGfxSeqAnimation37,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 12,
		.spriteCount = 4,
		.priority = 32,
		.flags = 0x11,
	},
	[51] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x0400,
		.frameData = gGfxSeqAnimation44,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 10,
		.spriteCount = 3,
		.priority = 32,
		.flags = 0x0,
	},
	[52] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x0340,
		.frameData = gGfxSeqAnimation45,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 10,
		.spriteCount = 3,
		.priority = 32,
		.flags = 0x0,
	},
	[53] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x0140,
		.frameData = gGfxSeqAnimation46,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 10,
		.spriteCount = 5,
		.priority = 32,
		.flags = 0x0,
	},
	[54] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x03E0,
		.frameData = gGfxSeqAnimation47,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 10,
		.spriteCount = 14,
		.priority = 32,
		.flags = 0x0,
	},
	[55] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x1BA0,
		.frameData = gGfxSeqAnimation48,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 11,
		.spriteCount = 1,
		.priority = 32,
		.flags = 0x0,
	},
	[56] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x0200,
		.frameData = gGfxSeqAnimation49,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 10,
		.spriteCount = 4,
		.priority = 32,
		.flags = 0x0,
	},
	[57] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x0280,
		.frameData = gGfxSeqAnimation50,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 10,
		.spriteCount = 2,
		.priority = 32,
		.flags = 0x0,
	},
	[58] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x0280,
		.frameData = gGfxSeqAnimation51,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 10,
		.spriteCount = 2,
		.priority = 32,
		.flags = 0x0,
	},
	[59] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x0880,
		.frameData = gGfxSeqAnimation52,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 13,
		.spriteCount = 4,
		.priority = 32,
		.flags = 0x0,
	},
	[60] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x0300,
		.frameData = gGfxSeqAnimation53,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 10,
		.spriteCount = 5,
		.priority = 32,
		.flags = 0x0,
	},
	[61] = {
		.gfxData = gGfxPixAnimationTileset02,
		.vramPtr = OBJ_VRAM1+0x02C0,
		.frameData = gGfxSeqAnimation54,
		.xOrigin = 120,
		.yOrigin = 80,
		.paletteSlot = 10,
		.spriteCount = 2,
		.priority = 32,
		.flags = 0x0,
	},
};

const struct SpriteSizeData gSpriteSizeTable[0xF] = {
	[0] = {
		.tileSize = 32,
		.height = 8,
		.width = 8,
	},
	[1] = {
		.tileSize = 64,
		.height = 8,
		.width = 16,
	},
	[2] = {
		.tileSize = 64,
		.height = 16,
		.width = 8,
	},
	[3] = {
		.tileSize = 3,
		.height = 0,
		.width = 0,
	},
	[4] = {
		.tileSize = 128,
		.height = 16,
		.width = 16,
	},
	[5] = {
		.tileSize = 128,
		.height = 8,
		.width = 32,
	},
	[6] = {
		.tileSize = 128,
		.height = 32,
		.width = 8,
	},
	[7] = {
		.tileSize = 7,
		.height = 0,
		.width = 0,
	},
	[8] = {
		.tileSize = 512,
		.height = 32,
		.width = 32,
	},
	[9] = {
		.tileSize = 256,
		.height = 16,
		.width = 32,
	},
	[10] = {
		.tileSize = 256,
		.height = 32,
		.width = 16,
	},
	[11] = {
		.tileSize = 11,
		.height = 0,
		.width = 0,
	},
	[12] = {
		.tileSize = 2048,
		.height = 64,
		.width = 64,
	},
	[13] = {
		.tileSize = 1024,
		.height = 32,
		.width = 64,
	},
	[14] = {
		.tileSize = 1024,
		.height = 64,
		.width = 32,
	},
};

const s8 gCourtScroll01AnimOffsets[31] = {
	0x03, 0x00, 0x14, 0x00, 0x24, 0x00, 0x34, 0x00, 0x3c, 0x00, 0x2f, 0x00, 0x1e, 0x00, 0x0c, 0x00,
	0x02, 0x00, 0x14, 0x00, 0x28, 0x00, 0x1b, 0x00, 0x3a, 0x00, 0x2c, 0x00, 0x1c, 0x00, 0x0b
};

const s8 gCourtScroll02AnimOffsets[31] = {
	0x03, 0x00, 0x06, 0x00, 0x0a, 0x00, 0x0e, 0x00, 0x14, 0x00, 0x1a, 0x00, 0x1f, 0x00, 0x11, 0x00,
	0x1c, 0x00, 0x1c, 0x00, 0x1a, 0x00, 0x1a, 0x00, 0x1a, 0x00, 0x18, 0x00, 0x18, 0x00, 0x16
};

const s8 gCourtScroll03AnimOffsets[31] = {
	0x02, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x12, 0x00, 0x14, 0x00, 0x1e, 0x00, 0x26, 0x00,
	0x22, 0x00, 0x20, 0x00, 0x1e, 0x00, 0x1c, 0x00, 0x1b, 0x00, 0x1a, 0x00, 0x19, 0x00, 0x17
};

extern u16 gObjPaletteBuffer[16][16];

static struct AnimationListEntry * CreateAnimationFromAnimationInfo(struct AnimationInfo *animationFieldC, u32 arg1, u32 flags);
static void UpdatePersonAnimationForCourtScroll(struct AnimationListEntry * animation);

void (*gSpecialAnimationEffectFunctions[11])(struct AnimationListEntry *) = { // Table is used for Objection bubble shake and animation movement for the opening of case 3
	SpeechBubbleAnimationEffect,
	SpeechBubbleAnimationEffect,
	SpeechBubbleAnimationEffect,
	SpeechBubbleAnimationEffect,
	Case3OpeningAnimationEffect,
	Case3OpeningAnimationEffect,
	Case3OpeningAnimationEffect,
	Case3OpeningAnimationEffect,
	Case3OpeningAnimationEffect,
	SpeechBubbleAnimationEffect,
	SpeechBubbleAnimationEffect
};

void (*gCourtScrollPersonAnimationUpdateFuncs[6])(struct AnimationListEntry *, struct CourtScroll *) = {
	ScrollMode0AnimationUpdate,
	ScrollMode1AnimationUpdate,
	ScrollMode2AnimationUpdate,
	ScrollMode3AnimationUpdate,
	ScrollMode4AnimationUpdate,
	ScrollMode5AnimationUpdate
};

static void InitCurrentAnimationToNull()
{
    gAnimation[0].flags = ANIM_ENABLE_XFLIP;
    gAnimation[0].next = NULL;
    gAnimation[0].prev = NULL;
}

void ResetAnimationSystem()
{
    struct AnimationListEntry *animation = gAnimation;
    DmaFill16(3, 0, gAnimation, sizeof(gAnimation));
    gMain.animationFlags |= 3;
    animation = &gAnimation[1];
    animation->animationInfo.animId = 0xFF;
    animation->animationInfo.personId = 0;
    InitCurrentAnimationToNull();
}

void ClearAllAnimationSprites()
{
    struct AnimationListEntry *animation;
    for (animation = &gAnimation[1]; animation < &gAnimation[0x20]; animation++)
    {
        if (animation->flags & ANIM_ALLOCATED)
        {
            if (&gOamObjects[animation->animtionOamStartIdx] < &gOamObjects[animation->animtionOamEndIdx])
            {
                struct OamAttrs *oam;
                for (oam = &gOamObjects[animation->animtionOamStartIdx]; oam < &gOamObjects[animation->animtionOamEndIdx]; oam++)
                    oam->attr0 = SPRITE_ATTR0_CLEAR;
            }
        }
    }
}

struct AnimationListEntry * FindAnimationFromAnimId(u32 animId)
{
    struct AnimationListEntry *animation = &gAnimation[0x1F];
    s32 i;
    for(i = 0x1F; i != -1; i--) // ! HM
    {
        if (animation->animationInfo.animId == animId && animation->flags & ANIM_ALLOCATED)
            return animation;
        animation--;
    }
    return NULL;
}

static struct AnimationListEntry *AllocateAnimationWithId(u32 animId)
{
    u32 flags = 0;
    s32 i;
    struct AnimationListEntry *animation = FindAnimationFromAnimId(animId);
    if (animation != NULL)
    {
        flags = (animation->flags & 0x02000000) ? 0x02000000 : flags;
        flags = (animation->flags & ANIM_INACTIVE) ? ANIM_INACTIVE : flags;
        DestroyAnimation(animation);
        DmaFill16(3, 0, animation, 0x40)
        animation->flags = (ANIM_PLAYING | ANIM_QUEUED_TILE_UPLOAD | ANIM_ACTIVE | ANIM_ALLOCATED | ANIM_QUEUED_PAL_UPLOAD) | flags;
        animation->frameDurationCounter = 0xffff;
        if (flags & ANIM_INACTIVE)
            animation->flags &= ~ANIM_ACTIVE;
        animation->animationInfo.animId = animId;
        return animation;
    }
    else
    {
        animation = &gAnimation[0x1F];
        for (i = 0x1f; i != -1; i--)
        {
            if (!(animation->flags & ANIM_ALLOCATED))
            {
                if (animation != &gAnimation[1])
                {
                    DmaFill16(3, 0, animation, 0x40)
                    animation->flags = (ANIM_PLAYING | ANIM_QUEUED_TILE_UPLOAD | ANIM_ACTIVE | ANIM_ALLOCATED | ANIM_QUEUED_PAL_UPLOAD);
                    animation->animationInfo.animId = animId;
                    return animation;
                }
            }
            animation--;
        }
        return NULL;
    }
}

void SetAnimationOriginCoords(struct AnimationListEntry *animation, u32 xOrigin, u32 yOrigin) // unused
{
    if (animation != NULL)
    {
        animation->animationInfo.xOrigin = xOrigin;
        animation->animationInfo.yOrigin = yOrigin;
    }
}

static void SetAnimationRotScaleParams(struct AnimationListEntry *animation, u32 rotscaleIdx)
{
    s32 sin, cos;
    u32 oamIdx;
    oamIdx = rotscaleIdx << 2;
    if (animation != NULL)
    {
        if (rotscaleIdx > 0x1f)
            rotscaleIdx = 0x1f;
        animation->flags = (animation->flags & ~ANIM_ENABLE_XFLIP) | ANIM_ENABLE_ROTATION;
        animation->rotationAmount &= 0xff;
        animation->spritePriorityMatrixIndex &= 0xff00;
        animation->spritePriorityMatrixIndex |= rotscaleIdx;
        cos = _Cos(animation->rotationAmount);
        sin = -_Sin(animation->rotationAmount);
        gOamObjects[oamIdx++].attr3 = cos;
        gOamObjects[oamIdx++].attr3 = -sin;
        gOamObjects[oamIdx++].attr3 = sin;
        gOamObjects[oamIdx++].attr3 = cos;
    }
}

void SetAnimationRotation(struct AnimationListEntry *animation, u32 rotscaleIdx, u32 rotation)
{
    if (animation != NULL)
    {
        animation->rotationAmount = rotation;
        SetAnimationRotScaleParams(animation, rotscaleIdx);
    }
}

void DisableAnimationRotation(struct AnimationListEntry *animation)
{
    if (animation != NULL)
        animation->flags &= ~ANIM_ENABLE_ROTATION;
}

void ChangeAnimationActivity(struct AnimationListEntry *animation, bool32 activate)
{
    u32 i;
    if (animation != 0 && (animation->flags & ANIM_ALLOCATED))
    {
        if (activate)
        {
            animation->flags &= ~ANIM_INACTIVE;
            animation->flags |= ANIM_ACTIVE;
        }
        else
        {
            animation->flags &= ~ANIM_ACTIVE;
            animation->flags |= ANIM_INACTIVE;
            for (i = animation->animtionOamStartIdx; i < animation->animtionOamEndIdx; i++)
                gOamObjects[i].attr0 = SPRITE_ATTR0_CLEAR;
        }
        if (animation->animationInfo.animId == 0xff && animation->animationInfo.personId == 0x16)
        {
            if ((animation = FindAnimationFromAnimId(ANIM_APRIL_MAY_ABDOMEN_1)) != NULL || (animation = FindAnimationFromAnimId(ANIM_APRIL_MAY_ABDOMEN_2)) != NULL)
            {
                if (activate)
                {
                    animation->flags &= ~ANIM_INACTIVE;
                    animation->flags |= ANIM_ACTIVE;
                }
                else
                {
                    animation->flags &= ~ANIM_ACTIVE;
                    animation->flags |= ANIM_INACTIVE;
                    for (i = animation->animtionOamStartIdx; i < animation->animtionOamEndIdx; i++)
                        gOamObjects[i].attr0 = SPRITE_ATTR0_CLEAR;
                }
            }
        }
    }
}

void SetAnimationXFlip(struct AnimationListEntry *animation, bool32 flipX)
{
    if (animation != NULL)
    {
        if (flipX)
            animation->flags |= 1;
        else
            animation->flags &= ~1;
    }
}

void SetAnimationPriority(struct AnimationListEntry *animation, u32 priority)
{
    if (animation != NULL)
    {
        if (priority > 3)
            priority = 3;
        animation->spritePriorityMatrixIndex &= 0xff;
        animation->spritePriorityMatrixIndex |= priority << 8;
    }
}

void SetAnimationFrameOffset(struct AnimationListEntry *animation, u32 animOffset)
{
    void * animGfxData;
    void * animFrameData;
    if (animation != NULL)
    {
        if (animation->animationInfo.animId == 0xFF)
        {
            u8 *framePtr;
            framePtr = gPersonAnimData[animation->animationInfo.personId].frameData + animOffset;
            if (animation->animationInfo.animFrameDataStartPtr == framePtr)
                return;
            animation->animationInfo.animFrameDataStartPtr = framePtr;
            animation->animationInfo.animGfxDataStartPtr = gPersonAnimData[animation->animationInfo.personId].gfxData;
        }
        else
        {
            if (animation->animationInfo.animId > 0xb)
            {
                if (animation->animationInfo.animId <= 0x10)
                {
                    animation->animationInfo.animFrameDataStartPtr = gGfxSeqAnimation01 + animOffset; // ! These globals are defines *sob*
                    animation->animationInfo.animGfxDataStartPtr = gGfxPixAnimationTileset01;
                }
                else
                {
                    if (animation->animationInfo.animId > 0x18)
                    {
                        return;
                    }
                    animation->animationInfo.animFrameDataStartPtr = gGfxSeqAnimation07 + animOffset;
                    animation->animationInfo.animGfxDataStartPtr = gGfxPixAnimationTileset02;
                }
            }
            else
            {
                animation->animationInfo.animFrameDataStartPtr = gGfxSeqAnimation07 + animOffset;
                animation->animationInfo.animGfxDataStartPtr = gGfxPixAnimationTileset02;
            }
        }
        animation->flags |= (ANIM_PLAYING | ANIM_QUEUED_TILE_UPLOAD);
        animation->frameDurationCounter = 0xFFFF;
        // comments mostly based on h3rmit docs
        // animation->animFrameDataStartPtr animation block beginning
        animFrameData = animation->animationInfo.animFrameDataStartPtr;
        animGfxData = animation->animationInfo.animGfxDataStartPtr + 1 [(u32 *)animFrameData]; // offsets the graphics pointer
        animation->animationInfo.animGfxDataStartPtr = animGfxData;
        animation->animationInfo.tileDataPtr = animGfxData + 4 + (*(u32 *)animGfxData) * 0x20; // skip first u32(number of palettes) and the palettes, pointer to tiles
        animation->frameData = (struct AnimationFrame *)(animFrameData + 8); // skips animation block header, pointer to frame data
        animation->spriteData = animFrameData + animation->frameData->spriteDataOffset; // Frame tilemap pointer
    }
}

/***
  * 
  * Checks to see if a rectangle has collided with any animation, if yes return animation id
  * 
***/
u32 CheckRectCollisionWithAnim(struct Rect *p)
{
    u32 i;
    u32 spriteSize = 0;
    struct AnimationListEntry * animation;

    for(animation = gAnimation[0].next; animation != NULL; animation = animation->next)
    {
        struct Rect * rect = eGeneralScratchpadBuffer;
        struct Rect * collisionRect = eGeneralScratchpadBuffer + sizeof(struct Rect) * 1;
        struct Rect * spriteRect = eGeneralScratchpadBuffer + sizeof(struct Rect) * 2;
        uintptr_t vram;
        struct SpriteTemplate * spriteTemplate;
        u32 spriteCount;

        *rect = *p;
        rect->w += p->x;
        rect->h += p->y;
        
        vram = (uintptr_t)animation->animationInfo.vramPtr;
        spriteTemplate = animation->spriteData;
        spriteCount = *(u16*)animation->spriteData;
        for(i = 0; i < spriteCount; i++)
        {
            struct SpriteSizeData * spriteSizePtr = (struct SpriteSizeData *)&spriteSize; // ! possible fakematch
            u32 mask;
            spriteTemplate++;
            *collisionRect = *rect;
            mask = 0xFFFF;
            vram += spriteSize & mask;    
            *spriteSizePtr = gSpriteSizeTable[spriteTemplate->data >> 0xC];
            spriteRect->x = spriteRect->w = animation->animationInfo.xOrigin + spriteTemplate->x;
            spriteRect->w += spriteSizePtr->width;
            spriteRect->y = spriteRect->h = spriteTemplate->y + animation->animationInfo.yOrigin;
            spriteRect->h += spriteSizePtr->height;

            // Check if collision rect is in the region of the sprite rext 
            if(spriteRect->x < collisionRect->w 
            && collisionRect->x < spriteRect->w
            && spriteRect->y < collisionRect->h
            && collisionRect->y < spriteRect->h)
            {
                u32 temp;
                s32 x, y;
                // now create the intersection rect between the two rects
                collisionRect->x -= spriteRect->x;
                if(collisionRect->x < 0)
                    collisionRect->x = 0;
                collisionRect->y -= spriteRect->y;
                if(collisionRect->y < 0)
                    collisionRect->y = 0;
                if(collisionRect->w > spriteRect->w)
                    collisionRect->w = spriteRect->w;
                collisionRect->w -= spriteRect->x;
                if(collisionRect->h > spriteRect->h)
                    collisionRect->h = spriteRect->h;
                collisionRect->h -= spriteRect->y;

                // Check if any visible pixels are in the intersection
                temp = spriteSizePtr->width / 8;
                y = collisionRect->y;
                while(y < collisionRect->h)
                {
                    s32 yy1;
                    s32 yy2;
                    uintptr_t temp3;
                    yy1 = (y >> 3) * temp * 32;
                    yy2 = (y % 8) * 4;
                    temp3 = yy1 + yy2 + vram;
                    x = collisionRect->x;
                    while(x < collisionRect->w)
                    {
                        uintptr_t pixel;
                        s32 xx1 = (x >> 3) * 32;
                        if(x % 8 > 1){
                            uintptr_t ptr = temp3 + 1;
                            pixel = (x >> 3) * 32 + ptr;
                        }
                        else {
                            uintptr_t ptr = temp3;
                            pixel = (x >> 3) * 32 + ptr;
                        }
                        if(*(u8 *)pixel != 0)
                            return animation->animationInfo.animId;
                        x+=2;
                    }
                    y+=2;
                }
            }
        }
    }
    return 0;
}

bool32 CheckIfLinesIntersect(const struct Point *pt0, const struct Point *pt1, const struct Point *pt2, const struct Point *pt3)
{
    // check if the lines through pt0-pt1 and pt2-pt3 intersect on the screen
    s32 xd01, yd01, xd23, yd23, cp0123, xd13, yd13, cp2313, cp0113;
    xd01 = pt0->x - pt1->x;
    yd01 = pt0->y - pt1->y;
    xd23 = pt2->x - pt3->x;
    yd23 = pt2->y - pt3->y;
    cp0123 = xd01 * yd23 - yd01 * xd23;
    // are 0->1 and 2->3 collinear or 0? if yes bail
    if (cp0123 == 0)
    {
        return FALSE;
    }
    xd13 = pt1->x - pt3->x;
    yd13 = pt1->y - pt3->y;
    cp2313 = yd13 * xd23 - xd13 * yd23;
    cp0113 = yd13 * xd01 - xd13 * yd01;
    // does an intersection between the two lines exist on screen? return true if yes...
    if (((cp0123 > 0 && cp2313 >= 0 && cp2313 <= cp0123) || (cp0123 < 0 && cp2313 >= cp0123 && cp2313 <= 0)) &&
	((cp0123 > 0 && cp0113 >= 0 && cp0113 <= cp0123) || (cp0123 < 0 && cp0113 >= cp0123 && cp0113 <= 0)))
    {
        return TRUE;
    }
    // ...else false
    return FALSE;
}

bool32 CheckRectCollisionWithArea(const struct Rect * rect, const struct Point4 * area)
{
    u32 i, j, k;
    struct Point4 p;
    const struct Point *p1 = &area->points[0];
    const struct Point *p2 = &area->points[1];
    const struct Point *p3 = &p.points[0];
    const struct Point *p4 = &p.points[1];
    if (CheckPointInArea((struct Point *)rect, area))
        return TRUE;
    
    p.points[0].x = p.points[3].x = rect->x;
    p.points[0].y = p.points[1].y = rect->y;
    p.points[1].x = p.points[2].x = rect->x + rect->w;
    p.points[2].y = p.points[3].y = rect->y + rect->h;
    // see if any part of the rect is in area
    for (i = 0; i < 3; i++)
    {
        p1 = &area->points[0];
        p2 = &area->points[1];
        for (j = 0; j < 3; j++)
        {
            if (CheckIfLinesIntersect(p1, p2, p3, p4))
                return TRUE;
            p1++;
            p2++;
        }
        p2 = &area->points[0];
        if (CheckIfLinesIntersect(p1, p2, p3, p4))
            return TRUE;
        p3++;
        p4++;
    }
    p4 = &p.points[0];
    p1 = &area->points[0];
    p2 = &area->points[1];
    for (k = 0; k < 3; k++)
    {
        if (CheckIfLinesIntersect(p1, p2, p3, p4))
            return TRUE;
        p1++;
        p2++;
    }
    p2 = &area->points[0];
    if (CheckIfLinesIntersect(p1, p2, p3, p4))
        return TRUE;

    return FALSE;
}

static void PutAnimationInAnimList(struct AnimationListEntry *animation)
{
    struct AnimationListEntry *list = gAnimation;
    u32 i;
    for (i = 0; i < 0x20; i++)
    {
        if (list->next == NULL)
        {
            animation->prev = list;
            list->next = animation;
            break;
        }
        list = list->next;
        if (list->animationInfo.priority < animation->animationInfo.priority)
        {
            animation->prev = list->prev;
            animation->next = list;
            list->prev->next = animation;
            list->prev = animation;
            break;
        }
    }
}

static void DoAnimationAction(u32 action)
{
    switch (action)
    {
    case 1:
        if (!(gMain.gameStateFlags & 1))
        {
            gMain.shakeTimer = 30;
            gMain.gameStateFlags |= 1;
            gMain.shakeIntensity = 1;
        }
        break;
    case 2:
        if (gMain.blendMode == 0)
            StartHardwareBlend(3, 1, 8, 0x1F);
        break;
    default:
        break;
    }
}

struct AnimationListEntry *PlayPersonAnimation(u32 arg0, u32 arg1, u32 talkingAnimOff, u32 arg3)
{
    u32 xOrigin = 120;
    struct Main *main = &gMain;
    if (arg0 & 0x8000 && main->Bg256_dir & 0x10)
        xOrigin -= DISPLAY_WIDTH;
    if (arg0 & 0x4000 && main->Bg256_dir & 0x20)
        xOrigin += DISPLAY_WIDTH;
    if (arg0 & 0x2000)
        arg1 |= 1;
    return PlayPersonAnimationAtCustomOrigin(arg0, talkingAnimOff, xOrigin, DISPLAY_HEIGHT/2, arg1);
}

struct AnimationListEntry *PlayPersonAnimationAtCustomOrigin(u32 arg0, u32 talkingAnimOff, u32 xOrigin, u32 yOrigin, u32 flags)
{
    struct Main *main = &gMain;
    struct AnimationListEntry *animation = &gAnimation[1];
    struct AnimationInfo animationInfo;
    u32 personId = arg0 & 0xFF;
    if (personId == 0)
    {
        if (animation->flags & ANIM_ALLOCATED)
            DestroyAnimation(animation);
        return NULL;
    }
    animationInfo.animId = 0xFF;
    *(u16 *)(&animationInfo.personId) = arg0; // this assignment matches but sucks. doing it like this allows animationInfo to not be an array which makes everything else more sane
    animationInfo.vramPtr = OBJ_VRAM0 + 0x5800;
    animationInfo.animGfxDataStartPtr = gPersonAnimData[personId].gfxData;
    animationInfo.animFrameDataStartPtr = gPersonAnimData[personId].frameData + talkingAnimOff;
    animationInfo.paletteSlot = 14;
    if (main->process[GAME_PROCESS] == COURT_PROCESS) // why does it force a specific amount of sprites
        animationInfo.spriteCount = 0x27;
    else
        animationInfo.spriteCount = gPersonAnimData[personId].spriteCount;
    animationInfo.priority = 0x21;
    animationInfo.xOrigin = xOrigin;
    animationInfo.yOrigin = yOrigin;
    if (!(animation->flags & ANIM_ALLOCATED))
    {
        DmaFill16(3, 0, animation, sizeof(gAnimation[1]));
        animation->flags |= ANIM_ALLOCATED;
        animation->animationInfo.animId = 0xFF;
        PutAnimationInAnimList(animation);
    }
    animation->bgId |= 0;
    CreateAnimationFromAnimationInfo(&animationInfo, 0xFF, flags);
    animation->bgId = main->currentBG;
    if (animation->animationInfo.personId == 0x16 && main->process[GAME_PROCESS] == INVESTIGATION_PROCESS) // April May special case
    {
        struct AnimationListEntry *ptr;
        u32 var0 = animation->flags & 0x02000000;
        switch (talkingAnimOff)
        {
        case ANIM_MAY_ANGRY_TALKING_WITNESS:
        case ANIM_MAY_ANGRY_IDLE_WITNESS:
        case ANIM_MAY_NORMAL_TALKING_WITNESS:
        case ANIM_MAY_NORMAL_IDLE_WITNESS:
            ptr = FindAnimationFromAnimId(ANIM_APRIL_MAY_ABDOMEN_2);
            if (ptr != NULL)
                DestroyAnimation(ptr);
            ptr = PlayAnimation(ANIM_APRIL_MAY_ABDOMEN_1);
            ptr->flags |= var0;
            break;
        case ANIM_MAY_EVIL_TALKING_WITNESS:
        case ANIM_MAY_EVIL_IDLE_WITNESS:
            ptr = FindAnimationFromAnimId(ANIM_APRIL_MAY_ABDOMEN_1);
            if (ptr != NULL)
                DestroyAnimation(ptr);
            ptr = PlayAnimation(ANIM_APRIL_MAY_ABDOMEN_2);
            ptr->flags |= var0;
            break;
        default:
            break;
        }
    }
    return animation;
}

struct AnimationListEntry *PlayAnimation(u32 arg0)
{
    s32 xOrigin, yOrigin;
    struct Main *main = &gMain;
    const struct AnimationData *ptr = &gAnimationData[arg0];
    xOrigin = ptr->xOrigin;
    yOrigin = ptr->yOrigin;
    if (main->Bg256_dir & 0x10 && arg0 > 0xB)
        xOrigin -= DISPLAY_WIDTH;
    return PlayAnimationAtCustomOrigin(arg0, xOrigin, yOrigin);
}

struct AnimationListEntry *PlayAnimationAtCustomOrigin(u32 arg0, s32 xOrigin, s32 yOrigin)
{
    struct AnimationListEntry *animationStruct;
    struct AnimationInfo animationInfo;
    struct Main *main = &gMain;
    const struct AnimationData *animData = &gAnimationData[arg0];
    u32 var0;
    uintptr_t var1;
    u32 var2;

    animationInfo.animId = arg0;
    animationInfo.vramPtr = animData->vramPtr;
    animationInfo.animGfxDataStartPtr = animData->gfxData;
    animationInfo.animFrameDataStartPtr = animData->frameData;
    animationInfo.paletteSlot = animData->paletteSlot;
    animationInfo.spriteCount = animData->spriteCount;
    animationInfo.priority = animData->priority;
    animationInfo.xOrigin = xOrigin;
    animationInfo.yOrigin = yOrigin;
    animationStruct = CreateAnimationFromAnimationInfo(&animationInfo, arg0, animData->flags);
    var0 = animationStruct->animationInfo.paletteSlot - 6;
    var1 = (1 << var0);
    if (!(main->allocatedObjPltts & var1) && animationStruct->animationInfo.paletteSlot < 10)
    {
        void *dest;
        u32 size;
		
        main->allocatedObjPltts |= var1;
        var1 = OBJ_PLTT;
        var1 += animationStruct->animationInfo.paletteSlot * 0x20;
        dest = gObjPaletteBuffer[var0];
        var0 = *(u32 *)animationStruct->animationInfo.animGfxDataStartPtr;
        size = var0 * 0x20;
        DmaCopy16(3, var1, dest, size);
    }
    animationStruct->bgId = main->currentBG;
    animationStruct->roomId = main->currentRoomId;
    animationStruct->flags |= ANIM_QUEUED_PAL_UPLOAD;
    return animationStruct;
}

struct AnimationBackupStruct * RestoreAnimationsFromBuffer(struct AnimationBackupStruct * backupAnimation) // ! UB: this function doesn't return anything
{
    u32 i;
    void * animFrameData;
    void * animGfxData;
    struct AnimationListEntry *animation = &gAnimation[1];
    struct AnimationInfo animationInfo;
    ResetAnimationSystem();
    if (backupAnimation->flags & ANIM_ALLOCATED)
    {
        animationInfo.animId = 0xFF;
        animationInfo.personId = backupAnimation->personId;
        animationInfo.vramPtr = OBJ_VRAM0 + 0x5800;
        animationInfo.animGfxDataStartPtr = gPersonAnimData[backupAnimation->personId].gfxData;
        animationInfo.animFrameDataStartPtr = backupAnimation->animFrameDataStartPtr;
        animationInfo.paletteSlot = 0xE;
        animationInfo.spriteCount = gPersonAnimData[backupAnimation->personId].spriteCount;
        animationInfo.priority = 0x21;
        animationInfo.xOrigin = backupAnimation->xOrigin;
        animationInfo.yOrigin = backupAnimation->yOrigin;
        DmaCopy16(3, &animationInfo, &animation->animationInfo, sizeof(animationInfo));
        animFrameData = animation->animationInfo.animFrameDataStartPtr;
        animation->frameData = animFrameData;
        animGfxData = animation->animationInfo.animGfxDataStartPtr + 1 [(u32 *)animFrameData];
        animation->animationInfo.animGfxDataStartPtr = animGfxData; // offsets the graphics pointer
        animation->animationInfo.tileDataPtr = animGfxData + 4 + (*(u32 *)animGfxData) * 0x20;
        animation->frameData = backupAnimation->frameData;
        animation->spriteData = (void *)(animFrameData + animation->frameData->spriteDataOffset);
        animation->flags = backupAnimation->flags | (ANIM_QUEUED_TILE_UPLOAD | ANIM_QUEUED_PAL_UPLOAD);
        animation->tileNum |= (uintptr_t)animation->animationInfo.vramPtr / TILE_SIZE_4BPP; // get OAM tile num from VRAM address
        animation->spritePriorityMatrixIndex = 0x300;
        SetAnimationPriority(animation, animation->animationInfo.priority >> 4);
        animation->animationInfo.priority &= 0xF;
        animation->bgId = backupAnimation->bgId;
        PutAnimationInAnimList(animation);
    }
    backupAnimation++;
    for (i = 2; i < 0x20; i++, backupAnimation++)
    {
        if (backupAnimation->flags & ANIM_ALLOCATED)
        {
            animation = PlayAnimationAtCustomOrigin(backupAnimation->animId, backupAnimation->xOrigin, backupAnimation->yOrigin);
            animation->flags = backupAnimation->flags | (ANIM_QUEUED_TILE_UPLOAD | ANIM_QUEUED_PAL_UPLOAD);
            animation->frameData = backupAnimation->frameData;
            animation->spriteData = (void *)(animation->animationInfo.animFrameDataStartPtr + animation->frameData->spriteDataOffset);
            DataCopy32(&animation->bgId, &backupAnimation->bgId);
        }
    }
}

struct AnimationBackupStruct * SaveAnimationDataToBuffer(struct AnimationBackupStruct * backupAnimation)
{
    struct AnimationListEntry *animation;
    for (animation = &gAnimation[1]; animation < &gAnimation[0x20]; animation++, backupAnimation++)
    {
        DataCopy32(&backupAnimation->animId, &animation->animationInfo.animId);
        DataCopy32(&backupAnimation->xOrigin, &animation->animationInfo.xOrigin);
        DataCopy32(&backupAnimation->frameDurationCounter, &animation->frameDurationCounter);
        DataCopy32(&backupAnimation->bgId, &animation->bgId);
        backupAnimation->animFrameDataStartPtr = animation->animationInfo.animFrameDataStartPtr;
        backupAnimation->flags = animation->flags;
        backupAnimation->frameData = animation->frameData;
    }
    return backupAnimation;
}

static struct AnimationListEntry * CreateAnimationFromAnimationInfo(struct AnimationInfo * animationInfo, u32 arg1, u32 flags)
{
    void * animFrameData;
    void * animGfxData;
    struct AnimationListEntry *animation = AllocateAnimationWithId(animationInfo->animId);
    if (animation == NULL)
        return NULL;
    DmaCopy16(3, animationInfo, &animation->animationInfo, sizeof(animation->animationInfo));
    animFrameData = animation->animationInfo.animFrameDataStartPtr;
    animGfxData = animation->animationInfo.animGfxDataStartPtr +  1 [(u32 *)animFrameData];
    animation->animationInfo.animGfxDataStartPtr = animGfxData;                                      // offsets the graphics pointer
    animation->animationInfo.tileDataPtr = animGfxData + 4 + (*(u32 *)animGfxData) * 0x20; // skip first u32(number of palettes) and the palettes, pointer to tiles
    animation->frameData = (struct AnimationFrame *)(animFrameData + 8);                                  // skips animation block header, pointer to frame data
    animation->spriteData = (void *)(animFrameData + animation->frameData->spriteDataOffset);                  // Frame tilemap pointer
    animation->flags |= flags;
    if (flags & 0x10)
        animation->flags &= ~ANIM_PLAYING;
    animation->tileNum |= (uintptr_t)animation->animationInfo.vramPtr / TILE_SIZE_4BPP; // get OAM tile num from VRAM address
    animation->rotationAmount = 0;
    animation->spritePriorityMatrixIndex = 0x300;
    SetAnimationPriority(animation, animation->animationInfo.priority >> 4);
    animation->animationInfo.priority &= 0xF;
    PutAnimationInAnimList(animation);
    if (animation->frameData->flags & 0x2)
        PlaySE(animation->frameData->songId);
    if (animation->frameData->flags & 0x4)
        DoAnimationAction(animation->frameData->action);
    return animation;
}

static u32 AdvanceAnimationFrame(struct AnimationListEntry * animation)
{
    void * gfxDataStart;
    u32 retVal = 4;
    if (gScriptContext.personAnimPauseCounter && animation->animationInfo.animId == 0xFF)
        return retVal;
    if (animation->frameData->frameDuration > ++animation->frameDurationCounter)
        return retVal;
    animation->frameDurationCounter = 0;
    animation->frameData++;
    if (animation->frameData->flags & 0x2)
        PlaySE(animation->frameData->songId);
    if (animation->frameData->flags & 0x4)
        DoAnimationAction(animation->frameData->action);
    switch (animation->frameData->frameDuration)
    {
    case ANIM_LOOP:
        gfxDataStart = animation->animationInfo.animFrameDataStartPtr;
        animation->frameData = (struct AnimationFrame *)(gfxDataStart + 8);
        animation->spriteData = gfxDataStart + animation->frameData->spriteDataOffset;
        animation->flags |= ANIM_QUEUED_TILE_UPLOAD;
        retVal = 7;
        break;
    case ANIM_STOP:
        animation->flags &= ~ANIM_PLAYING;
        retVal = 0;
        animation->frameData--;
        break;
    case ANIM_DESTROY:
        DestroyAnimation(animation);
        retVal = 0;
        break;
    default:
        animation->spriteData = (void *)(animation->animationInfo.animFrameDataStartPtr + animation->frameData->spriteDataOffset);
        animation->flags |= ANIM_QUEUED_TILE_UPLOAD;
        retVal = 5;
        break;
    }
    return retVal;
}

void OffsetAllAnimations(s32 xOffset, s32 yOffset)
{
    struct AnimationListEntry *animation;
    for (animation = gAnimation[0].next; animation != NULL; animation = animation->next)
    {
        struct OamAttrs *oam;
        if (animation->flags & 8)
            continue;
        animation->animationInfo.xOrigin += xOffset;
        animation->animationInfo.yOrigin += yOffset;
        for (oam = &gOamObjects[animation->animtionOamStartIdx]; oam < &gOamObjects[animation->animtionOamEndIdx]; oam++)
        {
            u32 y;
            u32 x;
            u32 xMask;
            u32 yMask = 0xFF;
            y = (u8)oam->attr0;
            oam->attr0 &= ~0xFF;
            y += yOffset;
            y &= yMask; // lulwut
            oam->attr0 |= y;

            xMask = 0x1FF;
            x = oam->attr1 & 0x1FF;
            oam->attr1 &= ~0x1FF;
            x += xOffset;
            x &= xMask;
            oam->attr1 |= x;
        }
    }
}

void StartAnimationBlend(u32 arg0, u32 arg1)
{
    struct AnimationListEntry *animation = NULL;
    struct AnimationListEntry *animation2;
    struct IORegisters *ioRegsp = &gIORegisters;
    struct Main *main = &gMain;
    if (arg0 & 0xFF00)
    {
        u32 animationId = arg0 >> 8;
        arg0 &= 0xFF;
        animation2 = FindAnimationFromAnimId(animationId);
    }
    else
        animation2 = &gAnimation[1];

    if (ioRegsp->lcd_bldy == 0x10 || (!(animation2->flags & ANIM_ALLOCATED) && !(arg0 & 2)))
        return;

    if (animation2->animationInfo.personId == 0x16)
    {
        animation = FindAnimationFromAnimId(ANIM_APRIL_MAY_ABDOMEN_1);
        if (animation == NULL)
            animation = FindAnimationFromAnimId(ANIM_APRIL_MAY_ABDOMEN_2);
    }

    if (arg0 & 1)
    {
        if ((animation2->flags & 0x02000000) && !(animation2->flags & 0x4))
            return;
        animation2->flags &= ~(ANIM_INACTIVE | 0x04000000 | 4);
        if (animation != NULL)
            animation->flags &= ~(ANIM_INACTIVE | 0x04000000 | 4);
        main->blendDeltaY = 0x10;
    }
    else if (arg0 & 4)
    {
        if ((animation2->flags & 0x02000000) && (animation2->flags & 0x4))
            return;
        animation2->flags |= 0x4;
        if (animation != NULL)
            animation->flags |= 0x4;
        main->blendDeltaY = 0;
        if (arg0 & (4 | 8))
        {
            animation2->flags |= 0x04000000;
            if (animation != NULL)
                animation->flags |= 0x04000000;
        }
    }
    else
        return;
    animation2->flags |= (ANIM_ACTIVE | ANIM_BLEND_ACTIVE);
    if (animation != NULL)
        animation->flags |= (ANIM_ACTIVE | ANIM_BLEND_ACTIVE);
    main->blendDelay = arg1;
    main->blendCounter = 0;
    ioRegsp->lcd_bldcnt = BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG3;
    ioRegsp->lcd_bldalpha = BLDALPHA_BLEND(0x10 - main->blendDeltaY, main->blendDeltaY);
    REG_BLDCNT = ioRegsp->lcd_bldcnt;
    REG_BLDALPHA = ioRegsp->lcd_bldalpha;
}

static void UpdateAnimationBlend(struct AnimationListEntry *animation)
{
    struct Main *main = &gMain;
    struct IORegisters *ioRegsp = &gIORegisters;
    struct AnimationListEntry *animation2 = NULL;
    if (main->blendMode)
    {
        animation->flags &= ~ANIM_BLEND_ACTIVE;
        return;
    }

    if (animation->animationInfo.personId == 0x16)
    {
        animation2 = FindAnimationFromAnimId(ANIM_APRIL_MAY_ABDOMEN_1);
        if (animation2 == NULL)
            animation2 = FindAnimationFromAnimId(ANIM_APRIL_MAY_ABDOMEN_2);
    }

    if (++main->blendCounter >= main->blendDelay)
    {
        main->blendCounter = 0;
        if (animation->flags & 4)
        {
            main->blendDeltaY++;
            if (main->blendDeltaY == 0x10)
            {
                ioRegsp->lcd_bldcnt = BLDCNT_TGT1_BG1 | BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG3 | BLDCNT_TGT2_OBJ;
                ioRegsp->lcd_bldalpha = BLDALPHA_BLEND(0x1F, 0x7);
                animation->flags &= ~ANIM_BLEND_ACTIVE;
                if (animation->flags & 0x04000000)
                {
                    ChangeAnimationActivity(animation, 0);
                    if (animation2 != NULL)
                        ChangeAnimationActivity(animation2, 0);
                    return;
                }
                DestroyAnimation(animation);
                if (animation2 != NULL)
                    DestroyAnimation(animation2);
                return;
            }
        }
        else
        {
            main->blendDeltaY--;
            if (main->blendDeltaY == 0)
            {
                ioRegsp->lcd_bldcnt = BLDCNT_TGT1_BG1 | BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG3 | BLDCNT_TGT2_OBJ;
                ioRegsp->lcd_bldalpha = BLDALPHA_BLEND(0x1F, 0x7);
                animation->flags &= ~ANIM_BLEND_ACTIVE;
                if (animation2 != NULL)
                    animation2->flags &= ~ANIM_BLEND_ACTIVE;
                return;
            }
        }
    }
    ioRegsp->lcd_bldalpha = BLDALPHA_BLEND(0x10 - main->blendDeltaY, main->blendDeltaY);
}

void ActivateAllAllocatedAnimations() // unused
{
    struct AnimationListEntry *animation = gAnimation;

    for (; animation < &gAnimation[ARRAY_COUNT(gAnimation)]; animation++)
    {
        if (animation->flags & ANIM_ALLOCATED)
            animation->flags |= (ANIM_ACTIVE | ANIM_QUEUED_TILE_UPLOAD);
    }
}

void DestroyAnimation(struct AnimationListEntry *animation)
{
    struct AnimationListEntry *animation2;
    struct Main *main = &gMain;
    struct OamAttrs *oam;
    u32 var0;
    uintptr_t var1;
    if (animation == NULL)
        return;

    if (animation->animationInfo.animId == 0xFF && animation->animationInfo.personId == 0x16)
    {
        animation2 = FindAnimationFromAnimId(ANIM_APRIL_MAY_ABDOMEN_1);
        if (animation2 != NULL)
            DestroyAnimation(animation2);
        animation2 = FindAnimationFromAnimId(ANIM_APRIL_MAY_ABDOMEN_2);
        if (animation2 != NULL)
            DestroyAnimation(animation2);
    }
    if (animation->flags & ANIM_ALLOCATED)
    {
        void *dst;
        u32 size;
        for (oam = &gOamObjects[animation->animtionOamStartIdx]; oam < &gOamObjects[animation->animtionOamEndIdx]; oam++)
            oam->attr0 = SPRITE_ATTR0_CLEAR;
        main->animationFlags |= 4;
        animation->flags = 0;
        animation->prev->next = animation->next;
        animation->next->prev = animation->prev;
        if (animation->animationInfo.animId == 0xFF)
            return;
        if (animation->animationInfo.paletteSlot > 9)
            return;
        var0 = animation->animationInfo.paletteSlot - 6;
        var1 = 1 << var0;
        main->allocatedObjPltts &= ~var1;
        var1 = (uintptr_t)gObjPaletteBuffer[var0];
        dst = (void*)OBJ_PLTT;
        dst += animation->animationInfo.paletteSlot * 0x20;
        size = *(u32 *)animation->animationInfo.animGfxDataStartPtr * 0x20;
        DmaCopy16(3, var1, dst, size);
    }
}

static void UpdateAllAnimationSprites()
{
    u32 var0 = 0x80;
    struct OamAttrs *oam = &gOamObjects[ARRAY_COUNT(gOamObjects)];
    struct AnimationListEntry *animation;
    for (animation = gAnimation[0].next; animation != NULL; animation = animation->next)
    {
        u32 i, j;
        if ((animation->flags & ANIM_ALLOCATED) == 0)
            continue;
        animation->animtionOamEndIdx = var0;
        if ((gMain.animationFlags & 2) && (animation->flags & ANIM_ACTIVE))
        {
            void *ptr = (void *)animation->spriteData;
            struct SpriteTemplate *spriteTemplates = animation->spriteData;
            s32 xOrigin = animation->animationInfo.xOrigin - gMain.shakeAmountX;
            s32 yOrigin = animation->animationInfo.yOrigin - gMain.shakeAmountY;
            u32 tileNum = animation->tileNum & 0xFFF;
            s32 spriteCount = *(u16 *)ptr;
            struct SpriteSizeData *spriteSizeData = eGeneralScratchpadBuffer;
            spriteSizeData += var0;
            for (i = 0; i < spriteCount; i++)
            {
                s32 y;
                var0--;
                oam--;
                spriteSizeData--;
                spriteTemplates++;
                *spriteSizeData = gSpriteSizeTable[spriteTemplates->data >> 0xC];
                oam->attr0 = (spriteTemplates->data & 0x3000) << 2; // Sprite Shape
                y = yOrigin + spriteTemplates->y;
                if (y < -64)
                    y = -64;
                if (y > 224)
                    y = 224;
                oam->attr0 |= y & 0xFF;
                if (animation->flags & ANIM_BLEND_ACTIVE)
                    oam->attr0 |= 0x400;
                oam->attr1 = spriteTemplates->data & 0xC000;
                if (animation->flags & ANIM_ENABLE_XFLIP)
                {
                    u16 x = (xOrigin - (spriteTemplates->x + spriteSizeData->width)) & 0x1FF;
                    oam->attr1 |= 0x1000 | x;
                }
                else
                {
                    u16 x = (xOrigin + spriteTemplates->x) & 0x1FF;
                    oam->attr1 |= (*(u8 *)(&animation->spritePriorityMatrixIndex)) << 9 | x;
                }
                oam->attr2 = tileNum | *((u8 *)(&animation->spritePriorityMatrixIndex) + 1) << 10;
                if (animation->frameData->flags & 1)
                    oam->attr2 |= (animation->animationInfo.paletteSlot + ((spriteTemplates->data >> 9) & 7)) << 12;
                else
                    oam->attr2 |= (animation->animationInfo.paletteSlot + ((spriteTemplates->data >> 11) & 1)) << 12;
                tileNum += spriteSizeData->tileSize / TILE_SIZE_4BPP;
            }
        }
        animation->animtionOamStartIdx = animation->animtionOamEndIdx - animation->animationInfo.spriteCount;
        var0 -= animation->animtionOamStartIdx;
        for (var0 -= 1; var0 != -1; var0--)
        {
            oam--;
            oam->attr0 = SPRITE_ATTR0_CLEAR;
        }
        var0 = animation->animtionOamStartIdx;
    }
}

void MoveAnimationTilesToRam(bool32 arg0)
{
    struct AnimationListEntry *animation; // r5

    for (animation = gAnimation[0].next; animation != NULL; animation = animation->next)
    {
        void * tileData;
        struct SpriteTemplate * spriteTemplate; // ip
        struct SpriteSizeData * spriteSizeData; // r7
        void * tileDest; // r6
        void * nextTileDest; // r8
        u32 * temp;
        u32 spriteCount; // sl
        u32 palCount; //sp08
        u32 i;

        if(!(animation->flags & ANIM_QUEUED_TILE_UPLOAD))
            continue;
        if(!(animation->flags & ANIM_ACTIVE))
            continue;
        tileDest = arg0 ? eGeneralScratchpadBuffer + 0x200 : animation->animationInfo.vramPtr;
        spriteTemplate = animation->spriteData;
        spriteCount = *(u16*)animation->spriteData;
        spriteSizeData = eGeneralScratchpadBuffer;
        spriteSizeData += animation->animtionOamEndIdx;
        animation->flags &= ~ANIM_QUEUED_TILE_UPLOAD;
        palCount = *(u32*)animation->animationInfo.animGfxDataStartPtr;
        if(palCount & 0x80000000)
        {
            for(i = 0; i < spriteCount; i++)
            {
                void * tileStart;
                //void * tileData;
                u32 * offsets;
                u32 tileNum;
                u32 size;
                spriteTemplate++;
                spriteSizeData--;
                size = spriteSizeData->tileSize;
                nextTileDest = tileDest + size;
                tileNum = (spriteTemplate->data & 0x1FF);
                tileStart = animation->animationInfo.tileDataPtr;
                offsets = (u32*)tileStart;
                tileStart += offsets[tileNum];
                tileData = tileStart;
                while(nextTileDest > tileDest)
                {
                    if(*(u16*)tileData & 0x8000)
                    {
                        u32 repeatCount = *(u16*)tileData & 0x7FFF;
                        DmaFill16(3, *((u16*)tileData+1), tileDest, repeatCount*=2);
                        tileDest += repeatCount;
                        tileData += 4;
                    }
                    else
                    {
                        u32 size = *(u16*)tileData * 2;
                        tileData+=2;
                        DmaCopy16(3, tileData, tileDest, size);
                        tileDest += size;
                        tileData += size;
                    }
                }
            }
        }
        else
        {
            u32 tileNumMask = animation->frameData->flags & 1 ? 0x1FF : 0x7FF;
            for(i = 0; i < spriteCount; i++)
            {
                u16 * sizePtr;
                u32 tileNum;
                spriteTemplate++;
                spriteSizeData--;
                sizePtr = &spriteSizeData->tileSize; // !! SCRUB C probably fakematch
                tileData = animation->animationInfo.tileDataPtr + (spriteTemplate->data & tileNumMask) * TILE_SIZE_4BPP;
                DmaCopy16(3, tileData, tileDest, *sizePtr);
                tileDest += *sizePtr;
            }
        }
        if(animation->flags & ANIM_QUEUED_PAL_UPLOAD)
        {
            u8 * ptr;
            uintptr_t dest;
            u32 palOffset = animation->animationInfo.paletteSlot & 0xF;

            palOffset *= 32;
            dest = OBJ_PLTT + palOffset;
            palCount *= 32;
            tileData = animation->animationInfo.animGfxDataStartPtr+4;
            DmaCopy16(3, tileData, dest, palCount);
            animation->flags &= ~ANIM_QUEUED_PAL_UPLOAD;
        }
    }
}

void UpdateAnimations(u32 arg0)
{
    struct Main * main = &gMain;
    struct AnimationListEntry *animation2 = gAnimation;
    struct CourtScroll * courtScroll = &gCourtScroll;
    if(main->animationFlags & 1)
    {
        struct AnimationListEntry *animation;
        for (animation = animation2->next; animation != NULL; animation = animation->next)
        {
            if(animation->animationInfo.animId >= 12 && animation->animationInfo.animId <= 16)
            {
                if(main->currentBG != animation->bgId)
                { 
                    if(main->currentRoomId == animation->roomId)
                        ChangeAnimationActivity(animation, 0);
                    else
                        DestroyAnimation(animation);
                    continue;
                }
                else
                {
                    if(!(animation->flags & ANIM_ACTIVE))
                    {
                        if(main->currentBgStripe == 0)
                        {
                            PlayAnimation(animation->animationInfo.animId);
                            ChangeAnimationActivity(animation, 1);
                        }
                    }
                }
            }
            else if(animation->animationInfo.animId >= 31 && animation->animationInfo.animId <= 61)
            {
                if(arg0 != animation->bgId)
                {
                    DestroyAnimation(animation);
                    continue;
                }
            }
            else if(animation->animationInfo.animId >= 25 && animation->animationInfo.animId <= 61)
            {
                if(main->currentBG != animation->bgId)
                    DestroyAnimation(animation);
            }
            if(animation->flags & ANIM_BLEND_ACTIVE)
            {
                if(!(animation->animationInfo.animId <= 24 && animation->animationInfo.animId >= 17))
                    UpdateAnimationBlend(animation);
                continue;
            }
            if(animation->flags < 0) // what the fuck
            {
                if(main->blendMode == 0)
                {
                    if(AdvanceAnimationFrame(animation) == 0)
                        continue;
                }
            }
            if(animation->animationInfo.animId <= 0xB)
                gSpecialAnimationEffectFunctions[animation->animationInfo.animId - 1](animation);
            if(courtScroll->state)
            {
                if(animation->animationInfo.animId == 0xFF)
                    UpdatePersonAnimationForCourtScroll(animation);
            }
        }
    }
    if(main->animationFlags & 0x4)
    {
        main->animationFlags &= ~0x4;
        ClearAllAnimationSprites();
    }
    UpdateAllAnimationSprites();
}

void ScrollMode2AnimationUpdate(struct AnimationListEntry * animation, struct CourtScroll * courtScroll)
{
    animation->animationInfo.xOrigin += gCourtScroll01AnimOffsets[courtScroll->frameCounter];
    if(courtScroll->frameCounter == 0xF)
        PlayPersonAnimationAtCustomOrigin(courtScroll->scrollingPersonAnimId, courtScroll->animOffset, -110, 80, 0);
}

void ScrollMode3AnimationUpdate(struct AnimationListEntry * animation, struct CourtScroll * courtScroll)
{
    animation->animationInfo.xOrigin -= gCourtScroll01AnimOffsets[0x1E - courtScroll->frameCounter];
    if(courtScroll->frameCounter == 0xF)
        PlayPersonAnimationAtCustomOrigin(courtScroll->scrollingPersonAnimId, courtScroll->animOffset, 350, 80, 0);
}

void ScrollMode4AnimationUpdate(struct AnimationListEntry * animation, struct CourtScroll * courtScroll)
{
    animation->animationInfo.xOrigin += gCourtScroll02AnimOffsets[courtScroll->frameCounter];
    if(courtScroll->frameCounter == 0xE)
        PlayPersonAnimationAtCustomOrigin(courtScroll->scrollingPersonAnimId, courtScroll->animOffset, -84, 80, 0);
}

void ScrollMode5AnimationUpdate(struct AnimationListEntry * animation, struct CourtScroll * courtScroll)
{
    animation->animationInfo.xOrigin -= gCourtScroll03AnimOffsets[courtScroll->frameCounter];
    if(courtScroll->frameCounter == 0xE)
        PlayPersonAnimationAtCustomOrigin(courtScroll->scrollingPersonAnimId, courtScroll->animOffset, 220, 80, 0);
}

void ScrollMode0AnimationUpdate(struct AnimationListEntry * animation, struct CourtScroll * courtScroll)
{
    animation->animationInfo.xOrigin -= gCourtScroll02AnimOffsets[courtScroll->frameCounter];
    if(courtScroll->frameCounter == 0xE)
        PlayPersonAnimationAtCustomOrigin(courtScroll->scrollingPersonAnimId, courtScroll->animOffset, 324, 80, 0);
}

void ScrollMode1AnimationUpdate(struct AnimationListEntry * animation, struct CourtScroll * courtScroll)
{
    animation->animationInfo.xOrigin += gCourtScroll03AnimOffsets[courtScroll->frameCounter];
    if(courtScroll->frameCounter == 0xE)
        PlayPersonAnimationAtCustomOrigin(courtScroll->scrollingPersonAnimId, courtScroll->animOffset, 20, 80, 0);
}

static void UpdatePersonAnimationForCourtScroll(struct AnimationListEntry * animation)
{
    struct CourtScroll * courtScroll = &gCourtScroll;
    gCourtScrollPersonAnimationUpdateFuncs[courtScroll->scrollMode](&gAnimation[1], courtScroll);
}

void SetCourtScrollPersonAnim(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    gCourtScroll.scrollMode = arg0 * 2;
    if(arg1 & 1)
        gCourtScroll.scrollMode++;
    gCourtScroll.scrollingPersonAnimId = arg2;
    gCourtScroll.animOffset = arg3;
}

void SpeechBubbleAnimationEffect(struct AnimationListEntry * animation)
{
    s32 rand = (Random() & 3) + 1; // 1 to 4
    s32 rand2 = (Random() & 7) - 4; // -4 to 3
    if(animation->animVar1 == 0)
        animation->specialEffectVar = animation->animationInfo.xOrigin;
    animation->animVar1++;
    if(animation->animVar1 < 0x1F)
    {
        if((animation->animVar1 & 1) != 0)
            animation->animationInfo.xOrigin = animation->specialEffectVar + rand;
        else
            animation->animationInfo.xOrigin = animation->specialEffectVar - rand;
        animation->animationInfo.yOrigin += rand2;
        if(animation->animationInfo.yOrigin > 90)
            animation->animationInfo.yOrigin = 90;
        else if(animation->animationInfo.yOrigin < 70)
            animation->animationInfo.yOrigin = 70;
    }
    else
        animation->animVar1 = 40;
}

void Case3OpeningAnimationEffect(struct AnimationListEntry * animation)
{
    struct Main * main = &gMain;
    if(main->currentBG == 0xFF)
    {
        ChangeAnimationActivity(animation, 0);
        return;
    }
    ChangeAnimationActivity(animation, 1);
    if(main->currentBG == 0x4A)
    {
        if(animation->animationInfo.animId == 5)
            animation->specialEffectVar += 3;
        else if(animation->animationInfo.animId == 6)
            animation->specialEffectVar -= 5;
        else
            animation->specialEffectVar += 1;
    }
    else
    {
        if(animation->animationInfo.animId == 5)
            animation->specialEffectVar -= 3;
        else if(animation->animationInfo.animId == 6)
            animation->specialEffectVar += 5;
        else
            animation->specialEffectVar -= 1;
    }
    animation->animationInfo.xOrigin += animation->specialEffectVar / 20;
    if(animation->specialEffectVar > 20)
        animation->specialEffectVar -= 20;
    else if(animation->specialEffectVar < -20)
        animation->specialEffectVar += 20;
}
