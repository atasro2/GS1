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

const u8 gCourtRecordInitialItems_0_0[7] = {
	0x00, 0x02, 0x03, 0xfe,	// profiles
	0x17, 0x06, 0xff,	// evidence
};

const struct CourtPresentData gCourtPresentData_0_0[12] = {
	{
		.presentingSection = 0xAE,
		.evidenceId = 0x6,
		.presentedSection = 0xBB,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xBF,
		.evidenceId = 0x9,
		.presentedSection = 0xCC,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xC0,
		.evidenceId = 0x9,
		.presentedSection = 0xCC,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xC1,
		.evidenceId = 0x9,
		.presentedSection = 0xCC,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xC2,
		.evidenceId = 0x9,
		.presentedSection = 0xCC,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xC3,
		.evidenceId = 0x9,
		.presentedSection = 0xCC,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xD1,
		.evidenceId = 0x7,
		.presentedSection = 0xD9,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xD2,
		.evidenceId = 0x7,
		.presentedSection = 0xD9,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xD3,
		.evidenceId = 0x7,
		.presentedSection = 0xD9,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xE7,
		.evidenceId = 0x8,
		.presentedSection = 0xEA,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xED,
		.evidenceId = 0x7,
		.presentedSection = 0xEF,
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

const u8 gCourtRecordInitialItems_1_0[4] = {
	0x00, 0xfe,	// profiles
	0x17, 0xff	// evidence
};

const u8 gCourtRecordInitialItems_1_1[16] = {
	0x0a, 0x0c, 0x0f, 0x16, 0x10, 0x0e, 0x14, 0xfe,	// profiles
	0x17, 0x18, 0x1a, 0x1b, 0x1c, 0x20, 0x1e, 0xff	// evidence
};

const u8 gCourtRecordInitialItems_1_2[18] = {
	0x0a, 0x0c, 0x0f, 0x16, 0x11, 0x0e, 0x15, 0xfe,			// profiles
	0x17, 0x27, 0x1a, 0x1b, 0x1d, 0x20, 0x1e, 0x26,	0x25, 0xff	// evidence
};

const u8 gCourtRecordInitialItems_1_3[19] = {
	0x0a, 0x0d, 0x0f, 0x16, 0x11, 0x0e, 0x15, 0x13, 0xfe,		// profiles
	0x17, 0x27, 0x1a, 0x1b, 0x1d, 0x20, 0x1e, 0x26, 0x25, 0xff,	// evidence
};

const struct CourtPresentData gCourtPresentData_1_1[15] = {
	{
		.presentingSection = 0x92,
		.evidenceId = 0x18,
		.presentedSection = 0xA2,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0x93,
		.evidenceId = 0x18,
		.presentedSection = 0xA2,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0x94,
		.evidenceId = 0x18,
		.presentedSection = 0xA2,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0x95,
		.evidenceId = 0x18,
		.presentedSection = 0xA2,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0x96,
		.evidenceId = 0x18,
		.presentedSection = 0xA2,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xC9,
		.evidenceId = 0x1C,
		.presentedSection = 0xD1,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xD9,
		.evidenceId = 0x1A,
		.presentedSection = 0xDB,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xDE,
		.evidenceId = 0x1D,
		.presentedSection = 0xE0,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xE2,
		.evidenceId = 0x1A,
		.presentedSection = 0xE7,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xE2,
		.evidenceId = 0x20,
		.presentedSection = 0xEB,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xE5,
		.evidenceId = 0x1A,
		.presentedSection = 0xE7,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xE5,
		.evidenceId = 0x20,
		.presentedSection = 0xEB,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xE8,
		.evidenceId = 0x20,
		.presentedSection = 0xEA,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xEC,
		.evidenceId = 0x1A,
		.presentedSection = 0xEE,
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

const struct CourtPresentData gCourtPresentData_1_3[14] = {
	{
		.presentingSection = 0x8C,
		.evidenceId = 0x26,
		.presentedSection = 0x9B,
		.flagId = 0x4,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xA8,
		.evidenceId = 0x27,
		.presentedSection = 0xB4,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xA9,
		.evidenceId = 0x27,
		.presentedSection = 0xB4,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xAA,
		.evidenceId = 0x27,
		.presentedSection = 0xB4,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xAB,
		.evidenceId = 0x27,
		.presentedSection = 0xB4,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xB6,
		.evidenceId = 0x1B,
		.presentedSection = 0xC5,
		.flagId = 0x5,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xB6,
		.evidenceId = 0x25,
		.presentedSection = 0xC4,
		.flagId = 0x5,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xD7,
		.evidenceId = 0x1F,
		.presentedSection = 0xE0,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xD8,
		.evidenceId = 0x1F,
		.presentedSection = 0xE0,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xD9,
		.evidenceId = 0x1F,
		.presentedSection = 0xE0,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xDA,
		.evidenceId = 0x1F,
		.presentedSection = 0xE0,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xC8,
		.evidenceId = 0x25,
		.presentedSection = 0xCA,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xE4,
		.evidenceId = 0x28,
		.presentedSection = 0xE6,
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

const struct InvestigationPresentData gInvestigationPresentData_1_0[17] = {
	{
		.roomId = 0x0,
		.evidenceId = 0x1B,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x91,
		.uninterestedSection = 0x90,
	},
	{
		.roomId = 0x0,
		.evidenceId = 0x1C,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x92,
		.uninterestedSection = 0x90,
	},
	{
		.roomId = 0x0,
		.evidenceId = 0x1E,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x93,
		.uninterestedSection = 0x90,
	},
	{
		.roomId = 0x0,
		.evidenceId = 0x19,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xA8,
		.uninterestedSection = 0xA7,
	},
	{
		.roomId = 0x0,
		.evidenceId = 0x1A,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xAB,
		.uninterestedSection = 0xA7,
	},
	{
		.roomId = 0x0,
		.evidenceId = 0x1C,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xAD,
		.uninterestedSection = 0xA7,
	},
	{
		.roomId = 0x0,
		.evidenceId = 0x1B,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xAE,
		.uninterestedSection = 0xA7,
	},
	{
		.roomId = 0x0,
		.evidenceId = 0x1E,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xAF,
		.uninterestedSection = 0xA7,
	},
	{
		.roomId = 0x0,
		.evidenceId = 0x18,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xB0,
		.uninterestedSection = 0xA7,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x1B,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0xD2,
		.uninterestedSection = 0xD1,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x1C,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0xD3,
		.uninterestedSection = 0xD1,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x19,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0xD4,
		.uninterestedSection = 0xD1,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x1A,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0xE9,
		.uninterestedSection = 0xD1,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x1E,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0xD5,
		.uninterestedSection = 0xD1,
	},
	{
		.roomId = 0x3,
		.evidenceId = 0xFF,
		.personId = PERSON_ANIM_MARVIN_GROSSBERG,
		.end = 0x0,
		.interestedSection = 0xD5,
		.uninterestedSection = 0x104,
	},
	{
		.roomId = 0x5,
		.evidenceId = 0xFF,
		.personId = PERSON_ANIM_APRIL_MAY,
		.end = 0x0,
		.interestedSection = 0xD5,
		.uninterestedSection = 0xF6,
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
const struct TalkData gTalkData_1_0[14] = {
	{
		.roomId = 0x0,
		.personId = PERSON_ANIM_MAYA,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x1, 0x2, 0xFF, 0xFF },
		.talkFlagId = { 0x1, 0x2, 0xFF, 0xFF },
		.talkSection = { 0x8E, 0x8F, 0x0, 0x0 }
	},
	{
		.roomId = 0x0,
		.personId = PERSON_ANIM_MAYA,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x1, 0x2, 0x0, 0xFF },
		.talkFlagId = { 0x1, 0x2, 0x0, 0xFF },
		.talkSection = { 0x8E, 0x8F, 0x8D, 0x0 }
	},
	{
		.roomId = 0x2,
		.personId = PERSON_ANIM_MAYA,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x4, 0x6, 0xFF, 0xFF },
		.talkFlagId = { 0x4, 0x3, 0xFF, 0xFF },
		.talkSection = { 0xCE, 0xCD, 0x0, 0x0 }
	},
	{
		.roomId = 0x2,
		.personId = PERSON_ANIM_MAYA,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x4, 0x6, 0x8, 0xFF },
		.talkFlagId = { 0x4, 0x3, 0x5, 0xFF },
		.talkSection = { 0xCE, 0xCD, 0xD0, 0x0 }
	},
	{
		.roomId = 0x2,
		.personId = PERSON_ANIM_MAYA,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x4, 0x6, 0x7, 0xFF },
		.talkFlagId = { 0x4, 0x3, 0x6, 0xFF },
		.talkSection = { 0xCE, 0xCD, 0xCF, 0x0 }
	},
	{
		.roomId = 0x2,
		.personId = PERSON_ANIM_MAYA,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x4, 0x6, 0x8, 0x7 },
		.talkFlagId = { 0x4, 0x3, 0x5, 0x6 },
		.talkSection = { 0xCE, 0xCD, 0xD0, 0xCF }
	},
	{
		.roomId = 0x0,
		.personId = PERSON_ANIM_GUMSHOE,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x3, 0x4, 0xFF, 0xFF },
		.talkFlagId = { 0x7, 0x8, 0xFF, 0xFF },
		.talkSection = { 0xA0, 0xA2, 0x0, 0x0 }
	},
	{
		.roomId = 0x0,
		.personId = PERSON_ANIM_GUMSHOE,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x3, 0x4, 0x5, 0xFF },
		.talkFlagId = { 0x7, 0x8, 0x9, 0xFF },
		.talkSection = { 0xA0, 0xA2, 0xA3, 0x0 }
	},
	{
		.roomId = 0x5,
		.personId = PERSON_ANIM_APRIL_MAY,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0xC, 0xD, 0xE, 0xFF },
		.talkFlagId = { 0xA, 0xB, 0xC, 0xFF },
		.talkSection = { 0xF3, 0xF4, 0xF5, 0x0 }
	},
	{
		.roomId = 0x2,
		.personId = PERSON_ANIM_MAYA,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x6, 0x9, 0xFF, 0xFF },
		.talkFlagId = { 0x3, 0xD, 0xFF, 0xFF },
		.talkSection = { 0xCD, 0xDA, 0x0, 0x0 }
	},
	{
		.roomId = 0x2,
		.personId = PERSON_ANIM_MAYA,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x6, 0x9, 0xA, 0xFF },
		.talkFlagId = { 0x3, 0xD, 0xE, 0xFF },
		.talkSection = { 0xCD, 0xDA, 0xDB, 0x0 }
	},
	{
		.roomId = 0x2,
		.personId = PERSON_ANIM_MAYA,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x6, 0x9, 0xA, 0xB },
		.talkFlagId = { 0x3, 0xD, 0xE, 0xF },
		.talkSection = { 0xCD, 0xDA, 0xDB, 0xDC }
	},
	{
		.roomId = 0x3,
		.personId = PERSON_ANIM_MARVIN_GROSSBERG,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0xF, 0x3, 0x10, 0xFF },
		.talkFlagId = { 0x10, 0x11, 0x12, 0xFF },
		.talkSection = { 0x101, 0x102, 0x103, 0x0 }
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
const u8 gRoomData_1_0[6][8] = {
	{ 0x09, 0xFF, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0xFF},
	{ 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF},
	{ 0x1E, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF},
	{ 0x27, 0xFF, 0xFF, 0xFF, 0x00, 0x02, 0xFF, 0xFF},
	{ 0x1F, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF},
	{ 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0x02, 0xFF, 0xFF},
};

