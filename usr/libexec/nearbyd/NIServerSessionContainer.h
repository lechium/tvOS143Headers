//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NIServerSessionResourceManager-Protocol.h"
#import "PRAppStateMonitorObserver-Protocol.h"
#import "PRBLEDiscoveryConsuming-Protocol.h"
#import "PRRangingManagerClientRelayTarget-Protocol.h"
#import "UWBSessionServerProtocol-Protocol.h"

@class NIServerAnalyticsManager, NIServerBaseSession, NIServerSessionLifeCycleManager, NSData, NSMutableDictionary, NSString, NSUUID, NSXPCConnection, PRAppStateMonitor, PRAuthorizationManager;
@protocol OS_dispatch_queue, PRBLEDiscoveryProviding, PRSessionActivationGuard, PRUWBServiceProviding, UWBSessionDelegateProxyProtocol;

@interface NIServerSessionContainer : NSObject <PRAppStateMonitorObserver, NIServerSessionResourceManager, PRBLEDiscoveryConsuming, UWBSessionServerProtocol, PRRangingManagerClientRelayTarget>
{
    struct os_unfair_lock_s _entitlementsMapLock;	// 8 = 0x8
    NSData *_localDiscoveryToken;	// 16 = 0x10
    NIServerSessionLifeCycleManager *_lifeCycleManager;	// 24 = 0x18
    PRAppStateMonitor *_appStateMonitor;	// 32 = 0x20
    struct unordered_map<UWBSessionInterruptionReasonInternal, UWBSessionInterruptionBookkeeping, std::__1::hash<UWBSessionInterruptionReasonInternal>, std::__1::equal_to<UWBSessionInterruptionReasonInternal>, std::__1::allocator<std::__1::pair<const UWBSessionInterruptionReasonInternal, UWBSessionInterruptionBookkeeping>>> _interruptionsMap;	// 40 = 0x28
    NSMutableDictionary *_clientEntitlementsMap;	// 80 = 0x50
    PRAuthorizationManager *_authManager;	// 88 = 0x58
    NIServerAnalyticsManager *_analyticsManager;	// 96 = 0x60
    NIServerBaseSession *_specializedSession;	// 104 = 0x68
    int _pid;	// 112 = 0x70
    int _currentUWBProviderState;	// 116 = 0x74
    int _latestAppState;	// 120 = 0x78
    id <UWBSessionDelegateProxyProtocol> _client;	// 128 = 0x80
    NSXPCConnection *_connection;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 144 = 0x90
    NSString *_signingIdentity;	// 152 = 0x98
    NSUUID *_sessionIdentifier;	// 160 = 0xa0
    id <PRBLEDiscoveryProviding> _bleProvider;	// 168 = 0xa8
    id <PRUWBServiceProviding> _uwbProvider;	// 176 = 0xb0
    id <PRSessionActivationGuard> _activationGuard;	// 184 = 0xb8
    long long _latestBluetoothState;	// 192 = 0xc0
}

