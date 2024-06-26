#ifndef GUARD_MAIN_H
#define GUARD_MAIN_H

#define SOUND_FLAG_DISABLE_SE (1 << 0)
#define SOUND_FLAG_DISABLE_BGM (1 << 1)
#define SOUND_FLAG_DISABLE_CUE (1 << 2)

struct Joypad
{
    /* +0x00 */ u16 heldKeys;
    /* +0x02 */ u16 pressedKeys;
    /* +0x04 */ u16 previousHeldKeys;
    /* +0x06 */ u16 previousPressedKeys;
    /* +0x08 */ u16 activeTimedKeys;
    /* +0x0A */ u16 timedKeys;
    /* +0x0C */ u16 timedHoldDelay;
    /* +0x0E */ u16 timedHoldTimer;
};

struct Main
{
    /* +0x000 */ u32 frameCounter; // unity: System_timer? unused in unity
    /* +0x004 */ u8 process[4]; // unity: r
    /* +0x008 */ u8 processCopy[4]; // unity: r_bk
    /* +0x00C */ u8 vblankWaitCounter; // unity: V_blank_flag
    /* +0x00D */ u8 vblankWaitAmount; // unity: V_blank_ctr
    /* +0x00E */ s8 shakeAmountX; // unity: Quake_x
    /* +0x00F */ s8 shakeAmountY; // unity: Quake_y
    /* +0x010 */ u16 shakeTimer; // unity: Quake_timer
    /* +0x012 */ u8 shakeIntensity; // unity: Quake_power
    /* +0x013 */ u8 selectedButton; // unity: Cursol
    /* +0x014 */ bool8 advanceScriptContext; // unity: Mess_move_flag
    /* +0x015 */ bool8 showTextboxCharacters; // unity: message_active_window
    /* +0x016 */ u8 tilemapUpdateBits;
    /* +0x017 */ u8 saveContinueFlags;
    /* +0x018 */ u16 testimonyBeginningSection; // unity: bk_start_mess
    /* +0x01A */ s16 bgmFadeVolume; // unity: bgm_vol_next?
    /* +0x01C */ u8 soundStatus; // unity: sound_status, comes after currentPlayingBgm in unity?
    /* +0x01D */ u8 currentPlayingBgm; // unity: bgm_now
    /* +0x01E */ u8 allocatedObjPltts; // unity: Obj_plt_use_flag
    /* +0x01F */ u8 animationFlags; // unity: Obj_flag
    /* +0x020 */ s16 bgmFadeAmount; // unity: bgm_fade_time?
    /* +0x022 */ s16 bgmVolume; // unity: bgm_vol
    /* +0x024 */ u16 rngSeed; // unity: Random_seed
    /* +0x026 */ u8 gottenEvidenceType; // unity: get_note_file / only written to 
    /* +0x027 */ u8 gottenEvidenceId; // unity: get_note_id
    /* +0x028 */ u16 currentBG; // BG related code not in GlobalWork struct, this might be another struct on its own but i'm not sure
    /* +0x02A */ s16 previousBG; // probably wrong
    /* +0x02C */ s8 currentBgStripe; // maybe Bg256_rno_0?
    /* +0x02D */ u8 filler2D; // unused field maybe Bg256_SP_Flag? is disableDetentionCenterMaskInDetentionCenter in pwaa2
    /* +0x02E */ bool8 isBGScrolling; // unity AA4: Bg256_scroll_flag
    /* +0x02F */ u8 Bg256_stop_line; // unity AA4: Bg256_stop_line
    /* +0x030 */ s16 Bg256_scroll_x; // unity AA4: Bg256_scroll_x
    /* +0x032 */ s16 Bg256_scroll_y; // unity AA4: Bg256_scroll_y
    /* +0x034 */ s16 Bg256_pos_x; // unity AA4: Bg256_pos_x
    /* +0x036 */ s16 Bg256_pos_y; // unity AA4: Bg256_pos_y
    /* +0x038 */ u16 unused38; // unity AA4: Bg256_add? unused but is background related 100%
    /* +0x03A */ s16 Bg256_dir; // unity AA4: Bg256_dir
    /* +0x03C */ s8 horizontolBGScrollSpeed; // unity AA4: Bg256_scroll_speed_x
    /* +0x03D */ s8 verticalBGScrollSpeed; // unity AA4: Bg256_scroll_speed_y
    /* +0x03E */ s8 Bg256_next_line; // unity AA4: Bg256_next_line
    /* +0x03F */ s8 Bg256_buff_pos; // unity AA4: Bg256_buff_pos
    /* +0x040 */ u8 * bgStripeDestPtr; // unity AA4: Bg256_buff_adr
    /* +0x044 */ u32 bgStripeOffsets[12]; // unity AA4: Bg256_offset
    /* +0x074 */ u16 blendTarget; // unity: Fade_object
    /* +0x076 */ u16 blendMode; // unity: Fade_status
    /* +0x078 */ u16 blendCounter; // unity: Fade_timer
    /* +0x07A */ u8 blendDelay; // unity: fade_time
    /* +0x07B */ u8 blendDeltaY; // unity: fade_speed
    /* +0x07C */ u8 itemPlateEvidenceId;
    /* +0x07D */ u8 itemPlateState;
    /* +0x07E */ u8 itemPlateSide;
    /* +0x07F */ u8 itemPlateRotation; // used in Take That animation to spin the evidence around
    /* +0x080 */ s8 itemPlateSize;
    /* +0x081 */ u8 itemPlateCounter; // counter which was most likely used to slow down the speed which the item plate changes size 
    /* +0x082 */ u8 itemPlateAction;
    /* +0x083 */ u8 filler83[0x1]; // filler? might be related to itemPlateCounter
    /* +0x084 */ s16 affineScale; // used for the scale of oam sprites in court record, deliver judgement, episode unlocked
    /* +0x086 */ u16 xPosCounter; // used in episode selection menu
    /* +0x088 */ u8 damageFrame; // unity: Rest_type
    /* +0x089 */ u8 damageFrameTimer; // unity: Rest_timer
    /* +0x08A */ u8 previousHealth; // unity: rest_old
    /* +0x08B */ u8 filler8B; // unused
    /* +0x08C */ u8 currentRoomId; // unity: Room? uint in unity
    /* +0x08D */ u8 scenarioIdx; // unity: scenario, actually the script you're running
    /* +0x08E */ u8 caseEnabledFlags; // unity: Scenario_enable, whetever a case is enabled or not, unity names suck
    /* +0x08F */ s8 health; // unity: rest
    /* +0x090 */ u16 talkingAnimationOffset; // unity: Def_talk_foa
    /* +0x092 */ u16 idleAnimationOffset; // unity: Def_wait_foa
    /* +0x094 */ u32 scriptFlags[8]; // unity: sce_flag matches debug menu
    /* +0x0B4 */ u32 gameStateFlags; // unity: status_flag matches debug menu
    /* +0x0B8 */ u32 talkEndFlags[8]; // unity: talk_end_flag
    /* +0x0D8 */ u8 roomData[24][8]; // unity: Map_data //TODO: first size might be wrong
    /* +0x198 */ u32 soundFlags;
    /* +0x19C */ u32 unused19C; // bit 2 is set, never used
};

