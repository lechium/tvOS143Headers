//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKChallengeService-Protocol.h"

@class NSString;

@interface GKChallengeService : GKService <GKChallengeService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00000001001a8a34
+ (Class)interfaceClass;	// IMP=0x00000001001a8a28
- (oneway void)abortChallenges:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001abda0
- (oneway void)issueChallenge:(id)arg1 toPlayers:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001abb08
- (oneway void)getChallengeDetailsForChallengeIDs:(id)arg1 receiverID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001aa6b8
- (oneway void)getChallengeDetailsForChallengeIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001aa6a4
- (oneway void)getChallengesForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a9c90
- (void)loadChallengesForGameDescriptor:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001a96f8
- (void)fetchChallengesForGameDescriptor:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001a948c
- (void)_updateGamesForChallenges:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x00000001001a9240
- (void)_determineCompatibleGamesForChallenges:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x00000001001a8ec0
- (id)_filterChallenges:(id)arg1 compatibleWithBundleID:(id)arg2;	// IMP=0x00000001001a8dcc
- (void)_updatePlayersForChallenges:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x00000001001a8a3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

