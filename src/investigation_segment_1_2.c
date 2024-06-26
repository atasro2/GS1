#include "global.h"
#include "main.h"
#include "case_data.h"
#include "investigation.h"
#include "sound.h"
#include "animation.h"
#include "constants/animation.h"
#include "constants/persons.h"
#include "constants/songs.h"
#include "constants/animation_offsets.h"

const struct InvestigationPresentData gInvestigationPresentData_1_2[12] = {
	{
		.roomId = 0x2,
		.evidenceId = 0x23,
		.personId = PERSON_ANIM_APRIL_MAY,
		.end = 0x0,
		.interestedSection = 0xAA,
		.uninterestedSection = 0xA1,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x22,
		.personId = PERSON_ANIM_APRIL_MAY,
		.end = 0x0,
		.interestedSection = 0xA9,
		.uninterestedSection = 0xA1,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x21,
		.personId = PERSON_ANIM_APRIL_MAY,
		.end = 0x0,
		.interestedSection = 0xAC,
		.uninterestedSection = 0xA1,
	},
	{
		.roomId = 0x3,
		.evidenceId = 0x24,
		.personId = PERSON_ANIM_MARVIN_GROSSBERG,
		.end = 0x0,
		.interestedSection = 0xFE,
		.uninterestedSection = 0xE3,
	},
	{
		.roomId = 0x3,
		.evidenceId = 0x23,
		.personId = PERSON_ANIM_MARVIN_GROSSBERG,
		.end = 0x0,
		.interestedSection = 0xE1,
		.uninterestedSection = 0xE3,
	},
	{
		.roomId = 0x4,
		.evidenceId = 0x20,
		.personId = PERSON_ANIM_REDD_WHITE,
		.end = 0x0,
		.interestedSection = 0x129,
		.uninterestedSection = 0x12B,
	},
	{
		.roomId = 0x4,
		.evidenceId = 0x23,
		.personId = PERSON_ANIM_REDD_WHITE,
		.end = 0x0,
		.interestedSection = 0x12A,
		.uninterestedSection = 0x12B,
	},
	{
		.roomId = 0x4,
		.evidenceId = 0x24,
		.personId = PERSON_ANIM_REDD_WHITE,
		.end = 0x0,
		.interestedSection = 0x139,
		.uninterestedSection = 0x12B,
	},
	{
		.roomId = 0x5,
		.evidenceId = 0x23,
		.personId = PERSON_ANIM_BELLBOY,
		.end = 0x0,
		.interestedSection = 0x10C,
		.uninterestedSection = 0x111,
	},
	{
		.roomId = 0x5,
		.evidenceId = 0x22,
		.personId = PERSON_ANIM_BELLBOY,
		.end = 0x0,
		.interestedSection = 0x10B,
		.uninterestedSection = 0x111,
	},
	{
		.roomId = 0x5,
		.evidenceId = 0x21,
		.personId = PERSON_ANIM_BELLBOY,
		.end = 0x0,
		.interestedSection = 0x110,
		.uninterestedSection = 0x111,
	},
	{
		.roomId = 0xFF,
		.evidenceId = 0xFF,
		.personId = 0xFF,
		.end = 0xFF,
		.interestedSection = 0xFFFF,
		.uninterestedSection = 0xFFFF,
	},
};


