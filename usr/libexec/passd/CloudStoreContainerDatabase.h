//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface CloudStoreContainerDatabase : SQLiteEntity
{
}

+ (id)_predicateForPID:(long long)arg1;	// IMP=0x000000010028f1f4
+ (id)_predicateForScope:(long long)arg1;	// IMP=0x000000010028f180
+ (id)_predicateForContainerName:(id)arg1;	// IMP=0x000000010028f160
+ (id)_predicateForContainerName:(id)arg1 scope:(long long)arg2;	// IMP=0x000000010028f050
+ (id)anyInDatabase:(id)arg1 withPID:(long long)arg2;	// IMP=0x000000010028efc0
+ (id)anyInDatabase:(id)arg1 withContainerName:(id)arg2 scope:(long long)arg3;	// IMP=0x000000010028ef2c
+ (void)removeCloudStoreDatabaseWithContainerName:(id)arg1 scope:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010028ee24
+ (id)_cloudStoreDatabaseWithContainerName:(id)arg1 scope:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010028edb8
+ (id)insertOrUpdateCloudStoreDatabaseWithContainerName:(id)arg1 scope:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010028eb70
+ (id)databaseTable;	// IMP=0x000000010028eb64
- (id)_commonDictionaryFoDatabaseWithScope:(long long)arg1 containerName:(id)arg2;	// IMP=0x000000010028f34c
- (id)databaseSubscription;	// IMP=0x000000010028f2dc
- (id)cloudStoreZones;	// IMP=0x000000010028f268
- (_Bool)deleteFromDatabase;	// IMP=0x000000010028eea4
- (void)updateWithDatabaseSubscription:(id)arg1;	// IMP=0x000000010028ed60
- (void)updateWithContainerName:(id)arg1 scope:(long long)arg2;	// IMP=0x000000010028ed08
- (id)initWithCloudStoreDatabaseWithContainerName:(id)arg1 scope:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010028ec48

@end

