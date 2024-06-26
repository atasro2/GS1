#include "global.h"
#include "main.h"
#include "case_data.h"
#include "investigation.h"
#include "sound.h"
#include "animation.h"
#include "constants/persons.h"
#include "constants/songs.h"
#include "constants/animation_offsets.h"
#include "constants/animation_offsets.h"
const u8 gCourtRecordInitialItems_2_0[6] = {
	0x0d, 0x0e, 0x0f, 0xfe,	// profiles
	0x17, 0xff		// evidence
};

const u8 gCourtRecordInitialItems_2_1[14] = {
	0x0d, 0x0e, 0x0f, 0x2a, 0x2b, 0x2c, 0x2d, 0xfe,	// profiles
	0x17, 0x32, 0x36, 0x33, 0x34, 0xff		// evidence
};

const u8 gCourtRecordInitialItems_2_2[15] = {
	0x0d, 0x0e, 0x0f, 0x2a, 0x2b, 0x2c, 0x2d, 0xfe,	// profiles
	0x17, 0x32, 0x33, 0x35, 0x36, 0x38, 0xff	// evidence
};

const u8 gCourtRecordInitialItems_2_3[20] = {
	0x0d, 0x0e, 0x0f, 0x2a, 0x2b, 0x2c, 0x30, 0x2d, 0x2e, 0x2f, 0xfe,	// profiles
	0x17, 0x32, 0x35, 0x36, 0x38, 0x39, 0x3d, 0x40, 0xff			// evidence
};

const u8 gCourtRecordInitialItems_2_4[20] = {
	0x0d, 0x0e, 0x0f, 0x2a, 0x2b, 0x2c, 0x30, 0x2d, 0x2e, 0x2f, 0xfe,	// profiles
	0x17, 0x32, 0x35, 0x36, 0x38, 0x3d, 0x40, 0x41, 0xff			// evidence
};

const u8 gCourtRecordInitialItems_2_5[23] = {
	0x0d, 0x0e, 0x0f, 0x2a, 0x2b, 0x2c, 0x30, 0x2d, 0x2e, 0x2f, 0xfe,	// profiles
	0x17, 0x32, 0x35, 0x36, 0x38, 0x3d, 0x40, 0x41, 0x44, 0x43, 0x42, 0xff,	// evidence
};


const struct CourtPresentData gCourtPresentData_2_1[9] = {
	{
		.presentingSection = 0x8A,
		.evidenceId = 0x34,
		.presentedSection = 0x95,
		.flagId = 0xFF,
		.action = 0x0,
	},
	{
		.presentingSection = 0x8B,
		.evidenceId = 0x34,
		.presentedSection = 0x95,
		.flagId = 0xFF,
		.action = 0x0,
	},
	{
		.presentingSection = 0xAB,
		.evidenceId = 0x35,
		.presentedSection = 0xB3,
		.flagId = 0xFF,
		.action = 0x0,
	},
	{
		.presentingSection = 0xAC,
		.evidenceId = 0x35,
		.presentedSection = 0xB3,
		.flagId = 0xFF,
		.action = 0x0,
	},
	{
		.presentingSection = 0xAD,
		.evidenceId = 0x35,
		.presentedSection = 0xB3,
		.flagId = 0xFF,
		.action = 0x0,
	},
	{
		.presentingSection = 0xC6,
		.evidenceId = 0x33,
		.presentedSection = 0xCA,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xC6,
		.evidenceId = 0x38,
		.presentedSection = 0xC8,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xC6,
		.evidenceId = 0x35,
		.presentedSection = 0xC8,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xFFFF,
		.evidenceId = 0xFFFF,
		.presentedSection = 0xFFFF,
		.flagId = 0xFF,
		.action = 0xFF,
	},
};

const struct CourtPresentData gCourtPresentData_2_3[5] = {
	{
		.presentingSection = 0xAC,
		.evidenceId = 0x41,
		.presentedSection = 0xB7,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xC9,
		.evidenceId = 0x41,
		.presentedSection = 0xCB,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xD0,
		.evidenceId = 0x40,
		.presentedSection = 0xDA,
		.flagId = 0xF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xF3,
		.evidenceId = 0x39,
		.presentedSection = 0xF6,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xFFFF,
		.evidenceId = 0xFFFF,
		.presentedSection = 0xFFFF,
		.flagId = 0xFF,
		.action = 0xFF,
	},
};