// talk data
const struct TalkData gTalkData_1_2[13] = {
	{
		.roomId = 0x2,
		.personId = PERSON_ANIM_APRIL_MAY,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x11, 0x12, 0x13, 0xFF },
		.talkFlagId = { 0x13, 0x15, 0x14, 0xFF },
		.talkSection = { 0x9E, 0x9F, 0xA0, 0x0 }
	},
	{
		.roomId = 0x2,
		.personId = PERSON_ANIM_APRIL_MAY,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x11, 0x12, 0x13, 0xFF },
		.talkFlagId = { 0x16, 0x15, 0x14, 0xFF },
		.talkSection = { 0xA6, 0xA7, 0xA0, 0x0 }
	},
	{
		.roomId = 0x2,
		.personId = PERSON_ANIM_APRIL_MAY,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x12, 0x13, 0xFF, 0xFF },
		.talkFlagId = { 0x15, 0x14, 0xFF, 0xFF },
		.talkSection = { 0xA7, 0xA0, 0x0, 0x0 }
	},
	{
		.roomId = 0x3,
		.personId = PERSON_ANIM_MARVIN_GROSSBERG,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x14, 0x15, 0x16, 0xFF },
		.talkFlagId = { 0x18, 0x19, 0x1A, 0xFF },
		.talkSection = { 0xDD, 0xDE, 0xDF, 0x0 }
	},
	{
		.roomId = 0x3,
		.personId = PERSON_ANIM_MARVIN_GROSSBERG,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x14, 0x15, 0x16, 0xFF },
		.talkFlagId = { 0x18, 0x19, 0x1A, 0xFF },
		.talkSection = { 0xE0, 0xE0, 0xE0, 0x0 }
	},
	{
		.roomId = 0x3,
		.personId = PERSON_ANIM_MARVIN_GROSSBERG,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x14, 0x15, 0x17, 0xFF },
		.talkFlagId = { 0x1E, 0x1F, 0x20, 0xFF },
		.talkSection = { 0xEC, 0xED, 0xEE, 0x0 }
	},
	{
		.roomId = 0x3,
		.personId = PERSON_ANIM_MARVIN_GROSSBERG,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x14, 0x15, 0x18, 0x19 },
		.talkFlagId = { 0x1E, 0x1F, 0x21, 0x22 },
		.talkSection = { 0xEC, 0xED, 0xFB, 0xFC }
	},
	{
		.roomId = 0x4,
		.personId = PERSON_ANIM_REDD_WHITE,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x1A, 0x1D, 0x1E, 0xFF },
		.talkFlagId = { 0x26, 0x27, 0x28, 0xFF },
		.talkSection = { 0x121, 0x122, 0x123, 0x0 }
	},
	{
		.roomId = 0x4,
		.personId = PERSON_ANIM_REDD_WHITE,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x1A, 0x1D, 0x1E, 0x16 },
		.talkFlagId = { 0x26, 0x27, 0x28, 0x29 },
		.talkSection = { 0x121, 0x122, 0x123, 0x124 }
	},
	{
		.roomId = 0x4,
		.personId = PERSON_ANIM_REDD_WHITE,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x1A, 0x1D, 0x1E, 0x16 },
		.talkFlagId = { 0x26, 0x27, 0x28, 0x29 },
		.talkSection = { 0x128, 0x128, 0x128, 0x128 }
	},
	{
		.roomId = 0x4,
		.personId = PERSON_ANIM_REDD_WHITE,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x1A, 0x1D, 0x1F, 0xFF },
		.talkFlagId = { 0x2E, 0x2F, 0x30, 0xFF },
		.talkSection = { 0x136, 0x137, 0x138, 0x0 }
	},
	{
		.roomId = 0x5,
		.personId = PERSON_ANIM_BELLBOY,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x1A, 0x1B, 0x1C, 0xFF },
		.talkFlagId = { 0x23, 0x24, 0x25, 0xFF },
		.talkSection = { 0x108, 0x109, 0x10A, 0x0 }
	},
	{
		.roomId = 0xFF,
		.personId = 0xFF,
		.filler2 = 0xFF,
		.enableFlag = 0xFF,
		.iconId = { 0xFF, 0xFF, 0xFF, 0xFF },
		.talkFlagId = { 0xFF, 0xFF, 0xFF, 0xFF },
		.talkSection = { 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF }
	},
};

// room data
const u8 gRoomData_1_2[6][8] = {
	{ 0x01, 0xFF, 0xFF, 0xFF, 0x02, 0x05, 0x03, 0xFF},
	{ 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},
	{ 0x1E, 0xFF, 0xFF, 0xFF, 0x00, 0x05, 0x03, 0xFF},
	{ 0x28, 0xFF, 0xFF, 0xFF, 0x00, 0x02, 0x05, 0xFF},
	{ 0x1F, 0xFF, 0xFF, 0xFF, 0x00, 0x02, 0x05, 0x03},
	{ 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0x02, 0x03, 0xFF},
};

