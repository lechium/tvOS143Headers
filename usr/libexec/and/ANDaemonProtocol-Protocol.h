//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ANAccountNotification, NSString;

@protocol ANDaemonProtocol <NSObject>
- (void)removeNotificationsWithEventID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)removeNotificationWithID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)addNotification:(ANAccountNotification *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
@end

