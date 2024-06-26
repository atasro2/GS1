#include "global.h"
#include "court_record.h"
#include "background.h"
#include "sound.h"
#include "animation.h"
#include "save.h"
#include "ewram.h"
#include "utils.h"
#include "court.h"
#include "script.h"
#include "case_data.h"
#include "investigation.h"
#include "graphics.h"
#include "constants/court_record.h"
#include "constants/script.h"
#include "constants/animation.h"
#include "constants/songs.h"
#include "constants/process.h"
#include "constants/oam_allocations.h"

struct EvidenceProfileData
{
    /* +0x00 */ u8 * descriptionTiles;
    /* +0x04 */ u16 evidenceImageId;
    /* +0x06 */ u16 evidenceDetailId;
};

const struct EvidenceProfileData gEvidenceProfileData[] = {
	{
		.descriptionTiles = gGfxProfilesMiaFey0_description,
		.evidenceImageId = 18,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesMayaFey0_description,
		.evidenceImageId = 23,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesLarryButz0_description,
		.evidenceImageId = 19,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesCindyStone_description,
		.evidenceImageId = 20,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesFrankSahwit_description,
		.evidenceImageId = 21,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesWinstonPayne_description,
		.evidenceImageId = 22,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericAutopsyReport0_description,
		.evidenceImageId = 16,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceTheThinker0_description,
		.evidenceImageId = 14,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceCindyStonesPassport_description,
		.evidenceImageId = 15,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericAffidavit0_description,
		.evidenceImageId = 17,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesMiaFey1_description,
		.evidenceImageId = 18,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesMayaFey1_description,
		.evidenceImageId = 23,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesMayaFey2_description,
		.evidenceImageId = 23,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesMayaFey3_description,
		.evidenceImageId = 23,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesMilesEdgeworth0_description,
		.evidenceImageId = 30,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesDickGumshoe_description,
		.evidenceImageId = 10,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesAprilMay0_description,
		.evidenceImageId = 11,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesAprilMay1_description,
		.evidenceImageId = 11,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesAprilMay2_description,
		.evidenceImageId = 11,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesReddWhite0_description,
		.evidenceImageId = 13,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesBellboy0_description,
		.evidenceImageId = 12,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesBellboy1_description,
		.evidenceImageId = 12,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesMarvinGrossberg_description,
		.evidenceImageId = 29,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidencePhoenixBadge_description,
		.evidenceImageId = 6,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericAutopsyReport1_description,
		.evidenceImageId = 16,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericLetter0_description,
		.evidenceImageId = 7,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceMayasCellphone_description,
		.evidenceImageId = 3,
		.evidenceDetailId = 2,
	},
	{
		.descriptionTiles = gGfxEvidenceGlassShards_description,
		.evidenceImageId = 26,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceTheThinker1_description,
		.evidenceImageId = 14,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceTheThinker2_description,
		.evidenceImageId = 14,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceMayaMemo_description,
		.evidenceImageId = 24,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceNoteFromTheSafe_description,
		.evidenceImageId = 8,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceWiretap_description,
		.evidenceImageId = 2,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericAffidavit1_description,
		.evidenceImageId = 17,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesMistyFey0_description,
		.evidenceImageId = 28,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesReddWhite1_description,
		.evidenceImageId = 13,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericNewspaperClipping_description,
		.evidenceImageId = 27,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericPhoto0_description,
		.evidenceImageId = 9,
		.evidenceDetailId = 1,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericAffidavit2_description,
		.evidenceImageId = 17,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericAutopsyReport2_description,
		.evidenceImageId = 16,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericLetter1_description,
		.evidenceImageId = 7,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceLottasCamera0_description,
		.evidenceImageId = 1,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesWillPowers_description,
		.evidenceImageId = 43,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesWendyOldbag_description,
		.evidenceImageId = 48,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesJackHammer_description,
		.evidenceImageId = 47,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesPennyNichols_description,
		.evidenceImageId = 45,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesSalManella_description,
		.evidenceImageId = 46,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesDeeVasquez_description,
		.evidenceImageId = 44,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesCodyHackins_description,
		.evidenceImageId = 42,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericAffidavit3_description,
		.evidenceImageId = 17,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericAutopsyReport3_description,
		.evidenceImageId = 16,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGlobalStudiosCardKey_description,
		.evidenceImageId = 37,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericPhoto1_description,
		.evidenceImageId = 9,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericPhoto2_description,
		.evidenceImageId = 9,
		.evidenceDetailId = 3,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericPhoto3_description,
		.evidenceImageId = 9,
		.evidenceDetailId = 4,
	},
	{
		.descriptionTiles = gGfxEvidenceSteelSamuraiSpear0_description,
		.evidenceImageId = 25,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceSteelSamuraiSpear1_description,
		.evidenceImageId = 25,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceEmptyBottle0_description,
		.evidenceImageId = 33,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceKeyToCottage_description,
		.evidenceImageId = 38,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericLetter2_description,
		.evidenceImageId = 7,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceSteelSamuraiScript_description,
		.evidenceImageId = 34,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceMrMonkey_description,
		.evidenceImageId = 39,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceSteelSamuraiCards_description,
		.evidenceImageId = 31,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceSteelSamuraiUltraRareCard_description,
		.evidenceImageId = 32,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceCodysSteelSamuraiScrapbook_description,
		.evidenceImageId = 40,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceCodysDigitalCamera_description,
		.evidenceImageId = 35,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidencePlateWithSteakBones_description,
		.evidenceImageId = 36,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceEmptyBottle1_description,
		.evidenceImageId = 33,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericPhoto4_description,
		.evidenceImageId = 9,
		.evidenceDetailId = 5,
	},
	{
		.descriptionTiles = gGfxEvidenceGlobalStudiosVan_description,
		.evidenceImageId = 41,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceEmptyPlate_description,
		.evidenceImageId = 0,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesMilesEdgeworth1_description,
		.evidenceImageId = 30,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesLottaHart0_description,
		.evidenceImageId = 58,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesLottaHart1_description,
		.evidenceImageId = 58,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesLarryButz1_description,
		.evidenceImageId = 19,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesRobertHammond_description,
		.evidenceImageId = 61,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesMistyFey1_description,
		.evidenceImageId = 28,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesManfredVonKarma_description,
		.evidenceImageId = 59,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesGregoryEdgeworth_description,
		.evidenceImageId = 60,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesOldMan0_description,
		.evidenceImageId = 62,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesOldMan1_description,
		.evidenceImageId = 62,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceFirecrackers_description,
		.evidenceImageId = 49,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericAutopsyReport4_description,
		.evidenceImageId = 16,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericAutopsyReport5_description,
		.evidenceImageId = 16,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericAutopsyReport6_description,
		.evidenceImageId = 16,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceLottasCamera1_description,
		.evidenceImageId = 1,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericPhoto5_description,
		.evidenceImageId = 9,
		.evidenceDetailId = 6,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericPhoto6_description,
		.evidenceImageId = 9,
		.evidenceDetailId = 7,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericPhoto7_description,
		.evidenceImageId = 9,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxProfilesMistyFey2_description,
		.evidenceImageId = 28,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceArticleGourdy_description,
		.evidenceImageId = 4,
		.evidenceDetailId = 11,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericAffidavit4_description,
		.evidenceImageId = 17,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericPhoto8_description,
		.evidenceImageId = 9,
		.evidenceDetailId = 8,
	},
	{
		.descriptionTiles = gGfxEvidenceBullet0_description,
		.evidenceImageId = 5,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceBullet1_description,
		.evidenceImageId = 5,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidencePistol_description,
		.evidenceImageId = 50,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericAffidavit5_description,
		.evidenceImageId = 17,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceAirTube_description,
		.evidenceImageId = 51,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceMissile_description,
		.evidenceImageId = 53,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceFishingPole_description,
		.evidenceImageId = 56,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceMetalDetector_description,
		.evidenceImageId = 52,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidencePolly_description,
		.evidenceImageId = 57,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceYannisSafe_description,
		.evidenceImageId = 63,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericAutopsyReport7_description,
		.evidenceImageId = 16,
		.evidenceDetailId = 9,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericPhoto9_description,
		.evidenceImageId = 9,
		.evidenceDetailId = 10,
	},
	{
		.descriptionTiles = gGfxEvidenceGenericLetter3_description,
		.evidenceImageId = 7,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceDl6Bullet_description,
		.evidenceImageId = 55,
		.evidenceDetailId = 0,
	},
	{
		.descriptionTiles = gGfxEvidenceMissileAngry_description,
		.evidenceImageId = 54,
		.evidenceDetailId = 0,
	},
};

