#ifndef GUARD_INVESTIGATION_H
#define GUARD_INVESTIGATION_H

#include "case_data.h"
#include "utils.h"

struct TalkData
{
    /* +0x00 */ u8 roomId;
    /* +0x01 */ u8 personId;
    /* +0x02 */ u8 filler2; // called dm in unity? probably means dummy, unused
    /* +0x03 */ u8 enableFlag; // en- or disables this specific set of talk data, allows for multiple sets for one character in one room
    /* +0x04 */ u8 iconId[0x4];
    /* +0x08 */ u8 talkFlagId[0x4];
    /* +0x0C */ u16 talkSection[0x4];
};

struct ExaminationData
{
    /* +0x00 */ u16 examinationSection;
    /* +0x02 */ u8 type;
    /* +0x03 */ u8 animId;
    /* +0x04 */ struct Point4 area;
};  

struct InvestigationStruct // unity: tantei_work_
{
    /* +0x00 */ u16 pointerX; // unity AA4: finger_pos_x
    /* +0x02 */ u16 pointerY; // unity AA4: finger_pos_y
    /* +0x04 */ u8 selectedOption; // unity AA4: sel_place
    /* +0x05 */ bool8 personActive; // unity: person_flag // is person in current room?
    /* +0x06 */ bool8 inspectionPaused; // unity AA4: ckeck_no_flag
    /* +0x07 */ u8 inactiveActions; // unity AA4: menu_mv_be_flag
    /* +0x08 */ u8 spotselectStartCounter; // unity AA4: finger_speed_x
    /* +0x09 */ u8 spotselectId; // unity: siteki_no // 指摘 pointed out
    /* +0x0A */ u8 selectedAction; // unity: menu // selected investigation button, why menu?
    /* +0x0B */ u8 lastAction; // unity AA4: menu_old
    /* +0x0C */ u8 actionState; // unity AA4: menu_rno
    /* +0x0D */ u8 inactiveActionButtonY; // unity AA4: menu_pos_y
    /* +0x0E */ u8 selectedActionYOffset; // unity AA4: menu_add
    /* +0x0F */ u8 lastActionYOffset; // unity AA4: menu_add_old
    /* +0x10 */ bool8 activeOptions[4]; // unity AA4: sel_place_be
    /* +0x14 */ u8 pointerFrame; // unity AA4: yubi_no // 指 finger
    /* +0x15 */ u8 pointerFrameCounter; // unity AA4: yubi_timer
    /* +0x16 */ u8 pointerColor; // unity AA4: yubi_col_no
    /* +0x17 */ u8 pointerColorCounter; // unity AA4: yubi_col_timer
};

extern struct TalkData gTalkData[32];
extern struct ExaminationData gExaminationData[16];
extern struct InvestigationStruct gInvestigation;