// exam data
const struct ExaminationData gExaminationData_1_0_00[6] = {
	{
		.examinationSection = 0x87,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 141, .y = 19 },
			[1] = { .x = 177, .y = 19 },
			[2] = { .x = 177, .y = 76 },
			[3] = { .x = 141, .y = 76 },
		}}
	},
	{
		.examinationSection = 0x88,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 74, .y = 76 },
			[1] = { .x = 99, .y = 76 },
			[2] = { .x = 0, .y = 160 },
			[3] = { .x = 0, .y = 110 },
		}}
	},
	{
		.examinationSection = 0x8A,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 210, .y = 0 },
			[1] = { .x = 240, .y = 0 },
			[2] = { .x = 240, .y = 63 },
			[3] = { .x = 210, .y = 49 },
		}}
	},
	{
		.examinationSection = 0x89,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 187, .y = 86 },
			[1] = { .x = 240, .y = 74 },
			[2] = { .x = 240, .y = 160 },
			[3] = { .x = 205, .y = 160 },
		}}
	},
	{
		.examinationSection = 0x8B,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 32, .y = 0 },
			[1] = { .x = 101, .y = 0 },
			[2] = { .x = 101, .y = 71 },
			[3] = { .x = 32, .y = 84 },
		}}
	},
	{
		.examinationSection = 0x8C,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 57 },
			[1] = { .x = 27, .y = 57 },
			[2] = { .x = 27, .y = 74 },
			[3] = { .x = 0, .y = 74 },
		}}
	},
};