const u8 sCourtRecordLeftArrowTileIndexes[] = {0, 4, 8, 4};
const u8 sCourtRecordRightArrowTileIndexes[] = {12, 16, 20, 16};

void (*gCourtRecordProcessStates[8])(struct Main *, struct CourtRecord *) = {
	CourtRecordInit,
	CourtRecordMain,
	CourtRecordExit,
	CourtRecordChangeState,
	CourtRecordChangeRecord,
	CourtRecordDetailSubMenu,
	CourtRecordLoadGfxChangeState,
	CourtRecordTakeThatSpecial
};

void (*gEvidenceAddedProcessStates[3])(struct Main *, struct CourtRecord *) = {
	EvidenceAddedInit,
	EvidenceAddedMain,
	EvidenceAddedExit
};

void InitializeCourtRecordForScenario(struct Main * main, struct CourtRecord * courtRecord) // Status_init
{
    const u8 * recordIds;
    u32 i;

    for(i = 0; i < 32; i++)
        courtRecord->profileList[i] |= 0xFF;
    courtRecord->profileCount = 0;
    for(i = 0; i < 32; i++)
        courtRecord->evidenceList[i] |= 0xFF;
    courtRecord->evidenceCount = 0;
    recordIds = gCourtRecordInitialItemLists[main->scenarioIdx];
    for(i = 0; *recordIds != 0xFE; i++)
    {
        courtRecord->profileList[i] = *recordIds;
        courtRecord->profileCount++;
        recordIds++;
    }
    recordIds++;
    for(i = 0; *recordIds != 0xFF; i++)
    {
        courtRecord->evidenceList[i] = *recordIds;
        courtRecord->evidenceCount++;
        recordIds++;
    }
}

void CourtRecordProcess(struct Main * main) // Status
{
    gBG1MapBuffer[622] = 9;
    gBG1MapBuffer[623] = 9;
    gCourtRecordProcessStates[main->process[GAME_PROCESS_STATE]](main, &gCourtRecord);
}

void EvidenceAddedProcess(struct Main * main) // Note_add_disp
{
    gEvidenceAddedProcessStates[main->process[GAME_PROCESS_STATE]](main, &gCourtRecord);
}

void CourtRecordInit(struct Main * main, struct CourtRecord * courtRecord) // status_init
{
    u32 i;
    struct OamAttrs * oam;
    u16 * map = gBG2MapBuffer; 
    for(i = 0; i < 0x400; i++, map++)
        *map = 0;
    if(main->processCopy[GAME_PROCESS] != QUESTIONING_PROCESS)
    {
        if(main->processCopy[GAME_PROCESS] == INVESTIGATION_PROCESS && main->processCopy[GAME_PROCESS_STATE] < INVESTIGATION_INSPECT)
        {
            oam = &gOamObjects[OAM_IDX_INVESTIGATION_ACTIONS];
            for(i = 0; i < OAM_COUNT_INVESTIGATION_ACTIONS; i++)
            {
                oam->attr2 = SPRITE_ATTR2(0x100+i*0x20, 1, 5);
                oam++;
            }
        }
    }
    if(main->processCopy[GAME_PROCESS] == TESTIMONY_PROCESS)
    {
        oam = &gOamObjects[OAM_IDX_ITESTIMONY_INDICATOR];
        oam->attr0 = SPRITE_ATTR0_CLEAR;
    }
    if(main->process[GAME_PROCESS_VAR2] == 2)
    {
        oam = &gOamObjects[OAM_IDX_INVESTIGATION_ACTION_PRESENT];
        gOamObjects[OAM_IDX_INVESTIGATION_ACTION_PRESENT].attr2 = SPRITE_ATTR2(0x160, 1, 6);
    }
    gIORegisters.lcd_dispcnt |= DISPCNT_BG2_ON;
    gIORegisters.lcd_bg2cnt = BGCNT_PRIORITY(0) | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(30) | BGCNT_WRAP | BGCNT_TXT256x256;
    main->tilemapUpdateBits |= 0x4;
    courtRecord->flags = 0;
    courtRecord->selectedItem = 0;
    courtRecord->selectedItemBackup = 0;
    courtRecord->displayItemCount = courtRecord->evidenceCount;
    courtRecord->displayItemList = courtRecord->evidenceList;
    LoadEvidenceWindowGraphics();
    LoadEvidenceGraphics(courtRecord->displayItemList[courtRecord->selectedItem]);
    if(main->process[GAME_PROCESS_VAR2] == 1)
        SlideInBG2Window(2, 0xC);
    courtRecord->nextState = RECORD_MAIN;
    main->process[GAME_PROCESS_STATE] = RECORD_CHANGE_STATE;
}

