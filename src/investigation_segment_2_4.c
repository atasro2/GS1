#include "global.h"
#include "main.h"
#include "case_data.h"
#include "investigation.h"
#include "sound.h"
#include "animation.h"
#include "constants/persons.h"
#include "constants/songs.h"
#include "constants/animation_offsets.h"

const struct InvestigationPresentData gInvestigationPresentData_2_4[22] = {
	{
		.roomId = 0x6,
		.evidenceId = 0x40,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x89,
		.uninterestedSection = 0x8D,
	},
	{
		.roomId = 0x6,
		.evidenceId = 0x41,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x8A,
		.uninterestedSection = 0x8D,
	},
	{
		.roomId = 0x6,
		.evidenceId = 0x34,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x8B,
		.uninterestedSection = 0x8D,
	},
	{
		.roomId = 0x6,
		.evidenceId = 0x35,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x8B,
		.uninterestedSection = 0x8D,
	},
	{
		.roomId = 0x6,
		.evidenceId = 0x37,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x8C,
		.uninterestedSection = 0x8D,
	},
	{
		.roomId = 0x6,
		.evidenceId = 0x38,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x8C,
		.uninterestedSection = 0x8D,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x40,
		.personId = PERSON_ANIM_WILL_POWERS,
		.end = 0x0,
		.interestedSection = 0x94,
		.uninterestedSection = 0x97,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x37,
		.personId = PERSON_ANIM_WILL_POWERS,
		.end = 0x0,
		.interestedSection = 0x95,
		.uninterestedSection = 0x97,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x38,
		.personId = PERSON_ANIM_WILL_POWERS,
		.end = 0x0,
		.interestedSection = 0x95,
		.uninterestedSection = 0x97,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x34,
		.personId = PERSON_ANIM_WILL_POWERS,
		.end = 0x0,
		.interestedSection = 0x96,
		.uninterestedSection = 0x97,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x35,
		.personId = PERSON_ANIM_WILL_POWERS,
		.end = 0x0,
		.interestedSection = 0x96,
		.uninterestedSection = 0x97,
	},
	{
		.roomId = 0x7,
		.evidenceId = 0x34,
		.personId = PERSON_ANIM_WENDY_OLDBAG,
		.end = 0x0,
		.interestedSection = 0xA1,
		.uninterestedSection = 0xA2,
	},
	{
		.roomId = 0x7,
		.evidenceId = 0x35,
		.personId = PERSON_ANIM_WENDY_OLDBAG,
		.end = 0x0,
		.interestedSection = 0xA1,
		.uninterestedSection = 0xA2,
	},
	{
		.roomId = 0x7,
		.evidenceId = 0x44,
		.personId = PERSON_ANIM_WENDY_OLDBAG,
		.end = 0x0,
		.interestedSection = 0xB2,
		.uninterestedSection = 0xB3,
	},
	{
		.roomId = 0x8,
		.evidenceId = 0x43,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xC4,
		.uninterestedSection = 0xC5,
	},
	{
		.roomId = 0x8,
		.evidenceId = 0x42,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xC3,
		.uninterestedSection = 0xC5,
	},
	{
		.roomId = 0x9,
		.evidenceId = 0x34,
		.personId = PERSON_ANIM_PENNY_NICHOLS,
		.end = 0x0,
		.interestedSection = 0xDB,
		.uninterestedSection = 0xDE,
	},
	{
		.roomId = 0x9,
		.evidenceId = 0x35,
		.personId = PERSON_ANIM_PENNY_NICHOLS,
		.end = 0x0,
		.interestedSection = 0xDB,
		.uninterestedSection = 0xDE,
	},
	{
		.roomId = 0x9,
		.evidenceId = 0x43,
		.personId = PERSON_ANIM_PENNY_NICHOLS,
		.end = 0x0,
		.interestedSection = 0xDC,
		.uninterestedSection = 0xDE,
	},
	{
		.roomId = 0x9,
		.evidenceId = 0x40,
		.personId = PERSON_ANIM_PENNY_NICHOLS,
		.end = 0x0,
		.interestedSection = 0xDD,
		.uninterestedSection = 0xDE,
	},
	{
		.roomId = 0xC,
		.evidenceId = 0x44,
		.personId = PERSON_ANIM_DEE_VASQUEZ,
		.end = 0x0,
		.interestedSection = 0xF5,
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
const struct TalkData gTalkData_2_4[13] = {
	{
		.roomId = 0x6,
		.personId = PERSON_ANIM_MAYA,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x24, 0x3D, 0x21, 0xFF },
		.talkFlagId = { 0x6A, 0x6B, 0x6C, 0xFF },
		.talkSection = { 0x86, 0x87, 0x88, 0x0 }
	},
	{
		.roomId = 0x2,
		.personId = PERSON_ANIM_WILL_POWERS,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x3E, 0x3F, 0x3C, 0xFF },
		.talkFlagId = { 0x6D, 0x6E, 0x6F, 0xFF },
		.talkSection = { 0x91, 0x92, 0x93, 0x0 }
	},
	{
		.roomId = 0x7,
		.personId = PERSON_ANIM_WENDY_OLDBAG,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x3E, 0x3F, 0x3C, 0xFF },
		.talkFlagId = { 0x70, 0x71, 0x72, 0xFF },
		.talkSection = { 0x9E, 0x9F, 0xA0, 0x0 }
	},
	{
		.roomId = 0x7,
		.personId = PERSON_ANIM_WENDY_OLDBAG,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x3E, 0x3F, 0x3C, 0x40 },
		.talkFlagId = { 0x70, 0x71, 0x72, 0x7E },
		.talkSection = { 0x9E, 0x9F, 0xA0, 0xA4 }
	},
	{
		.roomId = 0x8,
		.personId = PERSON_ANIM_GUMSHOE,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x41, 0x42, 0x43, 0xFF },
		.talkFlagId = { 0x73, 0x74, 0x75, 0xFF },
		.talkSection = { 0xBF, 0xC0, 0xC1, 0x0 }
	},
	{
		.roomId = 0x8,
		.personId = PERSON_ANIM_GUMSHOE,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x42, 0x43, 0xFF, 0xFF },
		.talkFlagId = { 0x74, 0x75, 0xFF, 0xFF },
		.talkSection = { 0xC0, 0xC1, 0x0, 0x0 }
	},
	{
		.roomId = 0x9,
		.personId = PERSON_ANIM_PENNY_NICHOLS,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x3C, 0x44, 0xFF, 0xFF },
		.talkFlagId = { 0x76, 0x78, 0xFF, 0xFF },
		.talkSection = { 0xD2, 0xD5, 0x0, 0x0 }
	},
	{
		.roomId = 0x9,
		.personId = PERSON_ANIM_PENNY_NICHOLS,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x3C, 0x44, 0x45, 0xFF },
		.talkFlagId = { 0x76, 0x78, 0x79, 0xFF },
		.talkSection = { 0xD2, 0xD5, 0xD6, 0x0 }
	},
	{
		.roomId = 0x9,
		.personId = PERSON_ANIM_PENNY_NICHOLS,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x3C, 0x44, 0x40, 0xFF },
		.talkFlagId = { 0x76, 0x78, 0x7A, 0xFF },
		.talkSection = { 0xD2, 0xD5, 0xD3, 0x0 }
	},
	{
		.roomId = 0x9,
		.personId = PERSON_ANIM_PENNY_NICHOLS,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x3C, 0x44, 0x45, 0x40 },
		.talkFlagId = { 0x76, 0x78, 0x79, 0x7A },
		.talkSection = { 0xD2, 0xD5, 0xD6, 0xD3 }
	},
	{
		.roomId = 0x9,
		.personId = PERSON_ANIM_PENNY_NICHOLS,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x3C, 0x44, 0x45, 0x40 },
		.talkFlagId = { 0x76, 0x78, 0x79, 0x77 },
		.talkSection = { 0xD2, 0xD5, 0xD6, 0xD4 }
	},
	{
		.roomId = 0xC,
		.personId = PERSON_ANIM_DEE_VASQUEZ,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x3C, 0x29, 0x3F, 0xFF },
		.talkFlagId = { 0x7B, 0x7C, 0x7D, 0xFF },
		.talkSection = { 0xF2, 0xF3, 0xF4, 0x0 }
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
const u8 gRoomData_2_4[14][8] = {
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x1E, 0xFF, 0xFF, 0xFF, 0x06, 0x07, 0xFF, 0xFF},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x01, 0xFF, 0xFF, 0xFF, 0x02, 0x07, 0xFF, 0xFF},
	{ 0x19, 0xFF, 0xFF, 0xFF, 0x06, 0x02, 0x0A, 0x08},
	{ 0x0C, 0xFF, 0xFF, 0xFF, 0x07, 0x09, 0xFF, 0xFF},
	{ 0x18, 0xFF, 0xFF, 0xFF, 0x08, 0xFF, 0xFF, 0xFF},
	{ 0x0B, 0xFF, 0xFF, 0xFF, 0x07, 0x0C, 0xFF, 0xFF},
	{ 0x1A, 0xFF, 0xFF, 0xFF, 0x0A, 0xFF, 0xFF, 0xFF},
	{ 0x2C, 0xFF, 0xFF, 0xFF, 0x0A, 0x0D, 0xFF, 0xFF},
	{ 0x13, 0xFF, 0xFF, 0xFF, 0x0C, 0xFF, 0xFF, 0xFF},
};

