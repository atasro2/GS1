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

const u8 gCourtRecordInitialItems_3_0[6] = {
	0x0d, 0x0e, 0x0f, 0xfe,	// profiles
	0x17, 0xff		// evidence
};

const u8 gCourtRecordInitialItems_3_1[17] = {
	0x0d, 0x47, 0x0f, 0x4e, 0x48, 0x4a, 0x16, 0x4b, 0x4c, 0xfe,	// profiles
	0x17, 0x55, 0x53, 0x56, 0x59, 0x5a, 0xff			// evidence
};

const u8 gCourtRecordInitialItems_3_2[22] = {
	0x0d, 0x47, 0x0f, 0x4e, 0x49, 0x4a, 0x16, 0x4b, 0x4c, 0x4d, 0xfe,	// profiles
	0x17, 0x55, 0x54, 0x57, 0x59, 0x5a, 0x5c, 0x5e, 0x5f, 0x60, 0xff	// evidence
};

const u8 gCourtRecordInitialItems_3_3[28] = {
	0x0d, 0x47, 0x0f, 0x4e, 0x49, 0x4a, 0x16, 0x4b, 0x4c, 0x4d, 0x4f, 0xfe,				// profiles
	0x17, 0x55, 0x54, 0x57, 0x58, 0x59, 0x5a, 0x5c, 0x5e, 0x5f, 0x60, 0x64, 0x65, 0x67, 0x68, 0xff	// evidence
};

const u8 gCourtRecordInitialItems_3_4[28] = {
	0x0d, 0x47, 0x0f, 0x4e, 0x49, 0x4a, 0x16, 0x4b, 0x4c, 0x4d, 0x4f, 0xfe,				// profiles
	0x17, 0x55, 0x54, 0x57, 0x58, 0x59, 0x5a, 0x5c, 0x5e, 0x5f, 0x60, 0x64, 0x65, 0x67, 0x68, 0xff	// evidence
};

const u8 gCourtRecordInitialItems_3_5[25] = {
	0x0d, 0x47, 0x0f, 0x4e, 0x49, 0x4a, 0x16, 0x4b, 0x4c, 0x4d, 0x50, 0xfe,		// profiles
	0x17, 0x54, 0x57, 0x59,	0x5c, 0x5e, 0x5f, 0x64, 0x65, 0x67, 0x68, 0x6a, 0xff,	// evidence
};

