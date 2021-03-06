//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RTCReportingDeallocNotifierDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSXPCConnection, RTCReportingDeallocNotifier;
@protocol OS_dispatch_queue, OS_dispatch_source, RTCReportingMessageSentNotifier;

@interface RTCReporting : NSObject <RTCReportingDeallocNotifierDelegate>
{
    NSObject<OS_dispatch_queue> *_reportingQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_reportingPeriodicTasksQueue;	// 16 = 0x10
    CDUnknownBlockType _loggingBlock;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_timer;	// 40 = 0x28
    int _counter;	// 48 = 0x30
    NSMutableDictionary *_periodicServiceDict;	// 56 = 0x38
    NSArray *_enabledBackendNames;	// 64 = 0x40
    NSArray *_whitelistedEvents;	// 72 = 0x48
    NSArray *_blacklistedEvents;	// 80 = 0x50
    RTCReportingDeallocNotifier *_strongDeallocNotifier;	// 88 = 0x58
    id _weakDeallocNotifier;	// 96 = 0x60
    id _weakMessageSentDelegate;	// 104 = 0x68
}

+ (id)newSecureHierarchyTokenFromParentToken:(id)arg1;	// IMP=0x000000010001d4c4
+ (id)newHierarchyTokenFromParentToken:(id)arg1;	// IMP=0x000000010001d374
+ (_Bool)sendOneMessageWithSessionInfo:(id)arg1 userInfo:(id)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5 error:(id *)arg6;	// IMP=0x000000010001cb4c
+ (_Bool)closeEphemeralSessiontWithSessionId:(id)arg1;	// IMP=0x000000010001c6a0
+ (id)createEphemeralSessionWithSessionInfo:(id)arg1 userInfo:(id)arg2 error:(id *)arg3;	// IMP=0x000000010001bdfc
+ (id)getPersistentIdentifierForDNU:(_Bool)arg1;	// IMP=0x000000010001bc3c
+ (void)regeneratePersistentIdentifierForDNU:(_Bool)arg1;	// IMP=0x000000010001bab0
@property(copy, nonatomic) CDUnknownBlockType messageLoggingBlock; // @synthesize messageLoggingBlock=_loggingBlock;
- (void)updateSharedDataForKey:(id)arg1 value:(id)arg2;	// IMP=0x000000010001b9d4
- (void)updateSharedDataWithDictionary:(id)arg1;	// IMP=0x000000010001b8fc
- (void)finishSession;	// IMP=0x000000010001b884
- (void)flushMessagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001b5e0
- (_Bool)flushMessages;	// IMP=0x000000010001b564
- (_Bool)sendMessageWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001b1d0
- (_Bool)sendMessageWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3 error:(id *)arg4;	// IMP=0x000000010001aeb4
- (_Bool)isBlacklistedEvent:(unsigned short)arg1;	// IMP=0x000000010001ad78
- (_Bool)isWhitelistedEvent:(unsigned short)arg1;	// IMP=0x000000010001ac3c
- (void)notifyMessageWasSent:(id)arg1;	// IMP=0x000000010001ab0c
- (void)fetchReportingStatesWithUserInfo:(id)arg1 fetchComplete:(CDUnknownBlockType)arg2;	// IMP=0x000000010001a584
- (void)startConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001a05c
@property(nonatomic) id <RTCReportingMessageSentNotifier> messageSentDelegate;
- (void)dealloc;	// IMP=0x0000000100019ea4
- (oneway void)release;	// IMP=0x0000000100019e48
- (id)retain;	// IMP=0x0000000100019dec
- (void)aboutToDealloc;	// IMP=0x0000000100019d40
- (id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3;	// IMP=0x0000000100019d30
- (id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3 aggregationBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100019694
- (_Bool)unregisterPeriodTaskForModule:(unsigned int)arg1;	// IMP=0x000000010001e648
- (_Bool)registerPeriodicTaskForModule:(unsigned int)arg1 needToUpdate:(_Bool)arg2 needToReport:(_Bool)arg3 serviceBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010001e41c
- (void)stopLogTimer;	// IMP=0x000000010001e2f4
- (void)startLogTimerWithInterval:(int)arg1 reportingMultiplier:(int)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4;	// IMP=0x000000010001e0e0
- (void)_myPeriodicTask:(unsigned short)arg1 type:(unsigned short)arg2 intervalMultiplier:(int)arg3 updateTimeout:(unsigned long long)arg4;	// IMP=0x000000010001d5b4
- (_Bool)uploadDataArray:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001eb74
- (_Bool)uploadFileWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001e8f8
- (_Bool)serverSupportsFileUpload;	// IMP=0x000000010001e7f4
- (_Bool)setDigestKey:(id)arg1 algorithm:(int)arg2;	// IMP=0x000000010001ecbc

@end