- (id).cxx_construct;	// IMP=0x000000010002b5f0
- (void).cxx_destruct;	// IMP=0x000000010002b520
@property int latestAppState; // @synthesize latestAppState=_latestAppState;
@property long long latestBluetoothState; // @synthesize latestBluetoothState=_latestBluetoothState;
@property int currentUWBProviderState; // @synthesize currentUWBProviderState=_currentUWBProviderState;
@property(nonatomic) __weak id <PRSessionActivationGuard> activationGuard; // @synthesize activationGuard=_activationGuard;
@property(retain) id <PRUWBServiceProviding> uwbProvider; // @synthesize uwbProvider=_uwbProvider;
@property(retain) id <PRBLEDiscoveryProviding> bleProvider; // @synthesize bleProvider=_bleProvider;
@property(readonly) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly) int pid; // @synthesize pid=_pid;
@property(readonly, copy) NSString *signingIdentity; // @synthesize signingIdentity=_signingIdentity;
@property(readonly) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain) id <UWBSessionDelegateProxyProtocol> client; // @synthesize client=_client;
- (id)updatesQueue;	// IMP=0x000000010002b450
- (void)monitoredApp:(int)arg1 didChangeState:(int)arg2;	// IMP=0x000000010002b27c
- (void)_handleClientAppStoppedBeingVisible;	// IMP=0x000000010002b0e8
- (void)_handleClientAppBecameVisible;	// IMP=0x000000010002af4c
- (void)_handleBluetoothBecameUnavailable;	// IMP=0x000000010002aea4
- (void)_handleBluetoothBecameAvailable;	// IMP=0x000000010002ae54
- (void)_handleUWBSystemError;	// IMP=0x000000010002ade8
- (void)_handleUWBSystemOffWithCause:(int)arg1;	// IMP=0x000000010002ad24
- (void)_handleUWBSystemReady;	// IMP=0x000000010002ab14
- (void)invalidate;	// IMP=0x000000010002aa54
- (void)interruptionReasonEnded:(long long)arg1 monotonicTimeSeconds:(double)arg2;	// IMP=0x000000010002a848
- (void)interruptSessionWithReason:(long long)arg1 monotonicTimeSeconds:(double)arg2;	// IMP=0x000000010002a594
- (_Bool)isBackroundOperationAllowed;	// IMP=0x000000010002a58c
@property(readonly) duration_6174cf92 nominalCycleRate;
- (void)bluetoothAdvertisingAddressChanged:(unsigned long long)arg1;	// IMP=0x000000010002a508
- (void)bluetoothServiceInterrupted;	// IMP=0x000000010002a4a4
- (void)bluetoothDidChangeState:(long long)arg1;	// IMP=0x000000010002a398
- (void)didLoseDevice:(id)arg1;	// IMP=0x000000010002a300
- (void)discoveredDevice:(id)arg1 didUpdate:(id)arg2;	// IMP=0x000000010002a244
- (void)didDiscoverDevice:(id)arg1;	// IMP=0x000000010002a1ac
- (void)rangingServiceDidUpdateState:(int)arg1 cause:(int)arg2;	// IMP=0x0000000100029da0
- (void)serviceRequestDidUpdateStatus:(struct ServiceRequestStatusUpdate)arg1;	// IMP=0x0000000100029ca4
- (void)didReceiveRemoteSessionData:(const struct RemoteSessionData *)arg1;	// IMP=0x0000000100029c00
- (void)didReceiveSessionStartNotification:(const struct SessionStartNotification *)arg1;	// IMP=0x0000000100029b5c
- (void)didReceiveNewSolution:(const struct RoseSolution *)arg1;	// IMP=0x0000000100029ab8
- (void)didFailWithErrorCode:(long long)arg1 errorString:(const basic_string_90719d97 *)arg2;	// IMP=0x000000010002993c
- (shared_ptr_7f363ebc)protobufLogger;	// IMP=0x00000001000298f4
- (id)remote;	// IMP=0x00000001000298ec
- (id)discoveryToken;	// IMP=0x00000001000298b4
- (id)analytics;	// IMP=0x00000001000298ac
@property(retain, nonatomic) PRAppStateMonitor *appStateMonitor;
- (id)lifecycleSupervisor;	// IMP=0x00000001000297b4
- (id)uwbResource;	// IMP=0x0000000100029694
- (id)btResource;	// IMP=0x0000000100029574
- (id)serverSessionIdentifier;	// IMP=0x000000010002956c
- (int)clientPid;	// IMP=0x0000000100029564
- (id)clientAppDisplayName;	// IMP=0x0000000100029444
- (id)clientConnectionQueue;	// IMP=0x0000000100029438
- (id)_displayPermissionsPromptIfNeeded;	// IMP=0x00000001000291e8
@property(readonly, copy) NSString *displayName;
- (_Bool)_supportedPlatform;	// IMP=0x0000000100029124
- (id)_getCapabilities;	// IMP=0x0000000100028fe0
- (void)_populateClientEntitlements;	// IMP=0x0000000100028d90
- (_Bool)_isPrivilegedClient;	// IMP=0x0000000100028cdc
- (_Bool)_backgroundOperationAllowed;	// IMP=0x0000000100028c28
- (void)_handleSpecializedSessionInvalidation:(id)arg1;	// IMP=0x0000000100028aa0
- (void)_removeObject:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000287d8
- (void)_addObject:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100028510
- (void)shareSandboxToken:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000283a4
- (void)pause:(CDUnknownBlockType)arg1;	// IMP=0x0000000100028114
- (void)runWithConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100027788
- (void)activate:(CDUnknownBlockType)arg1;	// IMP=0x0000000100026f38
- (void)queryDeviceCapabilities:(CDUnknownBlockType)arg1;	// IMP=0x0000000100026d98
- (void)dealloc;	// IMP=0x0000000100026d14
- (id)initWithClientInfo:(const struct PRNearbyInteractionClientInfo *)arg1 connection:(id)arg2 authorizationManager:(id)arg3;	// IMP=0x0000000100026964
- (id)init;	// IMP=0x0000000100026918

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
