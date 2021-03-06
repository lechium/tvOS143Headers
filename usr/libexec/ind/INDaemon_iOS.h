//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "INDaemon.h"

#import "FAFamilyNotificationDelegate-Protocol.h"

@class INAccountEventPushHandler, NSDictionary, NSString;

@interface INDaemon_iOS : INDaemon <FAFamilyNotificationDelegate>
{
    NSDictionary *_familyPushNotificationHandlersByEventType;	// 8 = 0x8
    NSDictionary *_accountPushNotificationHandlersByEventType;	// 16 = 0x10
    INAccountEventPushHandler *_accountDefaultEventPushNotificationHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000dbec
- (void)renewCredentialsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000db7c
- (void)commonHeadersForRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000db10
- (void)remoteFreshmintFlowCompletedWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x000000010000db0c
- (void)presentHiddenFreshmintWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d9d4
- (void)notifyDeviceStorageLevel:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d970
- (void)iCloudServerOfferForAccountWithID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000d868
- (void)updateOfferForAccountWithID:(id)arg1 offerId:(id)arg2 buttonId:(id)arg3 info:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010000d7dc
- (void)didDismissFamilyNotification:(id)arg1;	// IMP=0x000000010000d77c
- (void)didClearFamilyNotification:(id)arg1;	// IMP=0x000000010000d71c
- (void)didActivateFamilyNotification:(id)arg1;	// IMP=0x000000010000d43c
- (void)handleICloudQuotaPush:(id)arg1;	// IMP=0x000000010000d3f4
- (id)pushTopics;	// IMP=0x000000010000d348
- (id)familyPushNotificationHandlerForEventType:(id)arg1;	// IMP=0x000000010000d330
- (id)accountPushNotificationHandlerForEventType:(id)arg1;	// IMP=0x000000010000d294
- (void)_loadPushNotificationHandlers;	// IMP=0x000000010000ce98
- (void)handlePushUnregistrationWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000cdf8
- (void)handlePushRegistrationWithAccount:(id)arg1;	// IMP=0x000000010000cdf4
- (void)_handleDeviceDidPairEvent;	// IMP=0x000000010000ca60
- (void)_handleDeviceNameChangeEvent;	// IMP=0x000000010000c6cc
- (void)_configureXPCEventStreamHandler;	// IMP=0x000000010000c460
- (void)dealloc;	// IMP=0x000000010000c42c
- (void)start;	// IMP=0x000000010000c39c
- (id)init;	// IMP=0x000000010000c310

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

