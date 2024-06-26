#include "global.h"
#include "main.h"
#include "case_data.h"
#include "investigation.h"
#include "sound.h"
#include "animation.h"
#include "constants/persons.h"
#include "constants/songs.h"
#include "constants/animation_offsets.h"

const struct InvestigationPresentData gInvestigationPresentData_3_2[45] = {
	{
		.roomId = 0x6,
		.evidenceId = 0x17,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x89,
		.uninterestedSection = 0x89,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x17,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x8F,
		.uninterestedSection = 0x95,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x57,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x90,
		.uninterestedSection = 0x95,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x59,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x91,
		.uninterestedSection = 0x95,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x5A,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x92,
		.uninterestedSection = 0x95,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x5E,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x93,
		.uninterestedSection = 0x95,
	},
	{
		.roomId = 0x2,
		.evidenceId = 0x5F,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x94,
		.uninterestedSection = 0x95,
	},
	{
		.roomId = 0x10,
		.evidenceId = 0x55,
		.personId = PERSON_ANIM_LOTTA_HART,
		.end = 0x0,
		.interestedSection = 0xA2,
		.uninterestedSection = 0xDB,
	},
	{
		.roomId = 0x10,
		.evidenceId = 0x57,
		.personId = PERSON_ANIM_LOTTA_HART,
		.end = 0x0,
		.interestedSection = 0xA3,
		.uninterestedSection = 0xDB,
	},
	{
		.roomId = 0x10,
		.evidenceId = 0x5A,
		.personId = PERSON_ANIM_LOTTA_HART,
		.end = 0x0,
		.interestedSection = 0xA4,
		.uninterestedSection = 0xDB,
	},
	{
		.roomId = 0x11,
		.evidenceId = 0x62,
		.personId = PERSON_ANIM_LARRY_BUTZ,
		.end = 0x0,
		.interestedSection = 0xAB,
		.uninterestedSection = 0xB6,
	},
	{
		.roomId = 0x11,
		.evidenceId = 0x5A,
		.personId = PERSON_ANIM_LARRY_BUTZ,
		.end = 0x0,
		.interestedSection = 0xAC,
		.uninterestedSection = 0xB6,
	},
	{
		.roomId = 0x11,
		.evidenceId = 0x63,
		.personId = PERSON_ANIM_LARRY_BUTZ,
		.end = 0x0,
		.interestedSection = 0xAD,
		.uninterestedSection = 0xB6,
	},
	{
		.roomId = 0x11,
		.evidenceId = 0x61,
		.personId = PERSON_ANIM_LARRY_BUTZ,
		.end = 0x0,
		.interestedSection = 0xAE,
		.uninterestedSection = 0xB6,
	},
	{
		.roomId = 0x12,
		.evidenceId = 0x17,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xC1,
		.uninterestedSection = 0xC8,
	},
	{
		.roomId = 0x12,
		.evidenceId = 0x55,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xC2,
		.uninterestedSection = 0xC8,
	},
	{
		.roomId = 0x12,
		.evidenceId = 0x54,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xC3,
		.uninterestedSection = 0xC8,
	},
	{
		.roomId = 0x12,
		.evidenceId = 0x57,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xC4,
		.uninterestedSection = 0xC8,
	},
	{
		.roomId = 0x12,
		.evidenceId = 0x5E,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xC5,
		.uninterestedSection = 0xC8,
	},
	{
		.roomId = 0x12,
		.evidenceId = 0x5F,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xC6,
		.uninterestedSection = 0xC8,
	},
	{
		.roomId = 0x12,
		.evidenceId = 0x60,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xC7,
		.uninterestedSection = 0xC8,
	},
	{
		.roomId = 0x12,
		.evidenceId = 0x55,
		.personId = PERSON_ANIM_LOTTA_HART,
		.end = 0x0,
		.interestedSection = 0xD7,
		.uninterestedSection = 0xDB,
	},
	{
		.roomId = 0x12,
		.evidenceId = 0x57,
		.personId = PERSON_ANIM_LOTTA_HART,
		.end = 0x0,
		.interestedSection = 0xA3,
		.uninterestedSection = 0xDB,
	},
	{
		.roomId = 0x12,
		.evidenceId = 0x5A,
		.personId = PERSON_ANIM_LOTTA_HART,
		.end = 0x0,
		.interestedSection = 0xA4,
		.uninterestedSection = 0xDB,
	},
	{
		.roomId = 0x12,
		.evidenceId = 0x62,
		.personId = PERSON_ANIM_LOTTA_HART,
		.end = 0x0,
		.interestedSection = 0xD9,
		.uninterestedSection = 0xDB,
	},
	{
		.roomId = 0x12,
		.evidenceId = 0x63,
		.personId = PERSON_ANIM_LOTTA_HART,
		.end = 0x0,
		.interestedSection = 0xD8,
		.uninterestedSection = 0xDB,
	},
	{
		.roomId = 0x12,
		.evidenceId = 0x64,
		.personId = PERSON_ANIM_LOTTA_HART,
		.end = 0x0,
		.interestedSection = 0xDA,
		.uninterestedSection = 0xDB,
	},
	{
		.roomId = 0x14,
		.evidenceId = 0x17,
		.personId = PERSON_ANIM_YANNI_YOGI,
		.end = 0x0,
		.interestedSection = 0xFF,
		.uninterestedSection = 0xFE,
	},
	{
		.roomId = 0x14,
		.evidenceId = 0x5A,
		.personId = PERSON_ANIM_YANNI_YOGI,
		.end = 0x0,
		.interestedSection = 0x103,
		.uninterestedSection = 0xFE,
	},
	{
		.roomId = 0x14,
		.evidenceId = 0x65,
		.personId = PERSON_ANIM_YANNI_YOGI,
		.end = 0x0,
		.interestedSection = 0x104,
		.uninterestedSection = 0xFE,
	},
	{
		.roomId = 0x14,
		.evidenceId = 0x66,
		.personId = PERSON_ANIM_YANNI_YOGI,
		.end = 0x0,
		.interestedSection = 0x105,
		.uninterestedSection = 0xFE,
	},
	{
		.roomId = 0x14,
		.evidenceId = 0x57,
		.personId = PERSON_ANIM_YANNI_YOGI,
		.end = 0x0,
		.interestedSection = 0x102,
		.uninterestedSection = 0xFE,
	},
	{
		.roomId = 0xE,
		.evidenceId = 0x17,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xC1,
		.uninterestedSection = 0xC8,
	},
	{
		.roomId = 0xE,
		.evidenceId = 0x55,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xC2,
		.uninterestedSection = 0xC8,
	},
	{
		.roomId = 0xE,
		.evidenceId = 0x54,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xC3,
		.uninterestedSection = 0xC8,
	},
	{
		.roomId = 0xE,
		.evidenceId = 0x57,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xC4,
		.uninterestedSection = 0xC8,
	},
	{
		.roomId = 0xE,
		.evidenceId = 0x5E,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xC5,
		.uninterestedSection = 0xC8,
	},
	{
		.roomId = 0xE,
		.evidenceId = 0x5F,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xC6,
		.uninterestedSection = 0xC8,
	},
	{
		.roomId = 0xE,
		.evidenceId = 0x60,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xC7,
		.uninterestedSection = 0xC8,
	},
	{
		.roomId = 0xE,
		.evidenceId = 0x62,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xE5,
		.uninterestedSection = 0xC8,
	},
	{
		.roomId = 0xE,
		.evidenceId = 0x63,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xE6,
		.uninterestedSection = 0xC8,
	},
	{
		.roomId = 0xE,
		.evidenceId = 0x64,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xE7,
		.uninterestedSection = 0xC8,
	},
	{
		.roomId = 0xE,
		.evidenceId = 0x65,
		.personId = PERSON_ANIM_GUMSHOE,
		.end = 0x0,
		.interestedSection = 0xEE,
		.uninterestedSection = 0xC8,
	},
	{
		.roomId = 0xF,
		.evidenceId = 0x17,
		.personId = PERSON_ANIM_MAYA,
		.end = 0x0,
		.interestedSection = 0x10D,
		.uninterestedSection = 0x10D,
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
const struct TalkData gTalkData_3_2[18] = {
	{
		.roomId = 0x6,
		.personId = PERSON_ANIM_MAYA,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x48, 0x49, 0xFF, 0xFF },
		.talkFlagId = { 0xA5, 0xA6, 0xFF, 0xFF },
		.talkSection = { 0x87, 0x88, 0x0, 0x0 }
	},
	{
		.roomId = 0x2,
		.personId = PERSON_ANIM_MAYA,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x61, 0x62, 0xFF, 0xFF },
		.talkFlagId = { 0xA3, 0xA4, 0xFF, 0xFF },
		.talkSection = { 0x8D, 0x8E, 0x0, 0x0 }
	},
	{
		.roomId = 0x2,
		.personId = PERSON_ANIM_MAYA,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x48, 0x49, 0xFF, 0xFF },
		.talkFlagId = { 0xA7, 0xA8, 0xFF, 0xFF },
		.talkSection = { 0x97, 0x98, 0x0, 0x0 }
	},
	{
		.roomId = 0x10,
		.personId = PERSON_ANIM_LOTTA_HART,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x63, 0x54, 0x64, 0xFF },
		.talkFlagId = { 0xA9, 0xAA, 0xAB, 0xFF },
		.talkSection = { 0x9C, 0x9D, 0x9E, 0x0 }
	},
	{
		.roomId = 0x11,
		.personId = PERSON_ANIM_LARRY_BUTZ,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x50, 0x65, 0xFF, 0xFF },
		.talkFlagId = { 0xAC, 0xAD, 0xFF, 0xFF },
		.talkSection = { 0xA8, 0xA9, 0x0, 0x0 }
	},
	{
		.roomId = 0x11,
		.personId = PERSON_ANIM_LARRY_BUTZ,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x50, 0x65, 0x66, 0xFF },
		.talkFlagId = { 0xAC, 0xAD, 0xAE, 0xFF },
		.talkSection = { 0xA8, 0xA9, 0xAA, 0x0 }
	},
	{
		.roomId = 0x12,
		.personId = PERSON_ANIM_GUMSHOE,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x5D, 0x67, 0x68, 0xFF },
		.talkFlagId = { 0xAF, 0xB0, 0xB1, 0xFF },
		.talkSection = { 0xBE, 0xBF, 0xC0, 0x0 }
	},
	{
		.roomId = 0x12,
		.personId = PERSON_ANIM_LOTTA_HART,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x4A, 0x54, 0xFF, 0xFF },
		.talkFlagId = { 0xB3, 0xB2, 0xFF, 0xFF },
		.talkSection = { 0xD5, 0xCA, 0x0, 0x0 }
	},
	{
		.roomId = 0x12,
		.personId = PERSON_ANIM_LOTTA_HART,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x4A, 0x69, 0xFF, 0xFF },
		.talkFlagId = { 0xB3, 0xB4, 0xFF, 0xFF },
		.talkSection = { 0xD5, 0xD6, 0x0, 0x0 }
	},
	{
		.roomId = 0x14,
		.personId = PERSON_ANIM_YANNI_YOGI,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x6D, 0x6E, 0xFF, 0xFF },
		.talkFlagId = { 0xB5, 0xB6, 0xFF, 0xFF },
		.talkSection = { 0xFA, 0xFB, 0x0, 0x0 }
	},
	{
		.roomId = 0x14,
		.personId = PERSON_ANIM_YANNI_YOGI,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x6D, 0x6E, 0x6F, 0xFF },
		.talkFlagId = { 0xB5, 0xB6, 0xB7, 0xFF },
		.talkSection = { 0xFA, 0xFB, 0xFC, 0x0 }
	},
	{
		.roomId = 0x14,
		.personId = PERSON_ANIM_YANNI_YOGI,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x6D, 0x6E, 0x70, 0xFF },
		.talkFlagId = { 0xB5, 0xB6, 0xB8, 0xFF },
		.talkSection = { 0xFA, 0xFB, 0xFD, 0x0 }
	},
	{
		.roomId = 0x14,
		.personId = PERSON_ANIM_YANNI_YOGI,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x6D, 0x6E, 0x6F, 0x70 },
		.talkFlagId = { 0xB5, 0xB6, 0xB7, 0xB8 },
		.talkSection = { 0xFA, 0xFB, 0xFC, 0xFD }
	},
	{
		.roomId = 0xE,
		.personId = PERSON_ANIM_GUMSHOE,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x6A, 0x54, 0xFF, 0xFF },
		.talkFlagId = { 0xB9, 0xBA, 0xFF, 0xFF },
		.talkSection = { 0xDE, 0xDF, 0x0, 0x0 }
	},
	{
		.roomId = 0xE,
		.personId = PERSON_ANIM_GUMSHOE,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x6A, 0x6B, 0xFF, 0xFF },
		.talkFlagId = { 0xB9, 0xBB, 0xFF, 0xFF },
		.talkSection = { 0xDE, 0xE0, 0x0, 0x0 }
	},
	{
		.roomId = 0xE,
		.personId = PERSON_ANIM_GUMSHOE,
		.filler2 = 0xFF,
		.enableFlag = 0x0,
		.iconId = { 0x6C, 0x4D, 0xFF, 0xFF },
		.talkFlagId = { 0xBC, 0xBD, 0xFF, 0xFF },
		.talkSection = { 0xEB, 0xEC, 0x0, 0x0 }
	},
	{
		.roomId = 0xF,
		.personId = PERSON_ANIM_MAYA,
		.filler2 = 0xFF,
		.enableFlag = 0x1,
		.iconId = { 0x71, 0x72, 0x73, 0xFF },
		.talkFlagId = { 0xBE, 0xBF, 0xC0, 0xFF },
		.talkSection = { 0x10A, 0x10B, 0x10C, 0x0 }
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
const u8 gRoomData_3_2[21][8] = {
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x1E, 0xFF, 0xFF, 0xFF, 0x06, 0x10, 0x0E, 0x03},
	{ 0x28, 0xFF, 0xFF, 0xFF, 0x06, 0x02, 0xFF, 0xFF},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x01, 0xFF, 0xFF, 0xFF, 0x02, 0x10, 0x0E, 0x03},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{ 0x4F, 0xFF, 0xFF, 0xFF, 0x06, 0x02, 0x10, 0xFF},
	{ 0x50, 0xFF, 0xFF, 0xFF, 0x0E, 0xFF, 0xFF, 0xFF},
	{ 0x46, 0xFF, 0xFF, 0xFF, 0x06, 0x02, 0x11, 0x0E},
	{ 0x48, 0xFF, 0xFF, 0xFF, 0x10, 0x12, 0x13, 0xFF},
	{ 0x49, 0xFF, 0xFF, 0xFF, 0x11, 0xFF, 0xFF, 0xFF},
	{ 0x4D, 0xFF, 0xFF, 0xFF, 0x11, 0xFF, 0xFF, 0xFF},
	{ 0x4E, 0xFF, 0xFF, 0xFF, 0x13, 0xFF, 0xFF, 0xFF},
};

