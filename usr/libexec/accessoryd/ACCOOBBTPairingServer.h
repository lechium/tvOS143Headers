//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ACCFeatureServer.h"

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, _ACCOOBBTPairingProviderInfo;

@interface ACCOOBBTPairingServer : ACCFeatureServer <NSXPCListenerDelegate>
{
    _ACCOOBBTPairingProviderInfo *_oobBtPairingProviderInfo;	// 40 = 0x28
    NSMutableDictionary *_registeredAccessoryConnections;	// 48 = 0x30
}

+ (id)sharedServer;	// IMP=0x0000000100069144
- (void).cxx_destruct;	// IMP=0x0000000100069230
@property(readonly, nonatomic) NSMutableDictionary *registeredAccessoryConnections; // @synthesize registeredAccessoryConnections=_registeredAccessoryConnections;
@property(retain, nonatomic) _ACCOOBBTPairingProviderInfo *oobBtPairingProviderInfo; // @synthesize oobBtPairingProviderInfo=_oobBtPairingProviderInfo;
- (void)legacyConnectionIDForAccessoryUID:(id)arg1 connectionID:(unsigned int)arg2;	// IMP=0x0000000100068e68
- (void)notifyOfProvider:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100068d1c
- (void)accessoryOOBBTPairingCompletionStatus:(id)arg1 oobBtPairingUID:(id)arg2 result:(unsigned char)arg3;	// IMP=0x0000000100068a0c
- (void)accessoryOOBBTPairingBTAccessoryInfo:(id)arg1 oobBtPairingUID:(id)arg2 accessoryMacAddr:(id)arg3 deviceClass:(unsigned int)arg4;	// IMP=0x00000001000686e4
- (void)accessoryOOBBTPairingDetached:(id)arg1;	// IMP=0x0000000100068450
- (void)accessoryOOBBTPairingAttached:(id)arg1 accInfoDict:(id)arg2;	// IMP=0x00000001000680c4
- (_Bool)shouldAcceptXPCConnection:(id)arg1;	// IMP=0x0000000100067f40
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100067414
- (void)iterateAttachedConnectionsSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100067294
- (void)dealloc;	// IMP=0x0000000100067168
- (id)initWithXPCServiceName:(id)arg1 andFeatureNotification:(const char *)arg2;	// IMP=0x0000000100066fe0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

