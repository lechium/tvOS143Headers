//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol AMSDeviceMessengerClientInterface, AMSSecurityClientInterface;

@protocol AMSDaemonConnectionProtocol <NSObject>
- (void)getSecurityServiceProxyWithDelegate:(id <AMSSecurityClientInterface>)arg1 replyHandler:(void (^)(id <AMSSecurityServiceInterface>, NSError *))arg2;
- (void)getPushNotificationServiceProxyWithReplyHandler:(void (^)(id <AMSPushNotificationServiceInterface>, NSError *))arg1;
- (void)getDeviceMessengerServiceProxyWithDelegate:(id <AMSDeviceMessengerClientInterface>)arg1 replyHandler:(void (^)(id <AMSDeviceMessengerServiceInterface>, NSError *))arg2;
@end

