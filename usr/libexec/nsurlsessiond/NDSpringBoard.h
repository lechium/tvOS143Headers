//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface NDSpringBoard : NSObject
{
    BKSApplicationStateMonitor *_monitor;	// 8 = 0x8
    NSMutableDictionary *_assertions;	// 16 = 0x10
    NSMutableDictionary *_observers;	// 24 = 0x18
    NSMutableDictionary *_appStates;	// 32 = 0x20
    NSMutableDictionary *_observedBackgroundSettings;	// 40 = 0x28
    _Bool _backgroundUpdatesAllowed;	// 48 = 0x30
    NSMutableSet *_monitoredBundleIDs;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    struct os_unfair_lock_s _assertion_lock;	// 72 = 0x48
}

+ (id)sharedSpringBoard;	// IMP=0x000000010004caf8
- (void).cxx_destruct;	// IMP=0x000000010004b074
- (_Bool)identifierIsForSpringBoardApplication:(id)arg1;	// IMP=0x000000010004afd8
- (_Bool)wakeUpApp:(id)arg1 forSession:(id)arg2 withSessionUUID:(id)arg3;	// IMP=0x000000010004ab2c
- (_Bool)takeAssertionForBundleID:(id)arg1 sessionID:(id)arg2 sessionUUID:(id)arg3;	// IMP=0x000000010004a5d8
- (id)assertionNameForSessionUUID:(id)arg1;	// IMP=0x000000010004a598
- (void)removePendingLaunchTasksForBundleID:(id)arg1 sessionID:(id)arg2 cancel:(_Bool)arg3;	// IMP=0x000000010004a594
- (void)releaseAssertionForBundleID:(id)arg1 sessionID:(id)arg2;	// IMP=0x000000010004a4d0
- (void)_onqueue_releaseAssertionForBundleID:(id)arg1 sessionID:(id)arg2;	// IMP=0x000000010004a2e4
- (_Bool)applicationBackgroundUpdatesEnabled:(id)arg1;	// IMP=0x000000010004a238
- (_Bool)application:(id)arg1 isHandlingBackgroundSessionWithIdentifier:(id)arg2 withSessionUUID:(id)arg3;	// IMP=0x000000010004a004
- (_Bool)applicationHasBackgroundTaskCompletion:(id)arg1;	// IMP=0x0000000100049d38
- (_Bool)application:(id)arg1 hasAssertionWithName:(id)arg2;	// IMP=0x0000000100049b20
- (_Bool)isValidAssertion:(id)arg1 withName:(id)arg2;	// IMP=0x00000001000499a0
- (_Bool)applicationIsBeingDebugged:(id)arg1;	// IMP=0x0000000100049990
- (_Bool)applicationIsSuspended:(id)arg1;	// IMP=0x000000010004996c
- (_Bool)applicationIsAwake:(id)arg1;	// IMP=0x000000010004993c
- (_Bool)applicationIsForeground:(id)arg1;	// IMP=0x0000000100049918
- (unsigned int)applicationStateForBundleID:(id)arg1;	// IMP=0x0000000100049864
- (void)stopMonitoringBundleID:(id)arg1;	// IMP=0x00000001000497e0
- (void)startMonitoringBundleID:(id)arg1;	// IMP=0x000000010004975c
- (void)removeObserver:(id)arg1 forApplication:(id)arg2;	// IMP=0x00000001000496a0
- (void)addObserver:(id)arg1 forApplication:(id)arg2;	// IMP=0x00000001000495e4
- (void)handleApplicationStateChange:(id)arg1;	// IMP=0x0000000100049560
- (void)handleBackgroundSettingsChange;	// IMP=0x0000000100049508
- (id)getBackgroundSettingsAppList;	// IMP=0x000000010004943c
- (void)setupMonitor;	// IMP=0x00000001000493b0
- (void)dealloc;	// IMP=0x00000001000492e8
- (id)init;	// IMP=0x0000000100049098

@end