const struct CourtPresentData gCourtPresentData_2_4[6] = {
	{
		.presentingSection = 0xA6,
		.evidenceId = 0x43,
		.presentedSection = 0xA8,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xAD,
		.evidenceId = 0x43,
		.presentedSection = 0xAF,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xA6,
		.evidenceId = 0x42,
		.presentedSection = 0xAC,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xA9,
		.evidenceId = 0x42,
		.presentedSection = 0xAB,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xD7,
		.evidenceId = 0x40,
		.presentedSection = 0xD9,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xFFFF,
		.evidenceId = 0xFFFF,
		.presentedSection = 0xFFFF,
		.flagId = 0xFF,
		.action = 0xFF,
	},
};

const struct CourtPresentData gCourtPresentData_2_5[10] = {
	{
		.presentingSection = 0x86,
		.evidenceId = 0x42,
		.presentedSection = 0x8E,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0x9A,
		.evidenceId = 0x38,
		.presentedSection = 0x9C,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xA0,
		.evidenceId = 0x44,
		.presentedSection = 0xA2,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xA7,
		.evidenceId = 0x45,
		.presentedSection = 0xA9,
		.flagId = 0xFF,
		.action = 0x0,
	},
	{
		.presentingSection = 0xB7,
		.evidenceId = 0x35,
		.presentedSection = 0xCB,
		.flagId = 0x13,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xD1,
		.evidenceId = 0x44,
		.presentedSection = 0xD3,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xD6,
		.evidenceId = 0xFFFF,
		.presentedSection = 0xFFFF,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xDB,
		.evidenceId = 0x35,
		.presentedSection = 0xDD,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xDB,
		.evidenceId = 0x40,
		.presentedSection = 0xDD,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xFFFF,
		.evidenceId = 0xFFFF,
		.presentedSection = 0xFFFF,
		.flagId = 0xFF,
		.action = 0xFF,
	},
};

