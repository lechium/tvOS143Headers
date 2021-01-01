//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/LSApplicationWorkspaceObserver.h>

#import "LibraryCatalog-Protocol.h"
#import "LibraryOpen-Protocol.h"
#import "LibraryQueryEvaluator-Protocol.h"

@class LibraryQueryPlanner, NSDictionary, NSObject, NSString, ProgressCache;
@protocol LibraryCatalogObserver, OS_dispatch_queue;

@interface LaunchServicesCatalog : LSApplicationWorkspaceObserver <LibraryCatalog, LibraryOpen, LibraryQueryEvaluator>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    id <LibraryCatalogObserver> _observer;	// 16 = 0x10
    LibraryQueryPlanner *_planner;	// 24 = 0x18
    ProgressCache *_progressCache;	// 32 = 0x20
    NSDictionary *_systemAppMappingByBundleID;	// 40 = 0x28
    NSDictionary *_systemAppMappingByItemID;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00000001000dc120
- (void).cxx_destruct;	// IMP=0x00000001000df3fc
@property __weak id <LibraryCatalogObserver> observer; // @synthesize observer=_observer;
- (void)_handleAppUnregisteredNotification:(id)arg1;	// IMP=0x00000001000df0ec
- (void)_handleAppRegisteredNotification:(id)arg1;	// IMP=0x00000001000dee20
- (id)_updateBuyParamsForBundleID:(id)arg1;	// IMP=0x00000001000deca0
- (void)_refreshSystemAppMapping;	// IMP=0x00000001000de740
- (void)_markMatchingUpdateAsInstalled:(id)arg1;	// IMP=0x00000001000de5d8
- (id)_createAppFromRecord:(id)arg1;	// IMP=0x00000001000de054
- (id)resultsWithItemIDs:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000ddd84
- (id)resultsWithBundleIDs:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000ddb00
- (id)resultsMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000dd8fc
- (void)launchApp:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000dd538
- (void)launchApp:(id)arg1 onPairedDevice:(id)arg2 withResultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000dd4e8
- (void)launchApp:(id)arg1 extensionType:(long long)arg2 withResultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000dd2d8
- (void)executeQuery:(id)arg1 excludingBundleIDs:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000dd088
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x00000001000dce78
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x00000001000dcc4c
- (id)lookupItemIDsForDeletableSystemAppsWithBundleIDs:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000dc8ac
- (id)lookupBundleIDsForDeletableSystemAppsWithItemIDs:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000dc4f4
- (id)_initWithProgressCache:(id)arg1;	// IMP=0x00000001000dc2b8
- (void)dealloc;	// IMP=0x00000001000dc1d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