// exam data
const struct ExaminationData gExaminationData_1_2_00[5] = {
	{
		.examinationSection = 0x81,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 99, .y = 80 },
			[1] = { .x = 128, .y = 80 },
			[2] = { .x = 128, .y = 160 },
			[3] = { .x = 96, .y = 160 },
		}}
	},
	{
		.examinationSection = 0x82,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 221, .y = 23 },
			[1] = { .x = 240, .y = 23 },
			[2] = { .x = 240, .y = 112 },
			[3] = { .x = 221, .y = 112 },
		}}
	},
	{
		.examinationSection = 0x83,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 16 },
			[1] = { .x = 88, .y = 33 },
			[2] = { .x = 88, .y = 112 },
			[3] = { .x = 0, .y = 133 },
		}}
	},
	{
		.examinationSection = 0x84,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 147, .y = 129 },
			[1] = { .x = 240, .y = 129 },
			[2] = { .x = 240, .y = 144 },
			[3] = { .x = 146, .y = 144 },
		}}
	},
	{
		.examinationSection = 0x85,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 147, .y = 43 },
			[1] = { .x = 195, .y = 43 },
			[2] = { .x = 195, .y = 100 },
			[3] = { .x = 148, .y = 100 },
		}}
	},
};

const struct ExaminationData gExaminationData_1_2_01[5] = {
	{
		.examinationSection = 0x81,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 99, .y = 80 },
			[1] = { .x = 136, .y = 80 },
			[2] = { .x = 136, .y = 160 },
			[3] = { .x = 96, .y = 160 },
		}}
	},
	{
		.examinationSection = 0x89,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 221, .y = 23 },
			[1] = { .x = 240, .y = 23 },
			[2] = { .x = 240, .y = 112 },
			[3] = { .x = 221, .y = 112 },
		}}
	},
	{
		.examinationSection = 0x83,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 16 },
			[1] = { .x = 88, .y = 33 },
			[2] = { .x = 88, .y = 112 },
			[3] = { .x = 0, .y = 133 },
		}}
	},
	{
		.examinationSection = 0x84,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 147, .y = 129 },
			[1] = { .x = 240, .y = 129 },
			[2] = { .x = 240, .y = 144 },
			[3] = { .x = 146, .y = 144 },
		}}
	},
	{
		.examinationSection = 0x85,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 147, .y = 43 },
			[1] = { .x = 195, .y = 43 },
			[2] = { .x = 195, .y = 100 },
			[3] = { .x = 148, .y = 100 },
		}}
	},
};

const struct ExaminationData gExaminationData_1_2_02[2] = {
	{
		.examinationSection = 0x9B,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 196, .y = 76 },
			[1] = { .x = 211, .y = 76 },
			[2] = { .x = 223, .y = 132 },
			[3] = { .x = 199, .y = 132 },
		}}
	},
	{
		.examinationSection = 0x9C,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 26, .y = 24 },
			[1] = { .x = 46, .y = 34 },
			[2] = { .x = 46, .y = 40 },
			[3] = { .x = 26, .y = 33 },
		}}
	},
};

const struct ExaminationData gExaminationData_1_2_03[6] = {
	{
		.examinationSection = 0xBD,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 136 },
			[1] = { .x = 35, .y = 130 },
			[2] = { .x = 54, .y = 160 },
			[3] = { .x = 0, .y = 160 },
		}}
	},
	{
		.examinationSection = 0xBE,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 26, .y = 80 },
			[1] = { .x = 57, .y = 80 },
			[2] = { .x = 51, .y = 119 },
			[3] = { .x = 41, .y = 119 },
		}}
	},
	{
		.examinationSection = 0xBA,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 28, .y = 0 },
			[1] = { .x = 128, .y = 0 },
			[2] = { .x = 128, .y = 63 },
			[3] = { .x = 32, .y = 68 },
		}}
	},
	{
		.examinationSection = 0xBC,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 118, .y = 89 },
			[1] = { .x = 166, .y = 90 },
			[2] = { .x = 240, .y = 105 },
			[3] = { .x = 199, .y = 126 },
		}}
	},
	{
		.examinationSection = 0xBF,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 154, .y = 0 },
			[1] = { .x = 240, .y = 0 },
			[2] = { .x = 240, .y = 96 },
			[3] = { .x = 154, .y = 72 },
		}}
	},
	{
		.examinationSection = 0xC0,
		.type = 0xFE,
		.animId = 0xD,
		.area = { .points = {
			[0] = { .x = 0, .y = 0 },
			[1] = { .x = 0, .y = 0 },
			[2] = { .x = 0, .y = 0 },
			[3] = { .x = 0, .y = 0 },
		}}
	},
};