const struct CourtPresentData gCourtPresentData_3_1[11] = {
	{
		.presentingSection = 0xAE,
		.evidenceId = 0x56,
		.presentedSection = 0xB2,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xB5,
		.evidenceId = 0x56,
		.presentedSection = 0xBF,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xB5,
		.evidenceId = 0x55,
		.presentedSection = 0xC0,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xD5,
		.evidenceId = 0x5A,
		.presentedSection = 0xE1,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xD6,
		.evidenceId = 0x5A,
		.presentedSection = 0xE1,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xD7,
		.evidenceId = 0x5A,
		.presentedSection = 0xE1,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xC4,
		.evidenceId = 0x5A,
		.presentedSection = 0xC7,
		.flagId = 0xFF,
		.action = 0x0,
	},
	{
		.presentingSection = 0xCB,
		.evidenceId = 0x55,
		.presentedSection = 0xCD,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xCB,
		.evidenceId = 0x5A,
		.presentedSection = 0xCE,
		.flagId = 0xFF,
		.action = 0x0,
	},
	{
		.presentingSection = 0xF0,
		.evidenceId = 0x5F,
		.presentedSection = 0xF2,
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

const struct CourtPresentData gCourtPresentData_3_2[3] = {
	{
		.presentingSection = 0xD2,
		.evidenceId = 0x61,
		.presentedSection = 0xD4,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xCE,
		.evidenceId = 0x61,
		.presentedSection = 0xD4,
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

const struct CourtPresentData gCourtPresentData_3_3[8] = {
	{
		.presentingSection = 0xA0,
		.evidenceId = 0x60,
		.presentedSection = 0xA9,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xB1,
		.evidenceId = 0x60,
		.presentedSection = 0xBB,
		.flagId = 0xFF,
		.action = 0x0,
	},
	{
		.presentingSection = 0xB1,
		.evidenceId = 0x57,
		.presentedSection = 0xBC,
		.flagId = 0xFF,
		.action = 0x0,
	},
	{
		.presentingSection = 0xC1,
		.evidenceId = 0x58,
		.presentedSection = 0xC3,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xC1,
		.evidenceId = 0x5F,
		.presentedSection = 0xC8,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xC4,
		.evidenceId = 0x5F,
		.presentedSection = 0xC7,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xC9,
		.evidenceId = 0x58,
		.presentedSection = 0xCC,
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

const struct CourtPresentData gCourtPresentData_3_5[10] = {
	{
		.presentingSection = 0x9D,
		.evidenceId = 0x67,
		.presentedSection = 0x9F,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xA6,
		.evidenceId = 0x67,
		.presentedSection = 0xA8,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xB6,
		.evidenceId = 0x68,
		.presentedSection = 0xC0,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xB6,
		.evidenceId = 0x67,
		.presentedSection = 0xCB,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xC7,
		.evidenceId = 0x67,
		.presentedSection = 0xC9,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xD2,
		.evidenceId = 0x68,
		.presentedSection = 0xD4,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xE8,
		.evidenceId = 0x64,
		.presentedSection = 0xEB,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xEC,
		.evidenceId = 0x6A,
		.presentedSection = 0xEF,
		.flagId = 0xFF,
		.action = 0xFF,
	},
	{
		.presentingSection = 0xF2,
		.evidenceId = 0x6A,
		.presentedSection = 0xF4,
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

const struct InvestigationPresentData gInvestigationPresentData_3_0[25] = {
	{
		.roomId = 0x6,
		.evidenceId = 0x17,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x89,
		.uninterestedSection = 0x8A,
	},
	{
		.roomId = 0x6,
		.evidenceId = 0x52,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x8E,
		.uninterestedSection = 0x8A,
	},
	{
		.roomId = 0x6,
		.evidenceId = 0x55,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x8F,
		.uninterestedSection = 0x8A,
	},
	{
		.roomId = 0x6,
		.evidenceId = 0x59,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x90,
		.uninterestedSection = 0x8A,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x17,
		.personId = PERSON_ANIM_EDGEWORTH,
		.end = 0x0,
		.interestedSection = 0x97,
		.uninterestedSection = 0x98,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x52,
		.personId = PERSON_ANIM_EDGEWORTH,
		.end = 0x0,
		.interestedSection = 0xA4,
		.uninterestedSection = 0x98,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x53,
		.personId = PERSON_ANIM_EDGEWORTH,
		.end = 0x0,
		.interestedSection = 0xA4,
		.uninterestedSection = 0x98,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x59,
		.personId = PERSON_ANIM_EDGEWORTH,
		.end = 0x0,
		.interestedSection = 0xA5,
		.uninterestedSection = 0x98,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x56,
		.personId = PERSON_ANIM_EDGEWORTH,
		.end = 0x0,
		.interestedSection = 0xA6,
		.uninterestedSection = 0x98,
	},
	{
		.roomId = 0x10,
		.evidenceId = 0x17,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xB1,
		.uninterestedSection = 0xB2,
	},
	{
		.roomId = 0x11,
		.evidenceId = 0x17,
		.personId = PERSON_ANIM_LARRY_BUTZ,
		.end = 0x0,
		.interestedSection = 0xBD,
		.uninterestedSection = 0xC1,
	},
	{
		.roomId = 0x11,
		.evidenceId = 0x52,
		.personId = PERSON_ANIM_LARRY_BUTZ,
		.end = 0x0,
		.interestedSection = 0xBE,
		.uninterestedSection = 0xC1,
	},
	{
		.roomId = 0x11,
		.evidenceId = 0x53,
		.personId = PERSON_ANIM_LARRY_BUTZ,
		.end = 0x0,
		.interestedSection = 0xBE,
		.uninterestedSection = 0xC1,
	},
	{
		.roomId = 0x11,
		.evidenceId = 0x56,
		.personId = PERSON_ANIM_LARRY_BUTZ,
		.end = 0x0,
		.interestedSection = 0xBF,
		.uninterestedSection = 0xC1,
	},
	{
		.roomId = 0x11,
		.evidenceId = 0x55,
		.personId = PERSON_ANIM_LARRY_BUTZ,
		.end = 0x0,
		.interestedSection = 0xC0,
		.uninterestedSection = 0xC1,
	},
	{
		.roomId = 0x12,
		.evidenceId = 0x17,
		.personId = PERSON_ANIM_LOTTA_HART,
		.end = 0x0,
		.interestedSection = 0xCD,
		.uninterestedSection = 0xD0,
	},
	{
		.roomId = 0x12,
		.evidenceId = 0x55,
		.personId = PERSON_ANIM_LOTTA_HART,
		.end = 0x0,
		.interestedSection = 0xCF,
		.uninterestedSection = 0xD0,
	},
	{
		.roomId = 0xE,
		.evidenceId = 0x52,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xDC,
		.uninterestedSection = 0xDD,
	},
	{
		.roomId = 0xE,
		.evidenceId = 0x5B,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xE3,
		.uninterestedSection = 0xE4,
	},
	{
		.roomId = 0x3,
		.evidenceId = 0x17,
		.personId = PERSON_ANIM_MARVIN_GROSSBERG,
		.end = 0x0,
		.interestedSection = 0xF0,
		.uninterestedSection = 0xF5,
	},
	{
		.roomId = 0x3,
		.evidenceId = 0x52,
		.personId = PERSON_ANIM_MARVIN_GROSSBERG,
		.end = 0x0,
		.interestedSection = 0xF1,
		.uninterestedSection = 0xF5,
	},
	{
		.roomId = 0x3,
		.evidenceId = 0x59,
		.personId = PERSON_ANIM_MARVIN_GROSSBERG,
		.end = 0x0,
		.interestedSection = 0xF2,
		.uninterestedSection = 0xF5,
	},
	{
		.roomId = 0x3,
		.evidenceId = 0x56,
		.personId = PERSON_ANIM_MARVIN_GROSSBERG,
		.end = 0x0,
		.interestedSection = 0xF3,
		.uninterestedSection = 0xF5,
	},
	{
		.roomId = 0x3,
		.evidenceId = 0x55,
		.personId = PERSON_ANIM_MARVIN_GROSSBERG,
		.end = 0x0,
		.interestedSection = 0xF4,
		.uninterestedSection = 0xF5,
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
const struct TalkData gTalkData_3_0[24] = {
	{
		.roomId = 0x6,
		.personId = PERSON_ANIM_MAYA,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x48, 0x49, 0xFF, 0xFF },
		.talkFlagId = { 0x7F, 0x80, 0xFF, 0xFF },
		.talkSection = { 0x87, 0x88, 0x0, 0x0 }
	},
	{
		.roomId = 0x6,
		.personId = PERSON_ANIM_MAYA,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x48, 0x49, 0xFF, 0xFF },
		.talkFlagId = { 0x81, 0x82, 0xFF, 0xFF },
		.talkSection = { 0x8C, 0x8D, 0x0, 0x0 }
	},
	{
		.roomId = 0x2,
		.personId = PERSON_ANIM_EDGEWORTH,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x4A, 0x4B, 0xFF, 0xFF },
		.talkFlagId = { 0x83, 0x84, 0xFF, 0xFF },
		.talkSection = { 0x94, 0x95, 0x0, 0x0 }
	},
	{
		.roomId = 0x2,
		.personId = PERSON_ANIM_EDGEWORTH,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x4A, 0x4B, 0x4C, 0xFF },
		.talkFlagId = { 0x83, 0x84, 0x85, 0xFF },
		.talkSection = { 0x94, 0x95, 0x96, 0x0 }
	},
	{
		.roomId = 0x2,
		.personId = PERSON_ANIM_EDGEWORTH,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x4A, 0x4B, 0xFF, 0xFF },
		.talkFlagId = { 0x86, 0x87, 0xFF, 0xFF },
		.talkSection = { 0x9E, 0x9F, 0x0, 0x0 }
	},
	{
		.roomId = 0x2,
		.personId = PERSON_ANIM_EDGEWORTH,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x4D, 0xFF, 0xFF, 0xFF },
		.talkFlagId = { 0x88, 0xFF, 0xFF, 0xFF },
		.talkSection = { 0xA0, 0x0, 0x0, 0x0 }
	},
	{
		.roomId = 0x2,
		.personId = PERSON_ANIM_EDGEWORTH,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x4D, 0x4E, 0x4F, 0xFF },
		.talkFlagId = { 0x88, 0x89, 0x8A, 0xFF },
		.talkSection = { 0xA0, 0xA1, 0xA2, 0x0 }
	},
	{
		.roomId = 0x10,
		.personId = PERSON_ANIM_GUMSHOE,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x4A, 0x50, 0x51, 0xFF },
		.talkFlagId = { 0x8B, 0x8C, 0x8D, 0xFF },
		.talkSection = { 0xAC, 0xAE, 0xAF, 0x0 }
	},
	{
		.roomId = 0x10,
		.personId = PERSON_ANIM_GUMSHOE,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x4A, 0x50, 0x51, 0x52 },
		.talkFlagId = { 0x8B, 0x8C, 0x8D, 0x8E },
		.talkSection = { 0xAC, 0xAE, 0xAF, 0xAD }
	},
	{
		.roomId = 0x11,
		.personId = PERSON_ANIM_LARRY_BUTZ,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x4A, 0x53, 0xFF, 0xFF },
		.talkFlagId = { 0x8F, 0x90, 0xFF, 0xFF },
		.talkSection = { 0xB8, 0xB9, 0x0, 0x0 }
	},
	{
		.roomId = 0x11,
		.personId = PERSON_ANIM_LARRY_BUTZ,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x4A, 0x53, 0x50, 0xFF },
		.talkFlagId = { 0x8F, 0x90, 0x91, 0xFF },
		.talkSection = { 0xB8, 0xB9, 0xBC, 0x0 }
	},
	{
		.roomId = 0x11,
		.personId = PERSON_ANIM_LARRY_BUTZ,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x4A, 0x53, 0x54, 0xFF },
		.talkFlagId = { 0x8F, 0x90, 0x92, 0xFF },
		.talkSection = { 0xB8, 0xB9, 0xBA, 0x0 }
	},
	{
		.roomId = 0x11,
		.personId = PERSON_ANIM_LARRY_BUTZ,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x4A, 0x53, 0x50, 0x54 },
		.talkFlagId = { 0x8F, 0x90, 0x91, 0x92 },
		.talkSection = { 0xB8, 0xB9, 0xBC, 0xBA }
	},
	{
		.roomId = 0x12,
		.personId = PERSON_ANIM_LOTTA_HART,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x4A, 0x55, 0xFF, 0xFF },
		.talkFlagId = { 0x93, 0x94, 0xFF, 0xFF },
		.talkSection = { 0xC8, 0xC8, 0x0, 0x0 }
	},
	{
		.roomId = 0x12,
		.personId = PERSON_ANIM_LOTTA_HART,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x4A, 0x56, 0xFF, 0xFF },
		.talkFlagId = { 0x95, 0x97, 0xFF, 0xFF },
		.talkSection = { 0xC9, 0xCC, 0x0, 0x0 }
	},
	{
		.roomId = 0x12,
		.personId = PERSON_ANIM_LOTTA_HART,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x4A, 0x56, 0x57, 0xFF },
		.talkFlagId = { 0x95, 0x97, 0x96, 0xFF },
		.talkSection = { 0xC9, 0xCC, 0xCA, 0x0 }
	},
	{
		.roomId = 0xE,
		.personId = PERSON_ANIM_GUMSHOE,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x58, 0x59, 0xFF, 0xFF },
		.talkFlagId = { 0x98, 0x99, 0xFF, 0xFF },
		.talkSection = { 0xD7, 0xD8, 0x0, 0x0 }
	},
	{
		.roomId = 0xE,
		.personId = PERSON_ANIM_GUMSHOE,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x58, 0x59, 0x5A, 0xFF },
		.talkFlagId = { 0x98, 0x99, 0x9A, 0xFF },
		.talkSection = { 0xD7, 0xD8, 0xD9, 0x0 }
	},
	{
		.roomId = 0xE,
		.personId = PERSON_ANIM_GUMSHOE,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x58, 0x59, 0x5A, 0x5B },
		.talkFlagId = { 0x98, 0x99, 0x9A, 0x9B },
		.talkSection = { 0xD7, 0xD8, 0xD9, 0xDA }
	},
	{
		.roomId = 0xE,
		.personId = PERSON_ANIM_GUMSHOE,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x5C, 0x5D, 0x50, 0xFF },
		.talkFlagId = { 0xA0, 0xA1, 0xA2, 0xFF },
		.talkSection = { 0xE0, 0xE1, 0xE2, 0x0 }
	},
	{
		.roomId = 0x3,
		.personId = PERSON_ANIM_MARVIN_GROSSBERG,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x4A, 0x5E, 0xFF, 0xFF },
		.talkFlagId = { 0x9C, 0x9D, 0xFF, 0xFF },
		.talkSection = { 0xEC, 0xED, 0x0, 0x0 }
	},
	{
		.roomId = 0x3,
		.personId = PERSON_ANIM_MARVIN_GROSSBERG,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x4A, 0x5E, 0x5F, 0xFF },
		.talkFlagId = { 0x9C, 0x9D, 0x9E, 0xFF },
		.talkSection = { 0xEC, 0xED, 0xEE, 0x0 }
	},
	{
		.roomId = 0x3,
		.personId = PERSON_ANIM_MARVIN_GROSSBERG,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x4A, 0x5E, 0x5F, 0x4D },
		.talkFlagId = { 0x9C, 0x9D, 0x9E, 0x9F },
		.talkSection = { 0xEC, 0xED, 0xEE, 0xEF }
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
const u8 gRoomData_3_0[21][8] = {
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x1E, 0xFF, 0xFF, 0xFF, 0x06, 0x10, 0xFF, 0xFF},
	{ 0x28, 0xFF, 0xFF, 0xFF, 0x06, 0x02, 0xFF, 0xFF},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x01, 0xFF, 0xFF, 0xFF, 0x02, 0x10, 0xFF, 0xFF},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x4F, 0xFF, 0xFF, 0xFF, 0x06, 0x02, 0x10, 0xFF},
	{ 0x50, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},
	{ 0x46, 0xFF, 0xFF, 0xFF, 0x06, 0x02, 0xFF, 0xFF},
	{ 0x48, 0xFF, 0xFF, 0xFF, 0x10, 0x12, 0x13, 0xFF},
	{ 0x49, 0xFF, 0xFF, 0xFF, 0x11, 0xFF, 0xFF, 0xFF},
	{ 0x4D, 0xFF, 0xFF, 0xFF, 0x11, 0xFF, 0xFF, 0xFF},
	{ 0x4E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},
};