const struct InvestigationPresentData gInvestigationPresentData_2_0[11] = {
	{
		.roomId = 0x6,
		.evidenceId = 0x17,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x89,
		.uninterestedSection = 0x8B,
	},
	{
		.roomId = 0x6,
		.evidenceId = 0x31,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x8A,
		.uninterestedSection = 0x8B,
	},
	{
		.roomId = 0x6,
		.evidenceId = 0x33,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x8F,
		.uninterestedSection = 0x8B,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x17,
		.personId = PERSON_ANIM_WILL_POWERS,
		.end = 0x0,
		.interestedSection = 0x97,
		.uninterestedSection = 0x98,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x31,
		.personId = PERSON_ANIM_WILL_POWERS,
		.end = 0x0,
		.interestedSection = 0x9E,
		.uninterestedSection = 0x98,
	},
	{
		.roomId = 0x7,
		.evidenceId = 0x31,
		.personId = PERSON_ANIM_WENDY_OLDBAG,
		.end = 0x0,
		.interestedSection = 0xAC,
		.uninterestedSection = 0xAD,
	},
	{
		.roomId = 0x7,
		.evidenceId = 0x33,
		.personId = PERSON_ANIM_WENDY_OLDBAG,
		.end = 0x0,
		.interestedSection = 0xB3,
		.uninterestedSection = 0xAD,
	},
	{
		.roomId = 0xA,
		.evidenceId = 0x17,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xE0,
		.uninterestedSection = 0xE2,
	},
	{
		.roomId = 0xA,
		.evidenceId = 0x33,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xE1,
		.uninterestedSection = 0xE2,
	},
	{
		.roomId = 0xB,
		.evidenceId = 0xFF,
		.personId = PERSON_ANIM_PENNY_NICHOLS,
		.end = 0x0,
		.interestedSection = 0xE1,
		.uninterestedSection = 0xF9,
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
const struct TalkData gTalkData_2_0[17] = {
	{
		.roomId = 0x6,
		.personId = PERSON_ANIM_MAYA,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x20, 0x21, 0xFF, 0xFF },
		.talkFlagId = { 0x31, 0x32, 0xFF, 0xFF },
		.talkSection = { 0x87, 0x88, 0x0, 0x0 }
	},
	{
		.roomId = 0x6,
		.personId = PERSON_ANIM_MAYA,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x20, 0x22, 0xFF, 0xFF },
		.talkFlagId = { 0x33, 0x34, 0xFF, 0xFF },
		.talkSection = { 0x8D, 0x8E, 0x0, 0x0 }
	},
	{
		.roomId = 0x2,
		.personId = PERSON_ANIM_WILL_POWERS,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x23, 0x24, 0xFF, 0xFF },
		.talkFlagId = { 0x35, 0x36, 0xFF, 0xFF },
		.talkSection = { 0x94, 0x95, 0x0, 0x0 }
	},
	{
		.roomId = 0x2,
		.personId = PERSON_ANIM_WILL_POWERS,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x23, 0x24, 0x25, 0xFF },
		.talkFlagId = { 0x35, 0x36, 0x37, 0xFF },
		.talkSection = { 0x94, 0x95, 0x96, 0x0 }
	},
	{
		.roomId = 0x2,
		.personId = PERSON_ANIM_WILL_POWERS,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x26, 0x27, 0x24, 0xFF },
		.talkFlagId = { 0x38, 0x39, 0x36, 0xFF },
		.talkSection = { 0x9B, 0x9C, 0x95, 0x0 }
	},
	{
		.roomId = 0x7,
		.personId = PERSON_ANIM_WENDY_OLDBAG,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x28, 0x29, 0xFF, 0xFF },
		.talkFlagId = { 0x3A, 0x3B, 0xFF, 0xFF },
		.talkSection = { 0xA8, 0xA9, 0x0, 0x0 }
	},
	{
		.roomId = 0x7,
		.personId = PERSON_ANIM_WENDY_OLDBAG,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x28, 0x29, 0x2A, 0xFF },
		.talkFlagId = { 0x3A, 0x3B, 0x3C, 0xFF },
		.talkSection = { 0xA8, 0xA9, 0xAA, 0x0 }
	},
	{
		.roomId = 0x7,
		.personId = PERSON_ANIM_WENDY_OLDBAG,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x28, 0x29, 0x2B, 0xFF },
		.talkFlagId = { 0x3A, 0x3B, 0x3D, 0xFF },
		.talkSection = { 0xA8, 0xA9, 0xAB, 0x0 }
	},
	{
		.roomId = 0x7,
		.personId = PERSON_ANIM_WENDY_OLDBAG,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x28, 0x29, 0x2A, 0x2B },
		.talkFlagId = { 0x3A, 0x3B, 0x3C, 0x3D },
		.talkSection = { 0xA8, 0xA9, 0xAA, 0xAB }
	},
	{
		.roomId = 0x7,
		.personId = PERSON_ANIM_WENDY_OLDBAG,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x2C, 0x2B, 0x2A, 0xFF },
		.talkFlagId = { 0x3E, 0x3F, 0x40, 0xFF },
		.talkSection = { 0xAF, 0xB0, 0xB1, 0x0 }
	},
	{
		.roomId = 0x7,
		.personId = PERSON_ANIM_WENDY_OLDBAG,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x2C, 0x2B, 0x2A, 0x2D },
		.talkFlagId = { 0x3E, 0x3F, 0x40, 0x41 },
		.talkSection = { 0xAF, 0xB0, 0xB1, 0xB2 }
	},
	{
		.roomId = 0x7,
		.personId = PERSON_ANIM_WENDY_OLDBAG,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x2C, 0x2B, 0x2D, 0x2E },
		.talkFlagId = { 0x3E, 0x3F, 0x41, 0x42 },
		.talkSection = { 0xAF, 0xB0, 0xB2, 0xBD }
	},
	{
		.roomId = 0xA,
		.personId = PERSON_ANIM_GUMSHOE,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x2F, 0x30, 0x27, 0xFF },
		.talkFlagId = { 0x43, 0x44, 0x45, 0xFF },
		.talkSection = { 0xDB, 0xDD, 0xDE, 0x0 }
	},
	{
		.roomId = 0xA,
		.personId = PERSON_ANIM_GUMSHOE,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x2F, 0x30, 0x27, 0x31 },
		.talkFlagId = { 0x43, 0x44, 0x45, 0x46 },
		.talkSection = { 0xDB, 0xDD, 0xDE, 0xDF }
	},
	{
		.roomId = 0xB,
		.personId = PERSON_ANIM_PENNY_NICHOLS,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x32, 0x29, 0xFF, 0xFF },
		.talkFlagId = { 0x47, 0x48, 0xFF, 0xFF },
		.talkSection = { 0xF6, 0xF7, 0x0, 0x0 }
	},
	{
		.roomId = 0xB,
		.personId = PERSON_ANIM_PENNY_NICHOLS,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x32, 0x29, 0x33, 0xFF },
		.talkFlagId = { 0x47, 0x48, 0x49, 0xFF },
		.talkSection = { 0xF6, 0xF7, 0xF8, 0x0 }
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
const u8 gRoomData_2_0[12][8] = {
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x1E, 0xFF, 0xFF, 0xFF, 0x06, 0xFF, 0xFF, 0xFF},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x01, 0xFF, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0xFF},
	{ 0x19, 0xFF, 0xFF, 0xFF, 0x06, 0x02, 0xFF, 0xFF},
	{ 0x0C, 0xFF, 0xFF, 0xFF, 0x07, 0x09, 0xFF, 0xFF},
	{ 0x18, 0xFF, 0xFF, 0xFF, 0x08, 0xFF, 0xFF, 0xFF},
	{ 0x0B, 0xFF, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xFF},
	{ 0x1A, 0xFF, 0xFF, 0xFF, 0x0A, 0xFF, 0xFF, 0xFF},
};

