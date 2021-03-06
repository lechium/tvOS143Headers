//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKGameStatService-Protocol.h"

@class NSString;

@interface GKGameStatService : GKService <GKGameStatService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0000000100189120
+ (Class)interfaceClass;	// IMP=0x0000000100189114
- (oneway void)getLeaderboardSummaryForGameDescriptor:(id)arg1 localPlayer:(id)arg2 baseLeaderboardID:(id)arg3 leaderboardID:(id)arg4 timeScope:(long long)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00000001001a2268
- (oneway void)deleteLeaderboardWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a2250
- (oneway void)endLeaderboardWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a2238
- (oneway void)startLeaderboardWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a2220
- (oneway void)createLeaderboardBasedOnID:(id)arg1 recipients:(id)arg2 inviteMessage:(id)arg3 context:(id)arg4 duration:(double)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00000001001a2204
- (oneway void)submitInstanceScore:(long long)arg1 context:(unsigned long long)arg2 leaderboardID:(id)arg3 forPlayer:(id)arg4 whileScreeningChallenges:(_Bool)arg5 withEligibleChallenges:(id)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x00000001001a1a78
- (oneway void)submitScore:(long long)arg1 context:(unsigned long long)arg2 leaderboardIDs:(id)arg3 forPlayer:(id)arg4 whileScreeningChallenges:(_Bool)arg5 withEligibleChallenges:(id)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x00000001001a1158
- (oneway void)getEntriesForLeaderboard:(id)arg1 gameDescriptor:(id)arg2 localPlayer:(id)arg3 playerScope:(long long)arg4 timeScope:(long long)arg5 range:(struct _NSRange)arg6 players:(id)arg7 handler:(CDUnknownBlockType)arg8;	// IMP=0x00000001001a0294
- (id)timeScopeName:(long long)arg1;	// IMP=0x00000001001a0268
- (id)playerScopeName:(long long)arg1;	// IMP=0x00000001001a024c
- (void)loadEntriesForLeaderboard:(id)arg1 gameDescriptor:(id)arg2 localPlayer:(id)arg3 playerScope:(long long)arg4 timeScope:(long long)arg5 range:(struct _NSRange)arg6 players:(id)arg7 context:(id)arg8 handler:(CDUnknownBlockType)arg9;	// IMP=0x000000010019f534
- (void)generateEntriesFromServerResponse:(id)arg1 context:(id)arg2 leaderboard:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010019e9ec
- (void)updatePlayersForEntries:(id)arg1 localPlayerEntry:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010019e538
- (oneway void)getPreviousInstanceForLeaderboard:(id)arg1 gameDescriptor:(id)arg2 player:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010019d1c4
- (void)loadPreviousInstanceForLeaderboard:(id)arg1 gameDescriptor:(id)arg2 player:(id)arg3 playerPlayedIn:(_Bool)arg4 context:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x000000010019c58c
- (void)fetchLeaderboardWithRecordID:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010019c3f4
- (oneway void)getLeaderboardsForGameDescriptor:(id)arg1 player:(id)arg2 leaderboardIDs:(id)arg3 setIdentifier:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010019a12c
- (id)leaderboards:(id)arg1 filteredWithIDs:(id)arg2;	// IMP=0x0000000100199fd0
- (void)updateLeaderboardsWithIDs:(id)arg1 gameDescriptor:(id)arg2 player:(id)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100199248
- (oneway void)getLeaderboardSetsForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001986d4
- (oneway void)getDefaultLeaderboardIDWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001984a8
- (oneway void)setDefaultLeaderboardID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100197e48
- (oneway void)getLeaderboardsForGameDescriptor:(id)arg1 player:(id)arg2 setIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100196a28
- (void)loadLeaderboardsForGameDescriptor:(id)arg1 player:(id)arg2 setIdentifier:(id)arg3 context:(id)arg4 bagKey:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00000001001959b4
- (void)fetchLeaderboardsForGameDescriptor:(id)arg1 player:(id)arg2 setIdentifier:(id)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100195638
- (void)cleanUpLeaderboardTitles:(id)arg1 set:(id)arg2 context:(id)arg3;	// IMP=0x0000000100195258
- (void)submitScores:(id)arg1 whileScreeningChallenges:(_Bool)arg2 withEligibleChallenges:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100194c2c
- (oneway void)getLeaderboadForRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100194644
- (oneway void)resetAchievementsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100193f3c
- (void)submitAchievements:(id)arg1 whileScreeningChallenges:(_Bool)arg2 withEligibleChallenges:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001932c8
- (oneway void)getAchievementsForGameDescriptor:(id)arg1 players:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100192598
- (void)loadAchievementsForGame:(id)arg1 players:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001924b4
- (void)achievementsForPlayersAndGame:(id)arg1 players:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100191308
- (void)fetchAchievementsForGame:(id)arg1 players:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100190918
- (oneway void)getAchievementDescriptionsForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010018fdfc
- (void)loadAchievementDescriptionsForGame:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010018f040
- (void)fetchAchievementDescriptionsForGame:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010018ee7c
- (oneway void)getRecentPlayersWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010018ed98
- (oneway void)getRecentMatchesForGameDescriptor:(id)arg1 otherPlayer:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010018ed18
- (void)getRecentGamesWithPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010018e20c
- (void)getRecentPlayersForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010018d4e0
- (void)loadRecentGamesBetweenPlayer:(id)arg1 otherPlayer:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010018c2f4
- (void)loadRecentPlayersWithPlayer:(id)arg1 game:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010018ae84
- (void)fetchRecentGamesBetweenPlayer:(id)arg1 otherPlayer:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010018ab1c
- (void)fetchRecentPlayersWithPlayer:(id)arg1 game:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010018a7b4
- (oneway void)getPlayersForGameDescriptor:(id)arg1 includeCompatibleMultiplayerGames:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010018a758
- (oneway void)getPlayersForGameDescriptor:(id)arg1 achievementIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010018a6e8
- (oneway void)getPlayersForGameDescriptor:(id)arg1 leaderboardIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010018a678
- (void)_getPlayersForGameDescriptor:(id)arg1 type:(int)arg2 reference:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100189128

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

