	.section gfx_data, "aw", %progbits
	.include "asm/macros.inc"

	.global gPalTitleScreen
gPalTitleScreen:
	.incbin "graphics/title_screen.gbapal"

	.global gGfx8lzTitleScreen
gGfx8lzTitleScreen:
	.incbin "graphics/title_screen.8bpp.lz"

	.global gPalTitleScreenDemo
gPalTitleScreenDemo:
	.incbin "graphics/title_screen_demo.gbapal"

	.global gGfx8lzTitleScreenDemo
gGfx8lzTitleScreenDemo:
	.incbin "graphics/title_screen_demo.8bpp.lz"

	.global gUnusedAsciiCharSet
gUnusedAsciiCharSet:
	.incbin "graphics/unused_ascii_charset.4bpp"

	.global gPalEvidenceProfileDesc
gPalEvidenceProfileDesc:
	.incbin "graphics/evidence_profile_descriptions/evidence_profile_descriptions.gbapal"

	.global gGfxSaveGameTiles
gGfxSaveGameTiles:
	.incbin "graphics/ui/message_box/save_game_tiles.4bpp"

	.global gGfx4bppNametags
gGfx4bppNametags:
	.incbin "graphics/ui/message_box/nametags.4bpp"

	.global gGfx4bppTestimonyArrows
gGfx4bppTestimonyArrows:
	.incbin "graphics/ui/left_right_arrows.4bpp"

	.global gGfx4bppTrialLife
gGfx4bppTrialLife:
	.incbin "graphics/ui/trial/exclamation_point.4bpp"

	.global gGfx4bppUnusedTestimonyCharacters
gGfx4bppUnusedTestimonyCharacters:
	.incbin "graphics/ui/trial/unused_testimony_characters.4bpp"

	.global gGfx4bppInvestigationActions
gGfx4bppInvestigationActions:
	.incbin "graphics/ui/investigation/action_buttons.4bpp"

	.global gGfx4bppControllerButtons
gGfx4bppControllerButtons:
	.incbin "graphics/ui/court_record/controller_buttons.4bpp"

	.global gGfx4bppInvestigationScrollButton
gGfx4bppInvestigationScrollButton:
	.incbin "graphics/ui/investigation/scroll_prompt.4bpp"

	.global gGfx4bppTestimonyTextTiles
gGfx4bppTestimonyTextTiles:
	.incbin "graphics/ui/trial/testimony_text_tiles.4bpp"

	.global gGfxTrialPressPresentButtons
gGfxTrialPressPresentButtons:
	.incbin "graphics/ui/trial/press_present_buttons.4bpp"

	.global gGfxCourtRecordPresentBackText
gGfxCourtRecordPresentBackText:
	.incbin "graphics/ui/court_record/present_back_text.4bpp"

	.global gGfxCourtRecordProfilesText
gGfxCourtRecordProfilesText:
	.incbin "graphics/ui/court_record/profiles_text.4bpp"

	.global gGfxCourtRecordEvidenceText
gGfxCourtRecordEvidenceText:
	.incbin "graphics/ui/court_record/evidence_text.4bpp"

	.global gGfxInvestigationExamineCursor
gGfxInvestigationExamineCursor:
	.incbin "graphics/ui/investigation/examine_cursor.4bpp"

	.global gGfxInvestigationCheckmark
gGfxInvestigationCheckmark:
	.incbin "graphics/ui/investigation/checkmark.4bpp"

	.global gGfxTrialGameOverDoors
gGfxTrialGameOverDoors:
	.incbin "graphics/ui/trial/game_over_doors.4bpp"

	.global gGfxTrialNotGuilty1
gGfxTrialNotGuilty1:
	.incbin "graphics/ui/trial/not_guilty1.4bpp"

	.global gGfxTrialGuilty1
gGfxTrialGuilty1:
	.incbin "graphics/ui/trial/guilty1.4bpp"

	.global gGfxTrialGuiltyNotGuilty2
gGfxTrialGuiltyNotGuilty2:
	.incbin "graphics/ui/trial/guilty_not_guilty2.4bpp"

	.global gGfxTrialGameOverText
gGfxTrialGameOverText:
	.incbin "graphics/ui/trial/game_over_text.4bpp"

	.global gGfxNewGameContinue
gGfxNewGameContinue:
	.incbin "graphics/ui/new_game_continue.4bpp"

	.global gGfxTrialConfetti
gGfxTrialConfetti:
	.incbin "graphics/ui/trial/confetti.4bpp"
	.incbin "graphics/unk_1940C0.gbapal"

	.global gPalCrossExaminationUI
gPalCrossExaminationUI:
	.incbin "graphics/ui/cross_examination_ui.gbapal"
	.incbin "graphics/unk_194100.gbapal"

	.global gPalActionButtons
gPalActionButtons:
	.incbin "graphics/ui/investigation/action_buttons_0.gbapal"
	.incbin "graphics/ui/investigation/action_buttons_1.gbapal"

	.global gPalCourtRecordControlsBlurb
gPalCourtRecordControlsBlurb:
	.incbin "graphics/ui/court_record/controls_blurb.gbapal"

	.global gPalInvestigationScrollPrompt
gPalInvestigationScrollPrompt:
	.incbin "graphics/ui/investigation/scroll_prompt.gbapal"

	.global gPalTrialTestimonyTextTiles
gPalTrialTestimonyTextTiles:
	.incbin "graphics/ui/trial/testimony_text_tiles.gbapal"

	.global gPalTrialPressPresentButtons
gPalTrialPressPresentButtons:
	.incbin "graphics/ui/trial/press_present_buttons.gbapal"

	.global gPalInvestigationExamineCursors
gPalInvestigationExamineCursors:
	.incbin "graphics/ui/investigation/examine_cursor_00.gbapal"
	.incbin "graphics/ui/investigation/examine_cursor_01.gbapal"
	.incbin "graphics/ui/investigation/examine_cursor_02.gbapal"
	.incbin "graphics/ui/investigation/examine_cursor_03.gbapal"
	.incbin "graphics/ui/investigation/examine_cursor_04.gbapal"
	.incbin "graphics/ui/investigation/examine_cursor_05.gbapal"
	.incbin "graphics/ui/investigation/examine_cursor_06.gbapal"
	.incbin "graphics/ui/investigation/examine_cursor_07.gbapal"
	.incbin "graphics/ui/investigation/examine_cursor_08.gbapal"
	.incbin "graphics/ui/investigation/examine_cursor_09.gbapal"
	.incbin "graphics/ui/investigation/examine_cursor_10.gbapal"
	.incbin "graphics/ui/investigation/examine_cursor_11.gbapal"
	.incbin "graphics/ui/investigation/examine_cursor_12.gbapal"
	.incbin "graphics/ui/investigation/examine_cursor_13.gbapal"
	.incbin "graphics/ui/investigation/examine_cursor_14.gbapal"
	.incbin "graphics/ui/investigation/examine_cursor_15.gbapal"
	.incbin "graphics/ui/investigation/examine_cursor_16.gbapal"

	.global gPalInvestigationCheckmark
gPalInvestigationCheckmark:
	.incbin "graphics/ui/investigation/checkmark.gbapal"

	.global gPalTrialGameOverDoors
gPalTrialGameOverDoors:
	.incbin "graphics/ui/trial/game_over_doors.gbapal"

	.global gPalTrialGuilty
gPalTrialGuilty:
	.incbin "graphics/ui/trial/guilty.gbapal"

	.global gPalTrialNotGuilty
gPalTrialNotGuilty:
	.incbin "graphics/ui/trial/not_guilty.gbapal"

	.global gPalTrialGameOverText
gPalTrialGameOverText:
	.incbin "graphics/ui/trial/game_over_text.gbapal"

	.global gPalNewGameContinue
gPalNewGameContinue:
	.incbin "graphics/ui/new_game_continue_0.gbapal"
	.incbin "graphics/ui/new_game_continue_1.gbapal"
	.incbin "graphics/ui/new_game_continue_2.gbapal"
	.incbin "graphics/ui/new_game_continue_3.gbapal"
	.incbin "graphics/ui/new_game_continue_4.gbapal"
	.incbin "graphics/ui/new_game_continue_5.gbapal"

	.global gPalConfetti
gPalConfetti:
	.incbin "graphics/ui/trial/confetti_0.gbapal"
	.incbin "graphics/ui/trial/confetti_1.gbapal"
	.incbin "graphics/ui/trial/confetti_2.gbapal"
	.incbin "graphics/ui/trial/confetti_3.gbapal"

	.global gGfx4lzEpisodeSelectOptions
gGfx4lzEpisodeSelectOptions:
	.incbin "graphics/episode_select_options.4bpp.lz"

	.global gGfxFromSaveOrBeginning
gGfxFromSaveOrBeginning:
	.incbin "graphics/from_save_or_beginning_options.4bpp"

	.global gGfxSaveYesOrNo
gGfxSaveYesOrNo:
	.incbin "graphics/save_yes_no.4bpp"

@ BEGIN PROFILE AND EVIDENCE DESCRIPTIONS

	.global gGfxProfilesMiaFey0_description
gGfxProfilesMiaFey0_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/mia_fey_0.4bpp.lz"

	.global gGfxProfilesMayaFey0_description
gGfxProfilesMayaFey0_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/maya_fey_0.4bpp.lz"

	.global gGfxProfilesLarryButz0_description
gGfxProfilesLarryButz0_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/larry_butz_0.4bpp.lz"

	.global gGfxProfilesCindyStone_description
gGfxProfilesCindyStone_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/cindy_stone.4bpp.lz"

	.global gGfxProfilesFrankSahwit_description
gGfxProfilesFrankSahwit_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/frank_sahwit.4bpp.lz"

	.global gGfxProfilesWinstonPayne_description
gGfxProfilesWinstonPayne_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/winston_payne.4bpp.lz"

	.global gGfxEvidenceGenericAutopsyReport0_description
gGfxEvidenceGenericAutopsyReport0_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_autopsy_report_0.4bpp.lz"

	.global gGfxEvidenceTheThinker0_description
gGfxEvidenceTheThinker0_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/the_thinker_0.4bpp.lz"

	.global gGfxEvidenceCindyStonesPassport_description
gGfxEvidenceCindyStonesPassport_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/cindy_stones_passport.4bpp.lz"

	.global gGfxEvidenceGenericAffidavit0_description
gGfxEvidenceGenericAffidavit0_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_affidavit_0.4bpp.lz"

	.global gGfxProfilesMiaFey1_description
gGfxProfilesMiaFey1_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/mia_fey_1.4bpp.lz"

	.global gGfxProfilesMayaFey1_description
gGfxProfilesMayaFey1_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/maya_fey_1.4bpp.lz"

	.global gGfxProfilesMayaFey2_description
gGfxProfilesMayaFey2_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/maya_fey_2.4bpp.lz"

	.global gGfxProfilesMayaFey3_description
gGfxProfilesMayaFey3_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/maya_fey_3.4bpp.lz"

	.global gGfxProfilesMilesEdgeworth0_description
gGfxProfilesMilesEdgeworth0_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/miles_edgeworth_0.4bpp.lz"

	.global gGfxProfilesDickGumshoe_description