// exam data
const struct ExaminationData gExaminationData_3_0_00[5] = {
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

const struct ExaminationData gExaminationData_3_0_01[2] = {
	{
		.examinationSection = 0x92,
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
		.examinationSection = 0x93,
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

const struct ExaminationData gExaminationData_3_0_02[4] = {
	{
		.examinationSection = 0xF6,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 147, .y = 101 },
			[1] = { .x = 192, .y = 101 },
			[2] = { .x = 192, .y = 112 },
			[3] = { .x = 147, .y = 112 },
		}}
	},
	{
		.examinationSection = 0x18,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 144, .y = 101 },
			[1] = { .x = 240, .y = 101 },
			[2] = { .x = 240, .y = 160 },
			[3] = { .x = 144, .y = 160 },
		}}
	},
	{
		.examinationSection = 0xF7,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 92, .y = 96 },
			[1] = { .x = 195, .y = 0 },
			[2] = { .x = 240, .y = 0 },
			[3] = { .x = 240, .y = 160 },
		}}
	},
	{
		.examinationSection = 0xF7,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 0 },
			[1] = { .x = 64, .y = 48 },
			[2] = { .x = 63, .y = 101 },
			[3] = { .x = 0, .y = 89 },
		}}
	},
};

const struct ExaminationData gExaminationData_3_0_03[7] = {
	{
		.examinationSection = 0xF8,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 97, .y = 109 },
			[1] = { .x = 105, .y = 109 },
			[2] = { .x = 102, .y = 160 },
			[3] = { .x = 91, .y = 160 },
		}}
	},
	{
		.examinationSection = 0xF8,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 128, .y = 109 },
			[1] = { .x = 136, .y = 109 },
			[2] = { .x = 167, .y = 160 },
			[3] = { .x = 152, .y = 160 },
		}}
	},
	{
		.examinationSection = 0xFB,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 102 },
			[1] = { .x = 21, .y = 102 },
			[2] = { .x = 21, .y = 124 },
			[3] = { .x = 0, .y = 124 },
		}}
	},
	{
		.examinationSection = 0xF9,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 31, .y = 90 },
			[1] = { .x = 53, .y = 90 },
			[2] = { .x = 43, .y = 104 },
			[3] = { .x = 34, .y = 104 },
		}}
	},
	{
		.examinationSection = 0xFD,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 80 },
			[1] = { .x = 198, .y = 80 },
			[2] = { .x = 198, .y = 85 },
			[3] = { .x = 0, .y = 87 },
		}}
	},
	{
		.examinationSection = 0xFA,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 169, .y = 42 },
			[1] = { .x = 240, .y = 29 },
			[2] = { .x = 240, .y = 134 },
			[3] = { .x = 181, .y = 112 },
		}}
	},
	{
		.examinationSection = 0xB4,
		.type = 0xFE,
		.animId = 0x10,
		.area = { .points = {
			[0] = { .x = 0, .y = 0 },
			[1] = { .x = 0, .y = 0 },
			[2] = { .x = 0, .y = 0 },
			[3] = { .x = 0, .y = 0 },
		}}
	},
};

