//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFServiceHelper-Protocol.h"

@class AFCommandExecutionInfo, AFWatchdogTimer, NSString;
@protocol OS_dispatch_queue;

@interface ADClientFlowServiceHelper : NSObject <AFServiceHelper>
{
    NSObject<OS_dispatch_queue> *_clientFlowServiceHelperQueue;	// 8 = 0x8
    NSString *_aceId;	// 16 = 0x10
    AFCommandExecutionInfo *_executionInfo;	// 24 = 0x18
    AFWatchdogTimer *_timer;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_timerQueue;	// 40 = 0x28
    long long _timerPauseCount;	// 48 = 0x30
}

+ (void)performWithTargetQueue:(id)arg1 withClientCommand:(id)arg2 executionContext:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010008c6e4
- (void).cxx_destruct;	// IMP=0x000000010008ccb8
- (void)prepareForAudioHandoffWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010008c6cc
- (void)prepareForAudioHandoffFailedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010008c6b8
- (id)peerInfoForCurrentCommand;	// IMP=0x000000010008c6a8
- (_Bool)isTimeoutSuspended;	// IMP=0x000000010008c654
- (_Bool)isDeviceInStarkMode;	// IMP=0x000000010008c600
- (_Bool)isDeviceLockedWithPasscode;	// IMP=0x000000010008c5ac
- (id)assistantLocalizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3;	// IMP=0x000000010008c5a4
- (void)dismissAssistant;	// IMP=0x000000010008c5a0
- (_Bool)openSensitiveURL:(id)arg1;	// IMP=0x000000010008c320
- (void)handleCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010008be70
- (id)initToHandleCommandWithAceId:(id)arg1 executionInfo:(id)arg2 watchdogTimer:(id)arg3 timerQueue:(id)arg4;	// IMP=0x000000010008bd0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