gGfxProfilesDickGumshoe_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/dick_gumshoe.4bpp.lz"

	.global gGfxProfilesAprilMay0_description
gGfxProfilesAprilMay0_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/april_may_0.4bpp.lz"

	.global gGfxProfilesAprilMay1_description
gGfxProfilesAprilMay1_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/april_may_1.4bpp.lz"

	.global gGfxProfilesAprilMay2_description
gGfxProfilesAprilMay2_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/april_may_2.4bpp.lz"

	.global gGfxProfilesReddWhite0_description
gGfxProfilesReddWhite0_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/redd_white_0.4bpp.lz"

	.global gGfxProfilesBellboy0_description
gGfxProfilesBellboy0_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/bellboy_0.4bpp.lz"

	.global gGfxProfilesBellboy1_description
gGfxProfilesBellboy1_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/bellboy_1.4bpp.lz"

	.global gGfxProfilesMarvinGrossberg_description
gGfxProfilesMarvinGrossberg_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/marvin_grossberg.4bpp.lz"

	.global gGfxEvidencePhoenixBadge_description
gGfxEvidencePhoenixBadge_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/phoenix_badge.4bpp.lz"

	.global gGfxEvidenceGenericAutopsyReport1_description
gGfxEvidenceGenericAutopsyReport1_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_autopsy_report_1.4bpp.lz"

	.global gGfxEvidenceGenericLetter0_description
gGfxEvidenceGenericLetter0_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_letter_0.4bpp.lz"

	.global gGfxEvidenceMayasCellphone_description
gGfxEvidenceMayasCellphone_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/mayas_cellphone.4bpp.lz"

	.global gGfxEvidenceGlassShards_description
gGfxEvidenceGlassShards_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/glass_shards.4bpp.lz"

	.global gGfxEvidenceTheThinker1_description
gGfxEvidenceTheThinker1_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/the_thinker_1.4bpp.lz"

	.global gGfxEvidenceTheThinker2_description
gGfxEvidenceTheThinker2_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/the_thinker_2.4bpp.lz"

	.global gGfxEvidenceMayaMemo_description
gGfxEvidenceMayaMemo_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/maya_memo.4bpp.lz"

	.global gGfxEvidenceNoteFromTheSafe_description
gGfxEvidenceNoteFromTheSafe_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/note_from_the_safe.4bpp.lz"

	.global gGfxEvidenceWiretap_description
gGfxEvidenceWiretap_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/wiretap.4bpp.lz"

	.global gGfxEvidenceGenericAffidavit1_description
gGfxEvidenceGenericAffidavit1_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_affidavit_1.4bpp.lz"

	.global gGfxProfilesMistyFey0_description
gGfxProfilesMistyFey0_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/misty_fey_0.4bpp.lz"

	.global gGfxProfilesReddWhite1_description
gGfxProfilesReddWhite1_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/redd_white_1.4bpp.lz"

	.global gGfxEvidenceGenericNewspaperClipping_description
gGfxEvidenceGenericNewspaperClipping_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_newspaper_clipping.4bpp.lz"

	.global gGfxEvidenceGenericPhoto0_description
gGfxEvidenceGenericPhoto0_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_photo_0.4bpp.lz"

	.global gGfxEvidenceGenericAffidavit2_description
gGfxEvidenceGenericAffidavit2_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_affidavit_2.4bpp.lz"

	.global gGfxEvidenceGenericAutopsyReport2_description
gGfxEvidenceGenericAutopsyReport2_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_autopsy_report_2.4bpp.lz"

	.global gGfxEvidenceGenericLetter1_description
gGfxEvidenceGenericLetter1_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_letter_1.4bpp.lz"

	.global gGfxEvidenceLottasCamera0_description
gGfxEvidenceLottasCamera0_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/lottas_camera_0.4bpp.lz"

	.global gGfxProfilesWillPowers_description
gGfxProfilesWillPowers_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/will_powers.4bpp.lz"

	.global gGfxProfilesWendyOldbag_description
gGfxProfilesWendyOldbag_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/wendy_oldbag.4bpp.lz"

	.global gGfxProfilesJackHammer_description
gGfxProfilesJackHammer_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/jack_hammer.4bpp.lz"

	.global gGfxProfilesPennyNichols_description
gGfxProfilesPennyNichols_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/penny_nichols.4bpp.lz"

	.global gGfxProfilesSalManella_description
gGfxProfilesSalManella_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/sal_manella.4bpp.lz"

	.global gGfxProfilesDeeVasquez_description
gGfxProfilesDeeVasquez_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/dee_vasquez.4bpp.lz"

	.global gGfxProfilesCodyHackins_description
gGfxProfilesCodyHackins_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/cody_hackins.4bpp.lz"

	.global gGfxEvidenceGenericAffidavit3_description
gGfxEvidenceGenericAffidavit3_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_affidavit_3.4bpp.lz"

	.global gGfxEvidenceGenericAutopsyReport3_description
gGfxEvidenceGenericAutopsyReport3_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_autopsy_report_3.4bpp.lz"

	.global gGfxEvidenceGlobalStudiosCardKey_description
gGfxEvidenceGlobalStudiosCardKey_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/global_studios_card_key.4bpp.lz"

	.global gGfxEvidenceGenericPhoto1_description
gGfxEvidenceGenericPhoto1_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_photo_1.4bpp.lz"

	.global gGfxEvidenceGenericPhoto2_description
gGfxEvidenceGenericPhoto2_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_photo_2.4bpp.lz"

	.global gGfxEvidenceGenericPhoto3_description
gGfxEvidenceGenericPhoto3_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_photo_3.4bpp.lz"

	.global gGfxEvidenceSteelSamuraiSpear0_description
gGfxEvidenceSteelSamuraiSpear0_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/steel_samurai_spear_0.4bpp.lz"

	.global gGfxEvidenceSteelSamuraiSpear1_description
gGfxEvidenceSteelSamuraiSpear1_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/steel_samurai_spear_1.4bpp.lz"

	.global gGfxEvidenceEmptyBottle0_description
gGfxEvidenceEmptyBottle0_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/empty_bottle_0.4bpp.lz"

	.global gGfxEvidenceKeyToCottage_description
gGfxEvidenceKeyToCottage_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/key_to_cottage.4bpp.lz"

	.global gGfxEvidenceGenericLetter2_description
gGfxEvidenceGenericLetter2_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_letter_2.4bpp.lz"

	.global gGfxEvidenceSteelSamuraiScript_description
gGfxEvidenceSteelSamuraiScript_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/steel_samurai_script.4bpp.lz"

	.global gGfxEvidenceMrMonkey_description
gGfxEvidenceMrMonkey_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/mr_monkey.4bpp.lz"

	.global gGfxEvidenceSteelSamuraiCards_description
gGfxEvidenceSteelSamuraiCards_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/steel_samurai_cards.4bpp.lz"

	.global gGfxEvidenceSteelSamuraiUltraRareCard_description
gGfxEvidenceSteelSamuraiUltraRareCard_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/steel_samurai_ultra_rare_card.4bpp.lz"

	.global gGfxEvidenceCodysSteelSamuraiScrapbook_description
gGfxEvidenceCodysSteelSamuraiScrapbook_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/codys_steel_samurai_scrapbook.4bpp.lz"

	.global gGfxEvidenceCodysDigitalCamera_description
gGfxEvidenceCodysDigitalCamera_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/codys_digital_camera.4bpp.lz"

	.global gGfxEvidencePlateWithSteakBones_description
gGfxEvidencePlateWithSteakBones_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/plate_with_steak_bones.4bpp.lz"

	.global gGfxEvidenceEmptyBottle1_description
gGfxEvidenceEmptyBottle1_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/empty_bottle_1.4bpp.lz"

	.global gGfxEvidenceGenericPhoto4_description
gGfxEvidenceGenericPhoto4_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_photo_4.4bpp.lz"

	.global gGfxEvidenceGlobalStudiosVan_description
gGfxEvidenceGlobalStudiosVan_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/global_studios_van.4bpp.lz"

	.global gGfxEvidenceEmptyPlate_description
gGfxEvidenceEmptyPlate_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/empty_plate.4bpp.lz"

	.global gGfxProfilesMilesEdgeworth1_description
gGfxProfilesMilesEdgeworth1_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/miles_edgeworth_1.4bpp.lz"

	.global gGfxProfilesLottaHart0_description
gGfxProfilesLottaHart0_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/lotta_hart_0.4bpp.lz"

	.global gGfxProfilesLottaHart1_description
gGfxProfilesLottaHart1_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/lotta_hart_1.4bpp.lz"

	.global gGfxProfilesLarryButz1_description
gGfxProfilesLarryButz1_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/larry_butz_1.4bpp.lz"

	.global gGfxProfilesRobertHammond_description
gGfxProfilesRobertHammond_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/robert_hammond.4bpp.lz"

	.global gGfxProfilesMistyFey1_description
gGfxProfilesMistyFey1_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/misty_fey_1.4bpp.lz"

	.global gGfxProfilesManfredVonKarma_description
gGfxProfilesManfredVonKarma_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/manfred_von_karma.4bpp.lz"

	.global gGfxProfilesGregoryEdgeworth_description
gGfxProfilesGregoryEdgeworth_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/gregory_edgeworth.4bpp.lz"

	.global gGfxProfilesOldMan0_description
gGfxProfilesOldMan0_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/old_man_0.4bpp.lz"

	.global gGfxProfilesOldMan1_description
gGfxProfilesOldMan1_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/old_man_1.4bpp.lz"

	.global gGfxEvidenceFirecrackers_description
gGfxEvidenceFirecrackers_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/firecrackers.4bpp.lz"

	.global gGfxEvidenceGenericAutopsyReport4_description
gGfxEvidenceGenericAutopsyReport4_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_autopsy_report_4.4bpp.lz"

	.global gGfxEvidenceGenericAutopsyReport5_description
gGfxEvidenceGenericAutopsyReport5_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_autopsy_report_5.4bpp.lz"

	.global gGfxEvidenceGenericAutopsyReport6_description
gGfxEvidenceGenericAutopsyReport6_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_autopsy_report_6.4bpp.lz"

	.global gGfxEvidenceLottasCamera1_description
gGfxEvidenceLottasCamera1_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/lottas_camera_1.4bpp.lz"

	.global gGfxEvidenceGenericPhoto5_description
gGfxEvidenceGenericPhoto5_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_photo_5.4bpp.lz"

	.global gGfxEvidenceGenericPhoto6_description
gGfxEvidenceGenericPhoto6_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_photo_6.4bpp.lz"

	.global gGfxEvidenceGenericPhoto7_description
gGfxEvidenceGenericPhoto7_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_photo_7.4bpp.lz"

	.global gGfxProfilesMistyFey2_description
gGfxProfilesMistyFey2_description:
	.incbin "graphics/evidence_profile_descriptions/profiles/misty_fey_2.4bpp.lz"

	.global gGfxEvidenceArticleGourdy_description
gGfxEvidenceArticleGourdy_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/article_gourdy.4bpp.lz"

	.global gGfxEvidenceGenericAffidavit4_description
