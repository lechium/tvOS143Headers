//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@interface TVSettingsRestrictionsViewController : TSKViewController
{
}

- (void)_updateGuardedState;	// IMP=0x000000010008a2d4
- (void)_handleSetPasscodeResult:(id)arg1;	// IMP=0x000000010008a24c
- (void)_changePasscode:(id)arg1;	// IMP=0x0000000100089d64
- (void)_disableRestrictions;	// IMP=0x0000000100089a48
- (void)_enableRestrictions;	// IMP=0x0000000100089890
- (void)_restrictionsFacadeDidChange:(id)arg1;	// IMP=0x0000000100089884
- (id)_ratingLongFormatter;	// IMP=0x00000001000897c0
- (id)_ratingFormatter;	// IMP=0x0000000100089778
- (id)_contentFilterRegionFormatter;	// IMP=0x00000001000896b8
- (id)_yesNoFormatter;	// IMP=0x00000001000894e8
- (id)_allowRestrictBoolFormatter;	// IMP=0x00000001000893dc
- (id)_allowRestrictFormatter;	// IMP=0x000000010008920c
- (id)_booksRatingFormatter;	// IMP=0x0000000100089098
- (id)_explicitMusicFormatter;	// IMP=0x0000000100088f24
- (void)_toggleRestrictions:(id)arg1;	// IMP=0x0000000100088ea8
- (void)dealloc;	// IMP=0x0000000100088e30
- (id)loadSettingGroups;	// IMP=0x0000000100086468
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000001000863d0

@end

