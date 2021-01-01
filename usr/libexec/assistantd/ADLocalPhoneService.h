//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ADService.h"

#import "ADCompanionServiceMessageHandler-Protocol.h"

@class NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface ADLocalPhoneService : ADService <ADCompanionServiceMessageHandler>
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableSet *_watchdogTimers;	// 16 = 0x10
}

+ (id)_contactForCall:(id)arg1;	// IMP=0x00000001001b7810
+ (id)_personForCall:(id)arg1;	// IMP=0x00000001001b72a8
+ (id)_personAttributeForCall:(id)arg1;	// IMP=0x00000001001b71b0
+ (id)_incomingCallTypeForService:(int)arg1;	// IMP=0x00000001001b7174
- (void).cxx_destruct;	// IMP=0x00000001001b7b70
- (void)_removeTimer:(id)arg1;	// IMP=0x00000001001b70f0
- (void)_addTimer:(id)arg1;	// IMP=0x00000001001b7068
- (void)_handleMessage:(id)arg1 messageType:(id)arg2 fromDeviceWithIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001b6cbc
- (void)handleMessage:(id)arg1 messageType:(id)arg2 fromDeviceWithIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001b6b6c
- (void)_unhandledCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b6aec
- (void)_incomingCallSearchHandler:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b6678
- (id)_hangUpCurrentCall;	// IMP=0x00000001001b5f40
- (void)_hangUpHandler:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b5724
- (void)_answerHandler:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b5538
- (void)preheatDomain:(id)arg1;	// IMP=0x00000001001b5534
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001001b527c
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x00000001001b5274
- (id)commandsForDomain:(id)arg1;	// IMP=0x00000001001b51b8
- (id)domains;	// IMP=0x00000001001b5140
- (id)handle;	// IMP=0x00000001001b513c
- (id)init;	// IMP=0x00000001001b5054

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