// exam data
const struct ExaminationData gExaminationData_2_0_00[5] = {
	{
		.examinationSection = 0x82,
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
		.examinationSection = 0x83,
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
		.examinationSection = 0x84,
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
		.examinationSection = 0x85,
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
		.examinationSection = 0x86,
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

const struct ExaminationData gExaminationData_2_0_01[2] = {
	{
		.examinationSection = 0x93,
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
		.examinationSection = 0x92,
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

const struct ExaminationData gExaminationData_2_0_02[5] = {
	{
		.examinationSection = 0xA4,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 198, .y = 69 },
			[1] = { .x = 240, .y = 69 },
			[2] = { .x = 240, .y = 112 },
			[3] = { .x = 187, .y = 112 },
		}}
	},
	{
		.examinationSection = 0xA3,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 106, .y = 87 },
			[1] = { .x = 176, .y = 87 },
			[2] = { .x = 176, .y = 98 },
			[3] = { .x = 106, .y = 98 },
		}}
	},
	{
		.examinationSection = 0xA7,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 10, .y = 80 },
			[1] = { .x = 38, .y = 80 },
			[2] = { .x = 38, .y = 84 },
			[3] = { .x = 18, .y = 84 },
		}}
	},
	{
		.examinationSection = 0xA5,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 37 },
			[1] = { .x = 49, .y = 53 },
			[2] = { .x = 49, .y = 91 },
			[3] = { .x = 0, .y = 91 },
		}}
	},
	{
		.examinationSection = 0xA6,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 64, .y = 65 },
			[1] = { .x = 77, .y = 69 },
			[2] = { .x = 77, .y = 94 },
			[3] = { .x = 64, .y = 94 },
		}}
	},
};

