//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMSession.h"

@class NEVPNProtocol, NSArray, NSDictionary, NSString;

@interface NESMLegacySession : NESMSession
{
    int _sessionType;	// 8 = 0x8
    NEVPNProtocol *_protocol;	// 16 = 0x10
    struct _ne_sm_bridge *_bridge;	// 24 = 0x18
    NSArray *_agentPIDs;	// 32 = 0x20
    NSDictionary *_userOptions;	// 40 = 0x28
}

+ (id)parseRoutingTableMessage:(const struct rt_msghdr2 *)arg1 forInterfaceName:(const char *)arg2;	// IMP=0x000000010005f93c
- (void).cxx_destruct;	// IMP=0x00000001000620a8
@property(retain) NSDictionary *userOptions; // @synthesize userOptions=_userOptions;
@property(retain) NSArray *agentPIDs; // @synthesize agentPIDs=_agentPIDs;
@property struct _ne_sm_bridge *bridge; // @synthesize bridge=_bridge;
@property int sessionType; // @synthesize sessionType=_sessionType;
@property(retain) NEVPNProtocol *protocol; // @synthesize protocol=_protocol;
- (void)handleInitializeState;	// IMP=0x0000000100061cdc
- (void)handleInstalledAppsChanged;	// IMP=0x000000010006188c
- (void)handleDeviceUnlock;	// IMP=0x00000001000617b0
- (void)handleDeviceLock;	// IMP=0x00000001000616d4
- (void)handleUserSwitch;	// IMP=0x00000001000615f8
- (void)handleUserLogout;	// IMP=0x000000010006151c
- (_Bool)handleUpdateConfiguration:(id)arg1;	// IMP=0x0000000100061270
- (void)uninstall;	// IMP=0x0000000100061040
- (void)install;	// IMP=0x000000010006079c
- (void)applyTunnelRouteEnforcementPoliciesForInterfaceName:(id)arg1;	// IMP=0x0000000100060534
- (id)getPIDsFromBridge;	// IMP=0x00000001000602c4
- (id)getIncludedRoutesFromDynamicStore;	// IMP=0x000000010006007c
- (id)getIncludedRoutesFromRoutingTableForInterfaceName:(const char *)arg1;	// IMP=0x000000010005fcec
- (void)updateDNSSkipPoliciesForInterfaceName:(id)arg1;	// IMP=0x000000010005f7e8
- (void)handleGetInfoMessage:(id)arg1 withType:(int)arg2;	// IMP=0x000000010005f3ec
- (void)handleSecuritySessionInfoRequest:(id)arg1;	// IMP=0x000000010005f260
- (void)handleChangeEventForInterface:(id)arg1 newFlags:(unsigned long long)arg2 previousFlags:(unsigned long long)arg3;	// IMP=0x000000010005ebd8
- (void)handleWakeup;	// IMP=0x000000010005ea9c
- (void)handleSleepTime:(double)arg1;	// IMP=0x000000010005e9cc
- (_Bool)handleSleep;	// IMP=0x000000010005e8d0
- (void)handleStopMessageWithReason:(int)arg1;	// IMP=0x000000010005e7b4
- (void)handleStartMessage:(id)arg1;	// IMP=0x000000010005e02c
- (id)addDecryptedPasswordsToOptions:(id)arg1;	// IMP=0x000000010005d924
- (void)performBlockOnMainRunLoop:(CDUnknownBlockType)arg1;	// IMP=0x000000010005d8dc
- (void)handleDisposable;	// IMP=0x000000010005d834
- (id)copyIPv4Dictionary;	// IMP=0x000000010005d764
- (id)copyDNSDictionary;	// IMP=0x000000010005d694
- (_Bool)hasDNSInstalled;	// IMP=0x000000010005d5b0
- (_Bool)hasProxiesInstalled;	// IMP=0x000000010005d46c
@property(readonly) NSString *interfaceName;
- (void)dealloc;	// IMP=0x000000010005d0f0
- (int)type;	// IMP=0x000000010005d0e4
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2 andProtocol:(id)arg3 andSessionType:(int)arg4;	// IMP=0x000000010005cde8

@end