const struct ExaminationData gExaminationData_1_2_04[5] = {
	{
		.examinationSection = 0x11C,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 198, .y = 45 },
			[1] = { .x = 228, .y = 45 },
			[2] = { .x = 226, .y = 125 },
			[3] = { .x = 205, .y = 125 },
		}}
	},
	{
		.examinationSection = 0x11D,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 41, .y = 97 },
			[1] = { .x = 147, .y = 97 },
			[2] = { .x = 163, .y = 142 },
			[3] = { .x = 11, .y = 142 },
		}}
	},
	{
		.examinationSection = 0x11E,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 44, .y = 17 },
			[1] = { .x = 130, .y = 12 },
			[2] = { .x = 130, .y = 78 },
			[3] = { .x = 43, .y = 78 },
		}}
	},
	{
		.examinationSection = 0x11F,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 143, .y = 55 },
			[1] = { .x = 207, .y = 55 },
			[2] = { .x = 3312, .y = 69 },
			[3] = { .x = 143, .y = 69 },
		}}
	},
	{
		.examinationSection = 0x120,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 16 },
			[1] = { .x = 24, .y = 16 },
			[2] = { .x = 24, .y = 91 },
			[3] = { .x = 0, .y = 110 },
		}}
	},
};

const struct ExaminationData gExaminationData_1_2_05[5] = {
	{
		.examinationSection = 0x131,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 198, .y = 45 },
			[1] = { .x = 228, .y = 45 },
			[2] = { .x = 226, .y = 125 },
			[3] = { .x = 205, .y = 125 },
		}}
	},
	{
		.examinationSection = 0x132,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 41, .y = 97 },
			[1] = { .x = 147, .y = 97 },
			[2] = { .x = 163, .y = 142 },
			[3] = { .x = 11, .y = 142 },
		}}
	},
	{
		.examinationSection = 0x133,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 44, .y = 17 },
			[1] = { .x = 130, .y = 12 },
			[2] = { .x = 130, .y = 78 },
			[3] = { .x = 43, .y = 78 },
		}}
	},
	{
		.examinationSection = 0x134,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 143, .y = 55 },
			[1] = { .x = 207, .y = 55 },
			[2] = { .x = 3312, .y = 69 },
			[3] = { .x = 143, .y = 69 },
		}}
	},
	{
		.examinationSection = 0x120,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 16 },
			[1] = { .x = 24, .y = 16 },
			[2] = { .x = 24, .y = 91 },
			[3] = { .x = 0, .y = 110 },
		}}
	},
};

const struct ExaminationData gExaminationData_1_2_06[6] = {
	{
		.examinationSection = 0x101,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 9, .y = 40 },
			[1] = { .x = 37, .y = 40 },
			[2] = { .x = 47, .y = 69 },
			[3] = { .x = 14, .y = 69 },
		}}
	},
	{
		.examinationSection = 0x102,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 135, .y = 96 },
			[1] = { .x = 174, .y = 96 },
			[2] = { .x = 174, .y = 102 },
			[3] = { .x = 136, .y = 102 },
		}}
	},
	{
		.examinationSection = 0x103,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 135, .y = 30 },
			[1] = { .x = 206, .y = 22 },
			[2] = { .x = 206, .y = 91 },
			[3] = { .x = 136, .y = 87 },
		}}
	},
	{
		.examinationSection = 0x104,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 220, .y = 120 },
			[1] = { .x = 240, .y = 120 },
			[2] = { .x = 240, .y = 160 },
			[3] = { .x = 219, .y = 160 },
		}}
	},
	{
		.examinationSection = 0x105,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 69, .y = 24 },
			[1] = { .x = 88, .y = 29 },
			[2] = { .x = 88, .y = 72 },
			[3] = { .x = 68, .y = 70 },
		}}
	},
	{
		.examinationSection = 0x106,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 17, .y = 88 },
			[1] = { .x = 44, .y = 88 },
			[2] = { .x = 44, .y = 105 },
			[3] = { .x = 20, .y = 112 },
		}}
	},
};

