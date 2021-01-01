//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PaymentTransactionAmount : SQLiteEntity
{
}

+ (id)_postProcessValue:(id)arg1;	// IMP=0x00000001001cc604
+ (id)_propertySettersForCurrencyAmount;	// IMP=0x00000001001cc3f0
+ (id)_predicateForPaymentTransactionPIDs:(id)arg1;	// IMP=0x00000001001cc3d0
+ (id)_predicateForPaymentTransactionPID:(long long)arg1;	// IMP=0x00000001001cc35c
+ (id)paymentAmountsInDatabase:(id)arg1 forPaymentTransactionPID:(long long)arg2;	// IMP=0x00000001001cbc48
+ (id)paymentTransactionAmountsInDatabase:(id)arg1 forPaymentTransactionPID:(long long)arg2;	// IMP=0x00000001001cba34
+ (id)anyInDatabase:(id)arg1 forPaymentTransactionPID:(long long)arg2;	// IMP=0x00000001001cb9a4
+ (void)associateAmountsToPaymentTransactions:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001cb474
+ (void)deleteEntitiesForPaymentTransactionPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001cb3d4
+ (void)updateWithPaymentAmounts:(id)arg1 forPaymentTransactionPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001cb330
+ (id)insertPaymentAmounts:(id)arg1 forPaymentTransactionPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001cb180
+ (id)insertPaymentAmount:(id)arg1 forPaymentTransactionPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001cb104
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x00000001001cb090
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001001cb058
+ (id)databaseTable;	// IMP=0x00000001001cb04c
- (id)_valuesDictionaryForPaymentAmount:(id)arg1 forPaymentTransactionPID:(long long)arg2;	// IMP=0x00000001001cbfcc
- (id)transactionAmount;	// IMP=0x00000001001cbdfc
- (id)initWithPaymentAmount:(id)arg1 forPaymentTransactionPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001cafa0

@end
