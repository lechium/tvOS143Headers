//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UWBSessionDelegateProxyProtocol-Protocol.h"

@class NIConfiguration, NIDiscoveryToken, NIExportedObjectForwarder, NIServerConnection, NSDictionary, NSError, NSString, NSUUID;
@protocol NIInternalSessionDelegate, NISessionDelegate, OS_dispatch_queue, OS_os_log;

@interface NISession : NSObject <UWBSessionDelegateProxyProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct mutex _mutex;	// 16 = 0x10
    NSUUID *_internalID;	// 80 = 0x50
    NIServerConnection *_connection;	// 88 = 0x58
    NIExportedObjectForwarder *_exportedObjectForwarder;	// 96 = 0x60
    NIConfiguration *_currentConfiguration;	// 104 = 0x68
    struct vector<UWBSessionInterruptionBookkeeping, std::__1::allocator<UWBSessionInterruptionBookkeeping>> _interruptions;	// 112 = 0x70
    struct atomic<bool> _readyForCallbacks;	// 136 = 0x88
    NSObject<OS_os_log> *_log;	// 144 = 0x90
    double _startTime;	// 152 = 0x98
    double _duration;	// 160 = 0xa0
    _Bool _updatedNearbyObjects;	// 168 = 0xa8
    int _internalState;	// 172 = 0xac
    id <NISessionDelegate> _delegate;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 184 = 0xb8
    NSError *_invalidationError;	// 192 = 0xc0
    NSDictionary *_activationResponse;	// 200 = 0xc8
    id <NIInternalSessionDelegate> _internalDelegate;	// 208 = 0xd0
}

