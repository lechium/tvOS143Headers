//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ODRDatabaseExternalTransaction.h"

#import "SQLiteDatabaseTransaction-Protocol.h"

@class NSString, ODRDatabaseChangeset, SQLiteConnection;

@interface ODRDatabaseTransaction : ODRDatabaseExternalTransaction <SQLiteDatabaseTransaction>
{
    ODRDatabaseChangeset *_changeset;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010012f708
- (id)_manifestEntityForManifest:(id)arg1;	// IMP=0x000000010012f47c
- (id)_existingStorageIDForBundleID:(id)arg1;	// IMP=0x000000010012f390
- (_Bool)_deleteTagsMatchingPredicate:(id)arg1;	// IMP=0x000000010012f220
- (_Bool)_deleteAssetPacksMatchingPredicate:(id)arg1;	// IMP=0x000000010012efec
- (id)_assetPackEntityForBundleID:(id)arg1 bundleKey:(id)arg2;	// IMP=0x000000010012edd0
- (id)_assetPackEntityForAssetPack:(id)arg1;	// IMP=0x000000010012eca8
- (_Bool)updateManifest:(id)arg1 forApplication:(id)arg2 verifyContentHashes:(_Bool)arg3;	// IMP=0x000000010012e378
- (_Bool)updateManifest:(id)arg1 bundleTagManifest:(id)arg2 forApplication:(id)arg3 verifyContentHashes:(_Bool)arg4;	// IMP=0x000000010012e01c
- (_Bool)updateEntity:(id)arg1;	// IMP=0x000000010012df14
- (_Bool)updateBundleTagManifest:(id)arg1 forApplication:(id)arg2;	// IMP=0x000000010012d9e4
- (_Bool)updateAssetDownloadSizeForDownload:(id)arg1;	// IMP=0x000000010012d8c8
- (_Bool)updateAsset:(id)arg1;	// IMP=0x000000010012d7f8
- (_Bool)resetStateForApplication:(id)arg1;	// IMP=0x000000010012d63c
- (_Bool)purgeAllTagsForApplication:(id)arg1;	// IMP=0x000000010012d480
- (_Bool)purgeAllAssetPacksForApplication:(id)arg1 withReason:(long long)arg2;	// IMP=0x000000010012d0e0
- (_Bool)markAssetDownloadAsPaused:(_Bool)arg1 download:(id)arg2;	// IMP=0x000000010012d02c
- (_Bool)mapBundleID:(id)arg1 toBundlePath:(id)arg2;	// IMP=0x000000010012cd6c
- (_Bool)importAssetDownload:(id)arg1;	// IMP=0x000000010012ca78
- (_Bool)deleteMappingForBundleID:(id)arg1;	// IMP=0x000000010012ca70
- (_Bool)deleteManifestForApplication:(id)arg1;	// IMP=0x000000010012c7d4
- (_Bool)deleteAssetDownload:(id)arg1;	// IMP=0x000000010012c6b0

// Remaining properties
@property(readonly) SQLiteConnection *connection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