//TODO: fix shit control flow, probably uses local variables to control the flow, don't have time to figure out how
void CourtRecordMain(struct Main * main, struct CourtRecord * courtRecord) // status_main
{
    struct Joypad * joypad = &gJoypad;
    struct OamAttrs * oam;
    u32 section;

    if(joypad->pressedKeys & L_BUTTON)
    {
        u32 evidenceId = courtRecord->displayItemList[courtRecord->selectedItem];
        if(gEvidenceProfileData[evidenceId].evidenceDetailId)
        {
            PauseBGM();
            PlaySE(SE001_MENU_CONFIRM);
            main->process[GAME_PROCESS_STATE] = RECORD_DETAIL_SUBMENU;
            main->process[GAME_PROCESS_VAR1] = 0;
            StartHardwareBlend(2, 1, 1, 0x1F);
            return;
        }
    }
    
    if(joypad->heldKeys & DPAD_RIGHT && courtRecord->displayItemCount > 1)
    {
        SlideInBG2Window(1, 0xC);
        if(--courtRecord->selectedItem > courtRecord->displayItemCount)
            courtRecord->selectedItem = courtRecord->displayItemCount-1;
        goto tailMerge; // compiler can do this but the if(main->process[GAME_PROCESS_VAR2] == 1) fucks up
    }
    else if (joypad->heldKeys & DPAD_LEFT && courtRecord->displayItemCount > 1)
    {
        SlideInBG2Window(2, 0xC);
        if(++courtRecord->selectedItem >= courtRecord->displayItemCount)
            courtRecord->selectedItem = 0;
        tailMerge:
        PlaySE(SE00C_MENU_CHANGE_PAGE);
        courtRecord->nextState = RECORD_MAIN;
        courtRecord->flags |= 2;
        DmaCopy16(3, OBJ_VRAM0+0x3C00, VRAM+0x1400, 0x1C00);
        DmaCopy16(3, OBJ_PLTT+0x20, PLTT+0x20, 0x20);
        UpdateEvidenceSprites(courtRecord);
        DmaCopy16(3, &gOamObjects[OAM_IDX_EVIDENCE_DISPLAY], OAM + OAM_IDX_EVIDENCE_DISPLAY*8, OAM_COUNT_EVIDENCE_DISPLAY*8);
        main->process[GAME_PROCESS_STATE] = RECORD_LOAD_GFX_CHANGE_STATE;
        if(main->process[GAME_PROCESS_VAR2] == 1)
        {
            goto label; // idk how to get the compiler to do this
        }
    }
    else if(main->process[GAME_PROCESS_VAR2] == 1) // in Questioning 
    {
        if(joypad->pressedKeys & A_BUTTON)
        {
            //u32 section;
            UpdateRecordInfoActionSprites(0);
            UpdateRecordPresentActionSprites(0);
            oam = gOamObjects + OAM_IDX_LR_ARROW;
            oam->attr0 = SPRITE_ATTR0_CLEAR;
            oam++;
            oam->attr0 = SPRITE_ATTR0_CLEAR;
            if(main->gameStateFlags & 0x200)
            {
                SlideInBG2Window(4, 0x12);
                SET_PROCESS_PTR(COURT_RECORD_PROCESS, RECORD_TAKE_THAT_SPECIAL, 0, 0, main);
                SetTextboxNametag(0, FALSE);
                main->gameStateFlags &= ~0x300;
                return;
            }
            if(main->gameStateFlags & 0x100)
            {
                PlayAnimation(ANIM_TAKETHAT_LEFT);
                PlaySE(SE00D_VOICE_PHOENIX_TAKE_THAT_JP);
            }
            else
            {
                PlayAnimation(ANIM_OBJECTION_LEFT);
                PlaySE(SE027_VOICE_PHOENIX_OBJECTION_JP);
            }
            StartHardwareBlend(3, 1, 4, 0x1F);
            gTestimony.timer = 0xA;
            gIORegisters.lcd_dispcnt &= ~DISPCNT_BG1_ON;
            main->advanceScriptContext = FALSE;
            main->showTextboxCharacters = FALSE;
            main->shakeTimer = 30;
            main->shakeIntensity = 1;
            main->gameStateFlags |= 1;
            gIORegisters.lcd_dispcnt &= ~DISPCNT_BG2_ON;
            ClearEvidenceSprites(courtRecord);
            section = GetQuestioningPresentedSection(gScriptContext.currentSection, courtRecord->displayItemList[courtRecord->selectedItem]);
            if(section != 0)
            {
                StopBGM();
                ChangeScriptSection(section);
                SET_PROCESS_BACKUP_PTR(COURT_PROCESS, COURT_MAIN, 0, 0, main);
            }
            else
            {
                u32 section = gScriptContext.currentSection;
                if(gScriptContext.flags & 0x10)
                    ChangeScriptSection(++section);
                else
                {
                    u32 rand = Random() & 3;
                    switch(rand)
                    {
                        case 0:
                            // could be a macro which would be cool
                            do {
                                ChangeScriptSection(0x1A);
                                gScriptContext.slamDesk = TRUE;
                            } while(0); // lolwut? needed for matching
                            break;
                        case 1:
                            ChangeScriptSection(0x1B);
                            gScriptContext.slamDesk = TRUE;
                            break;
                        case 2:
                            ChangeScriptSection(0x1C);
                            break;
                        case 3:
                            ChangeScriptSection(0x1D);
                            break;
                        default:
                            break;
                    }
                    gScriptContext.nextSection = section;
                }
                gScriptContext.flags &= ~0x10;
                SET_PROCESS_BACKUP_PTR(QUESTIONING_PROCESS, QUESTIONING_MAIN, 0, 0, main);
            }
            SET_PROCESS_PTR(QUESTIONING_PROCESS, QUESTIONING_OBJECTION, 0, 0, main);
            SetTextboxNametag(0, FALSE);
            main->gameStateFlags &= ~0x300;
            return;
        }
        if(!(main->gameStateFlags & 0x100))
        {
            if(joypad->pressedKeys & B_BUTTON)
            {
                PlaySE(SE002_MENU_CANCEL);
                SlideInBG2Window(4, 0xC);
                main->process[GAME_PROCESS_STATE] = RECORD_EXIT;
            }
        }
        label:
        if(main->processCopy[GAME_PROCESS] != INVESTIGATION_PROCESS)
            UpdateQuestioningMenuSprites(main, &gTestimony, 0);
        oam = &gOamObjects[OAM_IDX_BUTTON_PROMPTS+2];
        if(!(main->gameStateFlags & 0x100))
        {
            oam->attr0 = SPRITE_ATTR0(0, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_H_RECTANGLE);
            oam->attr1 = SPRITE_ATTR1_NONAFFINE(186, FALSE, FALSE, 2);
            oam->attr2 = SPRITE_ATTR2(0x190, 1, 5);
            oam++;
            oam->attr0 = SPRITE_ATTR0(0, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_H_RECTANGLE);
            oam->attr1 = SPRITE_ATTR1_NONAFFINE(218, FALSE, FALSE, 2);
            oam->attr2 = SPRITE_ATTR2(0x198, 1, 5);
        }
        else
        {
            oam->attr0 = SPRITE_ATTR0_CLEAR;
            oam++;
            oam->attr0 = SPRITE_ATTR0_CLEAR;
        }
    }
    else if(main->process[GAME_PROCESS_VAR2] == 2) // in Talk menu
    {
        //u32 section;
        if(joypad->pressedKeys & A_BUTTON)
        {
            PlaySE(SE001_MENU_CONFIRM);
            section = GetEvidenceCommentSection(main, courtRecord->displayItemList[courtRecord->selectedItem]);
            ChangeScriptSection(section);
            SlideTextbox(1);
            ClearEvidenceSprites(courtRecord);
            UpdateRecordInfoActionSprites(0);
            UpdateRecordPresentActionSprites(0);
            gIORegisters.lcd_dispcnt &= ~DISPCNT_BG2_ON;
            oam = gOamObjects + OAM_IDX_LR_ARROW;
            oam->attr0 = SPRITE_ATTR0_CLEAR;
            oam++;
            oam->attr0 = SPRITE_ATTR0_CLEAR;
            gInvestigation.actionState = 3;
            gInvestigation.inactiveActions = 8;
            gInvestigation.inactiveActionButtonY = 0xF0;
            RESTORE_PROCESS_PTR(main);
            return;
        }
        else if(joypad->pressedKeys & B_BUTTON)
        {
            PlaySE(SE002_MENU_CANCEL);
            SlideInBG2Window(3, 0xC);
            SET_PROCESS_BACKUP_PTR(INVESTIGATION_PROCESS, INVESTIGATION_PRESENT, 3, 0, main);
            main->process[GAME_PROCESS_STATE] = RECORD_EXIT;
        }
    }
    else // Normal court record
    {
        if(joypad->pressedKeys & R_BUTTON)
        {
            PlaySE(SE00A_SWITCH_RECORD);
            SlideInBG2Window(0x3, 0xC);
            courtRecord->nextState = RECORD_CHANGE_RECORD;
            main->process[GAME_PROCESS_STATE] = RECORD_CHANGE_RECORD;
        }
        else if(joypad->pressedKeys & B_BUTTON)
        {
            PlaySE(SE002_MENU_CANCEL);
            SlideInBG2Window(0x3, 0xC);
            main->process[GAME_PROCESS_STATE] = RECORD_EXIT;
        }
    }
    UpdateBG2Window(&gCourtRecord);
    UpdateRecordSprites(&gCourtRecord);
}

void CourtRecordExit(struct Main * main, struct CourtRecord * courtRecord) // status_exit
{
    struct OamAttrs * oam;
    if(main->process[GAME_PROCESS_VAR2] == 2 && courtRecord->windowTileX > 8)
    {
        u16 attr1;
        oam = &gOamObjects[OAM_IDX_INVESTIGATION_ACTION_PRESENT];
        attr1 = oam->attr1 & ~0x1FF;
        oam->attr1 += 12;
        oam->attr1 &= 0x1FF;
        if(oam->attr1 >= 0xB4)
            oam->attr1 = 0xB4;
        oam->attr1 |= attr1;
    }
    UpdateBG2Window(courtRecord);
    UpdateRecordSprites(courtRecord);
    if(courtRecord->windowScrollSpeed == 0)
    {
        courtRecord->flags |= 4;
        courtRecord->flags &= ~2;
        if(main->process[GAME_PROCESS_VAR2] == 0 && !(gScriptContext.flags & SCRIPT_FULLSCREEN))
        {
            gBG1MapBuffer[622] = 0x20;
            gBG1MapBuffer[623] = 0x21;
        }
        RESTORE_PROCESS_PTR(main);
    }
}

void CourtRecordChangeState(struct Main * main, struct CourtRecord * courtRecord) // status_wait
{
    struct OamAttrs * oam;
    if(main->process[GAME_PROCESS_VAR2] == 2 && courtRecord->windowTileX > 8)
    {
        u16 attr1;
        oam = &gOamObjects[OAM_IDX_INVESTIGATION_ACTION_PRESENT];
        attr1 = oam->attr1 & ~0x1FF;
        oam->attr1 -= 12;
        oam->attr1 &= 0x1FF;
        if(oam->attr1 >= 0x100) // what the fuck
            oam->attr1 = 0;
        oam->attr1 |= attr1;
    }
    UpdateBG2Window(courtRecord);
    UpdateRecordSprites(courtRecord);
    if(courtRecord->windowScrollSpeed == 0)
    {
        courtRecord->flags |= 4;
        courtRecord->flags &= ~2;
        main->process[GAME_PROCESS_STATE] = courtRecord->nextState;
    }
}

