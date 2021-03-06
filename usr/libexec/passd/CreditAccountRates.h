//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface CreditAccountRates : SQLiteEntity
{
}

+ (id)_propertySettersForCreditAccountRates;	// IMP=0x00000001001167fc
+ (id)_predicateForCreditTermsUpdatePID:(long long)arg1;	// IMP=0x0000000100116788
+ (id)_predicateForCreditAccountDetailsPID:(long long)arg1;	// IMP=0x0000000100116714
+ (void)updateCreditAccountRates:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100116520
+ (id)creditAccountRatesForCreditTermsUpdatePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010011646c
+ (id)creditAccountRatesForCreditAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001163b8
+ (void)deleteCreditAccountRatesForCreditTermsUpdatePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100116318
+ (void)deleteCreditAccountRatesForCreditAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100116278
+ (id)insertAccountRates:(id)arg1 forCreditTermsUpdatePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001161fc
+ (id)insertAccountRates:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100116180
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100115e48
+ (id)databaseTable;	// IMP=0x0000000100115e3c
- (id)creditAccountRates;	// IMP=0x00000001001168e4
- (void)updateWithCreditAccountRates:(id)arg1;	// IMP=0x000000010011661c
- (id)initWithCreditAccountRates:(id)arg1 forCreditTermsUpdatePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100116010
- (id)initWithCreditAccountRates:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100115ea0

@end

