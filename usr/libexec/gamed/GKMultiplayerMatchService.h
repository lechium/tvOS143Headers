//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKMultiplayerService-Protocol.h"

@class NSString;

@interface GKMultiplayerMatchService : GKService <GKMultiplayerService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00000001001affc4
+ (Class)interfaceClass;	// IMP=0x00000001001affb8
- (oneway void)nearbyInviteWasCancelled:(id)arg1;	// IMP=0x00000001001ba33c
- (oneway void)presentNearbyInvite:(id)arg1;	// IMP=0x00000001001ba300
- (oneway void)updateCacheWithNearbyProfileDictionary:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b9d38
- (oneway void)cancelRelayRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b9b94
- (oneway void)updateRelayRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b98e0
- (oneway void)initiateRelayRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b961c
- (oneway void)_performRelayAction:(id)arg1 request:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001b93c0
- (oneway void)sendReconnectInvitation:(id)arg1 toPlayer:(id)arg2 connectionData:(id)arg3 sessionToken:(id)arg4 pushToken:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00000001001b8d6c
- (oneway void)removeInviteSession;	// IMP=0x00000001001b8d48
- (oneway void)getInviteSessionTokenWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b8bf4
- (oneway void)getPlayersToInviteWithHandlerV2:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b8984
- (oneway void)getAcceptedGameInviteWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b8450
- (oneway void)declineGameInvite:(id)arg1 reason:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001b81e4
- (oneway void)acceptGameInvite:(id)arg1 connectionData:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001b784c
- (oneway void)cancelGameInviteWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b746c
- (oneway void)removePlayersFromGameInviteV2:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b6e94
- (oneway void)invitePlayersForMatchRequest:(id)arg1 onlineConnectionData:(id)arg2 nearbyConnectionData:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001b5d54
- (void)saveRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b5aa4
- (id)privateDatabase;	// IMP=0x00000001001b5a70
- (void)setupInviteShareWithRecordID:(id)arg1 rootRecord:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001b5664
- (oneway void)loadURLWithData:(id)arg1 player:(id)arg2 matchRequest:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001b42b4
- (void)initiateInvitationForMatchRequest:(id)arg1 connectionData:(id)arg2 recipients:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001b32b0
- (oneway void)setShareRecordID:(id)arg1;	// IMP=0x00000001001b2fe0
- (oneway void)setShareInvitees:(id)arg1;	// IMP=0x00000001001b26c4
- (oneway void)getCompatibilityMatrix:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b1cfc
- (oneway void)getOverallFlowRateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b155c
- (oneway void)getFlowRateForPlayerGroup:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b0d2c
- (oneway void)cancelOutstandingMatchRequestWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b0a30
- (oneway void)getPlayersForMatchRequest:(id)arg1 connectionData:(id)arg2 connectedPeers:(long long)arg3 rematchID:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000001001affcc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

