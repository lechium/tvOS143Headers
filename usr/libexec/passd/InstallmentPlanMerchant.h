//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface InstallmentPlanMerchant : SQLiteEntity
{
}

+ (id)_propertySetters;	// IMP=0x0000000100142270
+ (id)_propertyValuesForInstallmentPlanMerchant:(id)arg1;	// IMP=0x000000010014206c
+ (id)_predicateForInstallmentPlanPID:(id)arg1;	// IMP=0x000000010014204c
+ (id)merchantForInstallmentPlanPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100141e14
+ (id)insertOrUpdateMerchant:(id)arg1 forInstallmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100141ca0
+ (void)deleteMerchantForInstallmentPlanPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100141bec
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100141acc
+ (id)databaseTable;	// IMP=0x0000000100141ac0
- (id)merchant;	// IMP=0x0000000100141edc
- (void)updateWithMerchant:(id)arg1;	// IMP=0x0000000100141da0
- (id)initWithInstallmentPlanMerchant:(id)arg1 forInstallmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100141b04

@end

