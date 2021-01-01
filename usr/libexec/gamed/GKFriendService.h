//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKFriendService-Protocol.h"

@class NSString;

@interface GKFriendService : GKService <GKFriendService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00000001000bd1b0
+ (Class)interfaceClass;	// IMP=0x00000001000bd1a4
- (oneway void)establishNearbyRelationshipsUsingPlayerTokens:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bfaf0
- (id)predicateForFriendPredicate:(id)arg1 withFilter:(id)arg2;	// IMP=0x00000001000bfa28
- (void)getFriendIDsForPlayer:(id)arg1 withPredicate:(CDUnknownBlockType)arg2 withFilter:(id)arg3 commonFriends:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000bea9c
- (oneway void)getNearbyTokenForLocalPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000be664
- (void)getFriendIDsForPlayer:(id)arg1 withPredicate:(CDUnknownBlockType)arg2 commonFriends:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000bd4fc
- (oneway void)getChallengableFriendsForPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bd3a8
- (void)getFriendIDsForPlayer:(id)arg1 commonFriends:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000bd338
- (void)getFriendsForPlayer:(id)arg1 commonFriends:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000bd244
- (void)updateFriendsOfLocalPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bd1cc
- (oneway void)getFriendsForPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bd1b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