gGfxEvidenceGenericAffidavit4_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_affidavit_4.4bpp.lz"

	.global gGfxEvidenceGenericPhoto8_description
gGfxEvidenceGenericPhoto8_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_photo_8.4bpp.lz"

	.global gGfxEvidenceBullet0_description
gGfxEvidenceBullet0_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/bullet_0.4bpp.lz"

	.global gGfxEvidenceBullet1_description
gGfxEvidenceBullet1_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/bullet_1.4bpp.lz"

	.global gGfxEvidencePistol_description
gGfxEvidencePistol_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/pistol.4bpp.lz"

	.global gGfxEvidenceGenericAffidavit5_description
gGfxEvidenceGenericAffidavit5_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_affidavit_5.4bpp.lz"

	.global gGfxEvidenceAirTube_description
gGfxEvidenceAirTube_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/air_tube.4bpp.lz"

	.global gGfxEvidenceMissile_description
gGfxEvidenceMissile_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/missile.4bpp.lz"

	.global gGfxEvidenceFishingPole_description
gGfxEvidenceFishingPole_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/fishing_pole.4bpp.lz"

	.global gGfxEvidenceMetalDetector_description
gGfxEvidenceMetalDetector_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/metal_detector.4bpp.lz"

	.global gGfxEvidencePolly_description
gGfxEvidencePolly_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/polly.4bpp.lz"

	.global gGfxEvidenceYannisSafe_description
gGfxEvidenceYannisSafe_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/yannis_safe.4bpp.lz"

	.global gGfxEvidenceGenericAutopsyReport7_description
gGfxEvidenceGenericAutopsyReport7_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_autopsy_report_7.4bpp.lz"

	.global gGfxEvidenceGenericPhoto9_description
gGfxEvidenceGenericPhoto9_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_photo_9.4bpp.lz"

	.global gGfxEvidenceGenericLetter3_description
gGfxEvidenceGenericLetter3_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/generic_letter_3.4bpp.lz"

	.global gGfxEvidenceDl6Bullet_description
gGfxEvidenceDl6Bullet_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/dl-6_bullet.4bpp.lz"

	.global gGfxEvidenceMissileAngry_description
gGfxEvidenceMissileAngry_description:
	.incbin "graphics/evidence_profile_descriptions/evidence/missile_angry.4bpp.lz"

@ END EVIDENCE AND PROFILE DESCRIPTIONS

@ BEGIN EVIDENCE AND PROFILE PICTURES

	.global gGfxEvidenceProfilePictures
gGfxEvidenceProfilePictures:
	.incbin "graphics/evidence_profile_pictures/evidence/empty_plate.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/empty_plate.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/lottas_camera.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/lottas_camera.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/wiretap.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/wiretap.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/mayas_cellphone.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/mayas_cellphone.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/article_gourdy.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/article_gourdy.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/bullet.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/bullet.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/phoenix_badge.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/phoenix_badge.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/generic_letter.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/generic_letter.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/note_from_the_safe.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/note_from_the_safe.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/generic_photo.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/generic_photo.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/dick_gumshoe.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/dick_gumshoe.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/april_may.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/april_may.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/bellboy.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/bellboy.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/redd_white.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/redd_white.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/the_thinker.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/the_thinker.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/cindy_stones_passport.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/cindy_stones_passport.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/generic_autopsy_report.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/generic_autopsy_report.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/generic_affidavit.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/generic_affidavit.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/mia_fey.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/mia_fey.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/larry_butz.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/larry_butz.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/cindy_stone.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/cindy_stone.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/frank_sahwit.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/frank_sahwit.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/winston_payne.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/winston_payne.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/maya_fey.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/maya_fey.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/maya_memo.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/maya_memo.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/steel_samurai_spear.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/steel_samurai_spear.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/glass_shards.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/glass_shards.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/generic_newspaper_clipping.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/generic_newspaper_clipping.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/misty_fey.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/misty_fey.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/marvin_grossberg.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/marvin_grossberg.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/miles_edgeworth.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/miles_edgeworth.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/steel_samurai_cards.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/steel_samurai_cards.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/steel_samurai_ultra_rare_card.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/steel_samurai_ultra_rare_card.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/empty_bottle.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/empty_bottle.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/steel_samurai_script.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/steel_samurai_script.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/codys_digital_camera.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/codys_digital_camera.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/plate_with_steak_bones.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/plate_with_steak_bones.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/global_studios_card_key.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/global_studios_card_key.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/key_to_cottage.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/key_to_cottage.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/mr_monkey.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/mr_monkey.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/codys_steel_samurai_scrapbook.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/codys_steel_samurai_scrapbook.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/global_studios_van.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/global_studios_van.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/cody_hackins.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/cody_hackins.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/will_powers.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/will_powers.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/dee_vasquez.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/dee_vasquez.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/penny_nichols.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/penny_nichols.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/sal_manella.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/sal_manella.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/jack_hammer.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/jack_hammer.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/wendy_oldbag.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/wendy_oldbag.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/firecrackers.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/firecrackers.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/pistol.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/pistol.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/air_tube.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/air_tube.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/metal_detector.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/metal_detector.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/missile.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/missile.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/missile_angry.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/missile_angry.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/dl-6_bullet.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/dl-6_bullet.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/fishing_pole.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/fishing_pole.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/polly.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/polly.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/lotta_hart.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/lotta_hart.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/manfred_von_karma.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/manfred_von_karma.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/gregory_edgeworth.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/gregory_edgeworth.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/robert_hammond.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/robert_hammond.4bpp"

	.incbin "graphics/evidence_profile_pictures/profiles/old_man.gbapal"
	.incbin "graphics/evidence_profile_pictures/profiles/old_man.4bpp"

	.incbin "graphics/evidence_profile_pictures/evidence/yannis_safe.gbapal"
	.incbin "graphics/evidence_profile_pictures/evidence/yannis_safe.4bpp"

@ END EVIDENCE AND PROFILE PICTURES

	.global gTextPal
gTextPal:
	.incbin "graphics/charset.gbapal"

	.global gCharSet
gCharSet:  @ Charset
	.incbin "graphics/charset.4bpp"

@ BEGIN TALK AND LOCATION CHOICES

	.global gPalChoiceSelected
gPalChoiceSelected:
	.incbin "graphics/choice_selected.gbapal"

	.global gPalChoiceGreyedOut
gPalChoiceGreyedOut:
	.incbin "graphics/choice_greyed_out.gbapal"
	
@ first block of stuffs

	.global gGfxLocationChoices
gGfxLocationChoices:
	.incbin "graphics/location_choices/001FD96C.4bpp"
	.incbin "graphics/location_choices/001FE16C.4bpp"
	.incbin "graphics/location_choices/001FE96C.4bpp"
	.incbin "graphics/location_choices/001FF16C.4bpp"
	.incbin "graphics/location_choices/001FF96C.4bpp"
	.incbin "graphics/location_choices/0020016C.4bpp"
	.incbin "graphics/location_choices/0020096C.4bpp"
	.incbin "graphics/location_choices/0020116C.4bpp"
	.incbin "graphics/location_choices/0020196C.4bpp"
	.incbin "graphics/location_choices/0020216C.4bpp"
	.incbin "graphics/location_choices/0020296C.4bpp"
	.incbin "graphics/location_choices/0020316C.4bpp"
	.incbin "graphics/location_choices/0020396C.4bpp"
	.incbin "graphics/location_choices/0020416C.4bpp"
	.incbin "graphics/location_choices/0020496C.4bpp"
	.incbin "graphics/location_choices/0020516C.4bpp"
	.incbin "graphics/location_choices/0020596C.4bpp"
	.incbin "graphics/location_choices/0020616C.4bpp"
	.incbin "graphics/location_choices/0020696C.4bpp"
	.incbin "graphics/location_choices/0020716C.4bpp"
	.incbin "graphics/location_choices/0020796C.4bpp"

@ second block of stuffs

	.global gGfxTalkChoices
