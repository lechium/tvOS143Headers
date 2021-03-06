//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface CloudStoreZone : SQLiteEntity
{
}

+ (id)_propertySettersForCloudStoreZone;	// IMP=0x00000001001e4c48
+ (id)_cloudStoreZonesWithQuery:(id)arg1;	// IMP=0x00000001001e46b8
+ (id)cloudStoreZonesForContainerDatabase:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001e45d8
+ (id)fetchTimestampForCloudStoreZone:(id)arg1 forContainerDatabase:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001e44c4
+ (id)tokenDataForCloudStoreZone:(id)arg1 forContainerDatabase:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001e43c8
+ (id)_predicateForDatabasePID:(long long)arg1;	// IMP=0x00000001001e4354
+ (id)_predicateForZoneName:(id)arg1;	// IMP=0x00000001001e4334
+ (id)_predicateForZoneName:(id)arg1 forContainerDatabase:(id)arg2;	// IMP=0x00000001001e41dc
+ (void)deleteEntitiesForCloudStoreDatabase:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001e4114
+ (void)removeCloudStoreZone:(id)arg1 forContainerDatabase:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001e3fb4
+ (id)_cloudStoreZoneWithName:(id)arg1 containerDatabase:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001e3eec
+ (void)updateChangeToken:(id)arg1 fetchTimestamp:(id)arg2 forCloudStoreZone:(id)arg3 inContainerDatabase:(id)arg4 inDatabase:(id)arg5;	// IMP=0x00000001001e3b40
+ (id)insertOrUpdateCloudStoreZone:(id)arg1 forContainerDatabase:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001e3a30
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001001e39f8
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x00000001001e3990
+ (id)databaseTable;	// IMP=0x00000001001e3984
- (id)_commonDictionaryForCloudStoreZone:(id)arg1 forContainerDatabase:(id)arg2;	// IMP=0x00000001001e4ab0
- (id)cloudStoreZone;	// IMP=0x00000001001e48bc
- (_Bool)deleteFromDatabase;	// IMP=0x00000001001e408c
- (void)updateWithShareParticipants:(id)arg1;	// IMP=0x00000001001e3e6c
- (void)updateWithCloudStoreZone:(id)arg1 forContainerDatabase:(id)arg2;	// IMP=0x00000001001e3da4
- (id)initWithCloudStoreZone:(id)arg1 forContainerDatabase:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001e3c94

@end

