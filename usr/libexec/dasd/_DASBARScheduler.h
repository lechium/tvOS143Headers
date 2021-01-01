//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"
#import "SBSApplicationUserQuitMonitorDelegate-Protocol.h"

@class BKSApplicationStateMonitor, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSUserDefaults, SBSApplicationUserQuitMonitor, _DASActivityGroup, _DASDaemon;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log, _DKKnowledgeQuerying;

@interface _DASBARScheduler : NSObject <LSApplicationWorkspaceObserverProtocol, SBSApplicationUserQuitMonitorDelegate>
{
    _Bool _barEnabled;	// 8 = 0x8
    _Bool _barWiFiOnly;	// 9 = 0x9
    int _barSettingsChangedToken;	// 12 = 0xc
    SBSApplicationUserQuitMonitor *_quitMonitor;	// 16 = 0x10
    id <_DKKnowledgeQuerying> _knowledgeStore;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_schedulingQueue;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_appUpdateTimer;	// 48 = 0x30
    _DASDaemon *_scheduler;	// 56 = 0x38
    _DASActivityGroup *_barGroup;	// 64 = 0x40
    NSUserDefaults *_barPreferences;	// 72 = 0x48
    NSUserDefaults *_delayPreferences;	// 80 = 0x50
    NSUserDefaults *_lastLaunchPreferences;	// 88 = 0x58
    NSUserDefaults *_killedAppPreferences;	// 96 = 0x60
    NSMutableSet *_fetchEnabledApps;	// 104 = 0x68
    NSMutableSet *_pushEnabledApps;	// 112 = 0x70
    NSMutableSet *_newsstandApps;	// 120 = 0x78
    NSMutableSet *_blacklistedApps;	// 128 = 0x80
    NSMutableSet *_killedApps;	// 136 = 0x88
    NSSet *_foregroundApps;	// 144 = 0x90
    NSMutableDictionary *_appToMinimumLaunchDelay;	// 152 = 0x98
    NSMutableDictionary *_appsToPendingTasks;	// 160 = 0xa0
    NSObject<OS_os_log> *_log;	// 168 = 0xa8
    BKSApplicationStateMonitor *_monitor;	// 176 = 0xb0
}

