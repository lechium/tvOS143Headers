//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EAOverHID, FudIpcDispatch, FudStorage, NSMutableArray, UARPManagerAUD;
@protocol OS_dispatch_queue, OS_dispatch_queue_attr, OS_dispatch_source, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface FudController : NSObject
{
    NSObject<OS_xpc_object> *_listener;	// 8 = 0x8
    long long _idleExitTimeoutSec;	// 16 = 0x10
    _Bool _isRunningTimer;	// 24 = 0x18
    _Bool _isIdleExiting;	// 25 = 0x19
    _Bool _isWatchingGroup;	// 26 = 0x1a
    _Bool _isInstallerUpdate;	// 27 = 0x1b
    _Bool _isDeviceIdleLaunch;	// 28 = 0x1c
    _Bool _isMayRebootLaunch;	// 29 = 0x1d
    _Bool _isSimulatedDeviceIdleLaunch;	// 30 = 0x1e
    _Bool _simulateIdleUseFilepath;	// 31 = 0x1f
    NSObject<OS_dispatch_source> *_idleTimer;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_timeoutQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_processingQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_eaOverHIDQueue;	// 56 = 0x38
    EAOverHID *_eaOverHID;	// 64 = 0x40
    NSObject<OS_dispatch_queue_attr> *_attr;	// 72 = 0x48
    FudIpcDispatch *_fudIpcDispatch;	// 80 = 0x50
    unsigned long long _numProcessedConnection;	// 88 = 0x58
    FudStorage *_fudStorage;	// 96 = 0x60
    NSMutableArray *_defaultClients;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_uarpQueue;	// 112 = 0x70
    UARPManagerAUD *_uarpManager;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_usr1SignalSource;	// 128 = 0x80
}

- (void)doPeriodicCheck;	// IMP=0x000000010000fbe0
- (void)doInstallerCheck;	// IMP=0x000000010000f788
- (void)doDeviceIdleCheck;	// IMP=0x000000010000f340
- (void)doSimulateIdleCheck;	// IMP=0x000000010000f260
- (void)doMayRebootCheck;	// IMP=0x000000010000ee20
- (void)setActivityForPeriodicLaunch:(_Bool)arg1;	// IMP=0x000000010000eab0
- (void)setActivityForDeviceIdleLaunch:(_Bool)arg1;	// IMP=0x000000010000e7c8
- (void)setActivityForMayRebootLaunch:(_Bool)arg1;	// IMP=0x000000010000e4ec
- (_Bool)initializeFud;	// IMP=0x000000010000e054
- (void)notifyClientsOfInstallerUpdate:(_Bool)arg1;	// IMP=0x000000010000dea0
- (_Bool)startDefaultClients;	// IMP=0x000000010000dde4
- (_Bool)setupXPCStreamsWithPolicies:(id)arg1 shouldRegister:(_Bool)arg2;	// IMP=0x000000010000d9d8
- (void)registerForNotifydNotification:(id)arg1 filterName:(id)arg2;	// IMP=0x000000010000d8a4
- (id)loadPolicyForAllPlugins;	// IMP=0x000000010000d644
- (id)loadPolicyForAllServices;	// IMP=0x000000010000d390
- (void)handleXPCAPIEvent:(id)arg1;	// IMP=0x000000010000d088
- (_Bool)clientHasEntitlements:(id)arg1;	// IMP=0x000000010000d04c
- (void)processAPIDict:(id)arg1;	// IMP=0x000000010000cd18
- (void)handleInternalAPIEvent:(id)arg1;	// IMP=0x000000010000cbdc
- (void)handleXPCStreamEvent:(id)arg1;	// IMP=0x000000010000c60c
- (void)handleEAOverHIDXPCStreamEvent:(id)arg1 forFilterName:(id)arg2;	// IMP=0x000000010000c44c
- (void)handleBrokenConnection:(id)arg1;	// IMP=0x000000010000c370
- (_Bool)processEvent:(id)arg1;	// IMP=0x000000010000c2b8
- (void)watchSharedGroup;	// IMP=0x000000010000c13c
- (void)initIdleTimer;	// IMP=0x000000010000c034
- (void)cancelIdleTimer;	// IMP=0x000000010000bf7c
- (void)beginIdleTimer;	// IMP=0x000000010000be2c
- (void)handleIdleTimeout;	// IMP=0x000000010000bd6c
- (_Bool)isWorkPending;	// IMP=0x000000010000bd08
- (void)idleExit;	// IMP=0x000000010000bbf4
- (void)handleInternalClientMessage:(id)arg1;	// IMP=0x000000010000bac4
- (void)setActivityForUARPPeriodicLaunch:(_Bool)arg1;	// IMP=0x000000010000b7e4
- (void)initSignals;	// IMP=0x000000010000b738
- (void)initUARP:(_Bool)arg1;	// IMP=0x000000010000b6a4
- (id)initWithIdleTimeout:(long long)arg1;	// IMP=0x000000010000b480

@end

