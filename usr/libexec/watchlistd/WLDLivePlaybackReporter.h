//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WLDPlaybackReporterProtocol-Protocol.h"
#import "_WLDStateMachine-Protocol.h"

@class NSDate, NSString, WLKPlaybackSummary, WLKSchedule, WLKTransactionScope;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface WLDLivePlaybackReporter : NSObject <_WLDStateMachine, WLDPlaybackReporterProtocol>
{
    WLKSchedule *_schedule;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
    NSDate *_timerEventDate;	// 24 = 0x18
    NSString *_sessionID;	// 32 = 0x20
    unsigned long long state;	// 40 = 0x28
    WLKPlaybackSummary *_lastSummary;	// 48 = 0x30
    WLKTransactionScope *_transaction;	// 56 = 0x38
}

+ (id)_contentEventFromSummary:(id)arg1 schedule:(id)arg2 event:(id)arg3 contentBegin:(_Bool)arg4;	// IMP=0x00000001000257a0
+ (id)_tuneEventFromSummary:(id)arg1 schedule:(id)arg2 tuneIn:(_Bool)arg3;	// IMP=0x0000000100025454
+ (void)_decorateEBSSummary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100024dd0
+ (void)_decorateLiveSummary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100024a00
+ (void)decorateSummary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100023a14
+ (void)fetchCanonicalIDForSummary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100023738
- (void).cxx_destruct;	// IMP=0x000000010002623c
@property(retain) WLKTransactionScope *transaction; // @synthesize transaction=_transaction;
@property(retain) WLKPlaybackSummary *lastSummary; // @synthesize lastSummary=_lastSummary;
@property unsigned long long state; // @synthesize state;
- (void)_invalidateTimer;	// IMP=0x0000000100026188
- (void)_configureTimerForDate:(id)arg1 input:(unsigned long long)arg2;	// IMP=0x0000000100025ef4
- (void)_evaluateSchedule;	// IMP=0x0000000100025cf4
- (id)_debugStringForInput:(unsigned long long)arg1;	// IMP=0x00000001000253f8
- (void)_reportPlayEvents:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100025168
- (void)_doContentBoundaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100024560
- (void)_doTune:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100023f78
- (void)_processInput:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100023c2c
- (void)setSchedule:(id)arg1;	// IMP=0x000000010002397c
- (id)schedule;	// IMP=0x0000000100023938
- (void)invalidate;	// IMP=0x000000010002392c
- (void)reportPlayback:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100022ed8
- (id)initWithSessionID:(id)arg1;	// IMP=0x0000000100022e4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
