//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface TransactionSource : SQLiteEntity
{
}

+ (id)_predicateForPIDs:(id)arg1;	// IMP=0x000000010004870c
+ (id)_predicateForPersistentID:(long long)arg1;	// IMP=0x0000000100048698
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x0000000100048678
+ (id)_predicateForPeerPaymentAccountPersistentID:(long long)arg1;	// IMP=0x0000000100048538
+ (id)_predicateForPaymentApplicationPersistentID:(long long)arg1;	// IMP=0x00000001000483f8
+ (id)_predicateForType:(unsigned long long)arg1;	// IMP=0x0000000100048384
+ (void)deleteEntitiesInDatabase:(id)arg1 forPeerPaymentAccount:(id)arg2;	// IMP=0x0000000100048250
+ (void)deleteEntitiesInDatabase:(id)arg1 forPaymentApplication:(id)arg2;	// IMP=0x00000001000481a4
+ (void)updateTransactionSourceIdentifier:(id)arg1 toNewTransactionSourceIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100047f28
+ (void)associateTransactionSourcesToPaymentTransactions:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100047b88
+ (id)anyInDatabase:(id)arg1 withPersistentID:(long long)arg2;	// IMP=0x0000000100047af8
+ (id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000100047a6c
+ (id)insertTransactionSourceWithType:(unsigned long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100047974
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x0000000100047838
+ (id)databaseTable;	// IMP=0x000000010004782c
- (unsigned long long)type;	// IMP=0x0000000100048740
- (id)identifier;	// IMP=0x000000010004872c
- (_Bool)deleteFromDatabase;	// IMP=0x00000001000482fc
- (id)_commonDictionary;	// IMP=0x00000001000479d4
- (id)initWithTransactionSourceType:(unsigned long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000478a8

@end

