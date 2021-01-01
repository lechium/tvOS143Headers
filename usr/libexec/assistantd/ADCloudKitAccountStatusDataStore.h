//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADCloudKitDataStoreProtocol-Protocol.h"

@class CKRecordZone, CKServerChangeToken, NSArray, NSString;

@interface ADCloudKitAccountStatusDataStore : NSObject <ADCloudKitDataStoreProtocol>
{
    _Bool _dataStoreIsOnSharedDatabase;	// 8 = 0x8
    _Bool _dataStoreShouldMirrorData;	// 9 = 0x9
    _Bool _isMirroredDataStore;	// 10 = 0xa
    _Bool _cloudSyncEnabled;	// 11 = 0xb
    CKRecordZone *_zone;	// 16 = 0x10
    NSArray *_supportedRecordTypes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010029c918
@property(nonatomic) _Bool cloudSyncEnabled; // @synthesize cloudSyncEnabled=_cloudSyncEnabled;
@property(copy, nonatomic) NSArray *supportedRecordTypes; // @synthesize supportedRecordTypes=_supportedRecordTypes;
@property(copy, nonatomic) CKRecordZone *zone; // @synthesize zone=_zone;
@property(nonatomic) _Bool isMirroredDataStore; // @synthesize isMirroredDataStore=_isMirroredDataStore;
@property(nonatomic) _Bool dataStoreShouldMirrorData; // @synthesize dataStoreShouldMirrorData=_dataStoreShouldMirrorData;
@property(nonatomic) _Bool dataStoreIsOnSharedDatabase; // @synthesize dataStoreIsOnSharedDatabase=_dataStoreIsOnSharedDatabase;
- (void)synchronizeUsingActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010029c898
- (void)fetchDeviceTypesForAllLanguages:(CDUnknownBlockType)arg1;	// IMP=0x000000010029c87c
- (void)fetchDeviceTypesForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010029c864
- (void)deleteUserData:(id)arg1;	// IMP=0x000000010029c7a8
- (void)mergeDataWithModifiedRecords:(id)arg1 deletedRecordIDs:(id)arg2 containsAllChanges:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010029bfe4
- (void)synchronizeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010029bd50
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken;
@property(nonatomic) _Bool hasSetUpRecordZoneSubscription;
- (id)init;	// IMP=0x000000010029b938

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
