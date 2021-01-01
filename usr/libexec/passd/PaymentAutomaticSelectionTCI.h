//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PaymentAutomaticSelectionTCI : SQLiteEntity
{
}

+ (id)_predicateForIsPrimary:(_Bool)arg1;	// IMP=0x00000001000df188
+ (id)_predicateForPaymentAutomaticSelectionCriterionPID:(long long)arg1;	// IMP=0x00000001000df114
+ (id)insertPrimaryTCIs:(id)arg1 TCIs:(id)arg2 withPaymentAutomaticSelectionCriterion:(id)arg3 inDatabase:(id)arg4;	// IMP=0x00000001000dec10
+ (void)deleteEntitiesInDatabase:(id)arg1 forPaymentAutomaticSelectionCriterionPID:(long long)arg2;	// IMP=0x00000001000deb70
+ (id)_TCIsInDatabase:(id)arg1 withPredicate:(id)arg2;	// IMP=0x00000001000de9cc
+ (id)TCIsInDatabase:(id)arg1 forPaymentAutomaticSelectionCriterionPID:(long long)arg2;	// IMP=0x00000001000de870
+ (id)primaryTCIsInDatabase:(id)arg1 forPaymentAutomaticSelectionCriterionPID:(long long)arg2;	// IMP=0x00000001000de714
+ (id)databaseTable;	// IMP=0x00000001000de708
- (id)initWithTCI:(id)arg1 primary:(_Bool)arg2 forPaymentAutomaticSelectionCriterionPID:(long long)arg3 database:(id)arg4;	// IMP=0x00000001000def98

@end
