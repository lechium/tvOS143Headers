//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKAccountService.h"

#import "GKAccountServicePrivate-Protocol.h"

@class NSString;

@interface GKAccountServicePrivate : GKAccountService <GKAccountServicePrivate>
{
}

+ (id)lastProfilePrivacyVersionDisplayedForPlayer:(id)arg1;	// IMP=0x0000000100160b40
+ (id)lastPersonalizationVersionDisplayedForPlayer:(id)arg1;	// IMP=0x0000000100160abc
+ (unsigned long long)lastPrivacyNoticeVersionDisplayedForPlayer:(id)arg1;	// IMP=0x0000000100160a38
+ (unsigned long long)requiredEntitlements;	// IMP=0x0000000100160a30
+ (Class)interfaceClass;	// IMP=0x0000000100160a24
- (void)updateClientSettings:(CDUnknownBlockType)arg1;	// IMP=0x000000010016ffd8
- (oneway void)setLoginStatus:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010016fc1c
- (oneway void)accountEdited:(id)arg1 alias:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010016f984
- (oneway void)authenticationCancelled;	// IMP=0x000000010016f938
- (oneway void)setupAccountForParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010016e68c
- (oneway void)validateAccountWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010016e480
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 altDSID:(id)arg5 finished:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x000000010016db04
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 finished:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x000000010016d1a4
- (void)_continueAuthenticationWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010016bfc8
- (void)_notifyAllClientsPlayerAuthenticatedFromClient:(id)arg1 withCredential:(id)arg2 replyGroup:(id)arg3;	// IMP=0x000000010016bbf4
- (void)_appInitWithGroup:(id)arg1;	// IMP=0x000000010016b1e0
- (void)_loadProfileWithGroup:(id)arg1;	// IMP=0x000000010016abfc
- (void)notifyClient:(id)arg1 authenticationDidChangeWithError:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010016aa0c
- (oneway void)authenticateNonActivePlayerWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 usingFastPath:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100169df4
- (oneway void)switchLocalPlayerWithAltDSID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001692ec
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 usingFastPath:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x000000010016848c
- (void)_preloadDataForGameCenterTabs;	// IMP=0x0000000100168144
- (void)_fetchCredentialsForNonActivePlayerForUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100167a04
- (void)_fetchCredentialsForAltDSID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001677f0
- (void)_fetchCredentialsForUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000001001670c8
- (void)_primeCacheWithGroup:(id)arg1;	// IMP=0x0000000100166a34
- (id)_authenticatedLocalPlayerWithUsername:(id)arg1 inContext:(id)arg2 isValid:(_Bool *)arg3;	// IMP=0x0000000100166320
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100166304
- (void)_initGameForLaunchedApp:(_Bool)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100165104
- (void)renewAuthToken;	// IMP=0x00000001001649f0
- (void)_postLaunchEventsForGame:(id)arg1 moc:(id)arg2;	// IMP=0x000000010016453c
- (void)_addAchievementPointsEntryForGame:(id)arg1 record:(id)arg2 profile:(id)arg3 moc:(id)arg4;	// IMP=0x00000001001643b4
- (void)_addGameListEntryForGame:(id)arg1 profile:(id)arg2 moc:(id)arg3;	// IMP=0x0000000100164244
- (void)_removeRecommendationForBundleID:(id)arg1 profile:(id)arg2 moc:(id)arg3;	// IMP=0x0000000100164174
- (void)_constructAuthenticationResponseWithError:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100163bb0
- (oneway void)getAccountAuthTokenWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100163b04
- (void)_authenticateUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 validateOnly:(_Bool)arg5 active:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x00000001001626f0
- (void)_authenticateUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 validateOnly:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100161410
- (void)updateBadgeCounts;	// IMP=0x0000000100160ebc
- (_Bool)requiresAuthenticationForSelector:(SEL)arg1;	// IMP=0x0000000100160e30
- (oneway void)isICloudAvailableWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100160bc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