gGfxTalkChoices:
	.incbin "graphics/talk_choices/0020816C.4bpp"
	.incbin "graphics/talk_choices/0020896C.4bpp"
	.incbin "graphics/talk_choices/0020916C.4bpp"
	.incbin "graphics/talk_choices/0020996C.4bpp"
	.incbin "graphics/talk_choices/0020A16C.4bpp"
	.incbin "graphics/talk_choices/0020A96C.4bpp"
	.incbin "graphics/talk_choices/0020B16C.4bpp"
	.incbin "graphics/talk_choices/0020B96C.4bpp"
	.incbin "graphics/talk_choices/0020C16C.4bpp"
	.incbin "graphics/talk_choices/0020C96C.4bpp"
	.incbin "graphics/talk_choices/0020D16C.4bpp"
	.incbin "graphics/talk_choices/0020D96C.4bpp"
	.incbin "graphics/talk_choices/0020E16C.4bpp"
	.incbin "graphics/talk_choices/0020E96C.4bpp"
	.incbin "graphics/talk_choices/0020F16C.4bpp"
	.incbin "graphics/talk_choices/0020F96C.4bpp"
	.incbin "graphics/talk_choices/0021016C.4bpp"
	.incbin "graphics/talk_choices/0021096C.4bpp"
	.incbin "graphics/talk_choices/0021116C.4bpp"
	.incbin "graphics/talk_choices/0021196C.4bpp"
	.incbin "graphics/talk_choices/0021216C.4bpp"
	.incbin "graphics/talk_choices/0021296C.4bpp"
	.incbin "graphics/talk_choices/0021316C.4bpp"
	.incbin "graphics/talk_choices/0021396C.4bpp"
	.incbin "graphics/talk_choices/0021416C.4bpp"
	.incbin "graphics/talk_choices/0021496C.4bpp"
	.incbin "graphics/talk_choices/0021516C.4bpp"
	.incbin "graphics/talk_choices/0021596C.4bpp"
	.incbin "graphics/talk_choices/0021616C.4bpp"
	.incbin "graphics/talk_choices/0021696C.4bpp"
	.incbin "graphics/talk_choices/0021716C.4bpp"
	.incbin "graphics/talk_choices/0021796C.4bpp"
	.incbin "graphics/talk_choices/0021816C.4bpp"
	.incbin "graphics/talk_choices/0021896C.4bpp"
	.incbin "graphics/talk_choices/0021916C.4bpp"
	.incbin "graphics/talk_choices/0021996C.4bpp"
	.incbin "graphics/talk_choices/0021A16C.4bpp"
	.incbin "graphics/talk_choices/0021A96C.4bpp"
	.incbin "graphics/talk_choices/0021B16C.4bpp"
	.incbin "graphics/talk_choices/0021B96C.4bpp"
	.incbin "graphics/talk_choices/0021C16C.4bpp"
	.incbin "graphics/talk_choices/0021C96C.4bpp"
	.incbin "graphics/talk_choices/0021D16C.4bpp"
	.incbin "graphics/talk_choices/0021D96C.4bpp"
	.incbin "graphics/talk_choices/0021E16C.4bpp"
	.incbin "graphics/talk_choices/0021E96C.4bpp"
	.incbin "graphics/talk_choices/0021F16C.4bpp"
	.incbin "graphics/talk_choices/0021F96C.4bpp"
	.incbin "graphics/talk_choices/0022016C.4bpp"
	.incbin "graphics/talk_choices/0022096C.4bpp"
	.incbin "graphics/talk_choices/0022116C.4bpp"
	.incbin "graphics/talk_choices/0022196C.4bpp"
	.incbin "graphics/talk_choices/0022216C.4bpp"
	.incbin "graphics/talk_choices/0022296C.4bpp"
	.incbin "graphics/talk_choices/0022316C.4bpp"
	.incbin "graphics/talk_choices/0022396C.4bpp"
	.incbin "graphics/talk_choices/0022416C.4bpp"
	.incbin "graphics/talk_choices/0022496C.4bpp"
	.incbin "graphics/talk_choices/0022516C.4bpp"
	.incbin "graphics/talk_choices/0022596C.4bpp"
	.incbin "graphics/talk_choices/0022616C.4bpp"
	.incbin "graphics/talk_choices/0022696C.4bpp"
	.incbin "graphics/talk_choices/0022716C.4bpp"
	.incbin "graphics/talk_choices/0022796C.4bpp"
	.incbin "graphics/talk_choices/0022816C.4bpp"
	.incbin "graphics/talk_choices/0022896C.4bpp"
	.incbin "graphics/talk_choices/0022916C.4bpp"
	.incbin "graphics/talk_choices/0022996C.4bpp"
	.incbin "graphics/talk_choices/0022A16C.4bpp"
	.incbin "graphics/talk_choices/0022A96C.4bpp"
	.incbin "graphics/talk_choices/0022B16C.4bpp"
	.incbin "graphics/talk_choices/0022B96C.4bpp"
	.incbin "graphics/talk_choices/0022C16C.4bpp"
	.incbin "graphics/talk_choices/0022C96C.4bpp"
	.incbin "graphics/talk_choices/0022D16C.4bpp"
	.incbin "graphics/talk_choices/0022D96C.4bpp"
	.incbin "graphics/talk_choices/0022E16C.4bpp"
	.incbin "graphics/talk_choices/0022E96C.4bpp"
	.incbin "graphics/talk_choices/0022F16C.4bpp"
	.incbin "graphics/talk_choices/0022F96C.4bpp"
	.incbin "graphics/talk_choices/0023016C.4bpp"
	.incbin "graphics/talk_choices/0023096C.4bpp"
	.incbin "graphics/talk_choices/0023116C.4bpp"
	.incbin "graphics/talk_choices/0023196C.4bpp"
	.incbin "graphics/talk_choices/0023216C.4bpp"
	.incbin "graphics/talk_choices/0023296C.4bpp"
	.incbin "graphics/talk_choices/0023316C.4bpp"
	.incbin "graphics/talk_choices/0023396C.4bpp"
	.incbin "graphics/talk_choices/0023416C.4bpp"
	.incbin "graphics/talk_choices/0023496C.4bpp"
	.incbin "graphics/talk_choices/0023516C.4bpp"
	.incbin "graphics/talk_choices/0023596C.4bpp"
	.incbin "graphics/talk_choices/0023616C.4bpp"
	.incbin "graphics/talk_choices/0023696C.4bpp"
	.incbin "graphics/talk_choices/0023716C.4bpp"
	.incbin "graphics/talk_choices/0023796C.4bpp"
	.incbin "graphics/talk_choices/0023816C.4bpp"
	.incbin "graphics/talk_choices/0023896C.4bpp"
	.incbin "graphics/talk_choices/0023916C.4bpp"
	.incbin "graphics/talk_choices/0023996C.4bpp"
	.incbin "graphics/talk_choices/0023A16C.4bpp"
	.incbin "graphics/talk_choices/0023A96C.4bpp"
	.incbin "graphics/talk_choices/0023B16C.4bpp"
	.incbin "graphics/talk_choices/0023B96C.4bpp"
	.incbin "graphics/talk_choices/0023C16C.4bpp"
	.incbin "graphics/talk_choices/0023C96C.4bpp"
	.incbin "graphics/talk_choices/0023D16C.4bpp"
	.incbin "graphics/talk_choices/0023D96C.4bpp"
	.incbin "graphics/talk_choices/0023E16C.4bpp"
	.incbin "graphics/talk_choices/0023E96C.4bpp"
	.incbin "graphics/talk_choices/0023F16C.4bpp"
	.incbin "graphics/talk_choices/0023F96C.4bpp"
	.incbin "graphics/talk_choices/0024016C.4bpp"
	.incbin "graphics/talk_choices/0024096C.4bpp"
	.incbin "graphics/talk_choices/0024116C.4bpp"
	.incbin "graphics/talk_choices/0024196C.4bpp"
	.incbin "graphics/talk_choices/0024216C.4bpp"
	.incbin "graphics/talk_choices/0024296C.4bpp"
	.incbin "graphics/talk_choices/0024316C.4bpp"
	.incbin "graphics/talk_choices/0024396C.4bpp"
	.incbin "graphics/talk_choices/0024416C.4bpp"
	.incbin "graphics/talk_choices/0024496C.4bpp"
	.incbin "graphics/talk_choices/0024516C.4bpp"
	.incbin "graphics/talk_choices/0024596C.4bpp"
	.incbin "graphics/talk_choices/0024616C.4bpp"

@ END TALK AND LOCATION CHOICES

	.global gPalMapMarkersPalette
gPalMapMarkersPalette:
	.incbin "graphics/map_markers/palette.gbapal"

		.global gGfxMapMarkersKiller
gGfxMapMarkersKiller:
	.incbin "graphics/map_markers/killer.4bpp"

	.global gGfxMapMarkersVictim
gGfxMapMarkersVictim:
	.incbin "graphics/map_markers/victim.4bpp"

	.global gGfxMapMarkersCase2MiaBody
gGfxMapMarkersCase2MiaBody:
	.incbin "graphics/map_markers/case2_mia_body.4bpp"

	.global gGfxMapMarkersCase2Thinker
gGfxMapMarkersCase2Thinker:
	.incbin "graphics/map_markers/case2_thinker.4bpp"

	.global gGfxMapMarkersCase3Studio1
gGfxMapMarkersCase3Studio1:
	.incbin "graphics/map_markers/case3_studio_1.4bpp"

	.global gGfxMapMarkersCase3Studio2
gGfxMapMarkersCase3Studio2:
	.incbin "graphics/map_markers/case3_studio_2.4bpp"

	.global gGfxMapMarkersCase3EmployeeArea
gGfxMapMarkersCase3EmployeeArea:
	.incbin "graphics/map_markers/case3_employee_area.4bpp"

	.global gGfxMapMarkersCase3Gate
gGfxMapMarkersCase3Gate:
	.incbin "graphics/map_markers/case3_gate.4bpp"

	.global gGfxMapMarkersCase3MainGate
gGfxMapMarkersCase3MainGate:
	.incbin "graphics/map_markers/case3_main_gate.4bpp"

	.global gGfxMapMarkersGreen
gGfxMapMarkersGreen:
	.incbin "graphics/map_markers/green.4bpp"

	.global gGfxMapMarkersCase4BoatHorizontal
gGfxMapMarkersCase4BoatHorizontal:
	.incbin "graphics/map_markers/case4_boat_horizontal.4bpp"

	.global gGfxMapMarkersCase4BoatRentalShop
gGfxMapMarkersCase4BoatRentalShop:
	.incbin "graphics/map_markers/case4_boat_rental_shop.4bpp"

	.global gGfxMapMarkersCase4LottaSuv
gGfxMapMarkersCase4LottaSuv:
	.incbin "graphics/map_markers/case4_lotta_suv.4bpp"

	.global gGfxMapMarkersCase4BoatVertical
gGfxMapMarkersCase4BoatVertical:
	.incbin "graphics/map_markers/case4_boat_vertical.4bpp"

@ ; BEGIN BACKGROUNDS

	.global gGfx_BG000_FeyCoMurderNight
gGfx_BG000_FeyCoMurderNight:
	.incbin "graphics/striped_images/backgrounds/wright_co_law_offices/fey_co_murder_night.8bpp.striped"

	.global gGfx_BG001_WrightCoOfficeDay
gGfx_BG001_WrightCoOfficeDay:
	.incbin "graphics/striped_images/backgrounds/wright_co_law_offices/office_day.8bpp.striped"

	.global gGfx_BG002_CourtDefendantLobby
gGfx_BG002_CourtDefendantLobby:
	.incbin "graphics/striped_images/backgrounds/court/defendant_lobby.8bpp.striped"

	.global gGfx_BG003_CourtDefenseBench
gGfx_BG003_CourtDefenseBench:
	.incbin "graphics/striped_images/backgrounds/court/defense_bench.4bpp.striped"

	.global gGfx_BG004_CourtProsecutionBench
gGfx_BG004_CourtProsecutionBench:
	.incbin "graphics/striped_images/backgrounds/court/prosecution_bench.4bpp.striped"

	.global gGfx_BG005_CourtWitnessStand
gGfx_BG005_CourtWitnessStand:
	.incbin "graphics/striped_images/backgrounds/court/witness_stand.4bpp.striped"

	.global gGfx_BG006_CourtRoom
gGfx_BG006_CourtRoom:
	.incbin "graphics/striped_images/backgrounds/court/court_room.8bpp.striped"

	.global gGfx_BG007_CourtCoCounsel
gGfx_BG007_CourtCoCounsel:
	.incbin "graphics/striped_images/backgrounds/court/co_counsel.8bpp.striped"

	.global gGfx_BG008_CourtJudgeSeat
gGfx_BG008_CourtJudgeSeat:
	.incbin "graphics/striped_images/backgrounds/court/judge_seat.8bpp.striped"

	.global gGfx_BG009_FeyCoEntranceNight
gGfx_BG009_FeyCoEntranceNight:
	.incbin "graphics/striped_images/backgrounds/wright_co_law_offices/office_entry_night.8bpp.striped"

	.global gGfx_BG010_Case2MayaSeeingDeadMia
gGfx_BG010_Case2MayaSeeingDeadMia:
	.incbin "graphics/striped_images/backgrounds/cutscenes/case2/maya_seeing_dead_mia.8bpp.striped"

	.global gGfx_BG011_GlobalStudiosStudioPath
gGfx_BG011_GlobalStudiosStudioPath:
	.incbin "graphics/striped_images/backgrounds/global_studios/studio_path.8bpp.striped"

	.global gGfx_BG012_GlobalStudiosStaffArea
gGfx_BG012_GlobalStudiosStaffArea:
	.incbin "graphics/striped_images/backgrounds/global_studios/staff_area.8bpp.striped"

	.global gGfx_BG013_WitnessMiaDodgingRight
gGfx_BG013_WitnessMiaDodgingRight:
	.incbin "graphics/striped_images/backgrounds/witness_account/mia_dodging_right.4bpp.striped"

	.global gGfx_BG014_WitnessMiaDodgingLeft
gGfx_BG014_WitnessMiaDodgingLeft:
	.incbin "graphics/striped_images/backgrounds/witness_account/mia_dodging_left.4bpp.striped"

	.global gGfx_BG015_EvidenceFeyCoDiagram
