//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSWatchMetricsEventsController;
@protocol OS_dispatch_queue;

@interface WatchMetricsController : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    SSWatchMetricsEventsController *_eventsController;	// 16 = 0x10
    _Bool _reportRunning;	// 24 = 0x18
    id _taskObserver;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010009e554
- (void).cxx_destruct;	// IMP=0x000000010009fd24
- (void)_stopBackgroundTask;	// IMP=0x000000010009fc8c
- (void)_startBackgroundTaskAtSecondsFromNow:(double)arg1 window:(double)arg2;	// IMP=0x000000010009f91c
- (void)_sendUnentitledResponseToMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010009f6d0
- (void)_scheduleTask;	// IMP=0x000000010009f438
- (void)_reportEventsOnCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010009f350
- (id)_lastRunTime;	// IMP=0x000000010009f2f0
- (_Bool)_hasEntitlements:(id)arg1;	// IMP=0x000000010009f288
- (void)_handleTaskEvent;	// IMP=0x000000010009eeb8
- (void)_cellularSettingChanged;	// IMP=0x000000010009eeac
- (void)observeXPCServer:(id)arg1;	// IMP=0x000000010009ee88
- (void)insertWatchEventWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010009ea2c
- (void)dealloc;	// IMP=0x000000010009e954
- (id)init;	// IMP=0x000000010009e5c0

@end