// exam data
const struct ExaminationData gExaminationData_2_4_00[5] = {
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

const struct ExaminationData gExaminationData_2_4_01[2] = {
	{
		.examinationSection = 0x90,
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
		.examinationSection = 0x8F,
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

const struct ExaminationData gExaminationData_2_4_02[5] = {
	{
		.examinationSection = 0x9A,
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
		.examinationSection = 0x99,
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
		.examinationSection = 0x9D,
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
		.examinationSection = 0x9B,
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
		.examinationSection = 0x9C,
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

const struct ExaminationData gExaminationData_2_4_03[10] = {
	{
		.examinationSection = 0xB5,
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
		.examinationSection = 0xB7,
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
		.examinationSection = 0xB6,
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
		.examinationSection = 0xB8,
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
		.examinationSection = 0xB9,
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
		.examinationSection = 0xBA,
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
		.examinationSection = 0xBB,
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
		.examinationSection = 0xBC,
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
		.examinationSection = 0xBD,
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
		.examinationSection = 0xBE,
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

const struct ExaminationData gExaminationData_2_4_04[7] = {
	{
		.examinationSection = 0xC8,
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
		.examinationSection = 0xCD,
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
		.examinationSection = 0xCB,
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
		.examinationSection = 0xCC,
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
		.examinationSection = 0xC9,
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

const struct ExaminationData gExaminationData_2_4_05[7] = {
	{
		.examinationSection = 0xCE,
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
		.examinationSection = 0xCD,
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
		.examinationSection = 0xCB,
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
		.examinationSection = 0xCC,
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

const struct ExaminationData gExaminationData_2_4_06[6] = {
	{
		.examinationSection = 0xE4,
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
		.examinationSection = 0xE6,
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
		.examinationSection = 0xE1,
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
		.examinationSection = 0xE5,
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
		.examinationSection = 0xE2,
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
		.examinationSection = 0xE3,
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

const struct ExaminationData gExaminationData_2_4_07[9] = {
	{
		.examinationSection = 0xE8,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 16, .y = 53 },
			[1] = { .x = 107, .y = 60 },
			[2] = { .x = 112, .y = 103 },
			[3] = { .x = 2, .y = 110 },
		}}
	},
	{
		.examinationSection = 0xE9,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 144, .y = 132 },
			[1] = { .x = 240, .y = 132 },
			[2] = { .x = 240, .y = 144 },
			[3] = { .x = 144, .y = 160 },
		}}
	},
	{
		.examinationSection = 0xEA,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 166, .y = 47 },
			[1] = { .x = 175, .y = 47 },
			[2] = { .x = 175, .y = 48 },
			[3] = { .x = 166, .y = 48 },
		}}
	},
	{
		.examinationSection = 0xEB,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 257, .y = 47 },
			[1] = { .x = 264, .y = 47 },
			[2] = { .x = 264, .y = 48 },
			[3] = { .x = 257, .y = 48 },
		}}
	},
	{
		.examinationSection = 0xEC,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 132, .y = 94 },
			[1] = { .x = 138, .y = 60 },
			[2] = { .x = 154, .y = 60 },
			[3] = { .x = 149, .y = 94 },
		}}
	},
	{
		.examinationSection = 0xEF,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 412, .y = 126 },
			[1] = { .x = 496, .y = 126 },
			[2] = { .x = 496, .y = 160 },
			[3] = { .x = 412, .y = 144 },
		}}
	},
	{
		.examinationSection = 0xF0,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 444, .y = 19 },
			[1] = { .x = 468, .y = 16 },
			[2] = { .x = 468, .y = 87 },
			[3] = { .x = 444, .y = 87 },
		}}
	},
	{
		.examinationSection = 0xEE,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 349, .y = 26 },
			[1] = { .x = 496, .y = 0 },
			[2] = { .x = 496, .y = 144 },
			[3] = { .x = 330, .y = 107 },
		}}
	},
	{
		.examinationSection = 0xED,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 281, .y = 85 },
			[1] = { .x = 325, .y = 80 },
			[2] = { .x = 325, .y = 105 },
			[3] = { .x = 281, .y = 90 },
		}}
	},
};