gGfx_BG015_EvidenceFeyCoDiagram:
	.incbin "graphics/striped_images/backgrounds/evidence/fey_co_diagram.4bpp.striped"

	.global gGfx_BG016_WitnessAprilGettingRoomService
gGfx_BG016_WitnessAprilGettingRoomService:
	.incbin "graphics/striped_images/backgrounds/witness_account/april_getting_room_service.4bpp.striped"

	.global gGfx_BG017_Case2MiaDeadOnGround
gGfx_BG017_Case2MiaDeadOnGround:
	.incbin "graphics/striped_images/backgrounds/wright_co_law_offices/mia_dead_on_ground.8bpp.striped"

	.global gGfx_BG018_Case2PhoenixMayaMia
gGfx_BG018_Case2PhoenixMayaMia:
	.incbin "graphics/striped_images/backgrounds/cutscenes/case2/phoenix_maya_mia.8bpp.striped"

	.global gGfx_BG019_GlobalStudiosStudio2Trailer
gGfx_BG019_GlobalStudiosStudio2Trailer:
	.incbin "graphics/striped_images/backgrounds/global_studios/studio_2_trailer.8bpp.striped"

	.global gGfx_BG020_Case2AprilCallingPolice
gGfx_BG020_Case2AprilCallingPolice:
	.incbin "graphics/striped_images/backgrounds/cutscenes/case2/april_calling_police.8bpp.striped"

	.global gGfx_BG021_Case2ReddHittingMia
gGfx_BG021_Case2ReddHittingMia:
	.incbin "graphics/striped_images/backgrounds/cutscenes/case2/redd_hitting_mia.8bpp.striped"

	.global gGfx_BG022_Case2MiaBeingAttacked
gGfx_BG022_Case2MiaBeingAttacked:
	.incbin "graphics/striped_images/backgrounds/cutscenes/case2/mia_being_attacked.8bpp.striped"

	.global gGfx_BG023_Case2ReddHoldingThinker
gGfx_BG023_Case2ReddHoldingThinker:
	.incbin "graphics/striped_images/backgrounds/cutscenes/case2/redd_holding_thinker.4bpp.striped"

	.global gGfx_BG024_GlobalStudiosDressingRoom
gGfx_BG024_GlobalStudiosDressingRoom:
	.incbin "graphics/striped_images/backgrounds/global_studios/will_power_dressing_room.8bpp.striped"

	.global gGfx_BG025_GlobalStudiosFrontGate
gGfx_BG025_GlobalStudiosFrontGate:
	.incbin "graphics/striped_images/backgrounds/global_studios/front_gate.8bpp.striped"

	.global gGfx_BG026_GlobalStudiosStudio1
gGfx_BG026_GlobalStudiosStudio1:
	.incbin "graphics/striped_images/backgrounds/global_studios/studio_1.8bpp.striped"

	.global gGfx_BG027_Gavel2
gGfx_BG027_Gavel2:
	.incbin "graphics/striped_images/backgrounds/gavel/2.8bpp.striped"

	.global gGfx_BG028_Gavel3
gGfx_BG028_Gavel3:
	.incbin "graphics/striped_images/backgrounds/gavel/3.8bpp.striped"

	.global gGfx_BG029_EvidenceFeyCoDiagramLight
gGfx_BG029_EvidenceFeyCoDiagramLight:
	.incbin "graphics/striped_images/backgrounds/evidence/fey_co_diagram_light.4bpp.striped"

	.global gGfx_BG030_DetentionCenter
gGfx_BG030_DetentionCenter:
	.incbin "graphics/striped_images/backgrounds/detention_center.8bpp.striped"

	.global gGfx_BG031_BlueCorpCeoOffice
gGfx_BG031_BlueCorpCeoOffice:
	.incbin "graphics/striped_images/backgrounds/bluecorp_ceo_office.8bpp.striped"

	.global gGfx_BG032_GatewaterHotelRoom
gGfx_BG032_GatewaterHotelRoom:
	.incbin "graphics/striped_images/backgrounds/gatewater_hotelroom.8bpp.striped"

	.global gGfx_BG033_Case1FrankHoldingThinker
gGfx_BG033_Case1FrankHoldingThinker:
	.incbin "graphics/striped_images/backgrounds/cutscenes/case1/frank_holding_thinker.8bpp.striped"

	.global gGfx_BG034_Case1CindyDeadOnFloor
gGfx_BG034_Case1CindyDeadOnFloor:
	.incbin "graphics/striped_images/backgrounds/cutscenes/case1/cindy_dead_on_floor.8bpp.striped"

	.global gGfx_BG035_Case1CindyAndFrank
gGfx_BG035_Case1CindyAndFrank:
	.incbin "graphics/striped_images/backgrounds/cutscenes/case1/cindy_and_frank.8bpp.striped"

	.global gGfx_BG036_Case1FrankCloseup1
gGfx_BG036_Case1FrankCloseup1:
	.incbin "graphics/striped_images/backgrounds/cutscenes/case1/frank_closeup_1.8bpp.striped"

	.global gGfx_BG037_Case1FrankCloseup2
gGfx_BG037_Case1FrankCloseup2:
	.incbin "graphics/striped_images/backgrounds/cutscenes/case1/frank_closeup_2.8bpp.striped"

	.global gGfx_BG038_Case1FrankCloseup3
gGfx_BG038_Case1FrankCloseup3:
	.incbin "graphics/striped_images/backgrounds/cutscenes/case1/frank_closeup_3.8bpp.striped"

	.global gGfx_BG039_GrossbergLawOfficesPainting
gGfx_BG039_GrossbergLawOfficesPainting:
	.incbin "graphics/striped_images/backgrounds/grossberg_law_offices/grossberg_law_offices_painting.8bpp.striped"

	.global gGfx_BG040_GrossbergLawOfficesNoPainting
gGfx_BG040_GrossbergLawOfficesNoPainting:
	.incbin "graphics/striped_images/backgrounds/grossberg_law_offices/grossberg_law_offices_no_painting.8bpp.striped"

	.global gGfx_BG041_WitnessCindyFindingFrank
gGfx_BG041_WitnessCindyFindingFrank:
	.incbin "graphics/striped_images/backgrounds/witness_account/cindy_finding_frank.4bpp.striped"

	.global gGfx_BG042_WitnessFrankWitnessingLarry
gGfx_BG042_WitnessFrankWitnessingLarry:
	.incbin "graphics/striped_images/backgrounds/witness_account/frank_witnessing_larry.4bpp.striped"

	.global gGfx_BG043_WitnessFrankFindingCindy
gGfx_BG043_WitnessFrankFindingCindy:
	.incbin "graphics/striped_images/backgrounds/witness_account/frank_finding_cindy.4bpp.striped"

	.global gGfx_BG044_GlobalStudiosStudio2
gGfx_BG044_GlobalStudiosStudio2:
	.incbin "graphics/striped_images/backgrounds/global_studios/studio_2.8bpp.striped"

	.global gGfx_BG045_EvidenceMayaPhoneCall1
gGfx_BG045_EvidenceMayaPhoneCall1:
	.incbin "graphics/striped_images/backgrounds/evidence/maya_phone_call_page_1.4bpp.striped"
	.global gGfx_BG046_EvidenceMayaPhoneCall2
gGfx_BG046_EvidenceMayaPhoneCall2:
	.incbin "graphics/striped_images/backgrounds/evidence/maya_phone_call_page_2.4bpp.striped"

	.global gGfx_BG047_Gavel1
gGfx_BG047_Gavel1:
	.incbin "graphics/striped_images/backgrounds/gavel/1.8bpp.striped"

	.global gGfx_BG048_EvidenceMayaPhoneCall3
gGfx_BG048_EvidenceMayaPhoneCall3:
	.incbin "graphics/striped_images/backgrounds/evidence/maya_phone_call_page_3.4bpp.striped"

	.global gGfx_BG049_WitnessJackAtGate
gGfx_BG049_WitnessJackAtGate:
	.incbin "graphics/striped_images/backgrounds/witness_account/jack_at_gate_photo.4bpp.striped"

	.global gGfx_BG050_WitnessJackDeadAtStudio1
gGfx_BG050_WitnessJackDeadAtStudio1:
	.incbin "graphics/striped_images/backgrounds/witness_account/jack_dead_at_studio_1.4bpp.striped"

	.global gGfx_BG051_WitnessJackWearingSamuraiSuit
gGfx_BG051_WitnessJackWearingSamuraiSuit:
	.incbin "graphics/striped_images/backgrounds/witness_account/jack_wearing_samurai_suit.4bpp.striped"

	.global gGfx_BG052_WitnessVasquezPushingJackAftermath
gGfx_BG052_WitnessVasquezPushingJackAftermath:
	.incbin "graphics/striped_images/backgrounds/witness_account/vasquez_pushing_jack_aftermath.4bpp.striped"

	.global gGfx_BG053_WitnessStaffEatingLunch
gGfx_BG053_WitnessStaffEatingLunch:
	.incbin "graphics/striped_images/backgrounds/witness_account/staff_eating_lunch.4bpp.striped"

	.global gGfx_BG054_WitnessStudio2JackAndVasquez
gGfx_BG054_WitnessStudio2JackAndVasquez:
	.incbin "graphics/striped_images/backgrounds/witness_account/studio_2_jack_and_vasquez.4bpp.striped"

	.global gGfx_BG055_WitnessCodyWitnessingSamurai
gGfx_BG055_WitnessCodyWitnessingSamurai:
	.incbin "graphics/striped_images/backgrounds/witness_account/cody_witnessing_samurai.4bpp.striped"

	.global gGfx_BG056_WitnessSamuraiAtStudio2
gGfx_BG056_WitnessSamuraiAtStudio2:
	.incbin "graphics/striped_images/backgrounds/witness_account/samurai_at_studio_2_photo.4bpp.striped"

	.global gGfx_BG057_Witness5YearOldPhoto
gGfx_BG057_Witness5YearOldPhoto:
	.incbin "graphics/striped_images/backgrounds/witness_account/5_year_old_photo.4bpp.striped"

	.global gGfx_BG058_GlobalStudiosStudio2TrailerMafia
gGfx_BG058_GlobalStudiosStudio2TrailerMafia:
	.incbin "graphics/striped_images/backgrounds/global_studios/studio_2_trailer_mafia.8bpp.striped"

	.global gGfx_BG059_Case3PinkPrincess
gGfx_BG059_Case3PinkPrincess:
	.incbin "graphics/striped_images/backgrounds/cutscenes/case3/pink_princess.8bpp.striped"

	.global gGfx_BG060_GlobalStudiosMonkeyOnStudio2Path
gGfx_BG060_GlobalStudiosMonkeyOnStudio2Path:
	.incbin "graphics/striped_images/backgrounds/global_studios/monkey_on_studio_2_path.8bpp.striped"

	.global gGfx_BG061_EvidenceGlobalStudiosDiagram
gGfx_BG061_EvidenceGlobalStudiosDiagram:
	.incbin "graphics/striped_images/backgrounds/evidence/global_studio_diagram.4bpp.striped"

	.global gGfx_BG062_WitnessWillPowerInjury
