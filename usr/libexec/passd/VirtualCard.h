//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface VirtualCard : SQLiteEntity
{
}

+ (id)_propertySettersForVirtualCard;	// IMP=0x000000010024806c
+ (void)deleteVirtualCardsForVirtualCardStatusUpdatePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100247fcc
+ (id)insertVirtualCards:(id)arg1 forVirtualCardStatusUpdatePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100247e00
+ (id)virtualCardsForVirtualCardStatusUpdatePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100247bb8
+ (id)_predicateForVirtualCardStatusUpdatePID:(long long)arg1;	// IMP=0x0000000100247574
+ (id)_predicateForCreditAccountDetailsPID:(long long)arg1;	// IMP=0x0000000100247500
+ (id)_predicateForVirtualCardIdentifier:(id)arg1;	// IMP=0x00000001002474e0
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001002474a8
+ (id)databaseTable;	// IMP=0x000000010024749c
+ (void)deleteVirtualCardEncryptedDataForCreditAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001002472e8
+ (void)deleteVirtualCardsForCreditAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100247248
+ (id)insertOrUpdateVirtualCards:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100246664
+ (id)virtualCardsForCreditAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010024641c
+ (id)virtualCardForIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100246378
+ (id)insertOrUpdateVirtualCard:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100246290
- (id)initWithVirtualCard:(id)arg1 forVirtualCardStatusUpdatePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100247758
- (id)virtualCard;	// IMP=0x00000001002475e8
- (void)removeVirtualCardEncryptedData;	// IMP=0x0000000100247154
- (void)updateWithVirtualCard:(id)arg1;	// IMP=0x0000000100246c0c
- (id)initWithVirtualCard:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100245dd4

@end