const struct ExaminationData gExaminationData_2_0_03[10] = {
	{
		.examinationSection = 0xBF,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 314, .y = 58 },
			[1] = { .x = 346, .y = 58 },
			[2] = { .x = 346, .y = 113 },
			[3] = { .x = 313, .y = 107 },
		}}
	},
	{
		.examinationSection = 0xC1,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 425, .y = 48 },
			[1] = { .x = 462, .y = 42 },
			[2] = { .x = 462, .y = 160 },
			[3] = { .x = 425, .y = 141 },
		}}
	},
	{
		.examinationSection = 0xC0,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 401, .y = 56 },
			[1] = { .x = 415, .y = 55 },
			[2] = { .x = 415, .y = 83 },
			[3] = { .x = 401, .y = 83 },
		}}
	},
	{
		.examinationSection = 0xC2,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 373, .y = 60 },
			[1] = { .x = 396, .y = 56 },
			[2] = { .x = 396, .y = 88 },
			[3] = { .x = 373, .y = 85 },
		}}
	},
	{
		.examinationSection = 0xC3,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 232, .y = 58 },
			[1] = { .x = 282, .y = 58 },
			[2] = { .x = 282, .y = 85 },
			[3] = { .x = 232, .y = 85 },
		}}
	},
	{
		.examinationSection = 0xC4,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 85, .y = 108 },
			[1] = { .x = 149, .y = 90 },
			[2] = { .x = 148, .y = 129 },
			[3] = { .x = 83, .y = 129 },
		}}
	},
	{
		.examinationSection = 0xC5,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 12, .y = 126 },
			[1] = { .x = 39, .y = 121 },
			[2] = { .x = 39, .y = 126 },
			[3] = { .x = 12, .y = 132 },
		}}
	},
	{
		.examinationSection = 0xC6,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 26, .y = 143 },
			[1] = { .x = 45, .y = 134 },
			[2] = { .x = 59, .y = 138 },
			[3] = { .x = 41, .y = 144 },
		}}
	},
	{
		.examinationSection = 0xC7,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 160, .y = 147 },
			[1] = { .x = 253, .y = 147 },
			[2] = { .x = 253, .y = 144 },
			[3] = { .x = 160, .y = 144 },
		}}
	},
	{
		.examinationSection = 0xC8,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 60, .y = 11 },
			[1] = { .x = 116, .y = 31 },
			[2] = { .x = 138, .y = 112 },
			[3] = { .x = 75, .y = 115 },
		}}
	},
};

const struct ExaminationData gExaminationData_2_0_04[7] = {
	{
		.examinationSection = 0xCD,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 191, .y = 144 },
			[1] = { .x = 223, .y = 144 },
			[2] = { .x = 223, .y = 160 },
			[3] = { .x = 179, .y = 160 },
		}}
	},
	{
		.examinationSection = 0xCC,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 109, .y = 105 },
			[1] = { .x = 158, .y = 105 },
			[2] = { .x = 158, .y = 108 },
			[3] = { .x = 109, .y = 108 },
		}}
	},
	{
		.examinationSection = 0xD0,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 165, .y = 87 },
			[1] = { .x = 240, .y = 73 },
			[2] = { .x = 240, .y = 101 },
			[3] = { .x = 165, .y = 88 },
		}}
	},
	{
		.examinationSection = 0xCF,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 168, .y = 52 },
			[1] = { .x = 240, .y = 32 },
			[2] = { .x = 240, .y = 92 },
			[3] = { .x = 168, .y = 92 },
		}}
	},
	{
		.examinationSection = 0xCA,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 91, .y = 58 },
			[1] = { .x = 153, .y = 58 },
			[2] = { .x = 153, .y = 90 },
			[3] = { .x = 91, .y = 90 },
		}}
	},
	{
		.examinationSection = 0xCB,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 38 },
			[1] = { .x = 81, .y = 38 },
			[2] = { .x = 81, .y = 83 },
			[3] = { .x = 0, .y = 83 },
		}}
	},
	{
		.examinationSection = 0xD1,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 102 },
			[1] = { .x = 73, .y = 102 },
			[2] = { .x = 73, .y = 113 },
			[3] = { .x = 0, .y = 113 },
		}}
	},
};