+ (_Bool)isSupported;	// IMP=0x00000001001b4168
+ (void)_queryAndCacheCapabilities;	// IMP=0x00000001001b335c
+ (_Bool)_supportedPlatform:(id)arg1;	// IMP=0x00000001001b32e4
+ (id)_oneShotConnection:(_Bool)arg1;	// IMP=0x00000001001b31dc
+ (void)setCachedDeviceCapabilities:(id)arg1;	// IMP=0x00000001001b2dc0
+ (id)cachedDeviceCapabilities;	// IMP=0x00000001001b2db4
- (id).cxx_construct;	// IMP=0x00000001001b7cd8
- (void).cxx_destruct;	// IMP=0x00000001001b7c2c
@property __weak id <NIInternalSessionDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(retain) NSDictionary *activationResponse; // @synthesize activationResponse=_activationResponse;
@property(retain) NSError *invalidationError; // @synthesize invalidationError=_invalidationError;
@property int internalState; // @synthesize internalState=_internalState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <NISessionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_getSessionFailureError;	// IMP=0x00000001001b7ae4
- (void)_notifyDidInvalidateWithError:(id)arg1;	// IMP=0x00000001001b7940
- (id)_verifyError:(id)arg1;	// IMP=0x00000001001b773c
- (void)_handleCommandUnsupportedPlatform;	// IMP=0x00000001001b76bc
- (void)_notifySessionHasFailed;	// IMP=0x00000001001b7658
- (void)_performBlockOnDelegateQueue:(CDUnknownBlockType)arg1 ifRespondsToSelector:(SEL)arg2 evenIfNotRunning:(_Bool)arg3;	// IMP=0x00000001001b7594
- (void)_performBlockOnDelegateQueue:(CDUnknownBlockType)arg1 ifRespondsToSelector:(SEL)arg2;	// IMP=0x00000001001b7574
- (void)_handlePauseSessionSuccess;	// IMP=0x00000001001b74c4
- (void)_handlePauseSessionError:(id)arg1;	// IMP=0x00000001001b73dc
- (void)_handleRunSessionSuccess;	// IMP=0x00000001001b732c
- (void)_handleRunSessionError:(id)arg1;	// IMP=0x00000001001b71b8
- (void)_handleActivationSuccess:(id)arg1;	// IMP=0x00000001001b6f74
- (void)_handleActivationError:(id)arg1;	// IMP=0x00000001001b6e90
- (void)_invalidateInternalOnConnectionQueue:(_Bool)arg1;	// IMP=0x00000001001b6cf4
- (void)_pauseInternalOnConnectionQueue:(_Bool)arg1;	// IMP=0x00000001001b6af4
- (void)_reinterruptSessionWithCachedInterruption;	// IMP=0x00000001001b6a40
- (void)_interruptSessionWithInternalReason:(long long)arg1 onConnectionQueue:(_Bool)arg2;	// IMP=0x00000001001b6918
- (void)_invalidateSessionInternalWithError:(id)arg1;	// IMP=0x00000001001b68a4
- (void)object:(id)arg1 didUpdateRegion:(id)arg2 previousRegion:(id)arg3;	// IMP=0x00000001001b6674
- (void)didDiscoverNearbyObject:(id)arg1;	// IMP=0x00000001001b6548
- (void)uwbSessionInterruptionReasonEnded:(long long)arg1 timestamp:(double)arg2;	// IMP=0x00000001001b6038
- (void)uwbSessionInterruptedWithReason:(long long)arg1 timestamp:(double)arg2;	// IMP=0x00000001001b5be8
- (void)uwbSessionDidInvalidateWithError:(id)arg1;	// IMP=0x00000001001b5b88
- (void)uwbSessionDidFailWithError:(id)arg1;	// IMP=0x00000001001b5ab0
- (void)uwbSystemDidChangeState:(unsigned long long)arg1;	// IMP=0x00000001001b59fc
- (void)didUpdateNearbyObjects:(id)arg1;	// IMP=0x00000001001b58c8
- (void)didRemoveNearbyObjects:(id)arg1 withReason:(unsigned long long)arg2;	// IMP=0x00000001001b558c
- (id)_synchronousRemoteObject;	// IMP=0x00000001001b557c
- (id)_remoteObject;	// IMP=0x00000001001b556c
- (void)_serverConnectionInterrupted;	// IMP=0x00000001001b5450
- (void)_serverConnectionInvalidated;	// IMP=0x00000001001b53e4
- (void)_activateAsync;	// IMP=0x00000001001b52a8
- (void)_activateSyncOnConnectionQueue;	// IMP=0x00000001001b5078
- (void)_activate:(_Bool)arg1;	// IMP=0x00000001001b5058
- (void)setConfigurationForTesting:(id)arg1;	// IMP=0x00000001001b504c
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001b4aac
- (void)invalidate;	// IMP=0x00000001001b4a40
- (void)pause;	// IMP=0x00000001001b4908
- (void)runWithConfiguration:(id)arg1;	// IMP=0x00000001001b4468
- (id)init;	// IMP=0x00000001001b444c
- (_Bool)_isInternalClient;	// IMP=0x00000001001b4314
@property(readonly, copy, nonatomic) NIDiscoveryToken *discoveryToken;
@property(readonly, copy, nonatomic) NIConfiguration *configuration;
- (void)_submitErrorMetric:(id)arg1;	// IMP=0x00000001001b3c2c
- (void)_logDurationAndSubmit:(_Bool)arg1;	// IMP=0x00000001001b3aac
- (void)_logTime;	// IMP=0x00000001001b3928
- (void)_shareSandboxExtensionForCurrentBundle;	// IMP=0x00000001001b35c8
- (id)_initAndConnectToServer;	// IMP=0x00000001001b2dd0
- (void)_removeRegionPredicate:(id)arg1;	// IMP=0x00000001001b8270
- (void)_addRegionPredicate:(id)arg1;	// IMP=0x00000001001b81dc
- (void)_removeObject:(id)arg1;	// IMP=0x00000001001b7f70
- (void)_addObject:(id)arg1;	// IMP=0x00000001001b7d04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