const struct ExaminationData gExaminationData_3_0_04[6] = {
	{
		.examinationSection = 0xFC,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 97, .y = 109 },
			[1] = { .x = 105, .y = 109 },
			[2] = { .x = 102, .y = 160 },
			[3] = { .x = 91, .y = 160 },
		}}
	},
	{
		.examinationSection = 0xFC,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 128, .y = 109 },
			[1] = { .x = 136, .y = 109 },
			[2] = { .x = 167, .y = 160 },
			[3] = { .x = 152, .y = 160 },
		}}
	},
	{
		.examinationSection = 0xFB,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 102 },
			[1] = { .x = 21, .y = 102 },
			[2] = { .x = 21, .y = 124 },
			[3] = { .x = 0, .y = 124 },
		}}
	},
	{
		.examinationSection = 0xF9,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 31, .y = 90 },
			[1] = { .x = 53, .y = 90 },
			[2] = { .x = 43, .y = 104 },
			[3] = { .x = 34, .y = 104 },
		}}
	},
	{
		.examinationSection = 0xFD,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 80 },
			[1] = { .x = 198, .y = 80 },
			[2] = { .x = 198, .y = 85 },
			[3] = { .x = 0, .y = 87 },
		}}
	},
	{
		.examinationSection = 0xFE,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 169, .y = 42 },
			[1] = { .x = 240, .y = 29 },
			[2] = { .x = 240, .y = 134 },
			[3] = { .x = 181, .y = 112 },
		}}
	},
};