const struct ExaminationData gExaminationData_2_0_05[6] = {
	{
		.examinationSection = 0xD8,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 31, .y = 16 },
			[1] = { .x = 48, .y = 27 },
			[2] = { .x = 40, .y = 29 },
			[3] = { .x = 27, .y = 24 },
		}}
	},
	{
		.examinationSection = 0xDA,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 60, .y = 0 },
			[1] = { .x = 240, .y = 0 },
			[2] = { .x = 240, .y = 14 },
			[3] = { .x = 60, .y = 14 },
		}}
	},
	{
		.examinationSection = 0xD5,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 202, .y = 70 },
			[1] = { .x = 219, .y = 70 },
			[2] = { .x = 219, .y = 71 },
			[3] = { .x = 202, .y = 71 },
		}}
	},
	{
		.examinationSection = 0xD9,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 45, .y = 93 },
			[1] = { .x = 72, .y = 92 },
			[2] = { .x = 82, .y = 106 },
			[3] = { .x = 49, .y = 120 },
		}}
	},
	{
		.examinationSection = 0xD6,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 19, .y = 84 },
			[1] = { .x = 122, .y = 84 },
			[2] = { .x = 122, .y = 91 },
			[3] = { .x = 19, .y = 91 },
		}}
	},
	{
		.examinationSection = 0xD7,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 109, .y = 44 },
			[1] = { .x = 167, .y = 39 },
			[2] = { .x = 160, .y = 63 },
			[3] = { .x = 106, .y = 63 },
		}}
	},
};

const struct ExaminationData gExaminationData_2_0_06[6] = {
	{
		.examinationSection = 0xF1,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 23, .y = 51 },
			[1] = { .x = 61, .y = 16 },
			[2] = { .x = 78, .y = 27 },
			[3] = { .x = 48, .y = 126 },
		}}
	},
	{
		.examinationSection = 0xF0,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 0 },
			[1] = { .x = 20, .y = 0 },
			[2] = { .x = 20, .y = 86 },
			[3] = { .x = 0, .y = 98 },
		}}
	},
	{
		.examinationSection = 0xF2,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 116, .y = 98 },
			[1] = { .x = 198, .y = 98 },
			[2] = { .x = 224, .y = 125 },
			[3] = { .x = 149, .y = 144 },
		}}
	},
	{
		.examinationSection = 0xF3,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 201, .y = 52 },
			[1] = { .x = 222, .y = 52 },
			[2] = { .x = 227, .y = 86 },
			[3] = { .x = 204, .y = 86 },
		}}
	},
	{
		.examinationSection = 0xF4,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 217, .y = 23 },
			[1] = { .x = 240, .y = 23 },
			[2] = { .x = 240, .y = 78 },
			[3] = { .x = 227, .y = 78 },
		}}
	},
	{
		.examinationSection = 0xF5,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 117, .y = 21 },
			[1] = { .x = 148, .y = 21 },
			[2] = { .x = 156, .y = 79 },
			[3] = { .x = 116, .y = 79 },
		}}
	},
};

void InvestigationSegmentSetup_2_0(struct Main *main)
{
    DmaCopy16(3, gRoomData_2_0, gMain.roomData, sizeof(gRoomData_2_0));
    DmaCopy16(3, gTalkData_2_0, gTalkData, sizeof(gTalkData_2_0));
    main->currentRoomId = 6;
}