const struct ExaminationData gExaminationData_1_0_01[5] = {
	{
		.examinationSection = 0x9B,
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
		.examinationSection = 0x9C,
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
		.examinationSection = 0x9D,
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
		.examinationSection = 0x9E,
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
		.examinationSection = 0x9F,
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

const struct ExaminationData gExaminationData_1_0_02[11] = {
	{
		.examinationSection = 0xB6,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 40, .y = 141 },
			[1] = { .x = 81, .y = 141 },
			[2] = { .x = 81, .y = 160 },
			[3] = { .x = 37, .y = 160 },
		}}
	},
	{
		.examinationSection = 0xB8,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 41, .y = 66 },
			[1] = { .x = 60, .y = 62 },
			[2] = { .x = 71, .y = 113 },
			[3] = { .x = 35, .y = 115 },
		}}
	},
	{
		.examinationSection = 0xB4,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 102, .y = 92 },
			[1] = { .x = 142, .y = 81 },
			[2] = { .x = 159, .y = 83 },
			[3] = { .x = 150, .y = 115 },
		}}
	},
	{
		.examinationSection = 0xB5,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 0 },
			[1] = { .x = 116, .y = 0 },
			[2] = { .x = 116, .y = 40 },
			[3] = { .x = 0, .y = 71 },
		}}
	},
	{
		.examinationSection = 0xBB,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 336, .y = 108 },
			[1] = { .x = 353, .y = 90 },
			[2] = { .x = 376, .y = 94 },
			[3] = { .x = 350, .y = 105 },
		}}
	},
	{
		.examinationSection = 0xBD,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 328, .y = 37 },
			[1] = { .x = 359, .y = 37 },
			[2] = { .x = 350, .y = 59 },
			[3] = { .x = 326, .y = 59 },
		}}
	},
	{
		.examinationSection = 0xBE,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 400, .y = 20 },
			[1] = { .x = 436, .y = 20 },
			[2] = { .x = 436, .y = 46 },
			[3] = { .x = 400, .y = 46 },
		}}
	},
	{
		.examinationSection = 0xBF,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 306, .y = 37 },
			[1] = { .x = 426, .y = 53 },
			[2] = { .x = 426, .y = 65 },
			[3] = { .x = 306, .y = 65 },
		}}
	},
	{
		.examinationSection = 0xC0,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 460, .y = 0 },
			[1] = { .x = 480, .y = 0 },
			[2] = { .x = 480, .y = 160 },
			[3] = { .x = 460, .y = 119 },
		}}
	},
	{
		.examinationSection = 0xC1,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 208, .y = 96 },
			[1] = { .x = 250, .y = 53 },
			[2] = { .x = 256, .y = 81 },
			[3] = { .x = 222, .y = 99 },
		}}
	},
	{
		.examinationSection = 0xBA,
		.type = 0xFE,
		.animId = 0xC,
		.area = { .points = {
			[0] = { .x = 0, .y = 0 },
			[1] = { .x = 0, .y = 0 },
			[2] = { .x = 0, .y = 0 },
			[3] = { .x = 0, .y = 0 },
		}}
	},
};