gGfx_BG062_WitnessWillPowerInjury:
	.incbin "graphics/striped_images/backgrounds/witness_account/will_power_injury.4bpp.striped"

	.global gGfx_BG063_Case3SteelSamurai
gGfx_BG063_Case3SteelSamurai:
	.incbin "graphics/striped_images/backgrounds/cutscenes/case3/steel_samurai.8bpp.striped"
	
@ ; END BACKGROUNDS

	.global gPal_BG064_BustupPhoenix
gPal_BG064_BustupPhoenix:
	.incbin "graphics/bustup_phoenix.gbapal"

	.global gMap_BG064_BustupPhoenix
gMap_BG064_BustupPhoenix:
	.incbin "graphics/bustup_phoenix.bin"

	.global gGfx_BG064_BustupPhoenix
gGfx_BG064_BustupPhoenix:
	.incbin "graphics/bustup_phoenix.4bpp"

	.global gPal_BG065_BustupEdgeworth
gPal_BG065_BustupEdgeworth:
	.incbin "graphics/bustup_edgeworth.gbapal"

	.global gMap_BG065_BustupEdgeworth
gMap_BG065_BustupEdgeworth:
	.incbin "graphics/bustup_edgeworth.bin"

	.global gGfx_BG065_BustupEdgeworth
gGfx_BG065_BustupEdgeworth:
	.incbin "graphics/bustup_edgeworth.4bpp"

@ ; BEGIN BACKGROUNDS

	.global gGfx_BG066_Speedlines
gGfx_BG066_Speedlines:
	.incbin "graphics/striped_images/speedlines.4bpp.striped"

	.global gGfx_BG067_CourtroomBackground
gGfx_BG067_CourtroomBackground:
	.incbin "graphics/striped_images/courtroom_background.4bpp.striped"

	.global gGfx_BG068_CapcomScreen
gGfx_BG068_CapcomScreen:
	.incbin "graphics/striped_images/capcom_screen.4bpp.striped"

	.global gGfx_BG069_SteelSamuraiNight
gGfx_BG069_SteelSamuraiNight:
	.incbin "graphics/striped_images/steel_samurai_night.4bpp.striped"

	.global gGfx_BG070_GourdLakeEntrance
gGfx_BG070_GourdLakeEntrance:
	.incbin "graphics/striped_images/gourd_lake_entrance.8bpp.striped"

	.global gGfx_BG071_GourdLakePark
gGfx_BG071_GourdLakePark:
	.incbin "graphics/striped_images/gourd_lake_park.8bpp.striped"

	.global gGfx_BG072_GourdLakeParkNoBalloon
gGfx_BG072_GourdLakeParkNoBalloon:
	.incbin "graphics/striped_images/gourd_lake_park_no_balloon.8bpp.striped"

	.global gGfx_BG073_GourdLakeBeach
gGfx_BG073_GourdLakeBeach:
	.incbin "graphics/striped_images/gourd_lake_beach.8bpp.striped"

	.global gGfx_BG074_Case3IntroGrass
gGfx_BG074_Case3IntroGrass:
	.incbin "graphics/striped_images/case3_intro_grass.4bpp.striped"

	.global gGfx_BG075_Case3IntroTrees
gGfx_BG075_Case3IntroTrees:
	.incbin "graphics/striped_images/case3_intro_trees.4bpp.striped"

	.global gGfx_BG076_Case3IntroSteelSamuraiPosing
gGfx_BG076_Case3IntroSteelSamuraiPosing:
	.incbin "graphics/striped_images/case3_intro_steel_samurai_posing.4bpp.striped"

	.global gGfx_BG077_GourdLakeBoatRental
gGfx_BG077_GourdLakeBoatRental:
	.incbin "graphics/striped_images/gourd_lake_boat_rental.8bpp.striped"

	.global gGfx_BG078_GourdLakeBoatRentalHouse
gGfx_BG078_GourdLakeBoatRentalHouse:
	.incbin "graphics/striped_images/gourd_lake_boat_rental_house.8bpp.striped"

	.global gGfx_BG079_PoliceStationLobby
gGfx_BG079_PoliceStationLobby:
	.incbin "graphics/striped_images/police_station_lobby.8bpp.striped"

	.global gGfx_BG080_PoliceStationEvidenceStorage
gGfx_BG080_PoliceStationEvidenceStorage:
	.incbin "graphics/striped_images/police_station_evidence_storage.8bpp.striped"

	.global gGfx_BG081_Case3IntroFaceoff
gGfx_BG081_Case3IntroFaceoff:
	.incbin "graphics/striped_images/case3_intro_faceoff.4bpp.striped"

	.global gGfx_BG082_EvidenceDL6CaseFile1
gGfx_BG082_EvidenceDL6CaseFile1:
	.incbin "graphics/striped_images/backgrounds/evidence/dl6_case_file_page_1.4bpp.striped"

	.global gGfx_BG083_EvidenceDL6CaseFile2
gGfx_BG083_EvidenceDL6CaseFile2:
	.incbin "graphics/striped_images/backgrounds/evidence/dl6_case_file_page_2.4bpp.striped"

	.global gGfx_BG084_EvidenceDL6CaseFile3
gGfx_BG084_EvidenceDL6CaseFile3:
	.incbin "graphics/striped_images/backgrounds/evidence/dl6_case_file_page_3.4bpp.striped"

	.global gGfx_BG085_Case4TrainStation
gGfx_BG085_Case4TrainStation:
	.incbin "graphics/striped_images/case4_train_station.8bpp.striped"

	.global gGfx_BG086_Case4GourdLakeMap
gGfx_BG086_Case4GourdLakeMap:
	.incbin "graphics/striped_images/case4_gourd_lake_map.4bpp.striped"

	.global gGfx_BG087_Case4LottasPhotoZoomed
gGfx_BG087_Case4LottasPhotoZoomed:
	.incbin "graphics/striped_images/case4_lottas_photo_zoomed.4bpp.striped"

	.global gGfx_BG088_Case4ElevatorPhoto
gGfx_BG088_Case4ElevatorPhoto:
	.incbin "graphics/striped_images/case4_elevator_photo.4bpp.striped"

	.global gGfx_BG089_Case4Newspaper
gGfx_BG089_Case4Newspaper:
	.incbin "graphics/striped_images/case4_newspaper.8bpp.striped"

	.global gGfx_BG090_Case4BalloonLaunching
gGfx_BG090_Case4BalloonLaunching:
	.incbin "graphics/striped_images/case4_balloon_launching.4bpp.striped"

	.global gGfx_BG091_Case4BalloonLandingInLake
gGfx_BG091_Case4BalloonLandingInLake:
	.incbin "graphics/striped_images/case4_balloon_landing_in_lake.4bpp.striped"

	.global gGfx_BG092_Case4LarrySearchingLake
gGfx_BG092_Case4LarrySearchingLake:
	.incbin "graphics/striped_images/case4_larry_searching_lake.4bpp.striped"

	.global gGfx_BG093_Case4ClassTrial
gGfx_BG093_Case4ClassTrial:
	.incbin "graphics/striped_images/case4_class_trial.8bpp.striped"

	.global gGfx_BG094_Case4LottasPhotoFar
gGfx_BG094_Case4LottasPhotoFar:
	.incbin "graphics/striped_images/case4_lottas_photo_far.4bpp.striped"

	.global gGfx_BG095_Case4ClassTrialPhoenix
gGfx_BG095_Case4ClassTrialPhoenix:
	.incbin "graphics/striped_images/case4_class_trial_phoenix.8bpp.striped"

	.global gGfx_BG096_Case4ClassTrialEdgeworth
gGfx_BG096_Case4ClassTrialEdgeworth:
	.incbin "graphics/striped_images/case4_class_trial_edgeworth.8bpp.striped"

	.global gGfx_BG097_Case4ClassTrialLarry
gGfx_BG097_Case4ClassTrialLarry:
	.incbin "graphics/striped_images/case4_class_trial_larry.8bpp.striped"

	.global gGfx_BG098_Case4YanniThreatening
gGfx_BG098_Case4YanniThreatening:
	.incbin "graphics/striped_images/case4_yanni_threatening.4bpp.striped"

	.global gGfx_BG099_Case4ShootWaterFromBoat
gGfx_BG099_Case4ShootWaterFromBoat:
	.incbin "graphics/striped_images/case4_shoot_water_from_boat.4bpp.striped"

	.global gGfx_BG100_Case4ElevatorSuffocating
gGfx_BG100_Case4ElevatorSuffocating:
	.incbin "graphics/striped_images/case4_elevator_suffocating.4bpp.striped"

	.global gGfx_BG101_Case4ElevatorEdgeworthThrow
gGfx_BG101_Case4ElevatorEdgeworthThrow:
	.incbin "graphics/striped_images/case4_elevator_edgeworth_throw.4bpp.striped"

	.global gGfx_BG102_Case4ElevatorVonKarmaShot
gGfx_BG102_Case4ElevatorVonKarmaShot:
	.incbin "graphics/striped_images/case4_elevator_vonkarma_shot.4bpp.striped"

	.global gGfx_BG103_Case4ElevatorVonKarmaInDoor
gGfx_BG103_Case4ElevatorVonKarmaInDoor:
	.incbin "graphics/striped_images/case4_elevator_vonkarma_in_door.4bpp.striped"

	.global gGfx_BG104_Case4TrainStationMayaLeaving
gGfx_BG104_Case4TrainStationMayaLeaving:
	.incbin "graphics/striped_images/case4_train_station_maya_leaving.8bpp.striped"

	.global gGfx_BG105_TrialWon
gGfx_BG105_TrialWon:
	.incbin "graphics/striped_images/trial_won.8bpp.striped"

	.global gGfx_BG106_Case4IntroLakeOneInBoat
gGfx_BG106_Case4IntroLakeOneInBoat:
	.incbin "graphics/striped_images/case4_intro_lake_one_in_boat.4bpp.striped"

	.global gGfx_BG107_Case4IntroThreatenedToShoot
gGfx_BG107_Case4IntroThreatenedToShoot:
	.incbin "graphics/striped_images/case4_intro_threatened_to_shoot.4bpp.striped"

	.global gGfx_BG108_Case4IntroEdgeworthPicksUpGun
gGfx_BG108_Case4IntroEdgeworthPicksUpGun:
	.incbin "graphics/striped_images/case4_intro_edgeworth_picks_gun_up.8bpp.striped"

	.global gGfx_BG109_CapcomScreenBW
gGfx_BG109_CapcomScreenBW:
	.incbin "graphics/striped_images/capcom_screen_bw.4bpp.striped"

	.global gGfx_BG110_DemoTitleScreen
gGfx_BG110_DemoTitleScreen:
	.incbin "graphics/striped_images/title_screen_demo.8bpp.striped"

	.global gGfx_BG111_DemoComingSoon
gGfx_BG111_DemoComingSoon:
	.incbin "graphics/striped_images/coming_soon_screen.8bpp.striped"

@ ; END

	.global gGfx_SpeedlinesFirstAndLastColumns
