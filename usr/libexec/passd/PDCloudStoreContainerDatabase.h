//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDatabase, NSDictionary, NSString;
@protocol PDCloudStoreContainerDatabaseDataSource, PDCloudStoreDataSource;

@interface PDCloudStoreContainerDatabase : NSObject
{
    NSString *_containerName;	// 8 = 0x8
    id <PDCloudStoreDataSource> _cacheDataSource;	// 16 = 0x10
    id <PDCloudStoreContainerDatabaseDataSource> _databaseContainerDataSource;	// 24 = 0x18
    NSDictionary *_cloudStoreZonesByName;	// 32 = 0x20
    CKDatabase *_database;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010026e510
@property(readonly, nonatomic) CKDatabase *database; // @synthesize database=_database;
- (id)description;	// IMP=0x000000010026e380
- (void)createContainerDatabaseInCacheIfNecessary;	// IMP=0x000000010026e2a0
- (void)_updateCacheCloudStoreZonesByName;	// IMP=0x000000010026dffc
- (void)_shouldUpdatedCloudStoreZone:(id)arg1 remove:(_Bool)arg2;	// IMP=0x000000010026dfac
- (id)_databaseSubscriptionThatNeedsToBeCreated;	// IMP=0x000000010026df38
- (id)_cachedZoneSubscriptions;	// IMP=0x000000010026de30
- (void)clearCacheInDatabase;	// IMP=0x000000010026dca4
- (void)didUpdateShare:(id)arg1 forZoneID:(id)arg2;	// IMP=0x000000010026da1c
- (void)didUpdateChangeToken:(id)arg1 fetchTimestamp:(id)arg2 forZoneID:(id)arg3;	// IMP=0x000000010026d8c4
- (void)didRemoveSubscriptionIdentifiers:(id)arg1;	// IMP=0x000000010026d750
- (void)didRemoveZoneIDs:(id)arg1;	// IMP=0x000000010026d544
- (void)didCreateZones:(id)arg1;	// IMP=0x000000010026d258
- (void)didCreateSubscriptions:(id)arg1;	// IMP=0x000000010026ce2c
- (id)cloudStoreZoneForSubscriptionIdentfiier:(id)arg1;	// IMP=0x000000010026cc90
- (id)fetchTimestampForCloudStoreStore:(id)arg1;	// IMP=0x000000010026cc7c
- (id)changeTokenForCloudStoreStore:(id)arg1;	// IMP=0x000000010026cb40
- (id)cloudStoreZoneForZoneID:(id)arg1;	// IMP=0x000000010026c970
- (id)cloudStoreZonesForItemType:(unsigned long long)arg1 configuration:(id)arg2 action:(unsigned long long)arg3;	// IMP=0x000000010026c95c
- (id)cloudStoreZonesForItemType:(unsigned long long)arg1 action:(unsigned long long)arg2;	// IMP=0x000000010026c940
- (id)cloudStoreZonesForItem:(id)arg1 action:(unsigned long long)arg2;	// IMP=0x000000010026c92c
- (id)cloudStoreZones;	// IMP=0x000000010026c8c4
- (id)subscriptionIdentifiersForZoneIDs:(id)arg1;	// IMP=0x000000010026c61c
- (id)subscriptionsForZones:(id)arg1;	// IMP=0x000000010026c484
- (id)allPossibleSubscriptionIdentifiers;	// IMP=0x000000010026c284
- (id)allPossibleZoneIDs;	// IMP=0x000000010026c0b0
- (id)subscriptionsThatNeedsToBeCreated;	// IMP=0x000000010026bee0
- (id)zonesThatNeedToBeCreated;	// IMP=0x000000010026bc40
- (long long)scope;	// IMP=0x000000010026bc30
- (id)identifier;	// IMP=0x000000010026bc14
- (id)zoneForZoneName:(id)arg1;	// IMP=0x000000010026bb78
- (id)initWithDatabase:(id)arg1 containerName:(id)arg2 cacheDataSource:(id)arg3 databaseContainerDataSource:(id)arg4;	// IMP=0x000000010026ba5c

@end

