//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface CreditAccountDetails : SQLiteEntity
{
}

+ (id)_propertySettersForCreditAccountDetails;	// IMP=0x0000000100208668
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x00000001002085f4
+ (void)updateCreditAccountDetails:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100207f4c
+ (id)creditAccountDetailsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100207e98
+ (void)deleteVirtualCardEncryptedDataForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100207c98
+ (void)deleteCreditAccountDetailsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100207bf8
+ (id)insertCreditAccountDetails:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100207b7c
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100207524
+ (id)databaseTable;	// IMP=0x0000000100207518
- (id)creditAccountDetails;	// IMP=0x0000000100208b90
- (void)updateWithCreditAccountDetails:(id)arg1;	// IMP=0x0000000100208048
- (_Bool)deleteFromDatabase;	// IMP=0x0000000100207d58
- (id)initWithCreditAccountDetails:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010020755c

@end