const struct ExaminationData gExaminationData_2_4_08[7] = {
	{
		.examinationSection = 0xFC,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 80, .y = 100 },
			[1] = { .x = 197, .y = 100 },
			[2] = { .x = 205, .y = 136 },
			[3] = { .x = 71, .y = 136 },
		}}
	},
	{
		.examinationSection = 0xFE,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 48, .y = 51 },
			[1] = { .x = 119, .y = 51 },
			[2] = { .x = 119, .y = 90 },
			[3] = { .x = 48, .y = 90 },
		}}
	},
	{
		.examinationSection = 0xF8,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 128, .y = 41 },
			[1] = { .x = 157, .y = 41 },
			[2] = { .x = 157, .y = 73 },
			[3] = { .x = 128, .y = 73 },
		}}
	},
	{
		.examinationSection = 0xF9,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 170, .y = 41 },
			[1] = { .x = 193, .y = 41 },
			[2] = { .x = 193, .y = 73 },
			[3] = { .x = 170, .y = 73 },
		}}
	},
	{
		.examinationSection = 0xFA,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 207, .y = 41 },
			[1] = { .x = 232, .y = 41 },
			[2] = { .x = 232, .y = 73 },
			[3] = { .x = 207, .y = 73 },
		}}
	},
	{
		.examinationSection = 0xFB,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 225, .y = 109 },
			[1] = { .x = 240, .y = 109 },
			[2] = { .x = 240, .y = 121 },
			[3] = { .x = 240, .y = 121 },
		}}
	},
	{
		.examinationSection = 0xFD,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 38 },
			[1] = { .x = 31, .y = 47 },
			[2] = { .x = 31, .y = 82 },
			[3] = { .x = 0, .y = 82 },
		}}
	},
};