const struct ExaminationData gExaminationData_3_0_05[7] = {
	{
		.examinationSection = 0xC5,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 140, .y = 79 },
			[1] = { .x = 178, .y = 79 },
			[2] = { .x = 196, .y = 132 },
			[3] = { .x = 136, .y = 132 },
		}}
	},
	{
		.examinationSection = 0xC5,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 134, .y = 47 },
			[1] = { .x = 179, .y = 72 },
			[2] = { .x = 179, .y = 73 },
			[3] = { .x = 134, .y = 48 },
		}}
	},
	{
		.examinationSection = 0x100,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 291, .y = 76 },
			[1] = { .x = 307, .y = 76 },
			[2] = { .x = 307, .y = 86 },
			[3] = { .x = 291, .y = 86 },
		}}
	},
	{
		.examinationSection = 0x101,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 348, .y = 72 },
			[1] = { .x = 426, .y = 65 },
			[2] = { .x = 426, .y = 95 },
			[3] = { .x = 338, .y = 95 },
		}}
	},
	{
		.examinationSection = 0x102,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 260, .y = 126 },
			[1] = { .x = 354, .y = 126 },
			[2] = { .x = 368, .y = 144 },
			[3] = { .x = 251, .y = 144 },
		}}
	},
	{
		.examinationSection = 0x103,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 397, .y = 116 },
			[1] = { .x = 435, .y = 124 },
			[2] = { .x = 435, .y = 133 },
			[3] = { .x = 394, .y = 126 },
		}}
	},
	{
		.examinationSection = 0x104,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 225, .y = 37 },
			[1] = { .x = 459, .y = 0 },
			[2] = { .x = 452, .y = 95 },
			[3] = { .x = 225, .y = 88 },
		}}
	},
};

