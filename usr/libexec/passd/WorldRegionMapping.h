//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface WorldRegionMapping : SQLiteEntity
{
}

+ (id)_predicateForWorldTransactionPID:(long long)arg1;	// IMP=0x00000001001bf008
+ (id)_predicateForWorldRegionPID:(long long)arg1;	// IMP=0x00000001001bef94
+ (id)errorForTransactionPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001bed5c
+ (void)increaseFailureCountForTransactionPID:(long long)arg1 error:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001bea38
+ (void)insertMatchForWorldRegion:(id)arg1 transactionPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001be74c
+ (id)databaseTable;	// IMP=0x00000001001be740

@end
