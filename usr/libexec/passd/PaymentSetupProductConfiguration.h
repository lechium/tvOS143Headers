//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PaymentSetupProductConfiguration : SQLiteEntity
{
}

+ (id)_propertySettersForPaymentSetupProductConfiguration;	// IMP=0x00000001001fc738
+ (id)_predicateForProductIdentifier:(id)arg1;	// IMP=0x00000001001fc718
+ (void)deletePaymentSetupProductConfigurationWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001fc664
+ (void)deleteAllPaymentSetupProductConfigurationsInDatabase:(id)arg1;	// IMP=0x00000001001fc5c4
+ (void)deletePaymentSetupProductConfigurationsNotIncludingIdentifiers:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001fc4f8
+ (id)databaseTable;	// IMP=0x00000001001fc4ec
+ (id)insertOrUpdatePaymentSetupProductConfiguration:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001fbda8
+ (id)paymentSetupProductConfigurationWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001fbd04
+ (id)paymentSetupProductConfigurationsInDatabase:(id)arg1;	// IMP=0x00000001001fbad0
- (id)paymentSetupProductConfiguration;	// IMP=0x00000001001fc3b4
- (void)updateWithPaymentSetupProductConfiguration:(id)arg1;	// IMP=0x00000001001fc140
- (id)initWithPaymentSetupProductConfiguration:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001fbe88

@end

