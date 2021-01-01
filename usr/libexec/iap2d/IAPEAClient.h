//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, IAPApplicationStateMonitor, NSArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface IAPEAClient : NSObject
{
    unsigned int _clientID;	// 8 = 0x8
    unsigned int _capabilities;	// 12 = 0xc
    _Bool _supportsAccessibility;	// 16 = 0x10
    _Bool _clientRequiresAccReset;	// 17 = 0x11
    _Bool _entitlementForAllAccessories;	// 18 = 0x12
    int _processId;	// 20 = 0x14
    CDStruct_4c969caf _auditToken;	// 24 = 0x18
    NSString *_bundleId;	// 56 = 0x38
    NSObject<OS_xpc_object> *xpcConnection;	// 64 = 0x40
    NSArray *_clientEAProtocols;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_processAssertionQ;	// 80 = 0x50
    struct SBSProcessAssertion *_processAssertion;	// 88 = 0x58
    BKSProcessAssertion *_bksProcessAssertion;	// 96 = 0x60
    long long _processAssertionStartTime;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_processAssertionTimer;	// 112 = 0x70
    int _iapSessionRefCount;	// 120 = 0x78
    IAPApplicationStateMonitor *_appStateMonitor;	// 128 = 0x80
    unsigned int _applicationState;	// 136 = 0x88
    NSObject<OS_xpc_object> *_xpcConnection;	// 144 = 0x90
}

+ (unsigned int)clientIDForCameraClient;	// IMP=0x00000001000441a8
+ (unsigned int)clientIDForLocationClient;	// IMP=0x000000010004419c
@property(nonatomic) unsigned int applicationState; // @synthesize applicationState=_applicationState;
@property(readonly, nonatomic) int processID; // @synthesize processID=_processId;
@property(nonatomic) _Bool clientRequiresAccReset; // @synthesize clientRequiresAccReset=_clientRequiresAccReset;
@property(readonly, nonatomic) _Bool supportsAccessibility; // @synthesize supportsAccessibility=_supportsAccessibility;
@property(readonly, nonatomic) unsigned int capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) unsigned int clientID; // @synthesize clientID=_clientID;
- (void)_setJetsamPrioritySpecialCasing:(_Bool)arg1;	// IMP=0x0000000100044a28
- (int)_getProcessId;	// IMP=0x0000000100044964
@property(nonatomic) _Bool cameraSupportedByClient;
@property(nonatomic) _Bool locationSupportedByClient;
- (void)decreaseSessionRefCount;	// IMP=0x00000001000447ac
- (void)increaseSessionRefCount;	// IMP=0x0000000100044768
- (_Bool)canSendConnectionEventForAccessory:(id)arg1;	// IMP=0x0000000100044400
- (void)takeProcessAssertion:(id)arg1;	// IMP=0x00000001000441b4
- (void)dealloc;	// IMP=0x0000000100044030
- (id)initWithCapabilities:(unsigned int)arg1 auditToken:(CDStruct_4c969caf)arg2 xpcConnection:(id)arg3 eaProtocols:(id)arg4 andBundleId:(id)arg5;	// IMP=0x0000000100043c1c

@end

