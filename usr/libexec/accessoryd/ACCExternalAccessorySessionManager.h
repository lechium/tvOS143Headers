//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NSMutableSet, NSSet;

@interface ACCExternalAccessorySessionManager : NSObject
{
    NSSet *_sessionUUIDs;	// 8 = 0x8
    NSLock *_openEASessionsLock;	// 16 = 0x10
    NSMutableSet *_openEASessions;	// 24 = 0x18
    NSMutableDictionary *_openEASessionHandlers;	// 32 = 0x20
    NSMutableDictionary *_openEASessionUUIDsForEndpointUUID;	// 40 = 0x28
}

+ (unsigned short)_generateSessionID;	// IMP=0x00000001000b256c
+ (id)sharedManager;	// IMP=0x00000001000b24d0
- (void).cxx_destruct;	// IMP=0x00000001000b6e40
@property(retain, nonatomic) NSMutableDictionary *openEASessionUUIDsForEndpointUUID; // @synthesize openEASessionUUIDsForEndpointUUID=_openEASessionUUIDsForEndpointUUID;
@property(retain, nonatomic) NSMutableDictionary *openEASessionHandlers; // @synthesize openEASessionHandlers=_openEASessionHandlers;
@property(retain, nonatomic) NSMutableSet *openEASessions; // @synthesize openEASessions=_openEASessions;
@property(retain, nonatomic) NSLock *openEASessionsLock; // @synthesize openEASessionsLock=_openEASessionsLock;
@property(readonly, nonatomic) NSSet *sessionUUIDs; // @synthesize sessionUUIDs=_sessionUUIDs;
- (void)_handleApplicationStateChange:(id)arg1;	// IMP=0x00000001000b6a5c
- (void)_eaNativeDataArrived:(id)arg1;	// IMP=0x00000001000b69a4
- (_Bool)_sessionUUIDClientSupportsBackgroundEA:(id)arg1;	// IMP=0x00000001000b6924
- (id)_appBundleIDForSessionUUID:(id)arg1;	// IMP=0x00000001000b68c4
- (id)eaSessionUUIDForEndpointUUID:(id)arg1;	// IMP=0x00000001000b65f8
- (id)eaSessionUUIDForSessionID:(unsigned short)arg1;	// IMP=0x00000001000b6310
- (id)sessionInfoDictionaryForSessionUUID:(id)arg1;	// IMP=0x00000001000b610c
- (id)_copySessionInfoDictionaryForSessionUUID:(id)arg1;	// IMP=0x00000001000b5ef0
- (_Bool)_eaProtocolHasValidMatchActionForOpeningSession:(id)arg1;	// IMP=0x00000001000b5dc4
- (id)_accessoryForPrimaryUUID:(id)arg1;	// IMP=0x00000001000b5b88
- (id)_eaSessionUUIDsOwnedByClientBundleID:(id)arg1;	// IMP=0x00000001000b58a0
- (_Bool)eaClientHasOpenEASession:(id)arg1;	// IMP=0x00000001000b5730
- (id)_clientsOwningSessionForProtocol:(id)arg1 withAccessoryUUID:(id)arg2;	// IMP=0x00000001000b53e0
- (_Bool)_isSessionOpenForProtocol:(id)arg1 filterPrimaryUUID:(id)arg2 filterClientBundleID:(id)arg3;	// IMP=0x00000001000b4fd0
- (id)_sessionInfoMatchingProtocol:(id)arg1 withPrimaryAccessoryUUID:(id)arg2;	// IMP=0x00000001000b4cb8
- (_Bool)handleIncomingExternalAccessoryData:(id)arg1 forEndpointUUID:(id)arg2;	// IMP=0x00000001000b4b50
- (_Bool)handleIncomingExternalAccessoryData:(id)arg1 forSessionID:(unsigned short)arg2;	// IMP=0x00000001000b49e8
- (_Bool)_accessoryCloseSessionForEASessionUUID:(id)arg1 informAccessory:(_Bool)arg2;	// IMP=0x00000001000b4670
- (_Bool)accessoryCloseSessionforEASessionID:(unsigned short)arg1;	// IMP=0x00000001000b4614
- (_Bool)closeSessionsForPrimaryAccessoryUUID:(id)arg1;	// IMP=0x00000001000b44b8
- (void)startIncomingDataNotificationsForEASessionUUID:(id)arg1;	// IMP=0x00000001000b4424
- (void)stopIncomingDataNotificationsForEASessionUUID:(id)arg1;	// IMP=0x00000001000b4390
- (struct __CFData *)returnAppToAccessoryDataForSession:(id)arg1 maxBufferSize:(unsigned int)arg2;	// IMP=0x00000001000b42e0
- (unsigned int)readAppToAccessoryDataForSession:(id)arg1 maxBufferSize:(unsigned int)arg2 dataBuffer:(struct __CFData *)arg3;	// IMP=0x00000001000b4220
- (_Bool)outgoingEADataFromClientAvailable:(id)arg1;	// IMP=0x00000001000b41a4
- (_Bool)openSocketFromAppToAccessory:(id)arg1;	// IMP=0x00000001000b40a4
- (_Bool)openSocketFromAccessoryToApp:(id)arg1;	// IMP=0x00000001000b3fa4
- (id)closeSessionForEASessionUUID:(id)arg1;	// IMP=0x00000001000b3f94
- (id)_internalCloseSessionForEASessionUUID:(id)arg1 informAccessory:(_Bool)arg2;	// IMP=0x00000001000b385c
- (id)createSessionForProtocol:(id)arg1 fromPrimaryAccessoryUUID:(id)arg2 fromClient:(id)arg3 result:(_Bool *)arg4;	// IMP=0x00000001000b2b54
- (_Bool)_continueOpenSessionForSingleSessionPerEAProtocol:(id)arg1 fromPrimaryAccessoryUUID:(id)arg2 fromClient:(id)arg3;	// IMP=0x00000001000b2740
- (id)init;	// IMP=0x00000001000b2590

@end

