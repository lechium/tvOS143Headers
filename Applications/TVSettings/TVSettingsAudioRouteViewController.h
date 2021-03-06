//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class NSArray, TVPAudioRoute, TVPAudioRoutingController;

@interface TVSettingsAudioRouteViewController : TSKViewController
{
    TVPAudioRoutingController *_routingController;	// 8 = 0x8
    TVPAudioRoute *_recentlySelectedRoute;	// 16 = 0x10
    NSArray *_routes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000b73e4
- (id)_identifierForRoute:(id)arg1;	// IMP=0x00000001000b72c4
- (void)_selectRoute:(id)arg1;	// IMP=0x00000001000b725c
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;	// IMP=0x00000001000b6f6c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000b6d74
- (id)loadSettingGroups;	// IMP=0x00000001000b69a0
- (void)viewDidLoad;	// IMP=0x00000001000b68ec
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000001000b686c

@end