void InvestigationSegmentSetup_2_4(struct Main *main)
{
    DmaCopy16(3, gRoomData_2_4, gMain.roomData, sizeof(gRoomData_2_4));
    DmaCopy16(3, gTalkData_2_4, gTalkData, sizeof(gTalkData_2_4));
    main->currentRoomId = 6;
}

void InvestigationRoomSetup_2_4(struct Main *main)
{
    DmaFill16(3, 0xFFFF, gExaminationData, sizeof(gExaminationData));
    switch(main->currentRoomId) {
        case 6: {
            if(GetFlag(0, 0xE0)) {
                InvestigationSetPersonAnimation(PERSON_ANIM_MAYA, ANIM_MAYA_NORMAL_IDLE, ANIM_MAYA_NORMAL_IDLE);
                PlayBGM(BGM006_MAYAS_THEME);
            }
            LOADEXAMDATA(gExaminationData_2_4_00);
            break;
        }
        case 2: {
            if(!GetFlag(0, 0xE1)) {
                InvestigationSetScriptSectionAndFlag(0x8E, 0xE1);
            }
            else {
                InvestigationSetPersonAnimation(PERSON_ANIM_WILL_POWERS, ANIM_POWERS_NORMAL_IDLE_CROPPED, ANIM_POWERS_NORMAL_IDLE_CROPPED);
                PlayBGM(BGM000_DETENTION_CENTER);
            }
            LOADEXAMDATA(gExaminationData_2_4_01);
            break;
        }
        case 7: {
            if(GetFlag(2, 0x77)) {
                if(!GetFlag(0, 0xEE)) {
                    InvestigationSetScriptSectionAndFlag(0xA3, 0xEE);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_WENDY_OLDBAG, ANIM_OLDBAG_NORMAL_IDLE, ANIM_OLDBAG_NORMAL_IDLE);
                    PlayBGM(BGM012_INVESTIGATION_CORE);
                }
            }
            else if(!GetFlag(0, 0xE2)) {
                InvestigationSetScriptSectionAndFlag(0x98, 0xE2);
            }
            else {
                InvestigationSetPersonAnimation(PERSON_ANIM_WENDY_OLDBAG, ANIM_OLDBAG_NORMAL_IDLE, ANIM_OLDBAG_NORMAL_IDLE);
                PlayBGM(BGM025_INVESTIGATION_OPENING);
            }
            LOADEXAMDATA(gExaminationData_2_4_02);
            break;
        }
        case 8: {
            if(GetFlag(0, 0xEF)) {
                if(!GetFlag(0, 0xF0)) {
                    InvestigationSetScriptSectionAndFlag(0xC6, 0xF0);
                }
            }
            else if(!GetFlag(0, 0xE3)) {
                InvestigationSetScriptSectionAndFlag(0xB4, 0xE3);
            }
            else {
                if(GetFlag(0, 0xE4)) {
					//! InvestigationSetPersonAnimation was not used here
                    gMain.talkingAnimationOffset = 0;
                    gMain.idleAnimationOffset = 0;
                    PlayPersonAnimation(PERSON_ANIM_GUMSHOE | 0x8000, 0, ANIM_GUMSHOE_NORMAL_IDLE, 0);
                    gInvestigation.personActive = 1;
                    SetInactiveActionButtons(&gInvestigation, 0xF);
                }
                PlayBGM(BGM001_GUMSHOES_THEME);
            }
            LOADEXAMDATA(gExaminationData_2_4_03);
            break;
        }
        case 9: {
            if(GetFlag(0, 0xEF)) {
                if(!GetFlag(0, 0xF1)) {
                    InvestigationSetScriptSectionAndFlag(0xDF, 0xF1);
                }
                LOADEXAMDATA(gExaminationData_2_4_04);
            }
            else if(GetFlag(0, 0xE9)) {
                if(!GetFlag(0, 0xEA)) {
                    InvestigationSetScriptSectionAndFlag(0xCA, 0xEA);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_PENNY_NICHOLS, ANIM_NICHOLS_NORMAL_IDLE, ANIM_NICHOLS_NORMAL_IDLE);
                    PlayBGM(BGM025_INVESTIGATION_OPENING);
                }
                LOADEXAMDATA(gExaminationData_2_4_05);
            }
            else {
                if(!GetFlag(0, 0xE5)) {
                    InvestigationSetScriptSectionAndFlag(0xC7, 0xE5);
                }
                LOADEXAMDATA(gExaminationData_2_4_04);
            }
            break;
        }
        case 10: {
            if(!GetFlag(0, 0xE6)) {
                InvestigationSetScriptSectionAndFlag(0xE0, 0xE6);
            }
            else {
                PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
            }
            LOADEXAMDATA(gExaminationData_2_4_06);
            break;
        }
        case 12: {
            if(!GetFlag(0, 0xE7)) {
                InvestigationSetScriptSectionAndFlag(0xE7, 0xE7);
            }
            else {
                if(!GetFlag(0, 0xF2)) {
                    InvestigationSetPersonAnimation(PERSON_ANIM_DEE_VASQUEZ, ANIM_VASQUEZ_NORMAL_IDLE, ANIM_VASQUEZ_NORMAL_IDLE);
                }
                PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
            }
            LOADEXAMDATA(gExaminationData_2_4_07);
            break;
        }
        case 13: {
            if(GetFlag(0, 0xF2)) {
                InvestigationSetScriptSectionAndFlag(0xFF, 0xFF);
            }
            else if(!GetFlag(0, 0xE8)) {
                InvestigationSetScriptSectionAndFlag(0xF7, 0xE8);
            }
            #ifndef NONMATCHING // !! This DmaCopy uses the wrong sizeof from the previous DmaCopy
                                // !! due to a copy paste error over on capcom's side,
                                // !! we have to explicitly write the macro by hand
            DmaCopy16(3, (gExaminationData_2_4_08), gExaminationData, sizeof(gExaminationData_2_4_07));
            #else
            LOADEXAMDATA(gExaminationData_2_4_08);
            #endif
            break;
        }
    }
}

void InvestigationRoomUpdate_2_4(struct Main *main)
{
    if(main->currentRoomId == 2) {
        if(!GetFlag(0, 0xE9) && GetFlag(2, 0x6D) && GetFlag(2, 0x6E) && GetFlag(2, 0x6F)) {
            ChangeFlag(0, 0xE9, 1);
        }
    }
}
