//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MTShowSettingsViewController;

@protocol MTShowSettingsViewControllerDelegate <NSObject>
- (void)showSettings:(MTShowSettingsViewController *)arg1 changedDeletedPlayedEpisodes:(long long)arg2;
- (void)showSettings:(MTShowSettingsViewController *)arg1 changedEpisodeLimit:(long long)arg2;
- (void)showSettings:(MTShowSettingsViewController *)arg1 changedNotifications:(_Bool)arg2;
- (void)showSettings:(MTShowSettingsViewController *)arg1 changedSubscribed:(_Bool)arg2;
- (void)showSettings:(MTShowSettingsViewController *)arg1 changedEpisodeOrderAscending:(_Bool)arg2;
- (void)showSettings:(MTShowSettingsViewController *)arg1 changedShowType:(long long)arg2;
@end

