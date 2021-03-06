//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSPushHandlerDelegate-Protocol.h"

@class IDSPushHandler, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_source;

@interface IDSQuickRelayAllocator : NSObject <IDSPushHandlerDelegate>
{
    IDSPushHandler *_pushHandler;	// 8 = 0x8
    NSMutableDictionary *_requestIDToSession;	// 16 = 0x10
    NSMutableDictionary *_sessionToAllocations;	// 24 = 0x18
    NSMutableArray *_sessionInfoRequiredKeys;	// 32 = 0x20
    NSMutableSet *_pendingRecipientsAcceptedSessions;	// 40 = 0x28
    NSMutableDictionary *_initiatorsAcceptedSessionsWithToken;	// 48 = 0x30
    NSMutableDictionary *_requestIDToAllocateTime;	// 56 = 0x38
    NSMutableDictionary *_allocateResponses;	// 64 = 0x40
    NSMutableDictionary *_requestIDToPreferredLocalInterface;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_responseCleanupTimer;	// 80 = 0x50
    NSMutableDictionary *_pushTokenToURIForGroup;	// 88 = 0x58
    NSMutableDictionary *_idsSessionIDToqrSessionID;	// 96 = 0x60
}

+ (id)sharedInstance;	// IMP=0x00000001003defac
- (void).cxx_destruct;	// IMP=0x00000001004087d4
- (unsigned long long)getCountOfSessionToAllocations;	// IMP=0x000000010040879c
- (unsigned long long)getCountOfPendingRecipientsAcceptedSessions;	// IMP=0x0000000100408764
- (void)_startCleanupTimer;	// IMP=0x000000010040845c
- (void)_cleanupResponses;	// IMP=0x0000000100407a2c
- (void)stopKeepAliveTimer:(id)arg1 relaySessionID:(id)arg2;	// IMP=0x000000010040750c
- (void)startKeepAliveTimer:(id)arg1 relaySessionID:(id)arg2;	// IMP=0x0000000100406f94
- (id)_getResponse:(id)arg1 relaySessionID:(id)arg2;	// IMP=0x000000010040683c
- (id)_uuidFromNSStringToNSData:(id)arg1;	// IMP=0x0000000100406670
- (id)_getGroupID:(id)arg1;	// IMP=0x0000000100406310
- (void)handler:(id)arg1 receivedOfflineMessagePendingForTopic:(id)arg2 messageContext:(id)arg3;	// IMP=0x0000000100406060
- (void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;	// IMP=0x0000000100405c34
- (void)enablePushHandler:(_Bool)arg1;	// IMP=0x000000010040560c
- (id)_parseQuickRelayDefaults:(id)arg1 gropuID:(id)arg2;	// IMP=0x0000000100403ec4
- (id)getSessionInfoFromDefaults:(id)arg1 groupID:(id)arg2;	// IMP=0x0000000100403e14
- (_Bool)_isJoinRequestInProcess:(id)arg1;	// IMP=0x00000001004038b8
- (id)_findAllocationForSessionID:(id)arg1 requestIDStr:(id)arg2;	// IMP=0x000000010040355c
- (id)_findAllocationListForSessionID:(id)arg1;	// IMP=0x00000001004034cc
- (id)_filterSelfAllocationsForSessionID:(id)arg1;	// IMP=0x00000001004032b0
- (void)_removeAllAllocationsForSessionID:(id)arg1;	// IMP=0x0000000100402b10
- (void)_discardAllocation:(id)arg1;	// IMP=0x00000001004024ec
- (void)_addAllocationForSession:(id)arg1 allocation:(id)arg2;	// IMP=0x0000000100402048
- (void)invalidateAllocation:(id)arg1;	// IMP=0x0000000100401e74
- (void)_invalidateSession:(id)arg1 isExpiryPurging:(_Bool)arg2;	// IMP=0x0000000100401ae8
- (void)invalidateSession:(id)arg1 isExpiryPurging:(_Bool)arg2;	// IMP=0x0000000100401978
- (void)cleanUpCachedMappings:(id)arg1;	// IMP=0x000000010040174c
- (void)reportAWDAllocatorEvent:(unsigned int)arg1 relayProviderType:(long long)arg2 transport:(long long)arg3 localRAT:(unsigned int)arg4 duration:(unsigned long long)arg5 idsSessionID:(id)arg6 reportingDataBlob:(id)arg7 isInitiator:(_Bool)arg8;	// IMP=0x0000000100400964
- (long long)getServerProviderForIDSSessionID:(id)arg1;	// IMP=0x00000001004006e0
- (void)setInitiatorsAcceptedToken:(id)arg1 pushToken:(id)arg2;	// IMP=0x00000001004002f0
- (void)requestAllocationForRecipient:(id)arg1;	// IMP=0x00000001003ff4a0
- (id)getPushTokenForRelaySessionID:(id)arg1 relaySessionID:(id)arg2;	// IMP=0x00000001003fef50
- (id)getRelaySessionIDForIDSSessionID:(id)arg1 pushToken:(id)arg2;	// IMP=0x00000001003fe920
- (id)_uriToParticipantID:(id)arg1;	// IMP=0x00000001003fe068
- (void)_storeMappingFromPushTokenToURIs:(id)arg1 fromID:(id)arg2 service:(id)arg3 cert:(id)arg4 forGroup:(id)arg5;	// IMP=0x00000001003fdb38
- (void)_startQRConnectionForSession:(id)arg1 isInitiatorsAcceptedSession:(_Bool)arg2 withLocalInterfacePreference:(int)arg3;	// IMP=0x00000001003fc7bc
- (id)_getStatusMessageFromStatusCode:(unsigned long long)arg1;	// IMP=0x00000001003fc670
- (void)_sendAWDMetricsForAllocation:(id)arg1 status:(long long)arg2 hasRecipientAccepted:(_Bool)arg3;	// IMP=0x00000001003fbbe8
- (void)_processAllocationStatusResult:(id)arg1;	// IMP=0x00000001003faec8
- (unsigned int)_getErrorCodeFromAllocationStatus:(int)arg1;	// IMP=0x00000001003fade8
- (_Bool)_hasSessionInfoRequiredKeys:(id)arg1;	// IMP=0x00000001003fa9e0
- (void)_setSessionInfoRequiredKeys;	// IMP=0x00000001003fa7f4
- (id)_createSessionInfoFromResponsePayload:(id)arg1;	// IMP=0x00000001003f8248
- (id)_getCombinedSoftwareID:(id)arg1;	// IMP=0x00000001003f7efc
- (void)_processSelfAllocations:(id)arg1 allocation:(id)arg2;	// IMP=0x00000001003f7544
- (_Bool)_isDuplicateResponse:(id)arg1 newResponse:(id)arg2;	// IMP=0x00000001003f7178
- (void)_handleIncomingAllocateResponse:(id)arg1 isFromCache:(_Bool)arg2 requestOptions:(id)arg3;	// IMP=0x00000001003f2434
- (id)getAdditionalAllocationForAddress:(id)arg1 selfAddress:(unsigned int)arg2 relaySessionID:(id)arg3 allocateType:(long long)arg4 qrReason:(unsigned short)arg5 previousTime:(unsigned long long)arg6 previousError:(unsigned short)arg7 previousRelayIP:(unsigned int)arg8 previousAccessToken:(id)arg9 requestSelfAllocation:(_Bool)arg10 isSessionIDRemoteDeviceID:(_Bool)arg11 withPreferredRemoteInterface:(int)arg12 withPreferredLocalInterface:(int)arg13;	// IMP=0x00000001003f0800
- (id)getURIFromParticipantID:(id)arg1 participantID:(id)arg2;	// IMP=0x00000001003efe30
- (id)getPushTokensFromParticipantIDs:(id)arg1 participantIDs:(id)arg2;	// IMP=0x00000001003ef430
- (id)_getPushTokenFromParticipantID:(id)arg1 participantID:(id)arg2;	// IMP=0x00000001003eefc4
- (_Bool)_startQRConnectionWithDefaults:(id)arg1;	// IMP=0x00000001003ee9c8
- (id)setupNewAllocation:(id)arg1 sessionID:(id)arg2 fromIdentity:(id)arg3 fromURI:(id)arg4 fromService:(id)arg5 options:(id)arg6 connectReadyHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000001003ee800
- (id)_setupNewAllocation:(id)arg1 sessionID:(id)arg2 isSessionIDRemoteDeviceID:(_Bool)arg3 fromIdentity:(id)arg4 fromURI:(id)arg5 fromService:(id)arg6 options:(id)arg7 connectReadyHandler:(CDUnknownBlockType)arg8 withPreferredLocalInterface:(int)arg9 forAdditionalAllocation:(_Bool)arg10;	// IMP=0x00000001003eb7cc
- (void)_sendIDQueryRequest:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000001003eb47c
- (id)_getSelfAllocationFromCache:(id)arg1;	// IMP=0x00000001003eaf48
- (void)_dispatchIncomingAllocateResponse:(id)arg1 isFromCache:(_Bool)arg2 requestOptions:(id)arg3;	// IMP=0x00000001003ead84
- (_Bool)invalidateLatestResponse:(id)arg1 qrReason:(unsigned short)arg2 previousError:(unsigned short)arg3;	// IMP=0x00000001003ea780
- (_Bool)_addConnectStatus:(id)arg1 relaySessionID:(id)arg2 previousTime:(unsigned long long)arg3 qrReason:(unsigned short)arg4 previousError:(unsigned short)arg5 previousRelayIP:(unsigned int)arg6 previousAccessToken:(id)arg7;	// IMP=0x00000001003e9ae8
- (_Bool)_addResponseToCache:(id)arg1 sessionInfo:(id)arg2 modifiedMessage:(id *)arg3;	// IMP=0x00000001003e7f68
- (void)_notifyParticipantID2PushTokenMappingChange:(id)arg1;	// IMP=0x00000001003e7a1c
- (id)_mergeParticipantID2PushTokenMapping:(id)arg1 sourceResponse:(id)arg2 mappingChange:(_Bool *)arg3;	// IMP=0x00000001003e6e3c
- (_Bool)hasParticipantID:(id)arg1 participantID:(id)arg2;	// IMP=0x00000001003e6b98
- (id)_getResponseForQRSessionID:(id)arg1 sessionID:(id)arg2 index:(long long *)arg3;	// IMP=0x00000001003e6800
- (_Bool)_shouldUseCurrentResponse:(id)arg1 cachedMessage:(id)arg2;	// IMP=0x00000001003e5748
- (id)getAllocateResponse:(id)arg1 groupID:(id)arg2;	// IMP=0x00000001003e5384
- (void)_setResponseForQRGroupID:(id)arg1 groupID:(id)arg2;	// IMP=0x00000001003e5174
- (id)_getResponseFromQRGroupID:(id)arg1;	// IMP=0x00000001003e4e58
- (id)setupNewAllocationToDevice:(id)arg1 options:(id)arg2 connectReadyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001003e3efc
- (id)_setupAllocation:(id)arg1 fromURI:(id)arg2 sessionID:(id)arg3 isSessionIDRemoteDeviceID:(_Bool)arg4 options:(id)arg5 prevConnectStatus:(CDStruct_b3ab6eb3 *)arg6 requestUUID:(id)arg7 connectReadyHandler:(CDUnknownBlockType)arg8 withPreferredLocalInterface:(int)arg9;	// IMP=0x00000001003e0e0c
- (void)_sendAllocateRequest:(id)arg1;	// IMP=0x00000001003e06ec
- (_Bool)_sendKeepAliveRequest:(id)arg1;	// IMP=0x00000001003df68c
- (id)_queryPolicy;	// IMP=0x00000001003df5fc
- (id)_peerIDManager;	// IMP=0x00000001003df5c0
- (id)_getIDSAWDLoggingInstance;	// IMP=0x00000001003df584
- (void)dealloc;	// IMP=0x00000001003df2e0
- (id)init;	// IMP=0x00000001003df158

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

