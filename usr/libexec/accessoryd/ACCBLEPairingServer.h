//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ACCFeatureServer.h"

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface ACCBLEPairingServer : ACCFeatureServer <NSXPCListenerDelegate>
{
    NSMutableDictionary *_blePairingProviderList;	// 40 = 0x28
    NSMutableDictionary *_blePairingProviderListByUID;	// 48 = 0x30
    NSMutableDictionary *_registeredAccessoryConnections;	// 56 = 0x38
}

+ (id)sharedServer;	// IMP=0x00000001000485f0
- (void).cxx_destruct;	// IMP=0x00000001000486d8
@property(readonly, nonatomic) NSMutableDictionary *registeredAccessoryConnections; // @synthesize registeredAccessoryConnections=_registeredAccessoryConnections;
@property(readonly, nonatomic) NSMutableDictionary *blePairingProviderListByUID; // @synthesize blePairingProviderListByUID=_blePairingProviderListByUID;
@property(readonly, nonatomic) NSMutableDictionary *blePairingProviderList; // @synthesize blePairingProviderList=_blePairingProviderList;
- (void)accessoryBLEPairingFinished:(id)arg1 blePairingUUID:(id)arg2;	// IMP=0x0000000100048208
- (void)accessoryBLEPairingDataUpdate:(id)arg1 blePairingUUID:(id)arg2 pairType:(unsigned char)arg3 pairData:(id)arg4;	// IMP=0x0000000100047e1c
- (void)accessoryBLEPairingInfoUpdate:(id)arg1 blePairingUUID:(id)arg2 pairType:(unsigned char)arg3 pairInfoList:(id)arg4;	// IMP=0x0000000100047a30
- (void)accessoryBLEPairingStateUpdate:(id)arg1 blePairingUUID:(id)arg2 validMask:(unsigned int)arg3 btRadioOn:(_Bool)arg4 pairingState:(int)arg5 pairingModeOn:(_Bool)arg6;	// IMP=0x0000000100047640
- (void)accessoryBLEPairingDetached:(id)arg1 blePairingUUID:(id)arg2;	// IMP=0x00000001000472d0
- (void)accessoryBLEPairingAttached:(id)arg1 blePairingUUID:(id)arg2 accInfoDict:(id)arg3 supportedPairTypes:(id)arg4;	// IMP=0x0000000100046de8
- (_Bool)shouldAcceptXPCConnection:(id)arg1;	// IMP=0x0000000100046de0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100045d00
- (_Bool)accessoryReserved:(id)arg1 xpcConn:(id)arg2;	// IMP=0x0000000100045c64
- (_Bool)accessoryReserved:(id)arg1 connHash:(id)arg2;	// IMP=0x00000001000459a0
- (_Bool)releaseAccessory:(id)arg1 xpcConn:(id)arg2;	// IMP=0x0000000100045904
- (_Bool)releaseAccessory:(id)arg1 connHash:(id)arg2;	// IMP=0x00000001000455a8
- (_Bool)reserveAccessory:(id)arg1 xpcConn:(id)arg2;	// IMP=0x0000000100045140
- (void)iterateBLEPairingProviderListSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044ff0
- (void)iterateAttachedConnectionsSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044ea0
- (void)dealloc;	// IMP=0x0000000100044d4c
- (id)initWithXPCServiceName:(id)arg1 andFeatureNotification:(const char *)arg2;	// IMP=0x0000000100044b84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
