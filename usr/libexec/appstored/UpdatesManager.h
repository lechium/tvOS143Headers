//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UpdatesControllerInterface-Protocol.h"

@class NSArray, NSNumber, NSRecursiveLock, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface UpdatesManager : NSObject <UpdatesControllerInterface>
{
    _Bool _automaticDownloadsAreDisabled;	// 8 = 0x8
    NSNumber *_currentAccountDSID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_badgeQueue;	// 40 = 0x28
    _Bool _hasLoadedWhitelist;	// 48 = 0x30
    NSSet *_whitelistedApps;	// 56 = 0x38
    NSRecursiveLock *_DSIDLessAppsLock;	// 64 = 0x40
    _Bool _agentRequestedUpdateAll;	// 72 = 0x48
    NSArray *_provisionedApps;	// 80 = 0x50
}

+ (id)sharedManager;	// IMP=0x00000001001d6544
- (void).cxx_destruct;	// IMP=0x00000001001df4ec
@property(retain, nonatomic) NSArray *provisionedApps; // @synthesize provisionedApps=_provisionedApps;
@property _Bool agentRequestedUpdateAll; // @synthesize agentRequestedUpdateAll=_agentRequestedUpdateAll;
- (void)_validateUpdatesState;	// IMP=0x00000001001df1b8
- (id)_updateableApps:(id)arg1;	// IMP=0x00000001001de22c
- (_Bool)_shouldShowApplicationBadge;	// IMP=0x00000001001de1e4
- (void)_setBadgeWithCount:(long long)arg1 reason:(id)arg2 context:(id)arg3;	// IMP=0x00000001001de1d0
- (void)_sendChangeNotification:(id)arg1 context:(id)arg2;	// IMP=0x00000001001de088
- (_Bool)_runTask:(id)arg1 returningError:(id *)arg2;	// IMP=0x00000001001ddf78
- (long long)_reloadApplicationBadge:(id)arg1 context:(id)arg2;	// IMP=0x00000001001ddeb4
- (void)_reload:(id)arg1;	// IMP=0x00000001001dde00
- (id)_readUpdatesPredicates;	// IMP=0x00000001001ddd04
- (id)_readUpdateCountPredicate;	// IMP=0x00000001001ddbd0
- (long long)_readUpdateBadgeCount:(id)arg1;	// IMP=0x00000001001dd56c
- (long long)_readUpdateCount;	// IMP=0x00000001001dd2d4
- (void)_performReload:(id)arg1;	// IMP=0x00000001001dcf94
- (void)_postProcessBackgroundUpdateMetrics;	// IMP=0x00000001001dc8c8
- (void)_kickOffUpdatesIfNecessaryWithMergeCount:(long long)arg1 notifyChanges:(_Bool)arg2 andContext:(id)arg3;	// IMP=0x00000001001dc334
- (_Bool)_isWhitelistedDSIDLessApp:(id)arg1;	// IMP=0x00000001001dbf74
- (void)_handleAccountChangedNotification;	// IMP=0x00000001001dbc30
- (id)_getCurrentApps;	// IMP=0x00000001001db9a8
- (void)_getUpdates:(id)arg1;	// IMP=0x00000001001dad40
- (void)_finishReloadWithContext:(id)arg1 andUpdates:(id)arg2;	// IMP=0x00000001001da55c
- (void)_findDSIDLessAppsWithLogKey:(id)arg1;	// IMP=0x00000001001d9f9c
- (void)_clearExpiredUpdateHistoryWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d9dc8
- (void)_beginObservingAccountChangeNotification;	// IMP=0x00000001001d9d1c
- (void)verifyUpdatesForRemovedBundleIDs:(id)arg1;	// IMP=0x00000001001d9bc0
- (void)verifyUpdatesFollowingExternalAppInstall:(id)arg1;	// IMP=0x00000001001d98e4
- (void)verifyPendingUpdates:(id)arg1;	// IMP=0x00000001001d94a0
- (void)verifyAllPendingUpdates;	// IMP=0x00000001001d949c
- (void)updateAllWithOrder:(id)arg1 requestToken:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001d8d80
- (void)showPendingUpdatesBadge;	// IMP=0x00000001001d8bdc
- (void)setupFollowingMigration;	// IMP=0x00000001001d8734
- (void)setAutoUpdateEnabled:(_Bool)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d8668
- (void)reloadUpdatesWithContext:(id)arg1;	// IMP=0x00000001001d85d0
- (void)reloadManagedUpdatesWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d838c
- (void)reloadFromServerWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d8238
- (void)reloadFromServerInBackgroundWithToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d80f8
- (void)refreshUpdateCountWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d7e54
- (void)reloadApplicationBadgeWithReason:(id)arg1;	// IMP=0x00000001001d7d70
- (void)performPostRestoreUpdatesCheck;	// IMP=0x00000001001d7c5c
- (void)performBackgroundSoftwareUpdateCheck;	// IMP=0x00000001001d7bac
- (void)postProcessBackgroundUpdateMetrics;	// IMP=0x00000001001d7b44
- (void)noteUpdatesStateChangedWithReason:(id)arg1 logKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001001d79c0
- (void)noteUpdatesStateChanged:(id)arg1 logKey:(id)arg2;	// IMP=0x00000001001d796c
- (void)hidePendingUpdatesBadge;	// IMP=0x00000001001d78b8
- (void)getUpdatesWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d76f8
- (void)getUpdatesWithContext:(id)arg1;	// IMP=0x00000001001d7660
- (void)getManagedUpdatesWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d74f8
- (void)confirmAgentRequestedUpdateAll:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d74e4
- (void)autoUpdateEnabled:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d7484
- (_Bool)isWhitelistedDSIDLessApp:(id)arg1;	// IMP=0x00000001001d7478
- (void)createUpdateCoordinatorsForBundleIDs:(id)arg1 context:(id)arg2 enforceImportance:(_Bool)arg3;	// IMP=0x00000001001d67a0
- (id)init;	// IMP=0x00000001001d65b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