const struct ExaminationData gExaminationData_1_2_07[6] = {
	{
		.examinationSection = 0x101,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 9, .y = 48 },
			[1] = { .x = 37, .y = 48 },
			[2] = { .x = 47, .y = 63 },
			[3] = { .x = 14, .y = 63 },
		}}
	},
	{
		.examinationSection = 0x114,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 135, .y = 96 },
			[1] = { .x = 174, .y = 96 },
			[2] = { .x = 174, .y = 102 },
			[3] = { .x = 136, .y = 102 },
		}}
	},
	{
		.examinationSection = 0x115,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 135, .y = 30 },
			[1] = { .x = 206, .y = 22 },
			[2] = { .x = 206, .y = 91 },
			[3] = { .x = 136, .y = 87 },
		}}
	},
	{
		.examinationSection = 0x104,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 220, .y = 126 },
			[1] = { .x = 240, .y = 126 },
			[2] = { .x = 240, .y = 160 },
			[3] = { .x = 219, .y = 160 },
		}}
	},
	{
		.examinationSection = 0x105,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 69, .y = 24 },
			[1] = { .x = 88, .y = 29 },
			[2] = { .x = 88, .y = 72 },
			[3] = { .x = 68, .y = 70 },
		}}
	},
	{
		.examinationSection = 0x118,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 17, .y = 88 },
			[1] = { .x = 44, .y = 88 },
			[2] = { .x = 44, .y = 105 },
			[3] = { .x = 20, .y = 112 },
		}}
	},
};

void InvestigationSegmentSetup_1_2(struct Main *main)
{
    DmaCopy16(3, gRoomData_1_2, gMain.roomData, 0x30);
    DmaCopy16(3, gTalkData_1_2, gTalkData, 0x104);
    main->currentRoomId = 2;
}