// exam data
const struct ExaminationData gExaminationData_3_2_00[5] = {
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

const struct ExaminationData gExaminationData_3_2_01[2] = {
	{
		.examinationSection = 0x8B,
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
		.examinationSection = 0x8C,
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

const struct ExaminationData gExaminationData_3_2_02[4] = {
	{
		.examinationSection = 0x10E,
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
		.examinationSection = 0x10F,
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
		.examinationSection = 0x10F,
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

const struct ExaminationData gExaminationData_3_2_03[6] = {
	{
		.examinationSection = 0x110,
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
		.examinationSection = 0x110,
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
		.examinationSection = 0x111,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 31, .y = 90 },
			[1] = { .x = 49, .y = 90 },
			[2] = { .x = 49, .y = 98 },
			[3] = { .x = 31, .y = 98 },
		}}
	},
	{
		.examinationSection = 0x114,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 107 },
			[1] = { .x = 21, .y = 107 },
			[2] = { .x = 21, .y = 125 },
			[3] = { .x = 0, .y = 125 },
		}}
	},
	{
		.examinationSection = 0x112,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 77 },
			[1] = { .x = 178, .y = 77 },
			[2] = { .x = 178, .y = 89 },
			[3] = { .x = 0, .y = 89 },
		}}
	},
	{
		.examinationSection = 0x113,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 148, .y = 41 },
			[1] = { .x = 224, .y = 37 },
			[2] = { .x = 224, .y = 139 },
			[3] = { .x = 170, .y = 113 },
		}}
	},
};

