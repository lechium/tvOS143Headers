//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APSNetworkMonitor;

@protocol APSNetworkMonitorDelegate <NSObject>

@optional
- (void)networkMonitor:(APSNetworkMonitor *)arg1 enableWiFiAssertionForPiggybackConnection:(_Bool)arg2;
- (void)networkMonitorWiFiBecameAssociated:(APSNetworkMonitor *)arg1;
- (void)networkMonitor:(APSNetworkMonitor *)arg1 evaluateDualModeState:(_Bool)arg2;
@end