/* data stuff from segments */
extern const u8 gCourtRecordInitialItems_0_0[7];
extern const struct CourtPresentData gCourtPresentData_0_0[12];
extern const u8 gCourtRecordInitialItems_1_0[4];
extern const u8 gCourtRecordInitialItems_1_1[16];
extern const u8 gCourtRecordInitialItems_1_2[18];
extern const u8 gCourtRecordInitialItems_1_3[19];
extern const struct CourtPresentData gCourtPresentData_1_1[15];
extern const struct CourtPresentData gCourtPresentData_1_3[14];
extern const struct InvestigationPresentData gInvestigationPresentData_1_0[17];
extern const struct TalkData gTalkData_1_0[14];
extern const u8 gRoomData_1_0[6][8];
extern const struct ExaminationData gExaminationData_1_0_00[6];
extern const struct ExaminationData gExaminationData_1_0_01[5];
extern const struct ExaminationData gExaminationData_1_0_02[11];
extern const struct ExaminationData gExaminationData_1_0_03[2];
extern const struct ExaminationData gExaminationData_1_0_04[5];
extern const struct ExaminationData gExaminationData_1_0_05[6];
extern const struct InvestigationPresentData gInvestigationPresentData_1_2[12];
extern const struct TalkData gTalkData_1_2[13];
extern const u8 gRoomData_1_2[6][8];
extern const struct ExaminationData gExaminationData_1_2_00[5];
extern const struct ExaminationData gExaminationData_1_2_01[5];
extern const struct ExaminationData gExaminationData_1_2_02[2];
extern const struct ExaminationData gExaminationData_1_2_03[6];
extern const struct ExaminationData gExaminationData_1_2_04[5];
extern const struct ExaminationData gExaminationData_1_2_05[5];
extern const struct ExaminationData gExaminationData_1_2_06[6];
extern const struct ExaminationData gExaminationData_1_2_07[6];
extern const u8 gCourtRecordInitialItems_2_0[6];
extern const u8 gCourtRecordInitialItems_2_1[14];
extern const u8 gCourtRecordInitialItems_2_2[15];
extern const u8 gCourtRecordInitialItems_2_3[20];
extern const u8 gCourtRecordInitialItems_2_4[20];
extern const u8 gCourtRecordInitialItems_2_5[23];
extern const struct CourtPresentData gCourtPresentData_2_1[9];
extern const struct CourtPresentData gCourtPresentData_2_3[5];
extern const struct CourtPresentData gCourtPresentData_2_4[6];
extern const struct CourtPresentData gCourtPresentData_2_5[10];
extern const struct InvestigationPresentData gInvestigationPresentData_2_0[11];
extern const struct TalkData gTalkData_2_0[17];
extern const u8 gRoomData_2_0[12][8];
extern const struct ExaminationData gExaminationData_2_0_00[5];
extern const struct ExaminationData gExaminationData_2_0_01[2];
extern const struct ExaminationData gExaminationData_2_0_02[5];
extern const struct ExaminationData gExaminationData_2_0_03[10];
extern const struct ExaminationData gExaminationData_2_0_04[7];
extern const struct ExaminationData gExaminationData_2_0_05[6];
extern const struct ExaminationData gExaminationData_2_0_06[6];
extern const struct InvestigationPresentData gInvestigationPresentData_2_2[36];
extern const struct TalkData gTalkData_2_2[18];
extern const u8 gRoomData_2_2[14][8];
extern const struct ExaminationData gExaminationData_2_2_00[5];
extern const struct ExaminationData gExaminationData_2_2_01[5];
extern const struct ExaminationData gExaminationData_2_2_02[2];
extern const struct ExaminationData gExaminationData_2_2_03[5];
extern const struct ExaminationData gExaminationData_2_2_04[5];
extern const struct ExaminationData gExaminationData_2_2_05[10];
extern const struct ExaminationData gExaminationData_2_2_06[10];
extern const struct ExaminationData gExaminationData_2_2_07[7];
extern const struct ExaminationData gExaminationData_2_2_08[7];
extern const struct ExaminationData gExaminationData_2_2_09[6];
extern const struct ExaminationData gExaminationData_2_2_10[6];
extern const struct ExaminationData gExaminationData_2_2_11[6];
extern const struct ExaminationData gExaminationData_2_2_12[6];
extern const struct ExaminationData gExaminationData_2_2_13[9];
extern const struct ExaminationData gExaminationData_2_2_14[9];
extern const struct ExaminationData gExaminationData_2_2_15[7];
extern const struct ExaminationData gExaminationData_2_2_16[7];
extern const struct InvestigationPresentData gInvestigationPresentData_2_4[22];
extern const struct TalkData gTalkData_2_4[13];
extern const u8 gRoomData_2_4[14][8];
extern const struct ExaminationData gExaminationData_2_4_00[5];
extern const struct ExaminationData gExaminationData_2_4_01[2];
extern const struct ExaminationData gExaminationData_2_4_02[5];
extern const struct ExaminationData gExaminationData_2_4_03[10];
extern const struct ExaminationData gExaminationData_2_4_04[7];
extern const struct ExaminationData gExaminationData_2_4_05[7];
extern const struct ExaminationData gExaminationData_2_4_06[6];
extern const struct ExaminationData gExaminationData_2_4_07[9];
extern const struct ExaminationData gExaminationData_2_4_08[7];
extern const u8 gCourtRecordInitialItems_3_0[6];
extern const u8 gCourtRecordInitialItems_3_1[17];
extern const u8 gCourtRecordInitialItems_3_2[22];
extern const u8 gCourtRecordInitialItems_3_3[28];
extern const u8 gCourtRecordInitialItems_3_4[28];
extern const u8 gCourtRecordInitialItems_3_5[25];
extern const struct CourtPresentData gCourtPresentData_3_1[11];
extern const struct CourtPresentData gCourtPresentData_3_2[3];
extern const struct CourtPresentData gCourtPresentData_3_3[8];
extern const struct CourtPresentData gCourtPresentData_3_5[10];
extern const struct InvestigationPresentData gInvestigationPresentData_3_0[25];
extern const struct TalkData gTalkData_3_0[24];
extern const u8 gRoomData_3_0[21][8];
extern const struct ExaminationData gExaminationData_3_0_00[5];
extern const struct ExaminationData gExaminationData_3_0_01[2];
extern const struct ExaminationData gExaminationData_3_0_02[4];
extern const struct ExaminationData gExaminationData_3_0_03[7];
extern const struct ExaminationData gExaminationData_3_0_04[6];
extern const struct ExaminationData gExaminationData_3_0_05[7];
extern const struct ExaminationData gExaminationData_3_0_06[3];
extern const struct ExaminationData gExaminationData_3_0_07[6];
extern const struct ExaminationData gExaminationData_3_0_08[5];
extern const struct InvestigationPresentData gInvestigationPresentData_3_2[45];
extern const struct TalkData gTalkData_3_2[18];
extern const u8 gRoomData_3_2[21][8];
extern const struct ExaminationData gExaminationData_3_2_00[5];
extern const struct ExaminationData gExaminationData_3_2_01[2];
extern const struct ExaminationData gExaminationData_3_2_02[4];
extern const struct ExaminationData gExaminationData_3_2_03[6];
extern const struct ExaminationData gExaminationData_3_2_04[11];
extern const struct ExaminationData gExaminationData_3_2_05[7];
extern const struct ExaminationData gExaminationData_3_2_06[3];
extern const struct ExaminationData gExaminationData_3_2_07[7];
extern const struct ExaminationData gExaminationData_3_2_08[6];
extern const struct ExaminationData gExaminationData_3_2_09[4];
extern const struct ExaminationData gExaminationData_3_2_10[5];
extern const struct InvestigationPresentData gInvestigationPresentData_3_4[13];
extern const struct TalkData gTalkData_3_4[12];
extern const u8 gRoomData_3_4[21][8];
extern const struct ExaminationData gExaminationData_3_4_00[5];
extern const struct ExaminationData gExaminationData_3_4_01[2];
extern const struct ExaminationData gExaminationData_3_4_02[4];
extern const struct ExaminationData gExaminationData_3_4_03[6];
extern const struct ExaminationData gExaminationData_3_4_04[3];
extern const struct ExaminationData gExaminationData_3_4_05[7];
extern const struct ExaminationData gExaminationData_3_4_06[6];
extern const struct ExaminationData gExaminationData_3_4_07[5];
extern const struct ExaminationData gExaminationData_3_4_08[5];
/* end data stuff from segments */