const struct ExaminationData gExaminationData_3_2_04[11] = {
	{
		.examinationSection = 0x115,
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
		.examinationSection = 0x115,
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
		.examinationSection = 0x114,
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
		.examinationSection = 0x111,
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
		.examinationSection = 0x118,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 35, .y = 30 },
			[1] = { .x = 102, .y = 40 },
			[2] = { .x = 102, .y = 41 },
			[3] = { .x = 35, .y = 31 },
		}}
	},
	{
		.examinationSection = 0x118,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 121, .y = 42 },
			[1] = { .x = 216, .y = 0 },
			[2] = { .x = 216, .y = 23 },
			[3] = { .x = 121, .y = 43 },
		}}
	},
	{
		.examinationSection = 0x11A,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 139, .y = 103 },
			[1] = { .x = 151, .y = 103 },
			[2] = { .x = 151, .y = 106 },
			[3] = { .x = 139, .y = 106 },
		}}
	},
	{
		.examinationSection = 0x119,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 95, .y = 18 },
			[1] = { .x = 152, .y = 24 },
			[2] = { .x = 137, .y = 101 },
			[3] = { .x = 102, .y = 101 },
		}}
	},
	{
		.examinationSection = 0x119,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 60, .y = 0 },
			[1] = { .x = 80, .y = 0 },
			[2] = { .x = 92, .y = 39 },
			[3] = { .x = 79, .y = 47 },
		}}
	},
	{
		.examinationSection = 0x116,
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
		.examinationSection = 0x117,
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

const struct ExaminationData gExaminationData_3_2_05[7] = {
	{
		.examinationSection = 0x11B,
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
		.examinationSection = 0x11B,
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
		.examinationSection = 0x11C,
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
		.examinationSection = 0x11D,
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
		.examinationSection = 0x11E,
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
		.examinationSection = 0x11F,
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
		.examinationSection = 0x120,
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

const struct ExaminationData gExaminationData_3_2_06[3] = {
	{
		.examinationSection = 0x123,
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
		.examinationSection = 0x124,
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
		.examinationSection = 0x125,
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

const struct ExaminationData gExaminationData_3_2_07[7] = {
	{
		.examinationSection = 0xF7,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 51, .y = 61 },
			[1] = { .x = 61, .y = 28 },
			[2] = { .x = 71, .y = 28 },
			[3] = { .x = 65, .y = 61 },
		}}
	},
	{
		.examinationSection = 0xF9,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 207, .y = 57 },
			[1] = { .x = 240, .y = 57 },
			[2] = { .x = 240, .y = 58 },
			[3] = { .x = 207, .y = 58 },
		}}
	},
	{
		.examinationSection = 0x128,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 77 },
			[1] = { .x = 46, .y = 77 },
			[2] = { .x = 46, .y = 99 },
			[3] = { .x = 0, .y = 122 },
		}}
	},
	{
		.examinationSection = 0x129,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 128, .y = 16 },
			[1] = { .x = 208, .y = 16 },
			[2] = { .x = 201, .y = 48 },
			[3] = { .x = 145, .y = 48 },
		}}
	},
	{
		.examinationSection = 0x12A,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 208, .y = 70 },
			[1] = { .x = 240, .y = 70 },
			[2] = { .x = 240, .y = 114 },
			[3] = { .x = 208, .y = 114 },
		}}
	},
	{
		.examinationSection = 0x12B,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 202, .y = 77 },
			[1] = { .x = 206, .y = 77 },
			[2] = { .x = 195, .y = 105 },
			[3] = { .x = 193, .y = 105 },
		}}
	},
	{
		.examinationSection = 0x127,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 93, .y = 93 },
			[1] = { .x = 173, .y = 93 },
			[2] = { .x = 191, .y = 133 },
			[3] = { .x = 75, .y = 133 },
		}}
	},
};