void InvestigationRoomSetup_2_0(struct Main *main)
{
    DmaFill16(3, 0xFFFF, gExaminationData, sizeof(gExaminationData));
    switch(main->currentRoomId) {
        case 6: {
            if(GetFlag(0, 0xA0)) {
                if(!GetFlag(0, 0x95)) {
                    InvestigationSetScriptSectionAndFlag(0x8C, 0x95);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_MAYA, ANIM_MAYA_NORMAL_IDLE, ANIM_MAYA_NORMAL_IDLE);
                    PlayBGM(BGM006_MAYAS_THEME);
                }
            }
            else if(GetFlag(0, 0x94)) {
                InvestigationSetPersonAnimation(PERSON_ANIM_MAYA, ANIM_MAYA_NORMAL_IDLE, ANIM_MAYA_NORMAL_IDLE);
                PlayBGM(BGM006_MAYAS_THEME);
            }
            LOADEXAMDATA(gExaminationData_2_0_00);
            break;
        }
        case 2: {
            if (GetFlag(0, 0xA0)) {
                if (!GetFlag(0, 0x92)) {
                    InvestigationSetScriptSectionAndFlag(0x9F, 0x92);
                }
            }
            else if(GetFlag(0, 0x9A)) {
                if(!GetFlag(0, 0x91)) {
                    InvestigationSetScriptSectionAndFlag(0x99, 0x91);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_WILL_POWERS, ANIM_POWERS_NORMAL_IDLE_CROPPED, ANIM_POWERS_NORMAL_IDLE_CROPPED);
                    PlayBGM(BGM000_DETENTION_CENTER);
                }
            }
            else if(!GetFlag(0, 0x90)) {
                InvestigationSetScriptSectionAndFlag(0x90, 0x90);
            }
            else {
                InvestigationSetPersonAnimation(PERSON_ANIM_WILL_POWERS, ANIM_POWERS_NORMAL_IDLE_CROPPED, ANIM_POWERS_NORMAL_IDLE_CROPPED);
                PlayBGM(BGM000_DETENTION_CENTER);
            }
            LOADEXAMDATA(gExaminationData_2_0_01);
            break;
        }
        case 7: {
            if(GetFlag(0, 0xA8)) {
                if(!GetFlag(0, 0xA9)) {
                    InvestigationSetScriptSectionAndFlag(0xB4, 0xA9);
                }
                else if(GetFlag(0, 0xAA)) {
                    PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_WENDY_OLDBAG, ANIM_OLDBAG_NORMAL_IDLE, ANIM_OLDBAG_NORMAL_IDLE);
                    PlayBGM(BGM025_INVESTIGATION_OPENING);
                }
            }
            else if(GetFlag(0, 0xA0)) {
                if(!GetFlag(0, 0xA1)) {
                    InvestigationSetScriptSectionAndFlag(0xAE, 0xA1);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_WENDY_OLDBAG, ANIM_OLDBAG_NORMAL_IDLE, ANIM_OLDBAG_NORMAL_IDLE);
                    PlayBGM(BGM025_INVESTIGATION_OPENING);
                }
            }
            else if(!GetFlag(0, 0x93)) {
                InvestigationSetScriptSectionAndFlag(0xA1, 0x93);
            }
            else {
                InvestigationSetPersonAnimation(PERSON_ANIM_WENDY_OLDBAG, ANIM_OLDBAG_NORMAL_IDLE, ANIM_OLDBAG_NORMAL_IDLE);
                PlayBGM(BGM025_INVESTIGATION_OPENING);
            }
            LOADEXAMDATA(gExaminationData_2_0_02);
            break;
        }
        case 8: {
            if(!GetFlag(0, 0x9D)) {
                InvestigationSetScriptSectionAndFlag(0xBE, 0x9D);
            }
            LOADEXAMDATA(gExaminationData_2_0_03);
            break;
        }
        case 9: {
            if(!GetFlag(0, 0xA2)) {
                InvestigationSetScriptSectionAndFlag(0xC9, 0xA2);
            }
            LOADEXAMDATA(gExaminationData_2_0_04);
            break;
        }
        case 10: {
            if(!GetFlag(0, 0x9C)) {
                InvestigationSetScriptSectionAndFlag(0xD2, 0x9C);
            }
            else {
                InvestigationSetPersonAnimation(PERSON_ANIM_GUMSHOE, ANIM_GUMSHOE_NORMAL_IDLE, ANIM_GUMSHOE_NORMAL_IDLE);
                PlayBGM(BGM001_GUMSHOES_THEME);
            }
            LOADEXAMDATA(gExaminationData_2_0_05);
            break;
        }
        case 11: {
            if(GetFlag(0, 0xAA)) {
                if(!GetFlag(0, 0xAB)) {
                    InvestigationSetScriptSectionAndFlag(0xFA, 0xAB);
                }
            }
            else if(!GetFlag(0, 0xA4)) {
                InvestigationSetScriptSectionAndFlag(0xED, 0xA4);
            }
            else {
                if(GetFlag(0, 0xA5)) {
                    InvestigationSetPersonAnimation(PERSON_ANIM_PENNY_NICHOLS, ANIM_NICHOLS_NORMAL_IDLE, ANIM_NICHOLS_NORMAL_IDLE);
                }
                PlayBGM(BGM025_INVESTIGATION_OPENING);
            }
            LOADEXAMDATA(gExaminationData_2_0_06);
            break;
        }
    }
}

void InvestigationRoomUpdate_2_0(struct Main *main) {
}
