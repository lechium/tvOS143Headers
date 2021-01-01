//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class TSKPreviewViewController, TSKSettingItem;

@interface TVSettingsMoviesViewController : TSKViewController
{
    TSKPreviewViewController *_moviesPreviewViewController;	// 8 = 0x8
    TSKPreviewViewController *_tvPreviewViewController;	// 16 = 0x10
    TSKSettingItem *_tvFavoritesItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000a6724
- (void)_showPrivacy:(id)arg1;	// IMP=0x00000001000a66b8
- (void)_videoResolutionSelected:(id)arg1;	// IMP=0x00000001000a661c
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x00000001000a64cc
- (id)loadSettingGroups;	// IMP=0x00000001000a5110

@end
