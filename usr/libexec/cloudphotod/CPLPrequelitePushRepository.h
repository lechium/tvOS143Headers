//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLPrequeliteStorage.h"

#import "CPLEnginePushRepositoryImplementation-Protocol.h"

@class CPLExtractedBatch, CPLPrequeliteVariable, NSMutableDictionary, NSString;

@interface CPLPrequelitePushRepository : CPLPrequeliteStorage <CPLEnginePushRepositoryImplementation>
{
    NSMutableDictionary *_injectionPerChangeType;	// 8 = 0x8
    CPLPrequeliteVariable *_extractedBatchVar;	// 16 = 0x10
    _Bool _hasCachedExtractedBatch;	// 24 = 0x18
    CPLExtractedBatch *_cachedExtractedBatch;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010005f4ac
- (void)writeTransactionDidFail;	// IMP=0x000000010005f44c
- (_Bool)getRelatedScopedIdentifier:(id *)arg1 forRecordWithScopedIdentifier:(id)arg2;	// IMP=0x000000010005f0b8
@property(readonly, nonatomic) _Bool isEmpty;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 discardedUploadIdentifiers:(id *)arg4 error:(id *)arg5;	// IMP=0x000000010005ec8c
- (id)statusPerScopeIndex;	// IMP=0x000000010005e1ec
- (id)statusDictionary;	// IMP=0x000000010005ddf8
- (id)status;	// IMP=0x000000010005d864
- (_Bool)hasChangesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x000000010005d658
- (id)allChangesWithScopeIdentifier:(id)arg1;	// IMP=0x000000010005d430
- (id)allChangesWithClass:(Class)arg1 secondaryScopedIdentifier:(id)arg2;	// IMP=0x000000010005d240
- (id)allChangesWithClass:(Class)arg1 relatedScopedIdentifier:(id)arg2;	// IMP=0x000000010005d050
- (id)allNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;	// IMP=0x000000010005cf88
- (id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 changeType:(unsigned long long)arg3;	// IMP=0x000000010005ce90
- (id)_injectionForChangeType:(unsigned long long)arg1;	// IMP=0x000000010005cd68
- (id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 trashed:(_Bool)arg3;	// IMP=0x000000010005cc98
- (id)_allChangesWithScopeIdentifier:(id)arg1 scopeIndex:(long long)arg2 query:(id)arg3;	// IMP=0x000000010005ca24
- (id)changeWithScopedIdentifier:(id)arg1;	// IMP=0x000000010005c9c8
- (id)storedExtractedBatch;	// IMP=0x000000010005c84c
- (_Bool)storeExtractedBatch:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005c66c
- (_Bool)deleteAllChangesWithError:(id *)arg1;	// IMP=0x000000010005c58c
- (_Bool)hasSomeChangeWithScopedIdentifier:(id)arg1;	// IMP=0x000000010005c3ac
- (_Bool)deleteChangeWithScopedIdentifier:(id)arg1 discardedUploadIdentifier:(id *)arg2 error:(id *)arg3;	// IMP=0x000000010005c188
- (_Bool)deleteChangeWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005bf8c
- (_Bool)reinjectChange:(id)arg1 dequeueOrder:(long long)arg2 discardedUploadIdentifier:(id *)arg3 overwrittenRecord:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x000000010005bcf0
- (_Bool)storeChange:(id)arg1 uploadIdentifier:(id)arg2 discardedUploadIdentifier:(id *)arg3 error:(id *)arg4;	// IMP=0x000000010005bb68
- (_Bool)_mergeChange:(id)arg1 overChange:(id)arg2 discardedUploadIdentifier:(id *)arg3 error:(id *)arg4;	// IMP=0x000000010005b67c
- (_Bool)_storeChange:(id)arg1 update:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000010005b354
- (id)_pqlChangeWithScopedIdentifier:(id)arg1;	// IMP=0x000000010005b170
- (_Bool)hasChangesWithScopeFilter:(id)arg1;	// IMP=0x000000010005afb0
- (_Bool)hasChangesInScopeWithIdentifier:(id)arg1;	// IMP=0x000000010005aec4
- (unsigned long long)countOfChangesInScopeWithIdentifier:(id)arg1;	// IMP=0x000000010005add8
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x000000010005a47c
- (_Bool)initializeStorage;	// IMP=0x000000010005a29c
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x000000010005a1b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