void SetInactiveActionButtons(struct InvestigationStruct *, u32);
extern u32 GetExaminedAreaSection(struct InvestigationStruct *);
void LoadLocationChoiceGraphics(void);
void LoadTalkChoiceGraphics(void);

void InvestigationInit(struct Main *, struct InvestigationStruct *);
void InvestigationMain(struct Main *, struct InvestigationStruct *);
void InvestigationExit(struct Main *, struct InvestigationStruct *);
void InvestigationBgScrollWait(struct Main *, struct InvestigationStruct *);
void InvestigationTextboxSlideWait(struct Main *, struct InvestigationStruct *);
void InvestigationRoomInit(struct Main *, struct InvestigationStruct *);
void InvestigationInspect(struct Main *, struct InvestigationStruct *);
void InvestigationMove(struct Main *, struct InvestigationStruct *);
void InvestigationTalk(struct Main *, struct InvestigationStruct *);
void InvestigationPresent(struct Main *, struct InvestigationStruct *);

/* Segment 1 */
void InvestigationSegmentSetup_1_0(struct Main *main);
void InvestigationRoomSetup_1_0(struct Main *main);
void InvestigationRoomUpdate_1_0(struct Main *main);

void InvestigationSegmentSetup_1_2(struct Main *main);
void InvestigationRoomSetup_1_2(struct Main *main);
void InvestigationRoomUpdate_1_2(struct Main *main);
/* Segment 2 */
void InvestigationSegmentSetup_2_0(struct Main *main);
void InvestigationRoomSetup_2_0(struct Main *main);
void InvestigationRoomUpdate_2_0(struct Main *main);

void InvestigationSegmentSetup_2_2(struct Main *main);
void InvestigationRoomSetup_2_2(struct Main *main);
void InvestigationRoomUpdate_2_2(struct Main *main);

void InvestigationSegmentSetup_2_4(struct Main *main);
void InvestigationRoomSetup_2_4(struct Main *main);
void InvestigationRoomUpdate_2_4(struct Main *main);
/* Segment 3 */
void InvestigationSegmentSetup_3_0(struct Main *main);
void InvestigationRoomSetup_3_0(struct Main *main);
void InvestigationRoomUpdate_3_0(struct Main *main);

void InvestigationSegmentSetup_3_2(struct Main *main);
void InvestigationRoomSetup_3_2(struct Main *main);
void InvestigationRoomUpdate_3_2(struct Main *main);

void InvestigationSegmentSetup_3_4(struct Main *main);
void InvestigationRoomSetup_3_4(struct Main *main);
void InvestigationRoomUpdate_3_4(struct Main *main);

void InvestigationDummy(struct Main *main);

void InvestigationProcess(struct Main *);

#endif//GUARD_INVESTIGATION_H