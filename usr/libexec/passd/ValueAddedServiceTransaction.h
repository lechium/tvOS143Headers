//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface ValueAddedServiceTransaction : SQLiteEntity
{
}

+ (id)_propertySettersForValueAddedServiceTransaction;	// IMP=0x00000001001dbf58
+ (id)_valueAddedServiceTransactionsWithQuery:(id)arg1;	// IMP=0x00000001001dbdc0
+ (id)_predicateForMerchantPID:(id)arg1;	// IMP=0x00000001001dbda0
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x00000001001dbd80
+ (id)_predicateForPass:(id)arg1;	// IMP=0x00000001001dbcf4
+ (id)_predicateForPassWithUniqueIdentifier:(id)arg1;	// IMP=0x00000001001dbcd4
+ (id)_predicateForPaymentTransaction:(id)arg1;	// IMP=0x00000001001dbc48
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x00000001001dbb74
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001001dbafc
+ (id)databaseTable;	// IMP=0x00000001001dbaf0
+ (id)valueAddedServiceTransactionsInDatabase:(id)arg1 forPaymentTransaction:(id)arg2;	// IMP=0x00000001001db490
+ (id)valueAddedServiceTransactionsInDatabase:(id)arg1 forPassUniqueIdentifier:(id)arg2 limit:(long long)arg3;	// IMP=0x00000001001db308
+ (id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00000001001db27c
+ (void)deleteEntitiesForPaymentTransaction:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001daf90
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001daedc
+ (void)truncateEntitiesForPass:(id)arg1 inDatabase:(id)arg2 toCount:(long long)arg3;	// IMP=0x00000001001dac90
+ (id)insertValueAddedServiceTransaction:(id)arg1 withPass:(id)arg2 paymentTransaction:(id)arg3 valueAddedMerchant:(id)arg4 inDatabase:(id)arg5;	// IMP=0x00000001001dabc0
- (id)valueAddedServiceTransaction;	// IMP=0x00000001001db908
- (void)updateWithValueAddedServiceTransaction:(id)arg1 paymentTransaction:(id)arg2;	// IMP=0x00000001001db668
- (_Bool)deleteFromDatabase;	// IMP=0x00000001001db044
- (id)initWithValueAddedServiceTransaction:(id)arg1 pass:(id)arg2 paymentTransaction:(id)arg3 valueAddedMerchant:(id)arg4 inDatabase:(id)arg5;	// IMP=0x00000001001da814

@end