gGfx_SpeedlinesFirstAndLastColumns:
	.incbin "graphics/speedlines_first_and_last_columns.4bpp"
	
@ BEGIN COURT SCROLLS

	.global gGfxCourtscroll01
gGfxCourtscroll01:
	.incbin "graphics/court_scrolls/court_scroll01.gbapal"
	.incbin "graphics/court_scrolls/court_scroll01.4bpp"

	.incbin "graphics/court_scrolls/court_scroll02.gbapal"
	.incbin "graphics/court_scrolls/court_scroll02.4bpp"

	.incbin "graphics/court_scrolls/court_scroll03.gbapal"
	.incbin "graphics/court_scrolls/court_scroll03.4bpp"

	.incbin "graphics/court_scrolls/court_scroll04.gbapal"
	.incbin "graphics/court_scrolls/court_scroll04.4bpp"

	.incbin "graphics/court_scrolls/court_scroll05.gbapal"
	.incbin "graphics/court_scrolls/court_scroll05.4bpp"

	.incbin "graphics/court_scrolls/court_scroll06.gbapal"
	.incbin "graphics/court_scrolls/court_scroll06.4bpp"

	.incbin "graphics/court_scrolls/court_scroll07.gbapal"
	.incbin "graphics/court_scrolls/court_scroll07.4bpp"

	.incbin "graphics/court_scrolls/court_scroll08.gbapal"
	.incbin "graphics/court_scrolls/court_scroll08.4bpp"

	.incbin "graphics/court_scrolls/court_scroll09.gbapal"
	.incbin "graphics/court_scrolls/court_scroll09.4bpp"

	.incbin "graphics/court_scrolls/court_scroll10.gbapal"
	.incbin "graphics/court_scrolls/court_scroll10.4bpp"

	.incbin "graphics/court_scrolls/court_scroll11.gbapal"
	.incbin "graphics/court_scrolls/court_scroll11.4bpp"

	.incbin "graphics/court_scrolls/court_scroll12.gbapal"
	.incbin "graphics/court_scrolls/court_scroll12.4bpp"

	.incbin "graphics/court_scrolls/court_scroll13.gbapal"
	.incbin "graphics/court_scrolls/court_scroll13.4bpp"

	.incbin "graphics/court_scrolls/court_scroll14.gbapal"
	.incbin "graphics/court_scrolls/court_scroll14.4bpp"

	.incbin "graphics/court_scrolls/court_scroll15.gbapal"
	.incbin "graphics/court_scrolls/court_scroll15.4bpp"

	.incbin "graphics/court_scrolls/court_scroll16.gbapal"
	.incbin "graphics/court_scrolls/court_scroll16.4bpp"

	.global gGfxCourtscroll02
gGfxCourtscroll02:
	.incbin "graphics/court_scrolls/court_scroll17.gbapal"
	.incbin "graphics/court_scrolls/court_scroll17.4bpp"

	.incbin "graphics/court_scrolls/court_scroll18.gbapal"
	.incbin "graphics/court_scrolls/court_scroll18.4bpp"

	.incbin "graphics/court_scrolls/court_scroll19.gbapal"
	.incbin "graphics/court_scrolls/court_scroll19.4bpp"

	.incbin "graphics/court_scrolls/court_scroll20.gbapal"
	.incbin "graphics/court_scrolls/court_scroll20.4bpp"

	.incbin "graphics/court_scrolls/court_scroll21.gbapal"
	.incbin "graphics/court_scrolls/court_scroll21.4bpp"

	.incbin "graphics/court_scrolls/court_scroll22.gbapal"
	.incbin "graphics/court_scrolls/court_scroll22.4bpp"

	.incbin "graphics/court_scrolls/court_scroll23.gbapal"
	.incbin "graphics/court_scrolls/court_scroll23.4bpp"

	.incbin "graphics/court_scrolls/court_scroll24.gbapal"
	.incbin "graphics/court_scrolls/court_scroll24.4bpp"

	.incbin "graphics/court_scrolls/court_scroll25.gbapal"
	.incbin "graphics/court_scrolls/court_scroll25.4bpp"

	.incbin "graphics/court_scrolls/court_scroll26.gbapal"
	.incbin "graphics/court_scrolls/court_scroll26.4bpp"

	.incbin "graphics/court_scrolls/court_scroll27.gbapal"
	.incbin "graphics/court_scrolls/court_scroll27.4bpp"

	.incbin "graphics/court_scrolls/court_scroll28.gbapal"
	.incbin "graphics/court_scrolls/court_scroll28.4bpp"

	.incbin "graphics/court_scrolls/court_scroll29.gbapal"
	.incbin "graphics/court_scrolls/court_scroll29.4bpp"

	.incbin "graphics/court_scrolls/court_scroll30.gbapal"
	.incbin "graphics/court_scrolls/court_scroll30.4bpp"

	.incbin "graphics/court_scrolls/court_scroll31.gbapal"
	.incbin "graphics/court_scrolls/court_scroll31.4bpp"

	.incbin "graphics/court_scrolls/court_scroll32.gbapal"
	.incbin "graphics/court_scrolls/court_scroll32.4bpp"

	.global gGfxCourtscroll03
gGfxCourtscroll03:
	.incbin "graphics/court_scrolls/court_scroll33.gbapal"
	.incbin "graphics/court_scrolls/court_scroll33.4bpp"

	.incbin "graphics/court_scrolls/court_scroll34.gbapal"
	.incbin "graphics/court_scrolls/court_scroll34.4bpp"

	.incbin "graphics/court_scrolls/court_scroll35.gbapal"
	.incbin "graphics/court_scrolls/court_scroll35.4bpp"

	.incbin "graphics/court_scrolls/court_scroll36.gbapal"
	.incbin "graphics/court_scrolls/court_scroll36.4bpp"

	.incbin "graphics/court_scrolls/court_scroll37.gbapal"
	.incbin "graphics/court_scrolls/court_scroll37.4bpp"

	.incbin "graphics/court_scrolls/court_scroll38.gbapal"
	.incbin "graphics/court_scrolls/court_scroll38.4bpp"

	.incbin "graphics/court_scrolls/court_scroll39.gbapal"
	.incbin "graphics/court_scrolls/court_scroll39.4bpp"

	.incbin "graphics/court_scrolls/court_scroll40.gbapal"
	.incbin "graphics/court_scrolls/court_scroll40.4bpp"

	.incbin "graphics/court_scrolls/court_scroll41.gbapal"
	.incbin "graphics/court_scrolls/court_scroll41.4bpp"

	.incbin "graphics/court_scrolls/court_scroll42.gbapal"
	.incbin "graphics/court_scrolls/court_scroll42.4bpp"

	.incbin "graphics/court_scrolls/court_scroll43.gbapal"
	.incbin "graphics/court_scrolls/court_scroll43.4bpp"

	.incbin "graphics/court_scrolls/court_scroll44.gbapal"
	.incbin "graphics/court_scrolls/court_scroll44.4bpp"

	.incbin "graphics/court_scrolls/court_scroll45.gbapal"
	.incbin "graphics/court_scrolls/court_scroll45.4bpp"

	.incbin "graphics/court_scrolls/court_scroll46.gbapal"
	.incbin "graphics/court_scrolls/court_scroll46.4bpp"

	.incbin "graphics/court_scrolls/court_scroll47.gbapal"
	.incbin "graphics/court_scrolls/court_scroll47.4bpp"

	.incbin "graphics/court_scrolls/court_scroll48.gbapal"
	.incbin "graphics/court_scrolls/court_scroll48.4bpp"

@ END COURT SCROLLS

@ BEGIN CHARACTER ANIMATION GRAPHICS PACKAGES AND SEQUENCES

	.global gGfxPixAnimationChar01
gGfxPixAnimationChar01:
	.incbin "graphics/animations/characters/animation01.pix"

	.global gGfxSeqAnimationChar01
gGfxSeqAnimationChar01:
	.incbin "graphics/animations/characters/animation01.seq"

	.global gGfxPixAnimationChar02
gGfxPixAnimationChar02:
	.incbin "graphics/animations/characters/animation02.pix"

	.global gGfxSeqAnimationChar02
gGfxSeqAnimationChar02:
	.incbin "graphics/animations/characters/animation02.seq"

	.global gGfxPixAnimationChar03
gGfxPixAnimationChar03:
	.incbin "graphics/animations/characters/animation03.pix"

	.global gGfxSeqAnimationChar03
gGfxSeqAnimationChar03:
	.incbin "graphics/animations/characters/animation03.seq"

	.global gGfxPixAnimationChar04
gGfxPixAnimationChar04:
	.incbin "graphics/animations/characters/animation04.pix"

	.global gGfxSeqAnimationChar04
gGfxSeqAnimationChar04:
	.incbin "graphics/animations/characters/animation04.seq"

	.global gGfxPixAnimationChar05
gGfxPixAnimationChar05:
	.incbin "graphics/animations/characters/animation05.pix"

	.global gGfxSeqAnimationChar05
gGfxSeqAnimationChar05:
	.incbin "graphics/animations/characters/animation05.seq"

	.global gGfxPixAnimationChar06
gGfxPixAnimationChar06:
	.incbin "graphics/animations/characters/animation06.pix"

	.global gGfxSeqAnimationChar06
gGfxSeqAnimationChar06:
	.incbin "graphics/animations/characters/animation06.seq"

	.global gGfxPixAnimationChar07
gGfxPixAnimationChar07:
	.incbin "graphics/animations/characters/animation07.pix"

	.global gGfxSeqAnimationChar07
gGfxSeqAnimationChar07:
	.incbin "graphics/animations/characters/animation07.seq"

	.global gGfxPixAnimationChar08
gGfxPixAnimationChar08:
	.incbin "graphics/animations/characters/animation08.pix"

	.global gGfxSeqAnimationChar08
gGfxSeqAnimationChar08:
	.incbin "graphics/animations/characters/animation08.seq"

	.global gGfxPixAnimationChar09
gGfxPixAnimationChar09:
	.incbin "graphics/animations/characters/animation09.pix"

	.global gGfxSeqAnimationChar09
gGfxSeqAnimationChar09:
	.incbin "graphics/animations/characters/animation09.seq"

	.global gGfxPixAnimationChar10
gGfxPixAnimationChar10:
	.incbin "graphics/animations/characters/animation10.pix"

	.global gGfxSeqAnimationChar10
gGfxSeqAnimationChar10:
	.incbin "graphics/animations/characters/animation10.seq"

	.global gGfxPixAnimationChar11
gGfxPixAnimationChar11:
	.incbin "graphics/animations/characters/animation11.pix"

	.global gGfxSeqAnimationChar11
gGfxSeqAnimationChar11:
	.incbin "graphics/animations/characters/animation11.seq"

	.global gGfxPixAnimationChar12
gGfxPixAnimationChar12:
	.incbin "graphics/animations/characters/animation12.pix"

	.global gGfxSeqAnimationChar12
gGfxSeqAnimationChar12:
	.incbin "graphics/animations/characters/animation12.seq"

	.global gGfxPixAnimationChar13
gGfxPixAnimationChar13:
	.incbin "graphics/animations/characters/animation13.pix"

	.global gGfxSeqAnimationChar13
