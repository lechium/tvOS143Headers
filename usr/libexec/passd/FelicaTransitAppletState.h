//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AppletState.h"

@interface FelicaTransitAppletState : AppletState
{
}

+ (id)_propertySetters;	// IMP=0x0000000100166dc8
+ (id)_predicateForPaymentApplicationPID:(long long)arg1;	// IMP=0x0000000100166cc0
+ (id)felicaTransitAppletStateInDatabase:(id)arg1 withPassUniqueIdentifier:(id)arg2 secureElementIdentifier:(id)arg3 paymentApplicationIdentifier:(id)arg4;	// IMP=0x0000000100165cf8
+ (id)anyInDatabase:(id)arg1 withPaymentApplicationPID:(long long)arg2;	// IMP=0x0000000100165c68
+ (void)deleteEntitiesForPaymentApplicationPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100165bc8
+ (id)insertFelicaTransitAppletState:(id)arg1 forPaymentApplicationPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100165b4c
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x0000000100165ad0
+ (id)databaseTable;	// IMP=0x0000000100165ac4
- (id)transitAppletState;	// IMP=0x0000000100167c30
- (void)setPaymentTransactionIdentifier:(id)arg1;	// IMP=0x0000000100166d48
- (id)paymentTransactionIdentifier;	// IMP=0x0000000100166d34
- (id)_valuesDictionaryForAppletState:(id)arg1;	// IMP=0x000000010016616c
- (void)updateWithAppletState:(id)arg1;	// IMP=0x0000000100166120
- (id)initWithFelicaTransitAppletState:(id)arg1 forPaymentApplicationPID:(unsigned long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100166030

@end