const struct ExaminationData gExaminationData_3_0_06[3] = {
	{
		.examinationSection = 0x105,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 52, .y = 47 },
			[1] = { .x = 175, .y = 61 },
			[2] = { .x = 175, .y = 115 },
			[3] = { .x = 43, .y = 116 },
		}}
	},
	{
		.examinationSection = 0x106,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 0 },
			[1] = { .x = 36, .y = 0 },
			[2] = { .x = 36, .y = 108 },
			[3] = { .x = 0, .y = 114 },
		}}
	},
	{
		.examinationSection = 0x107,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 193, .y = 116 },
			[1] = { .x = 240, .y = 116 },
			[2] = { .x = 240, .y = 126 },
			[3] = { .x = 177, .y = 126 },
		}}
	},
};

const struct ExaminationData gExaminationData_3_0_07[6] = {
	{
		.examinationSection = 0x108,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 160, .y = 45 },
			[1] = { .x = 172, .y = 45 },
			[2] = { .x = 172, .y = 49 },
			[3] = { .x = 160, .y = 49 },
		}}
	},
	{
		.examinationSection = 0x109,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 56 },
			[1] = { .x = 18, .y = 56 },
			[2] = { .x = 18, .y = 95 },
			[3] = { .x = 0, .y = 95 },
		}}
	},
	{
		.examinationSection = 0x10A,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 108, .y = 48 },
			[1] = { .x = 141, .y = 48 },
			[2] = { .x = 141, .y = 58 },
			[3] = { .x = 108, .y = 58 },
		}}
	},
	{
		.examinationSection = 0x10B,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 113 },
			[1] = { .x = 66, .y = 75 },
			[2] = { .x = 100, .y = 75 },
			[3] = { .x = 0, .y = 240 },
		}}
	},
	{
		.examinationSection = 0x10B,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 155, .y = 80 },
			[1] = { .x = 240, .y = 80 },
			[2] = { .x = 240, .y = 160 },
			[3] = { .x = 204, .y = 160 },
		}}
	},
	{
		.examinationSection = 0x10C,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 112, .y = 26 },
			[1] = { .x = 136, .y = 26 },
			[2] = { .x = 136, .y = 32 },
			[3] = { .x = 112, .y = 32 },
		}}
	},
};

