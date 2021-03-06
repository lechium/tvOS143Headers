//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ENGroup;

@protocol IDSGroupContextObserverDaemonProtocol
- (void)didReceiveRegistrationIdentityUpdateWithCompletion:(void (^)(NSError *))arg1;
- (void)didReceiveDecryptionFailureForGroup:(ENGroup *)arg1 completion:(void (^)(NSError *))arg2;
- (void)didUpdateGroup:(ENGroup *)arg1 withNewGroup:(ENGroup *)arg2 completion:(void (^)(NSError *))arg3;
- (void)didCacheGroup:(ENGroup *)arg1 completion:(void (^)(NSError *))arg2;
- (void)didCreateGroup:(ENGroup *)arg1 completion:(void (^)(NSError *))arg2;
@end