+ (id)barSchedulerWithScheduler:(id)arg1;	// IMP=0x0000000100037dc0
- (void).cxx_destruct;	// IMP=0x000000010003df50
@property(retain, nonatomic) BKSApplicationStateMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) NSMutableDictionary *appsToPendingTasks; // @synthesize appsToPendingTasks=_appsToPendingTasks;
@property(retain, nonatomic) NSMutableDictionary *appToMinimumLaunchDelay; // @synthesize appToMinimumLaunchDelay=_appToMinimumLaunchDelay;
@property(retain, nonatomic) NSSet *foregroundApps; // @synthesize foregroundApps=_foregroundApps;
@property(retain, nonatomic) NSMutableSet *killedApps; // @synthesize killedApps=_killedApps;
@property(retain, nonatomic) NSMutableSet *blacklistedApps; // @synthesize blacklistedApps=_blacklistedApps;
@property(retain, nonatomic) NSMutableSet *newsstandApps; // @synthesize newsstandApps=_newsstandApps;
@property(retain, nonatomic) NSMutableSet *pushEnabledApps; // @synthesize pushEnabledApps=_pushEnabledApps;
@property(retain, nonatomic) NSMutableSet *fetchEnabledApps; // @synthesize fetchEnabledApps=_fetchEnabledApps;
@property(retain, nonatomic) NSUserDefaults *killedAppPreferences; // @synthesize killedAppPreferences=_killedAppPreferences;
@property(retain, nonatomic) NSUserDefaults *lastLaunchPreferences; // @synthesize lastLaunchPreferences=_lastLaunchPreferences;
@property(retain, nonatomic) NSUserDefaults *delayPreferences; // @synthesize delayPreferences=_delayPreferences;
@property(retain, nonatomic) NSUserDefaults *barPreferences; // @synthesize barPreferences=_barPreferences;
@property(retain, nonatomic) _DASActivityGroup *barGroup; // @synthesize barGroup=_barGroup;
@property(retain, nonatomic) _DASDaemon *scheduler; // @synthesize scheduler=_scheduler;
@property(nonatomic) int barSettingsChangedToken; // @synthesize barSettingsChangedToken=_barSettingsChangedToken;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *appUpdateTimer; // @synthesize appUpdateTimer=_appUpdateTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *schedulingQueue; // @synthesize schedulingQueue=_schedulingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property(retain, nonatomic) SBSApplicationUserQuitMonitor *quitMonitor; // @synthesize quitMonitor=_quitMonitor;
@property(nonatomic) _Bool barWiFiOnly; // @synthesize barWiFiOnly=_barWiFiOnly;
@property(nonatomic) _Bool barEnabled; // @synthesize barEnabled=_barEnabled;
- (_Bool)backgroundLaunchAllowedForBGTaskActivity:(id)arg1;	// IMP=0x000000010003d9b0
- (_Bool)appUsesBackgroundTaskScheduler:(id)arg1;	// IMP=0x000000010003d95c
- (void)setMinimumBackgroundFetchInterval:(double)arg1 forApp:(id)arg2;	// IMP=0x000000010003d540
- (double)minimumDelayBetweenLaunchesForApp:(id)arg1;	// IMP=0x000000010003d41c
- (void)queueReloadRequestedDelays;	// IMP=0x000000010003d264
- (void)reloadRequestedDelays;	// IMP=0x000000010003d1fc
- (void)quitMonitor:(id)arg1 userClosedLastSceneOfApplicationWithBundleID:(id)arg2;	// IMP=0x000000010003d134
- (_Bool)isNewsstandApp:(id)arg1;	// IMP=0x000000010003d01c
- (_Bool)pushLaunchAllowedForApp:(id)arg1 immediately:(_Bool *)arg2;	// IMP=0x000000010003ccb4
- (_Bool)applicationStateRequiresImmediateDelivery:(id)arg1;	// IMP=0x000000010003cb78
- (_Bool)backgroundLaunchAllowedForApp:(id)arg1;	// IMP=0x000000010003ca54
- (void)handleAppsForegrounded:(id)arg1;	// IMP=0x000000010003c464
- (void)queueUpdateLastLaunchTimesToDate:(id)arg1 forApps:(id)arg2;	// IMP=0x000000010003c1e8
- (void)start;	// IMP=0x000000010003c0ac
- (void)recordBARState;	// IMP=0x000000010003c054
- (void)startIfBAREnabled;	// IMP=0x000000010003bfec
- (void)queueStartIfBAREnabled;	// IMP=0x000000010003bc30
- (void)createBARApplicationGroup;	// IMP=0x000000010003bbd0
- (void)queueScheduleActivityForApp:(id)arg1 startingAfter:(id)arg2;	// IMP=0x000000010003b6e8
- (void)queueScheduleActivitiesForEligibleApps:(id)arg1 withDelay:(_Bool)arg2;	// IMP=0x000000010003b4a8
- (void)queueCancelActivitiesForApps:(id)arg1;	// IMP=0x000000010003b33c
- (void)cancelActivitiesForAllApps;	// IMP=0x000000010003b2d4
- (void)queueCancelActivitiesForAllApps;	// IMP=0x000000010003b0f0
- (id)queuePendingRefreshes;	// IMP=0x000000010003b078
- (void)queue_cancelBackgroundTasksForUnusedApps;	// IMP=0x000000010003ae54
- (id)appsLaunchedInLastDays:(int)arg1;	// IMP=0x000000010003a8e8
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x000000010003a4bc
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x000000010003a288
- (void)queueHandleAppsUninstalled:(id)arg1;	// IMP=0x000000010003a0ac
- (void)queueHandleAppsRevived:(id)arg1;	// IMP=0x0000000100039e4c
- (void)queueHandleAppKilled:(id)arg1;	// IMP=0x0000000100039c90
- (void)registerForAppKilledNotifications;	// IMP=0x0000000100039a70
- (void)registerForBARNotifications;	// IMP=0x00000001000397d8
- (void)queueHandleBARSettingsChangedNotification:(_Bool)arg1;	// IMP=0x0000000100039024
- (_Bool)isBAREnabledOnWiFiOnly;	// IMP=0x0000000100038fb8
- (id)topNAppsUserHasLaunchedInSet:(id)arg1;	// IMP=0x0000000100038798
- (id)queueAppsWithDelaySpecifiedInSet:(id)arg1;	// IMP=0x00000001000385ac
- (void)determineAppsWithBackgroundRunningModes;	// IMP=0x0000000100038140
- (id)queueObtainAppsEligibleForBackgroundFetch;	// IMP=0x0000000100038078
- (id)queueAppsEligibleForBackgroundFetchInSet:(id)arg1;	// IMP=0x0000000100037e64
- (void)cleanupPreferences;	// IMP=0x0000000100037e60
- (void)dealloc;	// IMP=0x0000000100037e14
- (id)initWithScheduler:(id)arg1;	// IMP=0x0000000100037a14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

