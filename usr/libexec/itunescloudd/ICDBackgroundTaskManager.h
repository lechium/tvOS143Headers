//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICDBackgroundTaskManaging-Protocol.h"

@class NSMutableSet, NSString;
@protocol ICDAccountManaging, ICDHandlerCoordinating;

@interface ICDBackgroundTaskManager : NSObject <ICDBackgroundTaskManaging>
{
    id <ICDAccountManaging> _accountManager;	// 8 = 0x8
    id <ICDHandlerCoordinating> _handlerCoordinator;	// 16 = 0x10
    NSMutableSet *_currentTasks;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000f6bbc
@property(readonly, nonatomic) NSMutableSet *currentTasks; // @synthesize currentTasks=_currentTasks;
@property(readonly, nonatomic) id <ICDHandlerCoordinating> handlerCoordinator; // @synthesize handlerCoordinator=_handlerCoordinator;
@property(readonly, nonatomic) id <ICDAccountManaging> accountManager; // @synthesize accountManager=_accountManager;
- (void)_handleJaliscoDeferredPushUpdateTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f6894
- (void)_handleSagaDeferredPushUpdateTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f657c
- (id)_deferredPushActivityCriteriaForTask:(id)arg1 startTime:(long long)arg2 gracePeriod:(long long)arg3;	// IMP=0x00000001000f63dc
- (long long)_deferredPushGracePeriodSeconds;	// IMP=0x00000001000f63cc
- (id)_periodicPollingActivityCriteriaWithRefreshInterval:(long long)arg1 gracePeriod:(long long)arg2;	// IMP=0x00000001000f6310
- (long long)_pollingGracePeriodSecondsForRefreshInterval:(long long)arg1;	// IMP=0x00000001000f62e4
- (long long)_pollingRefreshIntervalSecondsUsingBag:(id)arg1;	// IMP=0x00000001000f60b4
- (_Bool)_cellularDataAllowed;	// IMP=0x00000001000f6018
- (id)activityCriteriaForTask:(id)arg1 startTimeInSeconds:(long long)arg2;	// IMP=0x00000001000f5f84
- (void)_handleTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f5ef4
- (id)_taskWithName:(id)arg1;	// IMP=0x00000001000f5ce8
- (void)_unscheduleTask:(id)arg1;	// IMP=0x00000001000f5ba0
- (void)_scheduleTask:(id)arg1 withStartTime:(long long)arg2;	// IMP=0x00000001000f5604
- (void)_stopTask:(id)arg1;	// IMP=0x00000001000f5530
- (void)_startTask:(id)arg1;	// IMP=0x00000001000f5438
- (void)_saveCurrentTasks;	// IMP=0x00000001000f51f4
- (void)_restoreCurrentTasks;	// IMP=0x00000001000f4f60
- (void)scheduleTaskOfType:(long long)arg1 forConfiguration:(id)arg2;	// IMP=0x00000001000f4d30
- (void)startPeriodicPolling;	// IMP=0x00000001000f4464
- (id)initWithAccountManager:(id)arg1 handlerCoordinator:(id)arg2;	// IMP=0x00000001000f4384

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