struct IORegisters
{
    /* +0x00 */ u16 lcd_bg0cnt;
    /* +0x02 */ u16 lcd_bg1cnt;
    /* +0x04 */ u16 lcd_bg2cnt;
    /* +0x06 */ u16 lcd_bg3cnt;
    /* +0x08 */ u16 lcd_bg0hofs;
    /* +0x0A */ u16 lcd_bg0vofs;
    /* +0x0C */ u16 lcd_bg1hofs;
    /* +0x0E */ u16 lcd_bg1vofs;
    /* +0x10 */ u16 lcd_bg2hofs;
    /* +0x12 */ u16 lcd_bg2vofs;
    /* +0x14 */ u16 lcd_bg3hofs;
    /* +0x16 */ u16 lcd_bg3vofs;
    /* +0x18 */ u16 lcd_bg2pa;
    /* +0x1A */ u16 lcd_bg2pb;
    /* +0x1C */ u16 lcd_bg2pc;
    /* +0x1E */ u16 lcd_bg2pd;
    /* +0x20 */ u32 lcd_bg2x;
    /* +0x24 */ u32 lcd_bg2y;
    /* +0x28 */ u16 lcd_bg3pa;
    /* +0x2A */ u16 lcd_bg3pb;
    /* +0x2C */ u16 lcd_bg3pc;
    /* +0x2E */ u16 lcd_bg3pd;
    /* +0x30 */ u32 lcd_bg3x;
    /* +0x34 */ u32 lcd_bg3y;
    /* +0x38 */ u16 lcd_win0h;
    /* +0x3A */ u16 lcd_win1h;
    /* +0x3C */ u16 lcd_win0v;
    /* +0x3E */ u16 lcd_win1v;
    /* +0x40 */ u16 lcd_winin;
    /* +0x42 */ u16 lcd_winout;
    /* +0x44 */ u16 lcd_mosaic;
    /* +0x46 */ u8 filler46[2]; 
    /* +0x48 */ u16 lcd_bldcnt;
    /* +0x4A */ u16 lcd_dispcnt;
    /* +0x4C */ u16 lcd_bldalpha;
    /* +0x4E */ u16 lcd_bldy;
    /* +0x50 */ u16 iwp_ie;
    /* +0x52 */ u16 lcd_dispstat;
};

struct OamAttrs 
{
    /* +0x00 */ u16 attr0;
    /* +0x02 */ u16 attr1;
    /* +0x04 */ u16 attr2;
    /* +0x06 */ u16 attr3;
};

extern struct Joypad gJoypad;
extern struct Main gMain;
extern struct IORegisters gIORegisters;
extern struct OamAttrs gOamObjects[128];

#define GAME_PROCESS 0
#define GAME_PROCESS_STATE 1
#define GAME_PROCESS_VAR1 2
#define GAME_PROCESS_VAR2 3

#define SET_PROCESS_PTR(no_0, no_1, no_2, no_3, main) (*(u32*)main->process = ((no_0) | ((no_1) << 8) | ((no_2) << 16) | ((no_3) << 24)))
#define SET_PROCESS(no_0, no_1, no_2, no_3) (*(u32*)gMain.process = ((no_0) | ((no_1) << 8) | ((no_2) << 16) | ((no_3) << 24)))
#define SET_PROCESS_BACKUP_PTR(no_0, no_1, no_2, no_3, main) (*(u32*)main->processCopy = ((no_0) | ((no_1) << 8) | ((no_2) << 16) | ((no_3) << 24)))
#define BACKUP_PROCESS() (*(u32*)gMain.processCopy = *(u32*)gMain.process)
#define BACKUP_PROCESS_PTR(main) (*(u32*)main->processCopy = *(u32*)gMain.process)
#define RESTORE_PROCESS_PTR(main) (*(u32*)gMain.process = *(u32*)main->processCopy)

void ClearRamAndInitGame();
void HideAllSprites();
void SetLCDIORegs();
void SetTimedKeysAndDelay(u32 keyBits, u32 delay);
u32 ReadKeysAndTestResetCombo();
void StartHardwareBlend(u32 mode, u32 delay, u32 deltaY, u32 target);
void InitCourtScroll(u8 *, u32, u32, u32);
void ResetGameState();

#endif//GUARD_MAIN_H