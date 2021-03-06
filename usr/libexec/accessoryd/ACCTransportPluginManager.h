//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ACCPluginManager.h"

#import "ACCTransportPluginManagerProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface ACCTransportPluginManager : ACCPluginManager <ACCTransportPluginManagerProtocol>
{
    NSMutableDictionary *_endpointDataOutHandlers;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x000000010004b56c
- (void).cxx_destruct;	// IMP=0x000000010004b62c
@property(retain, nonatomic) NSMutableDictionary *endpointDataOutHandlers; // @synthesize endpointDataOutHandlers=_endpointDataOutHandlers;
- (_Bool)processIncomingData:(id)arg1 forEndpointWithUUID:(id)arg2;	// IMP=0x000000010004b464
- (id)propertiesForEndpointWithUUID:(id)arg1;	// IMP=0x000000010004b444
- (id)propertiesForConnectionWithUUID:(id)arg1;	// IMP=0x000000010004b424
- (id)identifierForEndpointWithUUID:(id)arg1;	// IMP=0x000000010004b404
- (id)identifierForConnectionWithUUID:(id)arg1;	// IMP=0x000000010004b3e4
- (int)protocolForEndpointWithUUID:(id)arg1;	// IMP=0x000000010004b3bc
- (int)transportTypeForEndpointWithUUID:(id)arg1;	// IMP=0x000000010004b394
- (id)certificateCapabilitiesForConnectionWithUUID:(id)arg1;	// IMP=0x000000010004b36c
- (id)certificateSerialStringForConnectionWithUUID:(id)arg1;	// IMP=0x000000010004b344
- (id)certificateSerialForConnectionWithUUID:(id)arg1;	// IMP=0x000000010004b31c
- (id)certificateDataForConnectionWithUUID:(id)arg1;	// IMP=0x000000010004b2f4
- (int)connectionTypeForConnectionWithUUID:(id)arg1;	// IMP=0x000000010004b2cc
- (int)authStatusForConnectionWithUUID:(id)arg1 authType:(int)arg2;	// IMP=0x000000010004b294
- (id)endpointUUIDsForConnectionWithUUID:(id)arg1;	// IMP=0x000000010004b264
- (id)allEndpointsUUIDs;	// IMP=0x000000010004b1e8
- (id)allConnectionUUIDs;	// IMP=0x000000010004b16c
- (id)connectionUUIDForEndpointWithUUID:(id)arg1;	// IMP=0x000000010004b138
- (_Bool)destroyConnectionWithUUID:(id)arg1;	// IMP=0x000000010004b130
- (_Bool)destroyEndpointWithUUID:(id)arg1;	// IMP=0x000000010004b128
- (_Bool)publishConnectionWithUUID:(id)arg1;	// IMP=0x000000010004b120
- (_Bool)setProperties:(id)arg1 forEndpointWithUUID:(id)arg2;	// IMP=0x000000010004b0cc
- (_Bool)setAccessoryInfo:(id)arg1 forEndpointWithUUID:(id)arg2;	// IMP=0x000000010004afd4
- (id)createEndpointWithTransportType:(int)arg1 andProtocol:(int)arg2 andIdentifier:(id)arg3 dataOutHandler:(CDUnknownBlockType)arg4 forConnectionWithUUID:(id)arg5;	// IMP=0x000000010004aef0
- (_Bool)setAuthenticationStatus:(int)arg1 andCertificateData:(id)arg2 authCTA:(_Bool)arg3 forConnectionWithUUID:(id)arg4;	// IMP=0x000000010004ae5c
- (_Bool)setProperties:(id)arg1 forConnectionWithUUID:(id)arg2;	// IMP=0x000000010004ae08
- (_Bool)setSupervisedTransportsRestricted:(_Bool)arg1 forConnectionWithUUID:(id)arg2;	// IMP=0x000000010004add0
- (id)createConnectionWithType:(int)arg1 andIdentifier:(id)arg2;	// IMP=0x000000010004ad48
- (_Bool)sendOutgoingData:(id)arg1 forEndpointWithUUID:(id)arg2 connectionUUID:(id)arg3;	// IMP=0x000000010004ac64
- (id)initClass:(Class)arg1;	// IMP=0x000000010004abec
- (unsigned long long)stopAllPlugIns;	// IMP=0x000000010004aad0
- (unsigned long long)startAllPlugIns;	// IMP=0x000000010004a9b4
- (unsigned long long)initAllPlugIns;	// IMP=0x000000010004a7fc
- (unsigned long long)loadAllBundles;	// IMP=0x000000010004a5dc
- (unsigned long long)addTransportPlugInBundleSearchPaths;	// IMP=0x000000010004a4f8
- (id)init;	// IMP=0x000000010004a47c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

