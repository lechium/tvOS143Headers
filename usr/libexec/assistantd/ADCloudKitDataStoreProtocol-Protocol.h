//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CKRecordZone, CKServerChangeToken, NSArray, NSObject, NSString;
@protocol OS_xpc_object;

@protocol ADCloudKitDataStoreProtocol <NSObject>
@property(nonatomic) _Bool isMirroredDataStore;
@property(nonatomic) _Bool dataStoreShouldMirrorData;
@property(copy, nonatomic) CKRecordZone *zone;
@property(nonatomic) _Bool dataStoreIsOnSharedDatabase;
@property(nonatomic) _Bool hasSetUpRecordZoneSubscription;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken;
@property(readonly, copy, nonatomic) NSArray *supportedRecordTypes;
- (void)fetchDeviceTypesForAllLanguages:(void (^)(NSDictionary *, NSError *))arg1;
- (void)fetchDeviceTypesForLanguage:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)deleteUserData:(NSString *)arg1;
- (void)mergeDataWithModifiedRecords:(NSArray *)arg1 deletedRecordIDs:(NSArray *)arg2 containsAllChanges:(_Bool)arg3 completion:(void (^)(NSError *))arg4;
- (void)synchronizeUsingActivity:(NSObject<OS_xpc_object> *)arg1 completion:(void (^)(_Bool))arg2;
- (void)synchronizeWithCompletion:(void (^)(_Bool))arg1;
@end

