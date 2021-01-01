//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AppUsageBaseManager.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CrossfireManager : AppUsageBaseManager
{
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 8 = 0x8
    _Bool _collectingMetrics;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSString *_osBuild;	// 32 = 0x20
    NSString *_platform;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0000000100112c40
- (void).cxx_destruct;	// IMP=0x0000000100117114
- (void)_updateLaunchdWakeupFileForMacOS;	// IMP=0x0000000100116e50
- (_Bool)_shouldEnableCrossfireMetricsForSession;	// IMP=0x0000000100116c14
- (void)_resetWithReason:(id)arg1 resetActivity:(_Bool)arg2;	// IMP=0x0000000100116b30
- (void)_resetDB;	// IMP=0x0000000100116a30
- (void)_removeAppsWithBundleIDs:(id)arg1 context:(id)arg2;	// IMP=0x0000000100116958
- (void)_removeAppWithBundleID:(id)arg1 context:(id)arg2;	// IMP=0x0000000100116660
- (void)_recordLaunches;	// IMP=0x000000010011627c
- (void)_recordInternalEventsForBundleIDs:(id)arg1 eventType:(unsigned char)arg2 installType:(unsigned char)arg3 context:(id)arg4;	// IMP=0x0000000100115eb4
- (void)_recordExternalAppEvents:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001001158e0
- (void)_postMetrics;	// IMP=0x0000000100115558
- (_Bool)_includeLaunches;	// IMP=0x0000000100115498
- (void)_handleMacAnalyticsUsageSwitchChange:(id)arg1;	// IMP=0x0000000100115494
- (void)_handleAnalyticsUsageSwitchChange:(id)arg1;	// IMP=0x00000001001152c4
- (void)_getAppEventsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100114f74
- (void)_flushMetricsWithContext:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100114d10
- (id)_createAggregateMetricsEventsForEventType:(unsigned char)arg1 events:(id)arg2 context:(id)arg3;	// IMP=0x0000000100114984
- (void)_cleanup:(id)arg1 reason:(id)arg2;	// IMP=0x0000000100114898
- (id)_allAppEvents:(id)arg1;	// IMP=0x00000001001141bc
- (_Bool)isCandidateAppProxy:(id)arg1 isMetadataLookup:(_Bool)arg2;	// IMP=0x00000001001140b8
- (_Bool)isCandidateAppMetadata:(id)arg1;	// IMP=0x0000000100114030
- (void)decorateMetricsEvent:(id)arg1 context:(id)arg2;	// IMP=0x0000000100113f48
- (id)createMetricsEventsForEventType:(unsigned char)arg1 context:(id)arg2;	// IMP=0x0000000100113c44
- (_Bool)shouldPostCrossfireMetrics;	// IMP=0x0000000100113c3c
- (void)setupWithReason:(id)arg1;	// IMP=0x0000000100113a10
- (void)sendMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100113824
- (void)resetMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001136dc
- (void)recordInstalledApps:(id)arg1 installType:(unsigned char)arg2;	// IMP=0x00000001001134b0
- (void)recordMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100113374
- (void)recordLaunchesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001132ac
- (void)recordDeletedApps:(id)arg1;	// IMP=0x0000000100113090
- (void)recordAppEvent:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100112ea4
- (void)getAppEventsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100112e04
- (void)flushMetricsWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100112cdc
- (id)init;	// IMP=0x00000001001129ec

@end

