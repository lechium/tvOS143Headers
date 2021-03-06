//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBAppInfoControllerDelegate-Protocol.h"
#import "PBInstanceDependable-Protocol.h"
#import "PBSMigrationHandling-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, PBAppInfoController;
@protocol OS_dispatch_queue;

@interface PBSnapshotService : NSObject <PBAppInfoControllerDelegate, PBSMigrationHandling, PBInstanceDependable>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSOperationQueue *_imageProcessingQueue;	// 16 = 0x10
    NSMutableArray *_pendingImageOperations;	// 24 = 0x18
    NSMutableDictionary *_snapshotManifestByBundleIdentifier;	// 32 = 0x20
    PBAppInfoController *_appInfoController;	// 40 = 0x28
}

+ (void)_invalidateSnapshotsWithMask:(unsigned long long)arg1 applicationInfo:(id)arg2 manifest:(id)arg3;	// IMP=0x00000001000dd4a0
+ (id)sharedInstance;	// IMP=0x00000001000d96a8
+ (id)dependencyDescription;	// IMP=0x00000001000d95f0
+ (unsigned long long)migrateWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d8f0c
- (void).cxx_destruct;	// IMP=0x00000001000e0548
@property(readonly, nonatomic) PBAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(readonly, nonatomic) NSMutableDictionary *snapshotManifestByBundleIdentifier; // @synthesize snapshotManifestByBundleIdentifier=_snapshotManifestByBundleIdentifier;
@property(readonly, nonatomic) NSMutableArray *pendingImageOperations; // @synthesize pendingImageOperations=_pendingImageOperations;
@property(readonly, nonatomic) NSOperationQueue *imageProcessingQueue; // @synthesize imageProcessingQueue=_imageProcessingQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (void)_processPendingOperations;	// IMP=0x00000001000e0198
- (void)_processImageOperationsSync:(id)arg1;	// IMP=0x00000001000e0030
- (void)_cancelSnapshotOperationsWithGroupID:(id)arg1;	// IMP=0x00000001000dfc88
- (void)_cancelWallpaperOperations;	// IMP=0x00000001000df9d0
- (void)_processImageOperation:(id)arg1;	// IMP=0x00000001000df88c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000df6bc
- (long long)_userInterfaceStyleForFocusedProcess;	// IMP=0x00000001000df4ec
- (id)_sortDescriptorsForImageScale:(double)arg1;	// IMP=0x00000001000deff8
- (void)_updateSnapshot:(id)arg1 withContext:(id)arg2 forProcessWithIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000ddfb4
- (void)_ingestDefaultLaunchImageForApplicationInfo:(id)arg1;	// IMP=0x00000001000dd808
- (void)_invalidateAllSnapshotsForApplicationInfo:(id)arg1;	// IMP=0x00000001000dd6c8
- (id)_snapshotManifestForBundleIdentifier:(id)arg1 applicationInfo:(id)arg2;	// IMP=0x00000001000dd37c
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x00000001000dcc20
- (void)cancelSnapshotsForSceneID:(id)arg1;	// IMP=0x00000001000dcbb8
- (void)invalidateSnapshotsForBundleIdentifier:(id)arg1;	// IMP=0x00000001000dcad8
- (void)_saveWallpaperForSnapshotImage:(id)arg1 synchronously:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000daf84
- (void)saveWallpaperForSnapshotImage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000daee0
- (void)setupWallpaper;	// IMP=0x00000001000dabc4
- (void)saveSnapshotForScene:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000da714
- (id)loadSnapshotImageWithRequest:(id)arg1;	// IMP=0x00000001000d9cfc
- (void)ingestLaunchImages;	// IMP=0x00000001000d9b10
- (void)dealloc;	// IMP=0x00000001000d9a70
- (id)init;	// IMP=0x00000001000d97a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