void InvestigationRoomSetup_1_2(struct Main *main)
{
    DmaFill16(3, 0xFFFF, gExaminationData, sizeof(gExaminationData));
    switch(main->currentRoomId) {
        case 0: {
            if(!GetFlag(0, 0x74)) {
                if(!GetFlag(0, 0x7B)) {
                    InvestigationSetScriptSectionAndFlag(0x80, 0x7B);
                }
                LOADEXAMDATA(gExaminationData_1_2_00);
            }
            else {
                if(!GetFlag(0, 0x7C)) {
                    InvestigationSetScriptSectionAndFlag(0x87, 0x7C);
                }
                else if(GetFlag(0, 0x75)) {
                    PlayBGM(BGM012_INVESTIGATION_CORE);
                }
                else {
                    PlayBGM(BGM025_INVESTIGATION_OPENING);
                }
                LOADEXAMDATA(gExaminationData_1_2_01);
            }
            break;
        }
        case 2: {
            LOADEXAMDATA(gExaminationData_1_2_02);
            if(!GetFlag(0, 0x80)) {
                if(!GetFlag(0, 0x7D)) {
                    InvestigationSetScriptSectionAndFlag(0x9A, 0x7D);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_APRIL_MAY, ANIM_MAY_NORMAL_IDLE, ANIM_MAY_NORMAL_IDLE);
                    PlayBGM(BGM022_HAPPY_PEOPLE);
                }
            }
            else if(!GetFlag(0, 0x70)) {
                if(!GetFlag(0, 0x7E)) {
                    InvestigationSetScriptSectionAndFlag(0xA2, 0x7E);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_APRIL_MAY, ANIM_MAY_NORMAL_IDLE, ANIM_MAY_NORMAL_IDLE);
                    PlayBGM(BGM022_HAPPY_PEOPLE);
                }
            }
            else if(!GetFlag(0, 0x7F)) {
                InvestigationSetScriptSectionAndFlag(0xB0, 0x7F);
            }
            break;
        }
        case 3: {
            LOADEXAMDATA(gExaminationData_1_2_03);
            if(!GetFlag(0, 0x72)) {
                if(!GetFlag(0, 0x80)) {
                    InvestigationSetScriptSectionAndFlag(0xB9, 0x80);
                }
                PlayAnimation(ANIM_DL6_PHOTOS);
            }
            else if(!GetFlag(0, 0x73)) {
                if(!GetFlag(0, 0x81)) {
                    InvestigationSetScriptSectionAndFlag(0xCB, 0x81);
                }
            }
            else if(!GetFlag(0, 0x70)) {
                if(!GetFlag(0, 0x83)) {
                    InvestigationSetScriptSectionAndFlag(0xD4, 0x83);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_MARVIN_GROSSBERG, ANIM_GROSSBERG_SAD_IDLE, ANIM_GROSSBERG_SAD_IDLE);
                    PlayBGM(BGM026_GROSSBERGS_THEME);
                }
            }
            else if(!GetFlag(0, 0x82)) {
                InvestigationSetScriptSectionAndFlag(0xE4, 0x82);
            }
            else {
                InvestigationSetPersonAnimation(PERSON_ANIM_MARVIN_GROSSBERG, ANIM_GROSSBERG_SAD_IDLE, ANIM_GROSSBERG_SAD_IDLE);
                if(GetFlag(0, 0x88)) {
                    PlayBGM(BGM012_INVESTIGATION_CORE);
                }
                else {
                    PlayBGM(BGM026_GROSSBERGS_THEME);
                }
            }
            break;
        }
        case 4: {
            if(!GetFlag(0, 0x75)) {
                if(!GetFlag(0, 0x84)) {
                    InvestigationSetScriptSectionAndFlag(0x11A, 0x84);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_REDD_WHITE, ANIM_WHITE_CONFIDENT_IDLE, ANIM_WHITE_CONFIDENT_IDLE);
                    PlayBGM(BGM012_INVESTIGATION_CORE);
                }
                LOADEXAMDATA(gExaminationData_1_2_04);
            }
            else {
                if(!GetFlag(0, 0x85)) {
                    InvestigationSetScriptSectionAndFlag(0x12C, 0x85);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_REDD_WHITE, ANIM_WHITE_CONFIDENT_IDLE, ANIM_WHITE_CONFIDENT_IDLE);
                    PlayBGM(BGM012_INVESTIGATION_CORE);
                }
                LOADEXAMDATA(gExaminationData_1_2_05);
            }
            break;
        }
        case 5: {
            if(!GetFlag(0, 0x73)) {
                if(!GetFlag(0, 0x86)) {
                    InvestigationSetScriptSectionAndFlag(0x100, 0x86);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_BELLBOY, ANIM_BELLBOY_NORMAL_IDLE, ANIM_BELLBOY_NORMAL_IDLE);
                    PlayBGM(BGM025_INVESTIGATION_OPENING);
                }
                LOADEXAMDATA(gExaminationData_1_2_06);
            }
            else {
                if(!GetFlag(0, 0x87)) {
                    InvestigationSetScriptSectionAndFlag(0x112, 0x87);
                }
                LOADEXAMDATA(gExaminationData_1_2_07);
            }
            
            break;
        }
    }
}

void InvestigationRoomUpdate_1_2(struct Main *main)
{
    if(main->currentRoomId == 4) {
        if(!GetFlag(0, 0x71) && GetFlag(0, 0x70)) {
            LOADEXAMDATA(gExaminationData_1_2_05);
            ChangeFlag(0, 0x71, 1);
        }
    }
}
