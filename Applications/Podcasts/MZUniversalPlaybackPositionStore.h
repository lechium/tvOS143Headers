//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MZAsynchronousTask, MZUPPAsynchronousTask, MZUniversalPlaybackPositionSyncHandler, NSDate, NSTimer;
@protocol MZUniversalPlaybackPositionDataSource, OS_dispatch_queue;

@interface MZUniversalPlaybackPositionStore : NSObject
{
    _Bool _hasLocalChangesToSync;	// 8 = 0x8
    _Bool _canRequestStoreSignIn;	// 9 = 0x9
    _Bool _refreshTimerActive;	// 10 = 0xa
    _Bool _isActive;	// 11 = 0xb
    _Bool _initialAutosyncNeeded;	// 12 = 0xc
    id <MZUniversalPlaybackPositionDataSource> _dataSource;	// 16 = 0x10
    unsigned long long _automaticSynchronizeOptions;	// 24 = 0x18
    MZUPPAsynchronousTask *_synchronizeTask;	// 32 = 0x20
    MZAsynchronousTask *_bagLookupTask;	// 40 = 0x28
    MZUniversalPlaybackPositionSyncHandler *_syncHandler;	// 48 = 0x30
    NSDate *_dateToFireNextTimer;	// 56 = 0x38
    NSTimer *_timer;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    id _prefsObserver;	// 80 = 0x50
    double _autorefreshRate;	// 88 = 0x58
    double _bagSpecifiedPollingInterval;	// 96 = 0x60
}

+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;	// IMP=0x000000010004919c
- (void).cxx_destruct;	// IMP=0x000000010004bd10
@property(nonatomic) double bagSpecifiedPollingInterval; // @synthesize bagSpecifiedPollingInterval=_bagSpecifiedPollingInterval;
@property(nonatomic) double autorefreshRate; // @synthesize autorefreshRate=_autorefreshRate;
@property(nonatomic) id prefsObserver; // @synthesize prefsObserver=_prefsObserver;
@property(nonatomic) _Bool initialAutosyncNeeded; // @synthesize initialAutosyncNeeded=_initialAutosyncNeeded;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) _Bool refreshTimerActive; // @synthesize refreshTimerActive=_refreshTimerActive;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSDate *dateToFireNextTimer; // @synthesize dateToFireNextTimer=_dateToFireNextTimer;
@property(retain, nonatomic) MZUniversalPlaybackPositionSyncHandler *syncHandler; // @synthesize syncHandler=_syncHandler;
@property(retain, nonatomic) MZAsynchronousTask *bagLookupTask; // @synthesize bagLookupTask=_bagLookupTask;
@property(retain, nonatomic) MZUPPAsynchronousTask *synchronizeTask; // @synthesize synchronizeTask=_synchronizeTask;
@property(nonatomic) _Bool canRequestStoreSignIn; // @synthesize canRequestStoreSignIn=_canRequestStoreSignIn;
@property(nonatomic) _Bool hasLocalChangesToSync; // @synthesize hasLocalChangesToSync=_hasLocalChangesToSync;
@property(nonatomic) unsigned long long automaticSynchronizeOptions; // @synthesize automaticSynchronizeOptions=_automaticSynchronizeOptions;
@property id <MZUniversalPlaybackPositionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_onQueueResumeTimer;	// IMP=0x000000010004bba8
- (_Bool)_timerIsStopped;	// IMP=0x000000010004bb24
- (void)_onQueueSuspendTimer;	// IMP=0x000000010004ba8c
- (void)_onQueueStartNewTimer;	// IMP=0x000000010004ba7c
- (void)_onQueueStartNewTimerWithTimeIntervalSinceNow:(double)arg1;	// IMP=0x000000010004b9fc
- (void)_onQueueStopTimer;	// IMP=0x000000010004b998
- (void)_onQueueScheduleTimer;	// IMP=0x000000010004b648
- (void)_timerFired:(id)arg1;	// IMP=0x000000010004b5d8
- (void)_updateAutorefreshRateSettingAndRestartTimer:(_Bool)arg1;	// IMP=0x000000010004b520
- (double)_effectiveAutorefreshRate;	// IMP=0x000000010004b410
- (void)_updateForStoreAccountsChange;	// IMP=0x000000010004b350
- (void)_grabBagWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010004b158
- (void)_onQueueLoadBagContextWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010004a77c
- (void)_updateSettingsFromLoadedBagContext:(id)arg1;	// IMP=0x000000010004a660
- (id)_accountForSyncing;	// IMP=0x000000010004a604
- (void)_onQueueSynchronizeImmediatelyWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000498b0
- (void)_onQueueSynchronizeWithAutosynchronizeMask:(unsigned long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010004989c
- (void)checkForAvailabilityWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100049720
- (void)synchronizeImmediatelyWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100049618
- (_Bool)automaticallySynchronizeOnBecomeActive;	// IMP=0x000000010004960c
- (_Bool)_automaticallySynchronizeOnBecomeActive;	// IMP=0x00000001000495ec
- (void)setAutomaticallySynchronizeOnBecomeActive:(_Bool)arg1;	// IMP=0x00000001000495a4
- (_Bool)automaticallySynchronizeLocalChangesOnResignActive;	// IMP=0x0000000100049598
- (_Bool)_automaticallySynchronizeLocalChangesOnResignActive;	// IMP=0x0000000100049578
- (void)setAutomaticallySynchronizeLocalChangesOnResignActive:(_Bool)arg1;	// IMP=0x0000000100049530
- (void)_onQueueSetHasLocalChangesToSync:(_Bool)arg1;	// IMP=0x00000001000494b4
- (void)resignActive;	// IMP=0x0000000100049300
- (void)becomeActive;	// IMP=0x000000010004924c
- (void)_onQueueUpdateTimerForAutomaticSyncOptionChanges;	// IMP=0x0000000100049224
- (void)_onQueueUpdateTimerForActiveChanges;	// IMP=0x00000001000491b0
- (void)dealloc;	// IMP=0x0000000100048fe8
- (id)initWithInitialUpdateDelay:(double)arg1;	// IMP=0x0000000100048fd8
- (id)initWithInitialUpdateDelay:(double)arg1 isActive:(_Bool)arg2;	// IMP=0x0000000100048c98
- (id)init;	// IMP=0x0000000100048c84

@end