void CourtRecordChangeRecord(struct Main * main, struct CourtRecord * courtRecord) // status_menu_change
{
    UpdateBG2Window(courtRecord);
    UpdateRecordSprites(courtRecord);
    if(courtRecord->windowScrollSpeed == 0)
    {
        u32 temp;
        courtRecord->flags &= ~2;
        SlideInBG2Window(2, 0xC);
        courtRecord->nextState = RECORD_MAIN;
        main->process[GAME_PROCESS_STATE] = RECORD_CHANGE_STATE;
        temp = courtRecord->selectedItem;
        courtRecord->selectedItem = courtRecord->selectedItemBackup;
        courtRecord->selectedItemBackup = temp;
        if(courtRecord->flags & COURT_RECORD_VIEW_PROFILES)
        {
            courtRecord->flags &= ~COURT_RECORD_VIEW_PROFILES;
            DmaCopy16(3, gGfxCourtRecordProfilesText, OBJ_VRAM0+0x3500, TILE_SIZE_4BPP*16);
            courtRecord->displayItemCount = courtRecord->evidenceCount;
            courtRecord->displayItemList = courtRecord->evidenceList;
        }
        else
        {
            courtRecord->flags |= COURT_RECORD_VIEW_PROFILES;
            DmaCopy16(3, gGfxCourtRecordEvidenceText, OBJ_VRAM0+0x3500, 0x200);
            courtRecord->displayItemCount = courtRecord->profileCount;
            courtRecord->displayItemList = courtRecord->profileList;
        }

        LoadEvidenceGraphics(courtRecord->displayItemList[courtRecord->selectedItem]);
    }
}

void CourtRecordDetailSubMenu(struct Main * main, struct CourtRecord * courtRecord) // status_exception ?
{
    u32 evidenceId;
    if(main->gameStateFlags & 1)
    {
        gIORegisters.lcd_bg3vofs = 8;
        gIORegisters.lcd_bg3hofs = 8;
        gIORegisters.lcd_bg1vofs = 0;
        gIORegisters.lcd_bg1hofs = 0;
    }
    switch(main->process[GAME_PROCESS_VAR1])
    {
        case 0:
        {
            struct OamAttrs * oam;
            u32 i;
            
            if(main->blendMode != 0)
                break;
            courtRecord->fullScreenPage = 0;
            evidenceId = courtRecord->displayItemList[courtRecord->selectedItem];
            DmaCopy16(3, &gMain, &gSaveDataBuffer.main, sizeof(struct Main));
            switch(gEvidenceProfileData[evidenceId].evidenceDetailId)
            {
                case 0:
                    break;
                case 1:
                    main->currentBG = 0x1D;
                    break;
                case 2:
                    main->currentBG = 0x2D;
                    break;
                case 3:
                    main->currentBG = 0x31;
                    break;
                case 4:
                    main->currentBG = 0x3D;
                    break;
                case 5:
                    main->currentBG = 0x39;
                    break;
                case 6:
                    main->currentBG = 0x5E;
                    break;
                case 7:
                    main->currentBG = 0x57;
                    break;
                case 8:
                    main->currentBG = 0x56;
                    break;
                case 9:
                    main->currentBG = 0x52;
                    break;
                case 10:
                    main->currentBG = 0x58;
                    break;
                case 11:
                    main->currentBG = 0x59;
                    break;
                default: 
                    break;
            }
            DecompressBackgroundIntoBuffer(main->currentBG);
            DmaCopy16(3, gOamObjects, gSaveDataBuffer.oam, sizeof(gOamObjects));
            DmaCopy16(3, gMapMarker, gSaveDataBuffer.mapMarker, sizeof(gMapMarker));
            for(i = 0; i < 8; i++)
                gMapMarker[i].id |= 0xFF;
            if(main->processCopy[GAME_PROCESS] == INVESTIGATION_PROCESS)
            {
                oam = &gOamObjects[OAM_IDX_INVESTIGATION_ACTIONS];
                for(i = 0; i < OAM_COUNT_INVESTIGATION_ACTIONS; i++)
                {
                    oam->attr0 &= ~0x300;
                    oam->attr0 |= (ST_OAM_AFFINE_ERASE << 8);
                    oam++;
                }
            }
            else if(main->processCopy[GAME_PROCESS] == TESTIMONY_PROCESS)
            {
                oam = &gOamObjects[OAM_IDX_ITESTIMONY_INDICATOR];
                oam->attr0 = SPRITE_ATTR0_CLEAR;
            }
            else if(main->processCopy[GAME_PROCESS] == QUESTIONING_PROCESS)
            {
                oam = &gOamObjects[OAM_IDX_BUTTON_PROMPTS+2];
                oam->attr0 &= ~0x300;
                oam->attr0 |= (ST_OAM_AFFINE_ERASE << 8);
                oam++;
                oam->attr0 &= ~0x300;
                oam->attr0 |= (ST_OAM_AFFINE_ERASE << 8);
            }
            if(gScriptContext.flags & SCRIPT_SPOTSELECT_SELECTION_MADE)
            {
                oam = &gOamObjects[OAM_IDX_POINTER];
                oam->attr0 = SPRITE_ATTR0_CLEAR;
            }
            gSaveDataBuffer.main.showTextboxCharacters = main->showTextboxCharacters;
            main->showTextboxCharacters = FALSE;
            gIORegisters.lcd_dispcnt &= ~DISPCNT_BG1_ON;
            gIORegisters.lcd_dispcnt &= ~DISPCNT_BG2_ON;
            main->animationFlags &= ~(2 | 1);
            ClearEvidenceSprites(courtRecord);
            UpdateRecordInfoActionSprites(0);
            UpdateEvidenceDetailActionSprites(1);
            oam = gOamObjects + OAM_IDX_LR_ARROW;
            oam->attr0 = SPRITE_ATTR0_CLEAR;
            oam++;
            oam->attr0 = SPRITE_ATTR0_CLEAR;
            main->process[GAME_PROCESS_VAR1]++;
            break;
        }
        case 1:
            CopyBGDataToVram(main->currentBG);
            StartHardwareBlend(1, 1, 2, 0x1F);
            main->process[GAME_PROCESS_VAR1]++;
            break;
        case 2:
            if(main->blendMode != 0)
                break;
            if(gJoypad.pressedKeys & (L_BUTTON | B_BUTTON))
            {
                PlaySE(SE002_MENU_CANCEL);
                StartHardwareBlend(2, 1, 1, 0x1F);
                main->process[GAME_PROCESS_VAR1]++;
            }
            else if(gJoypad.pressedKeys & (DPAD_DOWN | A_BUTTON))
            {
                evidenceId = courtRecord->displayItemList[courtRecord->selectedItem];
                if(gEvidenceProfileData[evidenceId].evidenceDetailId == 9 || gEvidenceProfileData[evidenceId].evidenceDetailId == 2)
                {
                    PlaySE(SE001_MENU_CONFIRM);
                    courtRecord->fullScreenPage++;
                    if(courtRecord->fullScreenPage > 2)
                        courtRecord->fullScreenPage = 0;
                    StartHardwareBlend(2, 1, 2, 0x1F);
                    main->process[GAME_PROCESS_VAR1] = 6;
                }
            }
            break;
        case 3:
        {
            u32 i;
            if(main->blendMode != 0)
                break;
            main->currentBG = gSaveDataBuffer.main.currentBG;
            main->previousBG = gSaveDataBuffer.main.previousBG;
            main->currentBgStripe = gSaveDataBuffer.main.currentBgStripe;
            main->isBGScrolling = gSaveDataBuffer.main.isBGScrolling;
            main->Bg256_stop_line = gSaveDataBuffer.main.Bg256_stop_line;
            main->Bg256_scroll_x = gSaveDataBuffer.main.Bg256_scroll_x;
            main->Bg256_scroll_y = gSaveDataBuffer.main.Bg256_scroll_y;
            main->Bg256_pos_x = gSaveDataBuffer.main.Bg256_pos_x;
            main->Bg256_pos_y = gSaveDataBuffer.main.Bg256_pos_y;
            main->unused38 = gSaveDataBuffer.main.unused38;
            main->Bg256_dir = gSaveDataBuffer.main.Bg256_dir;
            main->horizontolBGScrollSpeed = gSaveDataBuffer.main.horizontolBGScrollSpeed;
            main->verticalBGScrollSpeed = gSaveDataBuffer.main.verticalBGScrollSpeed;
            main->Bg256_next_line = gSaveDataBuffer.main.Bg256_next_line;
            main->Bg256_buff_pos = gSaveDataBuffer.main.Bg256_buff_pos;
            main->bgStripeDestPtr = gSaveDataBuffer.main.bgStripeDestPtr;
            for(i = 0; i < 12; i++)
            {
                main->bgStripeOffsets[i] = gSaveDataBuffer.main.bgStripeOffsets[i];
            }
            DecompressBackgroundIntoBuffer(main->currentBG);
            CopyBGDataToVramAndScrollBG(main->currentBG);
            main->showTextboxCharacters = gSaveDataBuffer.main.showTextboxCharacters;
            gIORegisters.lcd_dispcnt |= DISPCNT_BG1_ON;
            gIORegisters.lcd_dispcnt |= DISPCNT_BG2_ON;
            DmaCopy16(3, gSaveDataBuffer.oam, gOamObjects, sizeof(gOamObjects));
            DmaCopy16(3, gSaveDataBuffer.mapMarker, gMapMarker, sizeof(gMapMarker));
            MakeMapMarkerSprites();
            if(main->processCopy[GAME_PROCESS] == TESTIMONY_PROCESS)
                gTestimony.timer = 0;
            main->animationFlags |= (2 | 1);
            UpdateBG2Window(&gCourtRecord);
            UpdateRecordSprites(&gCourtRecord);
            main->process[GAME_PROCESS_VAR1]++;
            break;
        }
        case 4:
            CopyBGDataToVramAndScrollBG(main->currentBG);
            StartHardwareBlend(1, 1, 2, 0x1F);
            main->process[GAME_PROCESS_VAR1]++;
            break;
        case 5:
        {
            if(main->blendMode == 0)
            {
                UnpauseBGM();
                main->process[GAME_PROCESS_STATE] = RECORD_MAIN;
                main->process[GAME_PROCESS_VAR1] = 0;
            }
            UpdateBG2Window(&gCourtRecord);
            UpdateRecordSprites(&gCourtRecord);
            break;
        }
        case 6:
        {
            if(main->blendMode != 0)
                break;
            evidenceId = courtRecord->displayItemList[courtRecord->selectedItem];
            if(gEvidenceProfileData[evidenceId].evidenceDetailId == 2)
            {
                switch(courtRecord->fullScreenPage)
                {
                    case 0:
                        main->currentBG = 0x2D;
                        break;
                    case 1:
                        main->currentBG = 0x2E;
                        break;
                    case 2:
                        main->currentBG = 0x30;
                        break;
                }
            }
            else
            {
                switch(courtRecord->fullScreenPage)
                {
                    case 0:
                        main->currentBG = 0x52;
                        break;
                    case 1:
                        main->currentBG = 0x53;
                        break;
                    case 2:
                        main->currentBG = 0x54;
                        break;
                }
            }
            DecompressBackgroundIntoBuffer(main->currentBG);
            CopyBGDataToVram(main->currentBG);
            StartHardwareBlend(1, 1, 2, 0x1F);
            main->process[GAME_PROCESS_VAR1] = 1;
            break;
        }
        default:
            break;
    }
}

