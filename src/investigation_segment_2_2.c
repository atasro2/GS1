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

const struct InvestigationPresentData gInvestigationPresentData_2_2[36] = {
    {
        .roomId = 0x6,
        .evidenceId = 0x17,
        .personId = PERSON_ANIM_MAYA,
        .end = 0x0,
        .interestedSection = 0x88,
        .uninterestedSection = 0x8C,
    },
    {
        .roomId = 0x6,
        .evidenceId = 0x33,
        .personId = PERSON_ANIM_MAYA,
        .end = 0x0,
        .interestedSection = 0x89,
        .uninterestedSection = 0x8C,
    },
    {
        .roomId = 0x6,
        .evidenceId = 0x34,
        .personId = PERSON_ANIM_MAYA,
        .end = 0x0,
        .interestedSection = 0x8A,
        .uninterestedSection = 0x8C,
    },
    {
        .roomId = 0x6,
        .evidenceId = 0x35,
        .personId = PERSON_ANIM_MAYA,
        .end = 0x0,
        .interestedSection = 0x8A,
        .uninterestedSection = 0x8C,
    },
    {
        .roomId = 0x6,
        .evidenceId = 0x37,
        .personId = PERSON_ANIM_MAYA,
        .end = 0x0,
        .interestedSection = 0x8B,
        .uninterestedSection = 0x8C,
    },
    {
        .roomId = 0x6,
        .evidenceId = 0x38,
        .personId = PERSON_ANIM_MAYA,
        .end = 0x0,
        .interestedSection = 0x8B,
        .uninterestedSection = 0x8C,
    },
    {
        .roomId = 0x6,
        .evidenceId = 0xFF,
        .personId = PERSON_ANIM_SUMMONED_MIA,
        .end = 0x0,
        .interestedSection = 0x92,
        .uninterestedSection = 0x92,
    },
    {
        .roomId = 0x2,
        .evidenceId = 0x37,
        .personId = PERSON_ANIM_WILL_POWERS,
        .end = 0x0,
        .interestedSection = 0x98,
        .uninterestedSection = 0x9B,
    },
    {
        .roomId = 0x2,
        .evidenceId = 0x38,
        .personId = PERSON_ANIM_WILL_POWERS,
        .end = 0x0,
        .interestedSection = 0x98,
        .uninterestedSection = 0x9B,
    },
    {
        .roomId = 0x2,
        .evidenceId = 0x34,
        .personId = PERSON_ANIM_WILL_POWERS,
        .end = 0x0,
        .interestedSection = 0x99,
        .uninterestedSection = 0x9B,
    },
    {
        .roomId = 0x2,
        .evidenceId = 0x35,
        .personId = PERSON_ANIM_WILL_POWERS,
        .end = 0x0,
        .interestedSection = 0x99,
        .uninterestedSection = 0x9B,
    },
    {
        .roomId = 0x2,
        .evidenceId = 0x33,
        .personId = PERSON_ANIM_WILL_POWERS,
        .end = 0x0,
        .interestedSection = 0x9A,
        .uninterestedSection = 0x9B,
    },
    {
        .roomId = 0x7,
        .evidenceId = 0x34,
        .personId = PERSON_ANIM_PENNY_NICHOLS,
        .end = 0x0,
        .interestedSection = 0xAA,
        .uninterestedSection = 0xAD,
    },
    {
        .roomId = 0x7,
        .evidenceId = 0x35,
        .personId = PERSON_ANIM_PENNY_NICHOLS,
        .end = 0x0,
        .interestedSection = 0xAA,
        .uninterestedSection = 0xAD,
    },
    {
        .roomId = 0x7,
        .evidenceId = 0x33,
        .personId = PERSON_ANIM_PENNY_NICHOLS,
        .end = 0x0,
        .interestedSection = 0xAB,
        .uninterestedSection = 0xAD,
    },
    {
        .roomId = 0x7,
        .evidenceId = 0x37,
        .personId = PERSON_ANIM_PENNY_NICHOLS,
        .end = 0x0,
        .interestedSection = 0xAC,
        .uninterestedSection = 0xAD,
    },
    {
        .roomId = 0x7,
        .evidenceId = 0x38,
        .personId = PERSON_ANIM_PENNY_NICHOLS,
        .end = 0x0,
        .interestedSection = 0xAC,
        .uninterestedSection = 0xAD,
    },
    {
        .roomId = 0x7,
        .evidenceId = 0x34,
        .personId = PERSON_ANIM_WENDY_OLDBAG,
        .end = 0x0,
        .interestedSection = 0xB9,
        .uninterestedSection = 0xBE,
    },
    {
        .roomId = 0x7,
        .evidenceId = 0x35,
        .personId = PERSON_ANIM_WENDY_OLDBAG,
        .end = 0x0,
        .interestedSection = 0xB9,
        .uninterestedSection = 0xBE,
    },
    {
        .roomId = 0x7,
        .evidenceId = 0x3A,
        .personId = PERSON_ANIM_WENDY_OLDBAG,
        .end = 0x0,
        .interestedSection = 0xBA,
        .uninterestedSection = 0xBE,
    },
    {
        .roomId = 0x7,
        .evidenceId = 0x33,
        .personId = PERSON_ANIM_WENDY_OLDBAG,
        .end = 0x0,
        .interestedSection = 0xBB,
        .uninterestedSection = 0xBE,
    },
    {
        .roomId = 0x8,
        .evidenceId = 0xFF,
        .personId = PERSON_ANIM_CODY_HACKINS,
        .end = 0x0,
        .interestedSection = 0xD3,
        .uninterestedSection = 0xD3,
    },
    {
        .roomId = 0x9,
        .evidenceId = 0x34,
        .personId = PERSON_ANIM_SAL_MANELLA,
        .end = 0x0,
        .interestedSection = 0xE7,
        .uninterestedSection = 0xEA,
    },
    {
        .roomId = 0x9,
        .evidenceId = 0x35,
        .personId = PERSON_ANIM_SAL_MANELLA,
        .end = 0x0,
        .interestedSection = 0xE7,
        .uninterestedSection = 0xEA,
    },
    {
        .roomId = 0x9,
        .evidenceId = 0x3B,
        .personId = PERSON_ANIM_SAL_MANELLA,
        .end = 0x0,
        .interestedSection = 0xE8,
        .uninterestedSection = 0xEA,
    },
    {
        .roomId = 0x9,
        .evidenceId = 0x3C,
        .personId = PERSON_ANIM_SAL_MANELLA,
        .end = 0x0,
        .interestedSection = 0xE9,
        .uninterestedSection = 0xEA,
    },
    {
        .roomId = 0x9,
        .evidenceId = 0x3E,
        .personId = PERSON_ANIM_CODY_HACKINS,
        .end = 0x0,
        .interestedSection = 0xFD,
        .uninterestedSection = 0x102,
    },
    {
        .roomId = 0x9,
        .evidenceId = 0x3F,
        .personId = PERSON_ANIM_CODY_HACKINS,
        .end = 0x0,
        .interestedSection = 0xFE,
        .uninterestedSection = 0x102,
    },
    {
        .roomId = 0x9,
        .evidenceId = 0x34,
        .personId = PERSON_ANIM_CODY_HACKINS,
        .end = 0x0,
        .interestedSection = 0xFF,
        .uninterestedSection = 0x102,
    },
    {
        .roomId = 0x9,
        .evidenceId = 0x35,
        .personId = PERSON_ANIM_CODY_HACKINS,
        .end = 0x0,
        .interestedSection = 0xFF,
        .uninterestedSection = 0x102,
    },
    {
        .roomId = 0x9,
        .evidenceId = 0x37,
        .personId = PERSON_ANIM_CODY_HACKINS,
        .end = 0x0,
        .interestedSection = 0x100,
        .uninterestedSection = 0x102,
    },
    {
        .roomId = 0x9,
        .evidenceId = 0x38,
        .personId = PERSON_ANIM_CODY_HACKINS,
        .end = 0x0,
        .interestedSection = 0x100,
        .uninterestedSection = 0x102,
    },
    {
        .roomId = 0x9,
        .evidenceId = 0x40,
        .personId = PERSON_ANIM_CODY_HACKINS,
        .end = 0x0,
        .interestedSection = 0x101,
        .uninterestedSection = 0x102,
    },
    {
        .roomId = 0xD,
        .evidenceId = 0x3C,
        .personId = PERSON_ANIM_DEE_VASQUEZ,
        .end = 0x0,
        .interestedSection = 0x141,
        .uninterestedSection = 0x142,
    },
    {
        .roomId = 0xD,
        .evidenceId = 0x3E,
        .personId = PERSON_ANIM_PENNY_NICHOLS,
        .end = 0x0,
        .interestedSection = 0x14A,
        .uninterestedSection = 0x149,
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
const struct TalkData gTalkData_2_2[18] = {
    {
        .roomId = 0x6,
        .personId = PERSON_ANIM_MAYA,
        .filler2 = 0xFF,
        .enableFlag = 0x1,
        .iconId = { 0x20, 0x21, 0xFF, 0xFF },
        .talkFlagId = { 0x4A, 0x4B, 0xFF, 0xFF },
        .talkSection = { 0x86, 0x87, 0x0, 0x0 }
    },
    {
        .roomId = 0x6,
        .personId = PERSON_ANIM_SUMMONED_MIA,
        .filler2 = 0xFF,
        .enableFlag = 0x1,
        .iconId = { 0x20, 0x21, 0xFF, 0xFF },
        .talkFlagId = { 0x4C, 0x4D, 0xFF, 0xFF },
        .talkSection = { 0x90, 0x91, 0x0, 0x0 }
    },
    {
        .roomId = 0x2,
        .personId = PERSON_ANIM_WILL_POWERS,
        .filler2 = 0xFF,
        .enableFlag = 0x1,
        .iconId = { 0x34, 0x35, 0xFF, 0xFF },
        .talkFlagId = { 0x4E, 0x4F, 0xFF, 0xFF },
        .talkSection = { 0x97, 0x96, 0x0, 0x0 }
    },
    {
        .roomId = 0x7,
        .personId = PERSON_ANIM_PENNY_NICHOLS,
        .filler2 = 0xFF,
        .enableFlag = 0x1,
        .iconId = { 0x28, 0x34, 0x36, 0xFF },
        .talkFlagId = { 0x50, 0x51, 0x52, 0xFF },
        .talkSection = { 0xA7, 0xA8, 0xA9, 0x0 }
    },
    {
        .roomId = 0x7,
        .personId = PERSON_ANIM_WENDY_OLDBAG,
        .filler2 = 0xFF,
        .enableFlag = 0x1,
        .iconId = { 0x34, 0x36, 0xFF, 0xFF },
        .talkFlagId = { 0x53, 0x54, 0xFF, 0xFF },
        .talkSection = { 0xB0, 0xB1, 0x0, 0x0 }
    },
    {
        .roomId = 0x7,
        .personId = PERSON_ANIM_WENDY_OLDBAG,
        .filler2 = 0xFF,
        .enableFlag = 0x0,
        .iconId = { 0x34, 0x36, 0x46, 0xFF },
        .talkFlagId = { 0x55, 0x56, 0x57, 0xFF },
        .talkSection = { 0xB6, 0xB7, 0xB8, 0x0 }
    },
    {
        .roomId = 0x8,
        .personId = PERSON_ANIM_CODY_HACKINS,
        .filler2 = 0xFF,
        .enableFlag = 0x0,
        .iconId = { 0x37, 0x24, 0xFF, 0xFF },
        .talkFlagId = { 0x58, 0x59, 0xFF, 0xFF },
        .talkSection = { 0xD0, 0xD1, 0x0, 0x0 }
    },
    {
        .roomId = 0x8,
        .personId = PERSON_ANIM_CODY_HACKINS,
        .filler2 = 0xFF,
        .enableFlag = 0x1,
        .iconId = { 0x24, 0x23, 0xFF, 0xFF },
        .talkFlagId = { 0x59, 0x5A, 0xFF, 0xFF },
        .talkSection = { 0xD1, 0xD2, 0x0, 0x0 }
    },
    {
        .roomId = 0x9,
        .personId = PERSON_ANIM_SAL_MANELLA,
        .filler2 = 0xFF,
        .enableFlag = 0x1,
        .iconId = { 0x32, 0xFF, 0xFF, 0xFF },
        .talkFlagId = { 0x5B, 0xFF, 0xFF, 0xFF },
        .talkSection = { 0xE5, 0x0, 0x0, 0x0 }
    },
    {
        .roomId = 0x9,
        .personId = PERSON_ANIM_SAL_MANELLA,
        .filler2 = 0xFF,
        .enableFlag = 0x0,
        .iconId = { 0x32, 0x38, 0x39, 0xFF },
        .talkFlagId = { 0x5B, 0x5C, 0x5D, 0xFF },
        .talkSection = { 0xE5, 0xE4, 0xE6, 0x0 }
    },
    {
        .roomId = 0x9,
        .personId = PERSON_ANIM_CODY_HACKINS,
        .filler2 = 0xFF,
        .enableFlag = 0x1,
        .iconId = { 0x24, 0x23, 0xFF, 0xFF },
        .talkFlagId = { 0x5E, 0x5F, 0xFF, 0xFF },
        .talkSection = { 0xF0, 0xEF, 0x0, 0x0 }
    },
    {
        .roomId = 0x9,
        .personId = PERSON_ANIM_CODY_HACKINS,
        .filler2 = 0xFF,
        .enableFlag = 0x0,
        .iconId = { 0x24, 0x23, 0xFF, 0xFF },
        .talkFlagId = { 0x60, 0x62, 0xFF, 0xFF },
        .talkSection = { 0xF2, 0xF1, 0x0, 0x0 }
    },
    {
        .roomId = 0x9,
        .personId = PERSON_ANIM_CODY_HACKINS,
        .filler2 = 0xFF,
        .enableFlag = 0x0,
        .iconId = { 0x24, 0x23, 0x3A, 0xFF },
        .talkFlagId = { 0x60, 0x62, 0x61, 0xFF },
        .talkSection = { 0xF8, 0xF1, 0xF9, 0x0 }
    },
    {
        .roomId = 0xD,
        .personId = PERSON_ANIM_DEE_VASQUEZ,
        .filler2 = 0xFF,
        .enableFlag = 0x1,
        .iconId = { 0x32, 0x24, 0x35, 0xFF },
        .talkFlagId = { 0x63, 0x64, 0x65, 0xFF },
        .talkSection = { 0x13D, 0x13E, 0x13F, 0x0 }
    },
    {
        .roomId = 0xD,
        .personId = PERSON_ANIM_DEE_VASQUEZ,
        .filler2 = 0xFF,
        .enableFlag = 0x0,
        .iconId = { 0x32, 0x24, 0x35, 0x3B },
        .talkFlagId = { 0x63, 0x64, 0x65, 0x66 },
        .talkSection = { 0x13D, 0x13E, 0x13F, 0x140 }
    },
    {
        .roomId = 0xD,
        .personId = PERSON_ANIM_PENNY_NICHOLS,
        .filler2 = 0xFF,
        .enableFlag = 0x1,
        .iconId = { 0x34, 0x3C, 0xFF, 0xFF },
        .talkFlagId = { 0x67, 0x68, 0xFF, 0xFF },
        .talkSection = { 0x146, 0x147, 0x0, 0x0 }
    },
    {
        .roomId = 0xD,
        .personId = PERSON_ANIM_PENNY_NICHOLS,
        .filler2 = 0xFF,
        .enableFlag = 0x0,
        .iconId = { 0x34, 0x3C, 0x47, 0xFF },
        .talkFlagId = { 0x67, 0x68, 0x69, 0xFF },
        .talkSection = { 0x146, 0x147, 0x148, 0x0 }
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
const u8 gRoomData_2_2[14][8] = {
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
    { 0x0B, 0xFF, 0xFF, 0xFF, 0x07, 0x0B, 0x0C, 0xFF},
    { 0x1A, 0xFF, 0xFF, 0xFF, 0x0A, 0xFF, 0xFF, 0xFF},
    { 0x2C, 0xFF, 0xFF, 0xFF, 0x0A, 0xFF, 0xFF, 0xFF},
    { 0x13, 0xFF, 0xFF, 0xFF, 0x0C, 0xFF, 0xFF, 0xFF},
};

// exam data
const struct ExaminationData gExaminationData_2_2_00[5] = {
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

const struct ExaminationData gExaminationData_2_2_01[5] = {
    {
        .examinationSection = 0x8E,
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
        .examinationSection = 0x8F,
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

const struct ExaminationData gExaminationData_2_2_02[2] = {
    {
        .examinationSection = 0x95,
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
        .examinationSection = 0x94,
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

const struct ExaminationData gExaminationData_2_2_03[5] = {
    {
        .examinationSection = 0xA0,
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
        .examinationSection = 0x9F,
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
        .examinationSection = 0xA3,
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
        .examinationSection = 0xA1,
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
        .examinationSection = 0xA2,
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

const struct ExaminationData gExaminationData_2_2_04[5] = {
    {
        .examinationSection = 0xA0,
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
        .examinationSection = 0x9F,
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
        .examinationSection = 0xA4,
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
        .examinationSection = 0xA1,
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
        .examinationSection = 0xA2,
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

const struct ExaminationData gExaminationData_2_2_05[10] = {
    {
        .examinationSection = 0xC0,
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
        .examinationSection = 0xC2,
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
        .examinationSection = 0xC1,
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
        .examinationSection = 0xC3,
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
        .examinationSection = 0xC4,
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
        .examinationSection = 0xC5,
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
        .examinationSection = 0xC6,
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
        .examinationSection = 0xCA,
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
        .examinationSection = 0xCB,
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
        .examinationSection = 0xCC,
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

const struct ExaminationData gExaminationData_2_2_06[10] = {
    {
        .examinationSection = 0xD5,
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
        .examinationSection = 0xD6,
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
        .examinationSection = 0xC1,
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
        .examinationSection = 0xC3,
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
        .examinationSection = 0xD7,
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
        .examinationSection = 0xD8,
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
        .examinationSection = 0xC6,
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
        .examinationSection = 0xCA,
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
        .examinationSection = 0xCB,
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
        .examinationSection = 0xCC,
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

const struct ExaminationData gExaminationData_2_2_07[7] = {
    {
        .examinationSection = 0xDE,
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
        .examinationSection = 0xDD,
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
        .examinationSection = 0xE0,
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
        .examinationSection = 0xDF,
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
        .examinationSection = 0xDB,
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
        .examinationSection = 0xDC,
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
        .examinationSection = 0xE1,
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

const struct ExaminationData gExaminationData_2_2_08[7] = {
    {
        .examinationSection = 0xED,
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
        .examinationSection = 0xEC,
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
        .examinationSection = 0xEE,
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
        .examinationSection = 0xDF,
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
        .examinationSection = 0xDB,
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
        .examinationSection = 0xDC,
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
        .examinationSection = 0xE1,
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

const struct ExaminationData gExaminationData_2_2_09[6] = {
    {
        .examinationSection = 0x107,
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
        .examinationSection = 0x109,
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
        .examinationSection = 0x104,
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
        .examinationSection = 0x108,
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
        .examinationSection = 0x105,
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
        .examinationSection = 0x106,
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

const struct ExaminationData gExaminationData_2_2_10[6] = {
    {
        .examinationSection = 0x107,
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
        .examinationSection = 0x109,
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
        .examinationSection = 0x104,
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
        .examinationSection = 0x10D,
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
        .examinationSection = 0x10B,
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
        .examinationSection = 0x10C,
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

const struct ExaminationData gExaminationData_2_2_11[6] = {
    {
        .examinationSection = 0x111,
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
        .examinationSection = 0x110,
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
        .examinationSection = 0x112,
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
        .examinationSection = 0x113,
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
        .examinationSection = 0x114,
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
        .examinationSection = 0x115,
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

const struct ExaminationData gExaminationData_2_2_12[6] = {
    {
        .examinationSection = 0x119,
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
        .examinationSection = 0x118,
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
        .examinationSection = 0x11A,
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
        .examinationSection = 0x11B,
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
        .examinationSection = 0x11C,
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
        .examinationSection = 0x11D,
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

const struct ExaminationData gExaminationData_2_2_13[9] = {
    {
        .examinationSection = 0x11F,
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
        .examinationSection = 0x120,
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
        .examinationSection = 0x121,
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
        .examinationSection = 0x121,
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
        .examinationSection = 0x122,
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
        .examinationSection = 0x125,
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
        .examinationSection = 0x126,
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
        .examinationSection = 0x124,
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
        .examinationSection = 0x123,
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

const struct ExaminationData gExaminationData_2_2_14[9] = {
    {
        .examinationSection = 0x12C,
        .type = 0x0,
        .animId = 0xFF,
        .area = { .points = {
            [0] = { .x = 16, .y = 53 },
            [1] = { .x = 107, .y = 60 },
            [2] = { .x = 112, .y = 103 },
            [3] = { .x = 11, .y = 110 },
        }}
    },
    {
        .examinationSection = 0x12D,
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
        .examinationSection = 0x12E,
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
        .examinationSection = 0x12E,
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
        .examinationSection = 0x12F,
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
        .examinationSection = 0x132,
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
        .examinationSection = 0x133,
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
        .examinationSection = 0x131,
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
        .examinationSection = 0x130,
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

const struct ExaminationData gExaminationData_2_2_15[7] = {
    {
        .examinationSection = 0x13A,
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
        .examinationSection = 0x13C,
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
        .examinationSection = 0x136,
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
        .examinationSection = 0x137,
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
        .examinationSection = 0x138,
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
        .examinationSection = 0x139,
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
        .examinationSection = 0x13B,
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

const struct ExaminationData gExaminationData_2_2_16[7] = {
    {
        .examinationSection = 0x13A,
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
        .examinationSection = 0x13C,
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
        .examinationSection = 0x136,
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
        .examinationSection = 0x144,
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
        .examinationSection = 0x145,
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
        .examinationSection = 0x139,
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
        .examinationSection = 0x13B,
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

void InvestigationSegmentSetup_2_2(struct Main *main)
{
    DmaCopy16(3, gRoomData_2_2, gMain.roomData, sizeof(gRoomData_2_2));
    DmaCopy16(3, gTalkData_2_2, gTalkData, sizeof(gTalkData_2_2));
    main->currentRoomId = 6;
}

void InvestigationRoomSetup_2_2(struct Main *main)
{
    DmaFill16(3, 0xFFFF, gExaminationData, sizeof(gExaminationData));
    switch(main->currentRoomId) {
        case 6: {
            if(GetFlag(0, 0xCA)) {
                if(!GetFlag(0, 0xCC)) {
                    InvestigationSetScriptSectionAndFlag(0x8D, 0xCC);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_SUMMONED_MIA, ANIM_SUMMONED_MIA_NORMAL_IDLE, ANIM_SUMMONED_MIA_NORMAL_IDLE);
                    PlayBGM(BGM012_INVESTIGATION_CORE);
                }
                LOADEXAMDATA(gExaminationData_2_2_01);
            }
            else {
                if(GetFlag(0, 0xB0)) {
                    InvestigationSetPersonAnimation(PERSON_ANIM_MAYA, ANIM_MAYA_NORMAL_IDLE, ANIM_MAYA_NORMAL_IDLE);
                    PlayBGM(BGM006_MAYAS_THEME);
                }
                LOADEXAMDATA(gExaminationData_2_2_00);
            }
            break;
        }
        case 2: {
            if(GetFlag(0, 0xCC)) {
                if(!GetFlag(0, 0xD9)) {
                    InvestigationSetScriptSectionAndFlag(0x9C, 0xD9);
                }
            }
            else if(!GetFlag(0, 0xB1)) {
                InvestigationSetScriptSectionAndFlag(0x93, 0xB1);
            }
            else {
                InvestigationSetPersonAnimation(PERSON_ANIM_WILL_POWERS, ANIM_POWERS_NORMAL_IDLE_CROPPED, ANIM_POWERS_NORMAL_IDLE_CROPPED);
                PlayBGM(BGM000_DETENTION_CENTER);
            }
            LOADEXAMDATA(gExaminationData_2_2_02);
            break;
        }
        case 7: {
            if(GetFlag(0, 0xCC)) {
                if(!GetFlag(0, 0xCD)) {
                    InvestigationSetScriptSectionAndFlag(0xB5, 0xCD);
                }
                else if(!GetFlag(0, 0xD0)) {
                    InvestigationSetPersonAnimation(PERSON_ANIM_WENDY_OLDBAG, ANIM_OLDBAG_EXCITED_IDLE, ANIM_OLDBAG_EXCITED_IDLE);
                    PlayBGM(BGM012_INVESTIGATION_CORE);
                }
                else {
                    PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
                }
                LOADEXAMDATA(gExaminationData_2_2_03);
            }
            else if(GetFlag(0, 0xC1)) {
                if(!GetFlag(0, 0xC2)) {
                    InvestigationSetScriptSectionAndFlag(0xB3, 0xC2);
                }
                else {
                    PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
                }
                LOADEXAMDATA(gExaminationData_2_2_04);
            }
            else if(GetFlag(0, 0xBB) && GetFlag(0, 0xBC)) {
                if(!GetFlag(0, 0xBD)) {
                    InvestigationSetScriptSectionAndFlag(0xAE, 0xBD);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_WENDY_OLDBAG, ANIM_OLDBAG_NORMAL_IDLE, ANIM_OLDBAG_NORMAL_IDLE);
                    PlayBGM(BGM025_INVESTIGATION_OPENING);
                }
                LOADEXAMDATA(gExaminationData_2_2_03);
            }
            else if(GetFlag(0, 0xB8)) {
                if(!GetFlag(0, 0xB9)) {
                    InvestigationSetScriptSectionAndFlag(0xA5, 0xB9);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_PENNY_NICHOLS, ANIM_NICHOLS_NORMAL_IDLE, ANIM_NICHOLS_NORMAL_IDLE);
                    PlayBGM(BGM025_INVESTIGATION_OPENING);
                }
                LOADEXAMDATA(gExaminationData_2_2_03);
            }
            else {
                if(!GetFlag(0, 0xB2)) {
                    InvestigationSetScriptSectionAndFlag(0x9E, 0xB2);
                }
                else {
                    PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
                }
                LOADEXAMDATA(gExaminationData_2_2_03);
            }
            break;
        }
        case 8: {
            if(GetFlag(0, 0xCC)) {
                if(!GetFlag(0, 0xCE)) {
                    InvestigationSetScriptSectionAndFlag(0xD4, 0xCE);
                }
                LOADEXAMDATA(gExaminationData_2_2_06);
            }
            else if(GetFlag(0, 0xBD)) {
                if(!GetFlag(0, 0xBE)) {
                    InvestigationSetScriptSectionAndFlag(0xCD, 0xBE);
                }
                else if(!GetFlag(0, 0xC1)) {
                    //! InvestigationSetPersonAnimation was not used here
                    gMain.talkingAnimationOffset = 0;
                    gMain.idleAnimationOffset = 0;
                    PlayPersonAnimation(PERSON_ANIM_CODY_HACKINS | 0x8000, 0, ANIM_HACKINS_CAMERA_IDLE, 0);
                    gInvestigation.personActive = 1;
                    SetInactiveActionButtons(&gInvestigation, 0xF);
                    PlayBGM(BGM021_STEEL_SAMURAI_THEME);
                }
                LOADEXAMDATA(gExaminationData_2_2_05);
            }
            else {
                if(!GetFlag(0, 0xB8)) {
                    PlayAnimation(ANIM_MANHOLE_COVER);
                }
                if(!GetFlag(0, 0xB3)) {
                    InvestigationSetScriptSectionAndFlag(0xBF, 0xB3);
                }
                LOADEXAMDATA(gExaminationData_2_2_05);
            }
            break;
        }
        case 9: {
            if(GetFlag(0, 0xCC)) {
                if(!GetFlag(0, 0xCF)) {
                    InvestigationSetScriptSectionAndFlag(0xEB, 0xCF);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_CODY_HACKINS, ANIM_HACKINS_CAMERA_IDLE, ANIM_HACKINS_CAMERA_IDLE);
                    PlayBGM(BGM021_STEEL_SAMURAI_THEME);
                }
                LOADEXAMDATA(gExaminationData_2_2_08);
            }
            else if(GetFlag(0, 0xBA)) {
                if(!GetFlag(0, 0xBB)) {
                    InvestigationSetScriptSectionAndFlag(0xE2, 0xBB);
                }
                else {
                    InvestigationSetPersonAnimation(PERSON_ANIM_SAL_MANELLA, ANIM_MANELLA_NORMAL_IDLE, ANIM_MANELLA_NORMAL_IDLE);
                    PlayBGM(BGM021_STEEL_SAMURAI_THEME);
                }
                LOADEXAMDATA(gExaminationData_2_2_07);
            }
            else {
                if(!GetFlag(0, 0xB4)) {
                    InvestigationSetScriptSectionAndFlag(0xDA, 0xB4);
                }
                else {
                    PlayBGM(BGM025_INVESTIGATION_OPENING);
                }
                LOADEXAMDATA(gExaminationData_2_2_07);
            }
            break;
        }
        case 10: {
            if(GetFlag(0, 0xCA)) {
                if(!GetFlag(0, 0xCB)) {
                    InvestigationSetScriptSectionAndFlag(0x10A, 0xCB);
                }
                else {
                    PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
                }
                LOADEXAMDATA(gExaminationData_2_2_10);
            }
            else {
                if(!GetFlag(0, 0xB5)) {
                    InvestigationSetScriptSectionAndFlag(0x103, 0xB5);
                }
                else {
                    PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
                }
                LOADEXAMDATA(gExaminationData_2_2_09);
            }
            break;
        }
        case 11: {
            if(GetFlag(0, 0xCC)) {
                LOADEXAMDATA(gExaminationData_2_2_12);
            }
            else {
                if(GetFlag(0, 0xC7)) {
                    if(!GetFlag(0, 0xC8)) {
                        InvestigationSetScriptSectionAndFlag(0x116, 0xC8);
                    }
                }
                else if(!GetFlag(0, 0xB6)) {
                    InvestigationSetScriptSectionAndFlag(0x10F, 0xB6);
                }
                LOADEXAMDATA(gExaminationData_2_2_11);
            }
            break;
        }
        case 12: {
            if(GetFlag(0, 0xCC)) {
                PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
                LOADEXAMDATA(gExaminationData_2_2_14);
            }
            else if(GetFlag(0, 0xB8)) {
                if(!GetFlag(0, 0xDA)) {
                    InvestigationSetScriptSectionAndFlag(0x128, 0xDA);
                }
                else {
                    PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
                }
                LOADEXAMDATA(gExaminationData_2_2_13);
            }
            else {
                if(!GetFlag(0, 0xB7)) {
                    InvestigationSetScriptSectionAndFlag(0x11E, 0xB7);
                }
                else {
                    PlayBGM(BGM031_AMBIENT_BIRD_CHIRPS);
                }
                LOADEXAMDATA(gExaminationData_2_2_13);
            }
            break;
        }
        case 13: {
            if(GetFlag(0, 0xD3)) {
                if(!GetFlag(0, 0xD4)) {
                    InvestigationSetScriptSectionAndFlag(0x143, 0xD4);
                }
                else if(!GetFlag(0, 0xD1)) {
                    InvestigationSetPersonAnimation(PERSON_ANIM_PENNY_NICHOLS, ANIM_NICHOLS_NORMAL_IDLE, ANIM_NICHOLS_NORMAL_IDLE);
                }
                LOADEXAMDATA(gExaminationData_2_2_16);
            }
            else if(GetFlag(0, 0xCC)) {
                LOADEXAMDATA(gExaminationData_2_2_16);
            }
            else {
                if(!GetFlag(0, 0xC5)) {
                    InvestigationSetScriptSectionAndFlag(0x134, 0xC5);
                }
                else if(!GetFlag(0, 0xCB)) {
                    InvestigationSetPersonAnimation(PERSON_ANIM_DEE_VASQUEZ, ANIM_VASQUEZ_NORMAL_IDLE, ANIM_VASQUEZ_NORMAL_IDLE);
                }
                LOADEXAMDATA(gExaminationData_2_2_15);
            }
            break;
        }
    }
}

void InvestigationRoomUpdate_2_2(struct Main *main) {
}
