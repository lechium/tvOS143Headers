//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AppUsageBaseManager.h"

@class NSNumber, NSObject, NSString, TaskQueue, UnfairLock;
@protocol OS_dispatch_queue;

@interface OcelotManager : AppUsageBaseManager
{
    int _appStoreCacheUpdatedNotificationToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 16 = 0x10
    NSNumber *_cachedSubscribedAccountID;	// 24 = 0x18
    NSNumber *_cachedSubscribedState;	// 32 = 0x20
    NSString *_cachedSubscribedStateString;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_distNotificationQueue;	// 64 = 0x40
    NSString *_hardwareFamily;	// 72 = 0x48
    NSString *_hardwareModel;	// 80 = 0x50
    _Bool _isRetailDemoMode;	// 88 = 0x58
    UnfairLock *_lock;	// 96 = 0x60
    NSString *_os;	// 104 = 0x68
    NSString *_osBuild;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_sbsyncQueue;	// 120 = 0x78
    TaskQueue *_taskQueue;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_topAppsQueue;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_upsellQueue;	// 144 = 0x90
}

+ (id)sharedInstance;	// IMP=0x00000001000bd104
- (void).cxx_destruct;	// IMP=0x00000001000cba94
- (void)_updateCachedAppSubscriptionEntitlement:(id)arg1 logKey:(id)arg2;	// IMP=0x00000001000cb638
- (void)_updateLaunchdWakeupFileForMacOS;	// IMP=0x00000001000cb340
- (void)_topLaunchesForAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ca1f0
- (void)_terminateArcadeApps;	// IMP=0x00000001000c9c14
- (id)_topLaunchesForAccountCachePath;	// IMP=0x00000001000c9b88
- (id)_topAppsDictionary;	// IMP=0x00000001000c9968
- (id)_targetBundleIDs;	// IMP=0x00000001000c9954
- (id)_subscriptionStateForEntitlement:(id)arg1;	// IMP=0x00000001000c991c
- (id)_subscriptionState;	// IMP=0x00000001000c9898
- (_Bool)_sbsyncIfHasAppsWithReason:(id)arg1 skipAppCheck:(_Bool)arg2 outError:(id *)arg3;	// IMP=0x00000001000c9274
- (void)_resetWithReason:(id)arg1 resetActivity:(_Bool)arg2 context:(id)arg3;	// IMP=0x00000001000c8fe8
- (void)_resetDB:(id)arg1;	// IMP=0x00000001000c8634
- (void)_refreshAccountEventsIfNeeded;	// IMP=0x00000001000c7fac
- (void)_recordLaunchEventsForContext:(id)arg1;	// IMP=0x00000001000c7c00
- (void)_recordInternalEventsForBundleIDs:(id)arg1 eventType:(unsigned char)arg2 installType:(unsigned char)arg3 context:(id)arg4;	// IMP=0x00000001000c7bb0
- (void)_recordExternalAppEvents:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c75a4
- (id)qualifiedEventsForWeekeStartingWithDate:(id)arg1 context:(id)arg2;	// IMP=0x00000001000c6fec
- (id)_payoutEvents:(id)arg1;	// IMP=0x00000001000c5eb4
- (void)_postMetrics:(id)arg1;	// IMP=0x00000001000c578c
- (void)_logOcelotAppLaunchability;	// IMP=0x00000001000c54bc
- (void)_initializeAcountState;	// IMP=0x00000001000c5318
- (void)_handleAppSubscriptionChange:(id)arg1 logKey:(id)arg2;	// IMP=0x00000001000c4760
- (void)_handleRepairBundleIDNotification:(id)arg1;	// IMP=0x00000001000c3fd8
- (_Bool)_isSubscribedToArcadeIgnoringMemoryCache:(_Bool)arg1 logKey:(id)arg2 ignoresFsEntitlementCache:(_Bool)arg3 timeout:(double)arg4 outError:(id *)arg5;	// IMP=0x00000001000c3f20
- (void)_initializeNetworkDependentBits:(id)arg1;	// IMP=0x00000001000c3e40
- (void)_handleNetworkStateDidChangeNotification:(id)arg1;	// IMP=0x00000001000c3c98
- (id)_getAppStoreSubscriptionEntitlementWithTimeout:(double)arg1 outError:(id *)arg2;	// IMP=0x00000001000c3864
- (void)_getAppEventsWithAppUsageType:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c34d0
- (void)_flushMetricsWithReason:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000c3244
- (void)_ensureDeviceIDIsValid;	// IMP=0x00000001000c2d9c
- (id)_deRezzedDateForLaunchDate:(id)arg1;	// IMP=0x00000001000c2cec
- (id)_createLaunchMetricsEventForAppEvent:(id)arg1 context:(id)arg2;	// IMP=0x00000001000c24e4
- (void)_cleanup:(id)arg1 reason:(id)arg2;	// IMP=0x00000001000c23f4
- (id)_allOcelotAppEvents:(id)arg1;	// IMP=0x00000001000c1aa8
- (id)_activeAccountIDForAppEvent:(id)arg1 context:(id)arg2 withAccountEvents:(id)arg3;	// IMP=0x00000001000c16dc
- (void)refreshAppMetadata;	// IMP=0x00000001000c1544
- (id)getLaunchAppEventsWithContext:(id)arg1;	// IMP=0x00000001000c1078
- (_Bool)isCandidateAppProxy:(id)arg1 isMetadataLookup:(_Bool)arg2;	// IMP=0x00000001000c1018
- (void)decorateMetricsEvent:(id)arg1 context:(id)arg2;	// IMP=0x00000001000c0cbc
- (id)createMetricsEventsForEventType:(unsigned char)arg1 context:(id)arg2;	// IMP=0x00000001000c09b8
- (void)topAppsForAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c08d8
- (void)terminateArcadeApps;	// IMP=0x00000001000c08cc
- (void)showOcelotUpsellForItemID:(id)arg1 relaunchOptions:(id)arg2;	// IMP=0x00000001000c06c0
- (_Bool)showingUpsellDialog;	// IMP=0x00000001000c06b8
@property(readonly, nonatomic) _Bool shouldPostOcelotMetrics;
- (void)setupWithReason:(id)arg1;	// IMP=0x00000001000c0230
- (void)sendSummaryMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bff9c
- (void)sendPayoutMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bfd08
- (void)sbsyncWithReason:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bfb88
- (void)sbsyncManuallyWithReason:(id)arg1 duration:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000bf75c
- (void)sbsyncIfSubscribedWithAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bf1e4
- (void)resetPayoutWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bef2c
- (void)resetPayoutForDuetWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000becdc
- (void)resetMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bead8
- (void)recordSummaryMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000be884
- (void)recordPayoutMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000be630
- (void)recordInstalledApps:(id)arg1 installType:(unsigned char)arg2;	// IMP=0x00000001000be164
- (void)recordLaunchesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bdf3c
- (void)recordDeletedApps:(id)arg1;	// IMP=0x00000001000bdc78
- (void)recordAppEvent:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bd9f8
- (_Bool)isSubscribedToArcade:(_Bool)arg1 timeout:(double)arg2 outError:(id *)arg3;	// IMP=0x00000001000bd83c
@property(readonly, nonatomic) _Bool isSubscribedToOcelot;
- (void)handleAppStoreSubscriptionChange:(id)arg1 logKey:(id)arg2;	// IMP=0x00000001000bd740
- (void)getAppSummaryEventsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bd594
- (void)getAppPayoutEventsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bd3e0
- (void)flushMetricsWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bd2a8
- (long long)arcadeAppCount;	// IMP=0x00000001000bd1a0
- (id)init;	// IMP=0x00000001000bcb38

@end