const struct ExaminationData gExaminationData_3_2_08[6] = {
	{
		.examinationSection = 0x12C,
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
		.examinationSection = 0x12D,
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
		.examinationSection = 0x131,
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
		.examinationSection = 0x132,
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
		.examinationSection = 0x132,
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
		.examinationSection = 0x133,
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

const struct ExaminationData gExaminationData_3_2_09[4] = {
	{
		.examinationSection = 0x136,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 0, .y = 0 },
			[1] = { .x = 77, .y = 36 },
			[2] = { .x = 77, .y = 80 },
			[3] = { .x = 0, .y = 320 },
		}}
	},
	{
		.examinationSection = 0x137,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 80, .y = 40 },
			[1] = { .x = 105, .y = 40 },
			[2] = { .x = 105, .y = 68 },
			[3] = { .x = 80, .y = 68 },
		}}
	},
	{
		.examinationSection = 0x134,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 172, .y = 0 },
			[1] = { .x = 240, .y = 0 },
			[2] = { .x = 240, .y = 101 },
			[3] = { .x = 88, .y = 46 },
		}}
	},
	{
		.examinationSection = 0x135,
		.type = 0x0,
		.animId = 0xFF,
		.area = { .points = {
			[0] = { .x = 240, .y = 118 },
			[1] = { .x = 240, .y = 160 },
			[2] = { .x = 171, .y = 160 },
			[3] = { .x = 90, .y = 52 },
		}}
	},
};