const struct ExaminationData gExaminationData_1_0_03[2] = {
	{
		.examinationSection = 0xCB,
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
		.examinationSection = 0xCC,
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

const struct ExaminationData gExaminationData_1_0_04[5] = {
	{
		.examinationSection = 0xFE,
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
		.examinationSection = 0xFF,
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
		.examinationSection = 0xFC,
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
		.examinationSection = 0xFD,
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
		.examinationSection = 0x100,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 154, .y = 0 },
			[1] = { .x = 240, .y = 0 },
			[2] = { .x = 240, .y = 96 },
			[3] = { .x = 154, .y = 72 },
		}}
	},
};

const struct ExaminationData gExaminationData_1_0_05[6] = {
	{
		.examinationSection = 0xED,
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
		.examinationSection = 0xEE,
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
		.examinationSection = 0xEF,
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
		.examinationSection = 0xF0,
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
		.examinationSection = 0xF1,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 69, .y = 32 },
			[1] = { .x = 88, .y = 35 },
			[2] = { .x = 88, .y = 72 },
			[3] = { .x = 69, .y = 67 },
		}}
	},
	{
		.examinationSection = 0xF2,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 17, .y = 96 },
			[1] = { .x = 44, .y = 96 },
			[2] = { .x = 44, .y = 99 },
			[3] = { .x = 20, .y = 102 },
		}}
	},
};

