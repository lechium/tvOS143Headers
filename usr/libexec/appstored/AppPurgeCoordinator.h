//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CacheDeletePurgeableProvider-Protocol.h"

@class AKAuthorizationController, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface AppPurgeCoordinator : NSObject <CacheDeletePurgeableProvider>
{
    AKAuthorizationController *_authorizationController;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSArray *_fullBlackList;	// 24 = 0x18
    NSArray *_fullPluginBlacklist;	// 32 = 0x20
    double _gracePeriodSeconds;	// 40 = 0x28
    double _lastDuetSync;	// 48 = 0x30
    NSArray *_watchAppList;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001000b6120
- (id)_watchAppBundlesWithLogKey:(id)arg1;	// IMP=0x00000001000b6104
- (void)_syncDuetEventsWithLogKey:(id)arg1;	// IMP=0x00000001000b5b34
- (void)_syncDuetEventsIfNeededWithLogKey:(id)arg1;	// IMP=0x00000001000b58c4
- (id)_sortDescriptors;	// IMP=0x00000001000b57e0
- (id)_purgebaleForUrgency:(long long)arg1 logKey:(id)arg2 outError:(id *)arg3;	// IMP=0x00000001000b5574
- (id)_purgeApps:(id)arg1 desiredPurgeSize:(long long)arg2 purgedSize:(unsigned long long *)arg3 offloadOnly:(_Bool)arg4 logKey:(id)arg5;	// IMP=0x00000001000b4cb4
- (id)_processApp:(id)arg1 context:(id)arg2;	// IMP=0x00000001000b3f60
- (id)_launchEventsFromDate:(id)arg1 toDate:(id)arg2 prediate:(id)arg3;	// IMP=0x00000001000b3bb0
- (id)_lastModifiedForRecord:(id)arg1 logKey:(id)arg2;	// IMP=0x00000001000b393c
- (id)_lastModifiedForBundle:(id)arg1;	// IMP=0x00000001000b35e4
- (id)_launchEventsFromDuetFromDate:(id)arg1 endDate:(id)arg2 logKey:(id)arg3;	// IMP=0x00000001000b2e8c
- (_Bool)_isOffloadCandiate:(id)arg1;	// IMP=0x00000001000b2cfc
- (_Bool)_isBeyondGracePeriodWithLogKey:(id)arg1;	// IMP=0x00000001000b2cf4
- (id)_filterPurgeableApps:(id)arg1 performAvailabilityCheck:(_Bool)arg2 additionalApps:(id)arg3 desiredPurgeSize:(long long)arg4 client:(id)arg5 logKey:(id)arg6;	// IMP=0x00000001000b193c
- (id)_demoteableAppsWithInterval:(long long)arg1 context:(id)arg2 outError:(id *)arg3;	// IMP=0x00000001000b149c
- (id)_cutoffDateForUrgency:(long long)arg1;	// IMP=0x00000001000b1464
- (id)_bundleIDsForEntitlements:(id)arg1 logKey:(id)arg2;	// IMP=0x00000001000b0fd8
- (void)_appsUsedBasedOnLastModifiedForWindow:(long long)arg1 apps:(id)arg2 cutoffDate:(id)arg3;	// IMP=0x00000001000b0998
- (_Bool)_appsBasedOnWindow:(long long)arg1 apps:(id)arg2 cutoffDate:(id)arg3 logKey:(id)arg4 ourError:(id *)arg5;	// IMP=0x00000001000b0990
- (id)_appsUsedWindow:(long long)arg1 logKey:(id)arg2 ourError:(id *)arg3;	// IMP=0x00000001000b08f4
- (id)_availableInStore:(id)arg1 logKey:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000b05bc
- (_Bool)_authorizedBySignInWithApple:(id)arg1 logKey:(id)arg2;	// IMP=0x00000001000b0258
- (id)_appPluginBlacklist;	// IMP=0x00000001000b00f0
- (id)_appBlacklist:(id)arg1;	// IMP=0x00000001000afc18
- (long long)purgeForVolume:(id)arg1 urgency:(long long)arg2 desiredPurge:(id)arg3;	// IMP=0x00000001000af8f0
- (long long)purgeableForVolume:(id)arg1 urgency:(long long)arg2 override:(_Bool)arg3;	// IMP=0x00000001000af4b4
- (long long)purgeableForVolume:(id)arg1 urgency:(long long)arg2;	// IMP=0x00000001000af4a4
- (void)cacheInvalidated;	// IMP=0x00000001000af21c
- (id)allPurgeablesForVolume:(id)arg1;	// IMP=0x00000001000aeeec
- (void)syncDuetEvents;	// IMP=0x00000001000aee98
- (id)purgeAppsForVolume:(id)arg1 urgency:(long long)arg2 desiredPurge:(id)arg3 performAvailabilityCheck:(_Bool)arg4 additionalApps:(id)arg5 offloadOnly:(_Bool)arg6 logKey:(id)arg7 client:(id)arg8;	// IMP=0x00000001000aec1c
- (id)purgeableAppsForVolume:(id)arg1 urgency:(long long)arg2 performAvailabilityCheck:(_Bool)arg3 logKey:(id)arg4;	// IMP=0x00000001000ae7f4
- (id)purgeableAppsForVolume:(id)arg1 urgency:(long long)arg2 performAvailabilityCheck:(_Bool)arg3;	// IMP=0x00000001000ae74c
- (id)launchEventsFromDate:(id)arg1 toDate:(id)arg2;	// IMP=0x00000001000ae6e4
- (id)installedApps;	// IMP=0x00000001000ae5c4
- (id)diagnosticDescription:(_Bool)arg1;	// IMP=0x00000001000ae220
- (void)clearLaunchHistoryForBundleIDs:(id)arg1;	// IMP=0x00000001000ade8c
- (void)_registerBagKeys;	// IMP=0x00000001000adda8
- (id)init;	// IMP=0x00000001000adc44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
