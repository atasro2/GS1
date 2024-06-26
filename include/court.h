#ifndef GUARD_COURT_H
#define GUARD_COURT_H


#define MAX_HEALTH 5

struct TestimonyStruct
{
    /* +0x00 */ u8 displayState; // unity AA4: move_status_flag
    /* +0x01 */ u8 timer; // unity AA4: wait_timer
    /* +0x02 */ u8 pressPromptY; // unity AA4: pos_y_yusaburu
    /* +0x03 */ u8 presentPromptY; // unity AA4: pos_y_tukitukeru
    /* +0x04 */ u16 healthPointX; // unity AA4: pos_x_rest
    /* +0x06 */ u8 testimonyAnimMoveAmount; // unity AA4: add
    /* +0x07 */ u8 filler7; // unity AA4: dm00 filler dummy
};

extern struct TestimonyStruct gTestimony;

void SetCurrentEpisodeBit();
void UpdateQuestioningMenuSprites(struct Main *, struct TestimonyStruct *, u32);
void UpdateHealthSprites(struct Main *, struct TestimonyStruct *);

void CourtProcess(struct Main *);
void TestimonyProcess(struct Main *);
void QuestioningProcess(struct Main *);
extern void VerdictProcess(struct Main *);

#endif//GUARD_COURT_H