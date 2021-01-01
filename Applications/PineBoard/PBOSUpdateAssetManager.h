//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PBOSUpdateAssetManager : NSObject
{
    _Bool processingSpaceRequest;	// 8 = 0x8
    _Bool processingAssetRequest;	// 9 = 0x9
}

+ (long long)_compareOSVersion:(id)arg1 andBuild:(id)arg2 withOSVersion:(id)arg3 andBuild:(id)arg4;	// IMP=0x000000010014f118
+ (id)sharedManager;	// IMP=0x0000000100148508
@property(nonatomic) _Bool processingAssetRequest; // @synthesize processingAssetRequest;
@property(nonatomic) _Bool processingSpaceRequest; // @synthesize processingSpaceRequest;
- (long long)_purgeAsset:(id)arg1;	// IMP=0x000000010014ed98
- (void)_reportAssetCatalogDownloadWithResult:(long long)arg1 forAttempt:(long long)arg2;	// IMP=0x000000010014ec20
- (void)_refreshAssetCatalogUsingOptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010014e478
- (long long)_purgeableSizeFor:(id)arg1;	// IMP=0x000000010014e054
- (id)_postedDateForQuery:(id)arg1;	// IMP=0x000000010014de30
- (long long)_performMetadataQuery:(id)arg1;	// IMP=0x000000010014dcac
- (id)_queryForLocalAssetSearch;	// IMP=0x000000010014db74
- (id)_queryForAssetDownload;	// IMP=0x000000010014da54
- (id)_queryForAssetPurge;	// IMP=0x000000010014d91c
- (_Bool)_asset:(id)arg1 withReleaseDate:(id)arg2 matchesUpdate:(id)arg3;	// IMP=0x000000010014d808
- (long long)_compareAsset:(id)arg1 withAsset:(id)arg2;	// IMP=0x000000010014d398
- (_Bool)_isAsset:(id)arg1 eligibleForAction:(unsigned long long)arg2 delayingUpdates:(_Bool)arg3;	// IMP=0x000000010014cc14
- (void)_finishInstalledAssetForUpdate:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010014c49c
- (void)_finishAssetForAction:(unsigned long long)arg1 options:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010014b3c4
- (void)_configureForVPN;	// IMP=0x000000010014b12c
- (void)dateAtWhichDelayedUpdatesExpireWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010014abd4
- (void)descriptorForCurrentlyInstalledAssetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010014a508
- (id)descriptorForAsset:(id)arg1 withReleaseDate:(id)arg2;	// IMP=0x0000000100149d38
- (void)installedAssetForUpdate:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100149b4c
- (void)assetForAction:(unsigned long long)arg1 options:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001496e0
- (void)purgeLocalAssetsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100148e98
- (void)purgeableAssetSpaceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001486b0
- (id)init;	// IMP=0x00000001001485d8

@end