void CourtRecordLoadGfxChangeState(struct Main * main, struct CourtRecord * courtRecord) // status_melt ?
{
    LoadEvidenceGraphics(courtRecord->displayItemList[courtRecord->selectedItem]);
    main->process[GAME_PROCESS_STATE] = RECORD_CHANGE_STATE;
}

void CourtRecordTakeThatSpecial(struct Main * main, struct CourtRecord * courtRecord) // status_effect ?
{
    struct OamAttrs * oam = &gOamObjects[OAM_IDX_TAKE_THAT_EVIDENCE_THROW];
    u32 evidenceId;
    u32 temp;

    switch(main->process[GAME_PROCESS_VAR1])
    {
        case 0:
            main->affineScale = 0;
            oam->attr0 = SPRITE_ATTR0_CLEAR;
            if(courtRecord->windowScrollSpeed == 0)
            {
                u32 offset;
                PlayAnimation(ANIM_TAKETHAT_LEFT);
                PlaySE(SE00D_VOICE_PHOENIX_TAKE_THAT_JP);
                gTestimony.timer = 6;
                evidenceId = courtRecord->displayItemList[courtRecord->selectedItem];
                offset = gEvidenceProfileData[evidenceId].evidenceImageId * (TILE_SIZE_4BPP * 64 + 0x20);
                temp = (uintptr_t)gGfxEvidenceProfilePictures + offset; //! Evil, uses a u32 for this pointer keep in mind and also global define
                DmaCopy16(3, temp, OBJ_PLTT+0x20, 0x20);
                temp = (uintptr_t)gGfxEvidenceProfilePictures + offset + 0x20;
                DmaCopy16(3, temp, OBJ_VRAM0+0x1000, TILE_SIZE_4BPP * 64);
                oam->attr0 = SPRITE_ATTR0(16, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
                oam->attr1 = SPRITE_ATTR1_NONAFFINE(88, FALSE, FALSE, 3);
                oam->attr2 = SPRITE_ATTR2(0x80, 0, 1);
                main->itemPlateRotation = 0;
                main->affineScale = 0x100;
                gIORegisters.lcd_dispcnt &= ~DISPCNT_BG1_ON;
                main->advanceScriptContext = FALSE;
                main->showTextboxCharacters = FALSE;
                main->process[GAME_PROCESS_VAR1]++;
                main->process[GAME_PROCESS_VAR2] = 0;
            }
            break;
        case 1:
        case 2:
            if(main->process[GAME_PROCESS_VAR2] >= 8)
            {
                StartHardwareBlend(3, 1, 6, 0x1F);
                main->process[GAME_PROCESS_VAR1]++;
                main->process[GAME_PROCESS_VAR2] = 0;
            }
            else
                main->process[GAME_PROCESS_VAR2]++;
            break;
        case 3:
            if(main->process[GAME_PROCESS_VAR2] >= 56)
            {
                u32 section;
                oam->attr0 = SPRITE_ATTR0_CLEAR;
                gInvestigation.selectedActionYOffset = 0;
                gInvestigation.lastActionYOffset = 8;
                gIORegisters.lcd_dispcnt |= DISPCNT_BG1_ON;
                main->advanceScriptContext = TRUE;
                main->showTextboxCharacters = TRUE;
                section = GetQuestioningPresentedSection(gScriptContext.currentSection, courtRecord->displayItemList[courtRecord->selectedItem]);
                if(section)
                {
                    ChangeScriptSection(section);
                    RESTORE_PROCESS_PTR(main);
                    return;
                }
                temp = gScriptContext.currentSection;
                if(gScriptContext.flags & 0x10)
                {
                    temp++;
                    ChangeScriptSection(temp);
                }
                else
                {
                    u32 rand = Random() & 3; 
                    switch(rand)
                    {
                        case 0:
                            ChangeScriptSection(0x1A);
                            break;
                        case 1:
                            ChangeScriptSection(0x1B);
                            break;
                        case 2:
                            ChangeScriptSection(0x1C);
                            break;
                        case 3:
                            ChangeScriptSection(0x1D);
                            break;
                        default:
                            break;
                    }
                    gScriptContext.nextSection = temp;
                }
                gScriptContext.flags &= ~0x10;
                RESTORE_PROCESS_PTR(main);
                return;
            }
            main->process[GAME_PROCESS_VAR2]++;
            main->itemPlateRotation += 12;
            main->affineScale -= 8;
            break;
        default:
            break;
    }
    if(main->affineScale <= 4)
        oam->attr0 = SPRITE_ATTR0_CLEAR;
    else
    {
        s32 scale;
        scale = fix_inverse(main->affineScale);
        gOamObjects[0].attr3 = fix_mul(_Cos(main->itemPlateRotation), scale);
        gOamObjects[1].attr3 = fix_mul(_Sin(main->itemPlateRotation), scale);
        gOamObjects[2].attr3 = fix_mul(-_Sin(main->itemPlateRotation), scale);
        gOamObjects[3].attr3 = fix_mul(_Cos(main->itemPlateRotation), scale);
        oam->attr0 = SPRITE_ATTR0(16, ST_OAM_AFFINE_NORMAL, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
        oam->attr1 = SPRITE_ATTR1_AFFINE(88, 0, 3);
        oam->attr2 = SPRITE_ATTR2(0x80, 0, 1);
    }
    UpdateBG2Window(&gCourtRecord);
    UpdateRecordSprites(&gCourtRecord);
}

void EvidenceAddedInit(struct Main * main, struct CourtRecord * courtRecord) // note_add_init
{
    u32 i;
    u16 * map = gBG2MapBuffer;
    for(i = 0; i < 0x400; i++, map++)
        *map = 0;
    gIORegisters.lcd_dispcnt |= DISPCNT_BG2_ON;
    LoadEvidenceWindowGraphics();
    LoadEvidenceGraphics(main->gottenEvidenceId);
    SetBGMVolume(main->bgmVolume >> 1, 4);
    PlaySE(BGM015_JINGLE_EVIDENCE);
    main->process[GAME_PROCESS_STATE]++;
    main->process[GAME_PROCESS_VAR1] = 0;
}

void EvidenceAddedMain(struct Main * main, struct CourtRecord * courtRecord) // note_add_main
{
    UpdateBG2Window(courtRecord);
    UpdateEvidenceSprites(courtRecord);
    if(courtRecord->windowScrollSpeed == 0 && gScriptContext.flags & 1)
    {
        if(main->process[GAME_PROCESS_VAR1] == 0)
        {
            SetBGMVolume(0x100, 0x1E);
            main->process[GAME_PROCESS_VAR1] = 1;
        }
        if(gJoypad.pressedKeys & (A_BUTTON|B_BUTTON))
        {
            PlaySE(SE001_MENU_CONFIRM);
            SlideInBG2Window(3, 0xE);
            main->process[GAME_PROCESS_STATE] = EVIDENCE_ADD_EXIT;
        }
    }
}

void EvidenceAddedExit(struct Main * main, struct CourtRecord * courtRecord) // note_add_exit
{
    UpdateBG2Window(courtRecord);
    UpdateEvidenceSprites(courtRecord);
    if(courtRecord->windowScrollSpeed == 0)
    {
        RESTORE_PROCESS_PTR(main);
        if(gMain.process[GAME_PROCESS] == INVESTIGATION_PROCESS)
        {
            if(gMain.process[GAME_PROCESS_STATE] == INVESTIGATION_INSPECT)
                SetInactiveActionButtons(&gInvestigation, 1);
            else if(main->process[GAME_PROCESS_STATE] == INVESTIGATION_TALK) //! why?? why???? why are you using that pointer when the other ones are noooot
                SetInactiveActionButtons(&gInvestigation, 4);
            else if(gMain.process[GAME_PROCESS_STATE] == INVESTIGATION_PRESENT)
                SetInactiveActionButtons(&gInvestigation, 8);
        }
        gScriptContext.flags |= 2;
    }
}

void UpdateCourtRecordArrows(struct CourtRecord * courtRecord)
{
    courtRecord->recordArrowCounter++;
    if(courtRecord->recordArrowCounter > 4)
    {
        courtRecord->recordArrowCounter = 0;
        courtRecord->recordArrowFrame++;
        courtRecord->recordArrowFrame &= 3;
        DmaCopy16(3, gGfx4bppTestimonyArrows + sCourtRecordLeftArrowTileIndexes[courtRecord->recordArrowFrame] * 32, OBJ_VRAM0+0x3400, TILE_SIZE_4BPP*4);
        DmaCopy16(3, gGfx4bppTestimonyArrows + sCourtRecordRightArrowTileIndexes[courtRecord->recordArrowFrame] * 32, OBJ_VRAM0+0x3480, TILE_SIZE_4BPP*4);
    }
}

void LoadEvidenceWindowGraphics()
{
    SlideInBG2Window(1, 0xC);
    DmaCopy16(3, gGfx4bppTestimonyArrows, OBJ_VRAM0+0x3400, TILE_SIZE_4BPP*4);
    DmaCopy16(3, gGfx4bppTestimonyArrows + TILE_SIZE_4BPP*4 * 3, OBJ_VRAM0+0x3480, TILE_SIZE_4BPP*4);
    DmaCopy16(3, gGfx4bppControllerButtons, OBJ_VRAM0+0x3800, TILE_SIZE_4BPP*16);
    DmaCopy16(3, gGfxCourtRecordPresentBackText, OBJ_VRAM0+0x3A00, TILE_SIZE_4BPP*16);
    DmaCopy16(3, gGfxCourtRecordProfilesText, OBJ_VRAM0+0x3500, TILE_SIZE_4BPP*16);
    DmaCopy16(3, gPalCrossExaminationUI, OBJ_PLTT+0x60, 0x20);
    DmaCopy16(3, gPalCourtRecordControlsBlurb, OBJ_PLTT+0x80, 0x20);
    DmaCopy16(3, gPalEvidenceProfileDesc, OBJ_PLTT+0x40, 0x20);
}

void UpdateRecordSprites(struct CourtRecord * courtRecord)
{
    struct OamAttrs * oam;
    UpdateEvidenceSprites(courtRecord);
    if(courtRecord->flags & 4)
    {
        UpdateCourtRecordArrows(courtRecord);
        oam = gOamObjects + OAM_IDX_LR_ARROW;
        if(courtRecord->displayItemCount > 1)
            oam->attr0 = SPRITE_ATTR0(48, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
        else
            oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam->attr1 = SPRITE_ATTR1_NONAFFINE(0, FALSE, FALSE, 1);
        oam->attr2 = SPRITE_ATTR2(0x1A0, 0, 3);
        oam++;
        if(courtRecord->displayItemCount > 1)
            oam->attr0 = SPRITE_ATTR0(48, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
        else
            oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam->attr1 = SPRITE_ATTR1_NONAFFINE(DISPLAY_WIDTH-16, FALSE, FALSE, 1);
        oam->attr2 = SPRITE_ATTR2(0x1A4, 0, 3);
        if(gMain.process[GAME_PROCESS_VAR2] == 0)
            UpdateRecordInfoActionSprites(1);
        else
            UpdateRecordPresentActionSprites(1);
        return;
    }
    else
    {
        oam = gOamObjects + OAM_IDX_LR_ARROW;
        oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam++;
        oam->attr0 = SPRITE_ATTR0_CLEAR;
        if(gMain.process[GAME_PROCESS_VAR2] == 0)
            UpdateRecordInfoActionSprites(0);
        else
            UpdateRecordPresentActionSprites(0);
    }
}

void LoadEvidenceGraphics(u32 evidenceId)
{
    u32 offset;
    u8 * src;

    offset = gEvidenceProfileData[evidenceId].evidenceImageId * (TILE_SIZE_4BPP * 64 + 0x20);
    src = gGfxEvidenceProfilePictures + offset;
    DmaCopy16(3, src, OBJ_PLTT+0x20, 0x20);
    src = gGfxEvidenceProfilePictures + offset + 0x20;
    DmaCopy16(3, src, OBJ_VRAM0+0x5000, TILE_SIZE_4BPP * 64);
    src = gEvidenceProfileData[evidenceId].descriptionTiles;
    LZ77UnCompWram(src, eGeneralScratchpadBuffer);
    DmaCopy16(3, eGeneralScratchpadBuffer, (void *)OBJ_VRAM0+0x3C00, TILE_SIZE_4BPP * 160);
}

void UpdateEvidenceSprites(struct CourtRecord * courtRecord)
{
    struct OamAttrs * oam = &gOamObjects[OAM_IDX_EVIDENCE_DISPLAY];
    u32 i;

    oam->attr0 = SPRITE_ATTR0(24, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
    oam->attr1 = SPRITE_ATTR1_NONAFFINE(0, FALSE, FALSE, 3);
    oam->attr1 += courtRecord->windowX;
    oam->attr2 = SPRITE_ATTR2(0x280, 0, 1);
    oam++;
    for(i = 0; i < 5; i++)
    {
        oam->attr0 = SPRITE_ATTR0(24, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
        oam->attr1 = SPRITE_ATTR1_NONAFFINE(72 + i*32, FALSE, FALSE, 2);
        oam->attr1 += courtRecord->windowX;
        oam->attr2 = SPRITE_ATTR2(0x1E0 + i*0x10, 0, 2);
        oam++;
    }
    for(i = 0; i < 5; i++)
    {
        oam->attr0 = SPRITE_ATTR0(56, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
        oam->attr1 = SPRITE_ATTR1_NONAFFINE(72 + i*32, FALSE, FALSE, 2);
        oam->attr1 += courtRecord->windowX;
        oam->attr2 = SPRITE_ATTR2(0x230 + i*0x10, 0, 2);
        oam++;
    }
}

void ClearEvidenceSprites(struct CourtRecord * courtRecord)
{
    struct OamAttrs * oam = &gOamObjects[OAM_IDX_EVIDENCE_DISPLAY];
    u32 i;
    oam->attr0 = SPRITE_ATTR0_CLEAR;
    oam++;
    for(i = 0; i < 10; i++)
    {
        oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam++;
    }
}

void UpdateRecordInfoActionSprites(bool32 showSprites)
{
    struct OamAttrs * oam = &gOamObjects[OAM_IDX_EVIDENCE_RECORD_ACTIONS];
    if(showSprites)
    {
        oam->attr0 = SPRITE_ATTR0(96, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
        oam->attr1 = SPRITE_ATTR1_NONAFFINE(160, FALSE, FALSE, 1);
        oam->attr2 = SPRITE_ATTR2(0x1C8, 0, 4);
        oam++;
        oam->attr0 = SPRITE_ATTR0(96, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_H_RECTANGLE);
        oam->attr1 = SPRITE_ATTR1_NONAFFINE(176, FALSE, FALSE, 2);
        oam->attr2 = SPRITE_ATTR2(0x1A8, 0, 4);
        oam++;
        oam->attr0 = SPRITE_ATTR0(96, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_H_RECTANGLE);
        oam->attr1 = SPRITE_ATTR1_NONAFFINE(208, FALSE, FALSE, 2);
        oam->attr2 = SPRITE_ATTR2(0x1B0, 0, 4);
        oam++;
        oam->attr0 = SPRITE_ATTR0_CLEAR;
    }
    else
    {
        oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam++;
        oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam++;
        oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam++;
        oam->attr0 = SPRITE_ATTR0_CLEAR;
    }
}

void UpdateRecordPresentActionSprites(bool32 showSprites)
{
    struct OamAttrs * oam = &gOamObjects[OAM_IDX_EVIDENCE_RECORD_ACTIONS];
    if(showSprites)
    {
        if(gMain.gameStateFlags & 0x100)
        {
            oam->attr0 = SPRITE_ATTR0(96, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
            oam->attr1 = SPRITE_ATTR1_NONAFFINE(200, FALSE, FALSE, 1);
            oam->attr2 = SPRITE_ATTR2(0x1C0, 0, 4);
            oam++;
            oam->attr0 = SPRITE_ATTR0(96, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_H_RECTANGLE);
            oam->attr1 = SPRITE_ATTR1_NONAFFINE(216, FALSE, FALSE, 2);
            oam->attr2 = SPRITE_ATTR2(0x1D0, 0, 4);
            oam++;
            oam->attr0 = SPRITE_ATTR0_CLEAR;
            oam++;
            oam->attr0 = SPRITE_ATTR0_CLEAR;
        }
        else
        {
            oam->attr0 = SPRITE_ATTR0(96, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
            oam->attr1 = SPRITE_ATTR1_NONAFFINE(140, FALSE, FALSE, 1);
            oam->attr2 = SPRITE_ATTR2(0x1C0, 0, 4);
            oam++;
            oam->attr0 = SPRITE_ATTR0(96, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_H_RECTANGLE);
            oam->attr1 = SPRITE_ATTR1_NONAFFINE(156, FALSE, FALSE, 2);
            oam->attr2 = SPRITE_ATTR2(0x1D0, 0, 4);
            oam++;
            oam->attr0 = SPRITE_ATTR0(96, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
            oam->attr1 = SPRITE_ATTR1_NONAFFINE(200, FALSE, FALSE, 1);
            oam->attr2 = SPRITE_ATTR2(0x1C4, 0, 4);
            oam++;
            oam->attr0 = SPRITE_ATTR0(96, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_H_RECTANGLE);
            oam->attr1 = SPRITE_ATTR1_NONAFFINE(216, FALSE, FALSE, 2);
            oam->attr2 = SPRITE_ATTR2(0x1D8, 0, 4);
        }
    }
    else
    {
        oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam++;
        oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam++;
        oam->attr0 = SPRITE_ATTR0_CLEAR;
        oam++;
        oam->attr0 = SPRITE_ATTR0_CLEAR;
    }
}

void UpdateEvidenceDetailActionSprites(bool32 showSprites)
{
    struct OamAttrs * oam = &gOamObjects[OAM_IDX_EVIDENCE_RECORD_ACTIONS];
    
    oam->attr0 = SPRITE_ATTR0_CLEAR;
    oam++;
    oam->attr0 = SPRITE_ATTR0(144, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
    oam->attr1 = SPRITE_ATTR1_NONAFFINE(184, FALSE, FALSE, 1);
    oam->attr2 = SPRITE_ATTR2(0x1C4, 0, 4);
    oam++;
    oam->attr0 = SPRITE_ATTR0(144, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
    oam->attr1 = SPRITE_ATTR1_NONAFFINE(200, FALSE, FALSE, 1);
    oam->attr2 = SPRITE_ATTR2(0x1CC, 0, 4);
    oam++;
    oam->attr0 = SPRITE_ATTR0(144, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_H_RECTANGLE);
    oam->attr1 = SPRITE_ATTR1_NONAFFINE(216, FALSE, FALSE, 2);
    oam->attr2 = SPRITE_ATTR2(0x1D8, 0, 4);
}

s32 FindEvidenceInCourtRecord(u32 isProfile, u32 evidenceId)
{
    u8 * list;
    u32 evidenceCount;
    u32 i;

    if(isProfile)
    {
        list = gCourtRecord.profileList;
        evidenceCount = gCourtRecord.profileCount;
    }
    else
    {
        list = gCourtRecord.evidenceList;
        evidenceCount = gCourtRecord.evidenceCount;
    }
    for(i = 0; i < evidenceCount; i++, list++)
    {
        if(*list == evidenceId)
            return i;
    }
    return -1;
}

s32 FindFirstEmptySlotInCourtRecord(u32 isProfile)
{
    u32 i;
    u8 * list = gCourtRecord.evidenceList;
    if(isProfile)
        list = gCourtRecord.profileList;
    for(i = 0; i < 0x20; i++, list++)
    {
        if(*list == 0xFF)
            return i;
    }
    return -1;
}

void SortCourtRecordAndSyncListCount(struct CourtRecord * courtRecord)
{
    u8 * ewram = eGeneralScratchpadBuffer;
    u32 i;

    DmaCopy16(3, courtRecord->profileList, ewram, 0x20);
    DmaFill16(3, 0xFFFF, courtRecord->profileList, 0x20);
    courtRecord->profileCount = 0;
    for(i = 0; i < 0x20; i++)
    {
        if(ewram[i] != 0xFF)
        {
            courtRecord->profileList[courtRecord->profileCount] = ewram[i];
            courtRecord->profileCount++;
        }
    }
    DmaCopy16(3, courtRecord->evidenceList, ewram, 0x20);
    DmaFill16(3, 0xFFFF, courtRecord->evidenceList, 0x20);
    courtRecord->evidenceCount = 0;
    for(i = 0; i < 0x20; i++)
    {
        if(ewram[i] != 0xFF)
        {
            courtRecord->evidenceList[courtRecord->evidenceCount] = ewram[i];
            courtRecord->evidenceCount++;
        }
    }
}

u32 GetQuestioningPresentedSection(u32 section, u32 evidenceId)
{
    const struct CourtPresentData * presentData;
    presentData = gCourtPresentData[gMain.scenarioIdx];
    for(; presentData->presentingSection != 0xFFFF; presentData++)
    {
        if(presentData->flagId != 0xFF)
        {
            if(!GetFlag(0, presentData->flagId))
                continue;
        }
        if(presentData->presentingSection == section && presentData->evidenceId == evidenceId)
        {
            if(presentData->action != 0)
                gScriptContext.slamDesk = FALSE;
            else
                gScriptContext.slamDesk = TRUE;
            return presentData->presentedSection;
        }
    }
    gScriptContext.slamDesk = FALSE;
    return 0;
}

u32 GetEvidenceCommentSection(struct Main * main, u32 evidenceId)
{
    const struct InvestigationPresentData * presetData;
    u32 retVal;

    presetData = gInvestigationPresentData[main->scenarioIdx];
    retVal = presetData->uninterestedSection;
    for(; presetData->end != 0xFF; presetData++)
    {
        if(gAnimation[1].animationInfo.personId == presetData->personId)
        {
            if(main->currentRoomId == presetData->roomId)
            {
                retVal = presetData->uninterestedSection;
                if(evidenceId == presetData->evidenceId)
                    return presetData->interestedSection;
            }
        }
    }

    return retVal;
}

void UpdateItemPlate(struct Main * main)
{
    struct OamAttrs * oam = &gOamObjects[OAM_IDX_POINTER];
    switch(main->itemPlateState)
    {
        case 0:
        default:
            break;
        case 1:
            oam->attr0 = SPRITE_ATTR0_CLEAR;
            DmaCopy16(3, &gOamObjects[OAM_IDX_POINTER], OAM+OAM_IDX_POINTER*8, 0x8);
            if(main->itemPlateSide == 0)
                main->itemPlateAction = 4;
            else
                main->itemPlateAction = 6;
            main->itemPlateState++;
        case 2: // fallthrough
            DrawItemPlate(main);
            if(main->itemPlateAction == 2)
            {
                gBG0MapBuffer[GET_MAP_TILE_INDEX(1, 1, 0, 0)] = 0;
                gBG0MapBuffer[GET_MAP_TILE_INDEX(1, 2, 0, 0)] = 0;
                gBG0MapBuffer[GET_MAP_TILE_INDEX(2, 1, 0, 0)] = 0;
                gBG0MapBuffer[GET_MAP_TILE_INDEX(2, 2, 0, 0)] = 0;
                gBG0MapBuffer[GET_MAP_TILE_INDEX(1, 28, 0, 0)] = 0;
                gBG0MapBuffer[GET_MAP_TILE_INDEX(1, 27, 0, 0)] = 0;
                gBG0MapBuffer[GET_MAP_TILE_INDEX(2, 28, 0, 0)] = 0;
                gBG0MapBuffer[GET_MAP_TILE_INDEX(2, 27, 0, 0)] = 0;
                main->itemPlateState = 0;
            }
            break;
        case 3:
            LoadItemPlateGfx(main);
            if(main->itemPlateSide == 0)
            {
                oam->attr1 = SPRITE_ATTR1_NONAFFINE(16, FALSE, FALSE, 3);
                main->itemPlateAction = 3;
            }
            else
            {
                oam->attr1 = SPRITE_ATTR1_NONAFFINE(160, FALSE, FALSE, 3);
                main->itemPlateAction = 5;
            }
            oam->attr0 = SPRITE_ATTR0_CLEAR;
            oam->attr2 = SPRITE_ATTR2(0x80, 0, 1);
            main->itemPlateState++;
        case 4: // fallthrough
            if(main->process[GAME_PROCESS] == SAVE_GAME_PROCESS)
            {
                main->itemPlateState = 6;
                return;
            }    
            DrawItemPlate(main);
            if(main->itemPlateAction == 1)
                oam->attr0 = SPRITE_ATTR0(16, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
            
            if(main->process[GAME_PROCESS] >= COURT_RECORD_PROCESS)
            {
                oam->attr0 = SPRITE_ATTR0_CLEAR;
                DmaCopy16(3, &gOamObjects[OAM_IDX_POINTER], OAM+OAM_IDX_POINTER*8, 0x8);
                gIORegisters.lcd_dispcnt &= ~DISPCNT_BG0_ON;
                main->itemPlateState++;
            }
            break;
        case 5:
            if(main->process[GAME_PROCESS] < COURT_RECORD_PROCESS)
            {
                LoadItemPlateGfx(main);
                oam->attr0 = SPRITE_ATTR0(16, ST_OAM_AFFINE_OFF, ST_OAM_OBJ_NORMAL, FALSE, ST_OAM_4BPP, ST_OAM_SQUARE);
                if(main->itemPlateSide == 0)
                    oam->attr1 = SPRITE_ATTR1_NONAFFINE(16, FALSE, FALSE, 3);
                else
                    oam->attr1 = SPRITE_ATTR1_NONAFFINE(160, FALSE, FALSE, 3);
                oam->attr2 = SPRITE_ATTR2(0x80, 0, 1);
                gIORegisters.lcd_dispcnt |= DISPCNT_BG0_ON;
                main->itemPlateState = 4;
            }
            break;
        case 6:
            if(main->process[GAME_PROCESS] != SAVE_GAME_PROCESS)
                main->itemPlateState = 5;
            break;
    }
}

void LoadItemPlateGfx(struct Main * main)
{
    u32 offset;
    u8 * src;

    offset = gEvidenceProfileData[main->itemPlateEvidenceId].evidenceImageId * (TILE_SIZE_4BPP * 64 + 0x20);
    src = gGfxEvidenceProfilePictures + offset;
    DmaCopy16(3, src, OBJ_PLTT+0x20, 0x20);
    src = gGfxEvidenceProfilePictures + offset + 0x20;
    DmaCopy16(3, src, OBJ_VRAM0+0x1000, TILE_SIZE_4BPP * 64);
}

void DrawItemPlate(struct Main * main) // how did i match this
{
    u16 * map;
    u32 i;

    if(main->itemPlateAction > 2)
    {
        map = gBG0MapBuffer+32; // start at y 1
        for(i = 0; i < 0x140; i++, map++)
            *map = 0;
    }
    switch(main->itemPlateAction)
    {
        case 0:
        case 1:
        case 2:
        default:
            break;
        case 3:
        case 4:
            map = gBG0MapBuffer+32+1;
            map++;
            for(i = 0; i < main->itemPlateSize+1; i++)
            {
                u32 j;
                for(j = 0; j < main->itemPlateSize; j++)
                    *map++ = 0x38;
                map += (0x20 - main->itemPlateSize);
            }
            map = gBG0MapBuffer+32+1;
            *map++ = 0x30;
            for(i = 0; i < main->itemPlateSize; i++)
                *map++ = 0x31;
            *map++ = 0x32;
            map = gBG0MapBuffer+32+1; 
            map += main->itemPlateSize*32 + 32;
            *map++ = 0x35;
            for(i = 0; i < main->itemPlateSize; i++)
                *map++ = 0x36;
            *map++ = 0x37;
            map = gBG0MapBuffer+32+1;
            map += 32;
            for(i = 0; i < main->itemPlateSize; i++)
            {
                *map = 0x33;
                map[main->itemPlateSize+1] = 0x34;
                map += 32;
            }
            break;
        case 5:
        case 6:
            map = gBG0MapBuffer+32+28;
            map--;
            for(i = 0; i < main->itemPlateSize+1; i++)
            {
                u32 j;
                for(j = 0; j < main->itemPlateSize; j++)
                    *map-- = 0x38;
                map += (0x20 + main->itemPlateSize);
            }
            map = gBG0MapBuffer+32+28;
            *map-- = 0x32;
            for(i = 0; i < main->itemPlateSize; i++)
                *map-- = 0x31;
            *map-- = 0x30;
            map = gBG0MapBuffer+32+28;
            map += main->itemPlateSize*32 + 32;
            *map-- = 0x37;
            for(i = 0; i < main->itemPlateSize; i++)
                *map-- = 0x36;
            *map-- = 0x35;
            map = gBG0MapBuffer+32+28;
            map += 32;
            for(i = 0; i < main->itemPlateSize; i++)
            {
                *map = 0x34;
                map[-main->itemPlateSize-1] = 0x33;
                map += 32;
            }
        break;
    }
    main->itemPlateCounter++;
    if(main->itemPlateCounter > 0)
    {
        main->itemPlateCounter = 0;
        if(main->itemPlateAction == 4 || main->itemPlateAction == 6)
        {
            if(main->itemPlateSize > 0)
            {
                main->itemPlateSize--;
                return;
            }
            main->itemPlateAction = 2;
        }
        else
        {
            if(main->itemPlateSize < 8)
            {
                main->itemPlateSize++;
                return;
            }
            main->itemPlateAction = 1;
        }
    }
}