const struct ExaminationData gExaminationData_3_2_10[5] = {
	{
		.examinationSection = 0xF2,
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
		.examinationSection = 0xF3,
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
		.examinationSection = 0xF0,
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
		.examinationSection = 0xF1,
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
		.examinationSection = 0xF4,
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

void InvestigationSegmentSetup_3_2(struct Main *main)
{
    DmaCopy16(3, gRoomData_3_2, gMain.roomData, sizeof(gRoomData_3_2));
    DmaCopy16(3, gTalkData_3_2, gTalkData, sizeof(gTalkData_3_2));
    main->currentRoomId = 2;
}

void InvestigationRoomSetup_3_2(struct Main *main)
{
    DmaFill16(3, 0xFFFF, gExaminationData, sizeof(gExaminationData));
    switch(main->currentRoomId) {
        case 6: {
            if(GetFlag(0, 0xC3)) {
                if(!GetFlag(0, 0xC1)) {
                    InvestigationSetScriptSectionAndFlag(0x86, 0xC1);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_MAYA, ANIM_MAYA_NORMAL_IDLE, ANIM_MAYA_NORMAL_IDLE);
                    PlayBGM(BGM006_MAYAS_THEME);
                }
            }
            else if(!GetFlag(0, 0xC0)) {
                InvestigationSetScriptSectionAndFlag(0x80, 0xC0);
            }
            LOADEXAMDATA(gExaminationData_3_2_00);
            break;
        }
        case 2: {
            if(GetFlag(0, 0xC3)) {
                if(!GetFlag(0, 0xC4)) {
                    InvestigationSetScriptSectionAndFlag(0x99, 0xC4);
                }
            }
            else if(GetFlag(0, 0xC5)) {
                InvestigationSetScriptSectionAndFlag(0x96, 0xC3);
            }
            else if(!GetFlag(0, 0xC2)) {
                InvestigationSetScriptSectionAndFlag(0x8A, 0xC2);
            }
            else {
                InvestigationSetPersonAnimation(PERSON_ANIM_MAYA, ANIM_MAYA_NORMAL_IDLE_CROPPED, ANIM_MAYA_NORMAL_IDLE_CROPPED);
                PlayBGM(BGM006_MAYAS_THEME);
            }
            LOADEXAMDATA(gExaminationData_3_2_01);
            break;
        }
        case 16: {
            if(GetFlag(0, 0xC3)) {
                if(!GetFlag(0, 0xC7)) {
                    InvestigationSetScriptSectionAndFlag(0x9B, 0xC7);
                }
                else if(!GetFlag(0, 0xC8)) {
                    InvestigationSetPersonAnimation(PERSON_ANIM_LOTTA_HART, ANIM_HART_NORMAL_IDLE, ANIM_HART_NORMAL_IDLE);
                    PlayBGM(BGM022_HAPPY_PEOPLE);
                }
                else {
                    PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
                }
            }
            else if(!GetFlag(0, 0xC6)) {
                InvestigationSetScriptSectionAndFlag(0x9A, 0xC6);
            }
            else {
                PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
            }
            LOADEXAMDATA(gExaminationData_3_2_02);
            break;
        }
        case 17: {
            if(GetFlag(0, 0xC3)) {
                if(!GetFlag(0, 0xCA)) {
                    InvestigationSetScriptSectionAndFlag(0xA6, 0xCA);
                }
                else {
                    if(!GetFlag(0, 0xCB) && GetFlag(0, 0xD0)) {
                        InvestigationSetScriptSectionAndFlag(0xA7, 0xCB);
                    }
                    else {
                        InvestigationSetPersonAnimation(PERSON_ANIM_LARRY_BUTZ, ANIM_BUTZ_NORMAL_IDLE, ANIM_BUTZ_NORMAL_IDLE);
                    }
                    PlayBGM(BGM021_STEEL_SAMURAI_THEME);
                }
                LOADEXAMDATA(gExaminationData_3_2_04);
            }
            else {
                if(!GetFlag(0, 0xC9)) {
                    InvestigationSetScriptSectionAndFlag(0xA5, 0xC9);
                }
                else {
                    PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
                }
                LOADEXAMDATA(gExaminationData_3_2_03);
            }
            break;
        }
        case 18: {
            if(GetFlag(0, 0xC8)) {
                if(!GetFlag(0, 0xF1) && GetFlag(0, 0xCF)) {
                    InvestigationSetScriptSectionAndFlag(0x138, 0xF1);
                }
                else if(!GetFlag(0, 0xD3)) {
                    InvestigationSetScriptSectionAndFlag(0xC9, 0xD3);
                }
                else if(!GetFlag(0, 0xD7)) {
                    InvestigationSetPersonAnimation(PERSON_ANIM_LOTTA_HART | 0x4000, ANIM_HART_NORMAL_IDLE, ANIM_HART_NORMAL_IDLE);
                    PlayBGM(BGM022_HAPPY_PEOPLE);
                }
                else {
                    PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
                }
            }
            else if(!GetFlag(0, 0xD2)) {
                InvestigationSetScriptSectionAndFlag(0xBC, 0xD2);
            }
            else if(!GetFlag(0, 0xC5)) {
                InvestigationSetPersonAnimation(PERSON_ANIM_GUMSHOE | 0x4000, ANIM_GUMSHOE_NORMAL_IDLE, ANIM_GUMSHOE_NORMAL_IDLE);
                PlayBGM(BGM001_GUMSHOES_THEME);
            }
            else {
                PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
            }
            LOADEXAMDATA(gExaminationData_3_2_05);
            break;
        }
        case 19: {
            if(GetFlag(0, 0xDD)) {
                if(!GetFlag(0, 0xDB)) {
                    InvestigationSetScriptSectionAndFlag(0xBB, 0xDB);
                }
                else {
                    PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
                }
            }
            else if(GetFlag(0, 0xD7)) {
                if(!GetFlag(0, 0xDA)) {
                    InvestigationSetScriptSectionAndFlag(0xBA, 0xDA);
                }
                else {
                    PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
                }
            }
            else if(GetFlag(0, 0xC8)) {
                if(!GetFlag(0, 0xD9)) {
                    InvestigationSetScriptSectionAndFlag(0xB8, 0xD9);
                }
                else if(!GetFlag(0, 0xDC) && GetFlag(0, 0xD1)) {
                    InvestigationSetScriptSectionAndFlag(0xB9, 0xDC);
                }
                else {
                    PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
                }
            }
            else if(!GetFlag(0, 0xD8)) {
                InvestigationSetScriptSectionAndFlag(0xB7, 0xD8);
            }
            else {
                PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
            }
            LOADEXAMDATA(gExaminationData_3_2_06);
            break;
        }
        case 20: {
            if(!GetFlag(0, 0xE6)) {
                InvestigationSetScriptSectionAndFlag(0xF5, 0xE6);
            }
            else {
                if(GetFlag(0, 0xE7)) {
                    InvestigationSetPersonAnimation(PERSON_ANIM_YANNI_YOGI, ANIM_YOGI_NORMAL_IDLE, ANIM_YOGI_NORMAL_IDLE);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_YANNI_YOGI, ANIM_YOGI_SLEEP_IDLE, ANIM_YOGI_SLEEP_IDLE);
                }
                PlayBGM(BGM026_GROSSBERGS_THEME);
            }
            LOADEXAMDATA(gExaminationData_3_2_07);
            break;
        }
        case 14: {
            if(GetFlag(0, 0xDD)) {
                if(!GetFlag(0, 0xE1)) {
                    InvestigationSetScriptSectionAndFlag(0xE9, 0xE1);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_GUMSHOE, ANIM_GUMSHOE_NORMAL_IDLE, ANIM_GUMSHOE_NORMAL_IDLE);
                    PlayBGM(BGM001_GUMSHOES_THEME);
                }
            }
            else if(GetFlag(0, 0xDC)) {
                if(!GetFlag(0, 0xE0)) {
                    InvestigationSetScriptSectionAndFlag(0xE8, 0xE0);
                }
            }
            else if(GetFlag(0, 0xC8)) {
                if(!GetFlag(0, 0xDF)) {
                    InvestigationSetScriptSectionAndFlag(0xDD, 0xDF);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_GUMSHOE, ANIM_GUMSHOE_NORMAL_IDLE, ANIM_GUMSHOE_NORMAL_IDLE);
                    ChangeFlag(2, 0xBB, 0);
                    if(GetFlag(0, 0xF2)) {
                        PlayBGM(BGM012_INVESTIGATION_CORE);
                    }
                    else {
                        PlayBGM(BGM001_GUMSHOES_THEME);
                    }
                }
            }
            else if(!GetFlag(0, 0xDE)) {
                InvestigationSetScriptSectionAndFlag(0xDC, 0xDE);
            }
            LOADEXAMDATA(gExaminationData_3_2_08);
            break;
        }
        case 15: {
            if(!GetFlag(0, 0xEC)) {
                InvestigationSetScriptSectionAndFlag(0x108, 0xEC);
            }
            else {
                InvestigationSetPersonAnimation(PERSON_ANIM_MAYA, ANIM_MAYA_NORMAL_IDLE, ANIM_MAYA_NORMAL_IDLE);
                PlayBGM(BGM012_INVESTIGATION_CORE);
            }
            LOADEXAMDATA(gExaminationData_3_2_09);
            break;
        }
        case 3: {
            if(!GetFlag(0, 0xE5)) {
                InvestigationSetScriptSectionAndFlag(0xEF, 0xE5);
            }
            LOADEXAMDATA(gExaminationData_3_2_10);
            break;
        }
    }
}

void InvestigationRoomUpdate_3_2(struct Main *main) {
}