const struct ExaminationData gExaminationData_3_0_08[5] = {
	{
		.examinationSection = 0xE8,
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
		.examinationSection = 0xE9,
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
		.examinationSection = 0xE6,
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
		.examinationSection = 0xE7,
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
		.examinationSection = 0xEA,
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

void InvestigationSegmentSetup_3_0(struct Main *main)
{
    DmaCopy16(3, gRoomData_3_0, gMain.roomData, sizeof(gRoomData_3_0));
    DmaCopy16(3, gTalkData_3_0, gTalkData, sizeof(gTalkData_3_0));
    main->currentRoomId = 6;
}

void InvestigationRoomSetup_3_0(struct Main *main)
{
    DmaFill16(3, 0xFFFF, gExaminationData, sizeof(gExaminationData));
    switch(main->currentRoomId) {
        case 6: {
            if(GetFlag(0, 0xA2)) {
                if(!GetFlag(0, 0xA7)) {
                    InvestigationSetScriptSectionAndFlag(0x8B, 0xA7);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_MAYA, ANIM_MAYA_NORMAL_IDLE, ANIM_MAYA_NORMAL_IDLE);
                    PlayBGM(BGM006_MAYAS_THEME);
                }
            }
            else if(GetFlag(0, 0x9F)) {
                InvestigationSetPersonAnimation(PERSON_ANIM_MAYA, ANIM_MAYA_NORMAL_IDLE, ANIM_MAYA_NORMAL_IDLE);
                PlayBGM(BGM006_MAYAS_THEME);
            }
            LOADEXAMDATA(gExaminationData_3_0_00);
            break;
        }
        case 2: {
            if(GetFlag(0, 0xB1)) {
                if(!GetFlag(0, 0xB2)) {
                    InvestigationSetScriptSectionAndFlag(0x99, 0xB2);
                }
                else {
                    if(!GetFlag(0, 0xB9)) {
                        InvestigationSetPersonAnimation(PERSON_ANIM_EDGEWORTH, ANIM_EDGEWORTH_NORMAL_IDLE_CROPPED, ANIM_EDGEWORTH_NORMAL_IDLE_CROPPED);
                    }
                    PlayBGM(BGM000_DETENTION_CENTER);
                }
            }
            else if(!GetFlag(0, 0x90)) {
                InvestigationSetScriptSectionAndFlag(0x91, 0x90);
            }
            else {
                if(!GetFlag(2, 0x85)) {
                    InvestigationSetPersonAnimation(PERSON_ANIM_EDGEWORTH, ANIM_EDGEWORTH_NORMAL_IDLE_CROPPED, ANIM_EDGEWORTH_NORMAL_IDLE_CROPPED);
                }
                PlayBGM(BGM000_DETENTION_CENTER);
            }
            LOADEXAMDATA(gExaminationData_3_0_01);
            break;
        }
        case 16: {
            if(!GetFlag(0, 0x94)) {
                InvestigationSetScriptSectionAndFlag(0xA7, 0x94);
            }
            else if(!GetFlag(0, 0x98)) {
                InvestigationSetPersonAnimation(PERSON_ANIM_GUMSHOE, ANIM_GUMSHOE_NORMAL_IDLE, ANIM_GUMSHOE_NORMAL_IDLE);
                if(GetFlag(2, 0x8B) && GetFlag(2, 0x8C) && GetFlag(2, 0x8D) && GetFlag(2, 0x8E) && GetFlag(0, 0x91)) {
                    InvestigationSetScriptSectionAndFlag(0xA8, 0x98);
                }
                PlayBGM(BGM001_GUMSHOES_THEME);
            }
            else {
                PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
            }
            LOADEXAMDATA(gExaminationData_3_0_02);
            break;
        }
        case 17: {
            if(GetFlag(0, 0xA8)) {
                if(!GetFlag(0, 0xA9)) {
                    InvestigationSetScriptSectionAndFlag(0xB7, 0xA9);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_LARRY_BUTZ, ANIM_COSTUME_BUTZ_HAPPY_IDLE, ANIM_COSTUME_BUTZ_HAPPY_IDLE);
                    PlayBGM(BGM022_HAPPY_PEOPLE);
                }
                LOADEXAMDATA(gExaminationData_3_0_04);
            }
            else {
                if(!GetFlag(0, 0x99)) {
                    InvestigationSetScriptSectionAndFlag(0xB3, 0x99);
                }
                else {
                    PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
                }
                if(!GetFlag(0, 0xA0)) {
                    PlayAnimation(ANIM_PARTY_POPPERS);
                }
                LOADEXAMDATA(gExaminationData_3_0_03);
            }
            break;
        }
        case 18: {
            if(GetFlag(0, 0xA2)) {
                if(!GetFlag(0, 0xA8)) {
                    InvestigationSetScriptSectionAndFlag(0xD1, 0xA8);
                }
                else {
                    PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
                }
            }
            else if(!GetFlag(0, 0x9A)) {
                InvestigationSetScriptSectionAndFlag(0xC3, 0x9A);
            }
            else if(GetFlag(0, 0xA1) && !GetFlag(0, 0x9E)) {
                if(GetFlag(0, 0x9C)) {
                    InvestigationSetPersonAnimation(PERSON_ANIM_LOTTA_HART, ANIM_HART_NORMAL_IDLE, ANIM_HART_NORMAL_IDLE);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_LOTTA_HART, ANIM_HART_ANGRY_IDLE, ANIM_HART_ANGRY_IDLE);
                }
                PlayBGM(BGM022_HAPPY_PEOPLE);
            }
            else {
                PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
            }
            LOADEXAMDATA(gExaminationData_3_0_05);
            break;
        }
        case 19: {
            if(!GetFlag(0, 0xA4)) {
                InvestigationSetScriptSectionAndFlag(0xC2, 0xA4);
            }
            else {
                PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
            }
            LOADEXAMDATA(gExaminationData_3_0_06);
            break;
        }
        case 14: {
            if(GetFlag(0, 0xB1)) {
                if(!GetFlag(0, 0xB7)) {
                    InvestigationSetScriptSectionAndFlag(0xDF, 0xB7);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_GUMSHOE, ANIM_GUMSHOE_NORMAL_IDLE, ANIM_GUMSHOE_NORMAL_IDLE);
                    PlayBGM(BGM001_GUMSHOES_THEME);
                }
            }
            else if(GetFlag(0, 0xA8)) {
                if(!GetFlag(0, 0xAE)) {
                    InvestigationSetScriptSectionAndFlag(0xDE, 0xAE);
                }
                else {
                    PlayBGM(BGM001_GUMSHOES_THEME);
                }
            }
            else if(GetFlag(0, 0x9E)) {
                if(!GetFlag(0, 0xA6)) {
                    InvestigationSetScriptSectionAndFlag(0xD6, 0xA6);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_GUMSHOE, ANIM_GUMSHOE_NORMAL_IDLE, ANIM_GUMSHOE_NORMAL_IDLE);
                    PlayBGM(BGM001_GUMSHOES_THEME);
                }
            }
            else if(!GetFlag(0, 0xA5)) {
                InvestigationSetScriptSectionAndFlag(0xD5, 0xA5);
            }
            else {
                PlayBGM(BGM001_GUMSHOES_THEME);
            }
            LOADEXAMDATA(gExaminationData_3_0_07);
            break;
        }
        case 3: {
            if(GetFlag(2, 0x91) && GetFlag(0, 0xAD)) {
                if(!GetFlag(0, 0xAF)) {
                    InvestigationSetScriptSectionAndFlag(0xEB, 0xAF);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_MARVIN_GROSSBERG, ANIM_GROSSBERG_NORMAL_IDLE, ANIM_GROSSBERG_NORMAL_IDLE);
                    PlayBGM(BGM026_GROSSBERGS_THEME);
                }
            }
            else if(!GetFlag(0, 0xAC)) {
                InvestigationSetScriptSectionAndFlag(0xE5, 0xAC);
            }
            LOADEXAMDATA(gExaminationData_3_0_08);
            break;
        }
    }
}

void InvestigationRoomUpdate_3_0(struct Main *main) {
}
