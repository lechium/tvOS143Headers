//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKGameService.h"

#import "GKGameServicePrivate-Protocol.h"

@class NSString;

@interface GKGameServicePrivate : GKGameService <GKGameServicePrivate>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x000000010017a47c
+ (Class)interfaceClass;	// IMP=0x000000010017a470
- (oneway void)loadTellAFriendMessageForGameWithAdamID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100188780
- (oneway void)submitRating:(float)arg1 forGame:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100188280
- (void)fetchGameRecommendationsInContext:(id)arg1 responseKind:(int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100187aa4
- (oneway void)removeGameForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001876d0
- (oneway void)getGamesWithAchievementStatsForPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100186e08
- (void)loadGamesWithAchievementStatsForPlayer:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100186638
- (void)fetchGamesWithAchievementStatsForPlayer:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100186470
- (oneway void)getStoreItemsForAdamIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100185f54
- (void)loadStorePiecesForGames:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001855fc
- (oneway void)getRatingForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100184f24
- (void)loadRatingForGameDescriptor:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001849d0
- (void)fetchRatingForGameDescriptor:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001847a0
- (oneway void)getGameMetadataForBundleIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100183ec8
- (void)loadGameMetadataForBundleIDs:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100183418
- (void)fetchGameMetadataForBundleIDs:(id)arg1 responseKind:(int)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100182c2c
- (oneway void)getGameStatsForPlayer:(id)arg1 bundleIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100182278
- (void)loadGameStatsForPlayer:(id)arg1 bundleIdentifiers:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001811f4
- (void)fetchGameStatsForPlayer:(id)arg1 bundleIdentifiers:(id)arg2 responseKind:(int)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100180cf4
- (oneway void)getGamesForPlayer:(id)arg1 includeInstalled:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001801ac
- (void)loadGamesForPlayer:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010017f5cc
- (void)fetchGamesForPlayer:(id)arg1 includeInstalled:(_Bool)arg2 responseKind:(int)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010017ef28
- (void)scanInstalledGamesForPlayer:(id)arg1 transaction:(id)arg2;	// IMP=0x000000010017e808
- (oneway void)getTopGamesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010017e0f0
- (void)loadTopGamesWithContext:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010017dc4c
- (void)fetchTopGamesInContext:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010017d8ac
- (_Bool)requiresAuthenticationForSelector:(SEL)arg1;	// IMP=0x000000010017d848
- (oneway void)getGamesPlayedSummaries:(id)arg1 limit:(id)arg2 withinSecs:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010017c558
- (oneway void)getGamesPlayedSummaries:(id)arg1 limit:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010017c544
- (oneway void)getGamesPlayedMetaData:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010017a5bc
- (id)cachedGamesPlayed:(id)arg1 context:(id)arg2;	// IMP=0x000000010017a484

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