gGfxSeqAnimationChar13:
	.incbin "graphics/animations/characters/animation13.seq"

	.global gGfxPixAnimationChar14
gGfxPixAnimationChar14:
	.incbin "graphics/animations/characters/animation14.pix"

	.global gGfxSeqAnimationChar14
gGfxSeqAnimationChar14:
	.incbin "graphics/animations/characters/animation14.seq"

	.global gGfxPixAnimationChar15
gGfxPixAnimationChar15:
	.incbin "graphics/animations/characters/animation15.pix"

	.global gGfxSeqAnimationChar15
gGfxSeqAnimationChar15:
	.incbin "graphics/animations/characters/animation15.seq"

	.global gGfxPixAnimationChar16
gGfxPixAnimationChar16:
	.incbin "graphics/animations/characters/animation16.pix"

	.global gGfxSeqAnimationChar16
gGfxSeqAnimationChar16:
	.incbin "graphics/animations/characters/animation16.seq"

	.global gGfxPixAnimationChar17
gGfxPixAnimationChar17:
	.incbin "graphics/animations/characters/animation17.pix"

	.global gGfxSeqAnimationChar17
gGfxSeqAnimationChar17:
	.incbin "graphics/animations/characters/animation17.seq"

	.global gGfxPixAnimationChar18
gGfxPixAnimationChar18:
	.incbin "graphics/animations/characters/animation18.pix"

	.global gGfxSeqAnimationChar18
gGfxSeqAnimationChar18:
	.incbin "graphics/animations/characters/animation18.seq"

	.global gGfxPixAnimationChar19
gGfxPixAnimationChar19:
	.incbin "graphics/animations/characters/animation19.pix"

	.global gGfxSeqAnimationChar19
gGfxSeqAnimationChar19:
	.incbin "graphics/animations/characters/animation19.seq"

	.global gGfxPixAnimationChar20
gGfxPixAnimationChar20:
	.incbin "graphics/animations/characters/animation20.pix"

	.global gGfxSeqAnimationChar20
gGfxSeqAnimationChar20:
	.incbin "graphics/animations/characters/animation20.seq"

	.global gGfxPixAnimationChar21
gGfxPixAnimationChar21:
	.incbin "graphics/animations/characters/animation21.pix"

	.global gGfxSeqAnimationChar21
gGfxSeqAnimationChar21:
	.incbin "graphics/animations/characters/animation21.seq"

	.global gGfxPixAnimationChar22
gGfxPixAnimationChar22:
	.incbin "graphics/animations/characters/animation22.pix"

	.global gGfxSeqAnimationChar22
gGfxSeqAnimationChar22:
	.incbin "graphics/animations/characters/animation22.seq"

	.global gGfxPixAnimationChar23
gGfxPixAnimationChar23:
	.incbin "graphics/animations/characters/animation23.pix"

	.global gGfxSeqAnimationChar23
gGfxSeqAnimationChar23:
	.incbin "graphics/animations/characters/animation23.seq"

	.global gGfxPixAnimationChar24
gGfxPixAnimationChar24:
	.incbin "graphics/animations/characters/animation24.pix"

	.global gGfxSeqAnimationChar24
gGfxSeqAnimationChar24:
	.incbin "graphics/animations/characters/animation24.seq"

	.global gGfxPixAnimationChar25
gGfxPixAnimationChar25:
	.incbin "graphics/animations/characters/animation25.pix"

	.global gGfxSeqAnimationChar25
gGfxSeqAnimationChar25:
	.incbin "graphics/animations/characters/animation25.seq"

	.global gGfxPixAnimationChar26
gGfxPixAnimationChar26:
	.incbin "graphics/animations/characters/animation26.pix"

	.global gGfxSeqAnimationChar26
gGfxSeqAnimationChar26:
	.incbin "graphics/animations/characters/animation26.seq"

@ END CHARACTER ANIMATION GRAPHICS PACKAGES AND SEQUENCES

@ BEGIN ANIMATION GRAPHICS PACKAGES AND SEQUENCES

	.global gGfxPixAnimationTileset01
gGfxPixAnimationTileset01:
	.incbin "graphics/animations/tileset01.pix"

	.global gGfxSeqAnimation01
gGfxSeqAnimation01:
	.incbin "graphics/animations/animation01.seq"

	.global gGfxSeqAnimation02
gGfxSeqAnimation02:
	.incbin "graphics/animations/animation02.seq"

	.global gGfxSeqAnimation03
gGfxSeqAnimation03:
	.incbin "graphics/animations/animation03.seq"

	.global gGfxSeqAnimation04
gGfxSeqAnimation04:
	.incbin "graphics/animations/animation04.seq"

	.global gGfxSeqAnimation05
gGfxSeqAnimation05:
	.incbin "graphics/animations/animation05.seq"

	.global gGfxSeqAnimation06
gGfxSeqAnimation06:
	.incbin "graphics/animations/animation06.seq"

	.global gGfxPixAnimationTileset02
gGfxPixAnimationTileset02:
	.incbin "graphics/animations/tileset02.pix"

	.global gGfxSeqAnimation07
gGfxSeqAnimation07:
	.incbin "graphics/animations/animation07.seq"

	.global gGfxSeqAnimation08
gGfxSeqAnimation08:
	.incbin "graphics/animations/animation08.seq"

	.global gGfxSeqAnimation09
gGfxSeqAnimation09:
	.incbin "graphics/animations/animation09.seq"

	.global gGfxSeqAnimation10
gGfxSeqAnimation10:
	.incbin "graphics/animations/animation10.seq"

	.global gGfxSeqAnimation11
gGfxSeqAnimation11:
	.incbin "graphics/animations/animation11.seq"

	.global gGfxSeqAnimation12
gGfxSeqAnimation12:
	.incbin "graphics/animations/animation12.seq"

	.global gGfxSeqAnimation13
gGfxSeqAnimation13:
	.incbin "graphics/animations/animation13.seq"

	.global gGfxSeqAnimation14
gGfxSeqAnimation14:
	.incbin "graphics/animations/animation14.seq"

	.global gGfxSeqAnimation15
gGfxSeqAnimation15:
	.incbin "graphics/animations/animation15.seq"

	.global gGfxSeqAnimation16
gGfxSeqAnimation16:
	.incbin "graphics/animations/animation16.seq"

	.global gGfxSeqAnimation17
gGfxSeqAnimation17:
	.incbin "graphics/animations/animation17.seq"

	.global gGfxSeqAnimation18
gGfxSeqAnimation18:
	.incbin "graphics/animations/animation18.seq"

	.global gGfxSeqAnimation19
gGfxSeqAnimation19:
	.incbin "graphics/animations/animation19.seq"

	.global gGfxSeqAnimation20
gGfxSeqAnimation20:
	.incbin "graphics/animations/animation20.seq"

	.global gGfxSeqAnimation21
gGfxSeqAnimation21:
	.incbin "graphics/animations/animation21.seq"

	.global gGfxSeqAnimation22
gGfxSeqAnimation22:
	.incbin "graphics/animations/animation22.seq"

	.global gGfxSeqAnimation23
gGfxSeqAnimation23:
	.incbin "graphics/animations/animation23.seq"

	.global gGfxSeqAnimation24
gGfxSeqAnimation24:
	.incbin "graphics/animations/animation24.seq"

	.global gGfxSeqAnimation25
gGfxSeqAnimation25:
	.incbin "graphics/animations/animation25.seq"

	.global gGfxSeqAnimation26
gGfxSeqAnimation26:
	.incbin "graphics/animations/animation26.seq"

	.global gGfxSeqAnimation27
gGfxSeqAnimation27:
	.incbin "graphics/animations/animation27.seq"

	.global gGfxSeqAnimation28
gGfxSeqAnimation28:
	.incbin "graphics/animations/animation28.seq"

	.global gGfxSeqAnimation29
gGfxSeqAnimation29:
	.incbin "graphics/animations/animation29.seq"

	.global gGfxSeqAnimation30
gGfxSeqAnimation30:
	.incbin "graphics/animations/animation30.seq"

	.global gGfxSeqAnimation31
gGfxSeqAnimation31:
	.incbin "graphics/animations/animation31.seq"

	.global gGfxSeqAnimation32
gGfxSeqAnimation32:
	.incbin "graphics/animations/animation32.seq"

	.global gGfxSeqAnimation33
gGfxSeqAnimation33:
	.incbin "graphics/animations/animation33.seq"

	.global gGfxSeqAnimation34
gGfxSeqAnimation34:
	.incbin "graphics/animations/animation34.seq"

	.global gGfxSeqAnimation35
gGfxSeqAnimation35:
	.incbin "graphics/animations/animation35.seq"

	.global gGfxSeqAnimation36
gGfxSeqAnimation36:
	.incbin "graphics/animations/animation36.seq"

	.global gGfxSeqAnimation37
gGfxSeqAnimation37:
	.incbin "graphics/animations/animation37.seq"

	.global gGfxSeqAnimation38
gGfxSeqAnimation38:
	.incbin "graphics/animations/animation38.seq"

	.global gGfxSeqAnimation39
gGfxSeqAnimation39:
	.incbin "graphics/animations/animation39.seq"

	.global gGfxSeqAnimation40
gGfxSeqAnimation40:
	.incbin "graphics/animations/animation40.seq"

	.global gGfxSeqAnimation41
gGfxSeqAnimation41:
	.incbin "graphics/animations/animation41.seq"

	.global gGfxSeqAnimation42
gGfxSeqAnimation42:
	.incbin "graphics/animations/animation42.seq"

	.global gGfxSeqAnimation43
gGfxSeqAnimation43:
	.incbin "graphics/animations/animation43.seq"

	.global gGfxSeqAnimation44
gGfxSeqAnimation44:
	.incbin "graphics/animations/animation44.seq"

	.global gGfxSeqAnimation45
gGfxSeqAnimation45:
	.incbin "graphics/animations/animation45.seq"

	.global gGfxSeqAnimation46
gGfxSeqAnimation46:
	.incbin "graphics/animations/animation46.seq"

	.global gGfxSeqAnimation47
gGfxSeqAnimation47:
	.incbin "graphics/animations/animation47.seq"

	.global gGfxSeqAnimation48
gGfxSeqAnimation48:
	.incbin "graphics/animations/animation48.seq"

	.global gGfxSeqAnimation49
gGfxSeqAnimation49:
	.incbin "graphics/animations/animation49.seq"

	.global gGfxSeqAnimation50
gGfxSeqAnimation50:
	.incbin "graphics/animations/animation50.seq"

	.global gGfxSeqAnimation51
gGfxSeqAnimation51:
	.incbin "graphics/animations/animation51.seq"

	.global gGfxSeqAnimation52
gGfxSeqAnimation52:
	.incbin "graphics/animations/animation52.seq"

	.global gGfxSeqAnimation53
gGfxSeqAnimation53:
	.incbin "graphics/animations/animation53.seq"

	.global gGfxSeqAnimation54
gGfxSeqAnimation54:
	.incbin "graphics/animations/animation54.seq"

@ END ANIMATION GRAPHICS PACKAGES AND SEQUENCES