void InvestigationSegmentSetup_1_0(struct Main *main)
{
    DmaCopy16(3, gRoomData_1_0, gMain.roomData, sizeof(gRoomData_1_0));
    DmaCopy16(3, gTalkData_1_0, gTalkData, sizeof(gTalkData_1_0));
    main->currentRoomId = 0;
}

void InvestigationRoomSetup_1_0(struct Main *main)
{
    DmaFill16(3, 0xFFFF, gExaminationData, sizeof(gExaminationData));
    switch(main->currentRoomId) {
        case 0: {
            if(GetFlag(0, 0x53)) {
                if(!GetFlag(0, 0x4F)) {
                    InvestigationSetScriptSectionAndFlag(0xB1, 0x4F);
                }
                LOADEXAMDATA(gExaminationData_1_0_01);
            }
            else if(GetFlag(0, 0x48)) {
                if(!GetFlag(0, 0x4A)) {
                    InvestigationSetScriptSectionAndFlag(0x94, 0x4A);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_GUMSHOE, ANIM_GUMSHOE_NORMAL_IDLE, ANIM_GUMSHOE_NORMAL_IDLE);
                    PlayBGM(BGM025_INVESTIGATION_OPENING);
                }
                LOADEXAMDATA(gExaminationData_1_0_01);
            }
            else if (GetFlag(0, 0x41)) {
                if(!GetFlag(0, 0x42)) {
                    InvestigationSetScriptSectionAndFlag(0x84, 0x42);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_MAYA, ANIM_MAYA_SAD_IDLE, ANIM_MAYA_SAD_IDLE);
                    if(GetFlag(0, 0x44) && GetFlag(0, 0x43) && GetFlag(0, 0x45) && GetFlag(0, 0x46)) {
                        InvestigationSetScriptSectionAndFlag(0x85, 0x47);
                    }
                    else {
                        PlayBGM(BGM012_INVESTIGATION_CORE);
                    }
                }
                LOADEXAMDATA(gExaminationData_1_0_00);
            }
            else if(GetFlag(0, 0x3F)) {
                InvestigationSetScriptSectionAndFlag(0x82, 0x40);
            }
            break;
        }
        case 1: {
            if(!GetFlag(0, 0x41)) {
                InvestigationSetScriptSectionAndFlag(0xB3, 0x41);
                PlayAnimation(ANIM_CRYING_MAYA);
            }
            else {
                PlayBGM(BGM012_INVESTIGATION_CORE);
            }
            if(GetFlag(0, 0x49)) {
                PlayAnimation(ANIM_MAYA_NOTE);
            }
            LOADEXAMDATA(gExaminationData_1_0_02);
            break;
        }
        case 2: {
            if(GetFlag(0, 0x62) && GetFlag(0, 0x64) && GetFlag(0, 0x63)) {
                if(!GetFlag(0, 0x5C)) {
                    InvestigationSetScriptSectionAndFlag(0xE1, 0x5C);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_MAYA, ANIM_MAYA_DEJECTED_IDLE_CROPPED, ANIM_MAYA_DEJECTED_IDLE_CROPPED);
                    if(GetFlag(0, 0x5A)) {
                        PlayBGM(BGM012_INVESTIGATION_CORE);
                    }
                    else {
                        PlayBGM(BGM028_RECOLLECTION_MAYA);
                    }
                }
            }
            else if(GetFlag(0, 0x53)) {
                if(!GetFlag(0, 0x61)) {
                    InvestigationSetScriptSectionAndFlag(0xEA, 0x61);
                }
            }
            else if(GetFlag(0, 0x50)) {
                if(!GetFlag(0, 0x5B)) {
                    InvestigationSetScriptSectionAndFlag(0xD8, 0x5B);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_MAYA, ANIM_MAYA_DEJECTED_IDLE_CROPPED, ANIM_MAYA_DEJECTED_IDLE_CROPPED);
                    PlayBGM(BGM000_DETENTION_CENTER);
                }
            }
            else if(!GetFlag(0, 0x48)) {
                InvestigationSetScriptSectionAndFlag(0xC2, 0x48);
            }
            else {
                InvestigationSetPersonAnimation(PERSON_ANIM_MAYA, ANIM_MAYA_DEJECTED_IDLE_CROPPED, ANIM_MAYA_DEJECTED_IDLE_CROPPED);
                PlayBGM(BGM000_DETENTION_CENTER);
            }
            LOADEXAMDATA(gExaminationData_1_0_03);
            break;
        }
        case 3: {
            if(GetFlag(0, 0x52)) {
                if(!GetFlag(0, 0x53)) {
                    InvestigationSetScriptSectionAndFlag(0xFB, 0x53);
                }
                else {
                    if(GetFlag(0, 0x53)) {
                        InvestigationSetPersonAnimation(PERSON_ANIM_MARVIN_GROSSBERG, ANIM_GROSSBERG_NORMAL_IDLE, ANIM_GROSSBERG_NORMAL_IDLE);
                    }
                    PlayBGM(BGM026_GROSSBERGS_THEME);
                }
            }
            else if(!GetFlag(0, 0x50)) {
                InvestigationSetScriptSectionAndFlag(0xFA, 0x50);
            }
            LOADEXAMDATA(gExaminationData_1_0_04);
            break;
        }
        case 5: {
            if(GetFlag(0, 0x5A)) {
                if(!GetFlag(0, 0x54)) {
                    InvestigationSetScriptSectionAndFlag(0xF7, 0x54);
                }
                else {
                    PlayBGM(BGM012_INVESTIGATION_CORE);
                }
            }
            else if(!GetFlag(0, 0x51)) {
                InvestigationSetScriptSectionAndFlag(0xEB, 0x51);
            }
            else {
                if(GetFlag(0, 0x52)) {
                    InvestigationSetPersonAnimation(PERSON_ANIM_APRIL_MAY, ANIM_MAY_NORMAL_IDLE_WITNESS, ANIM_MAY_NORMAL_IDLE_WITNESS);
                }
                PlayBGM(BGM022_HAPPY_PEOPLE);
            }
            LOADEXAMDATA(gExaminationData_1_0_05);
            break;
        }
    }
}

void InvestigationRoomUpdate_1_0(struct Main *main) {
}
