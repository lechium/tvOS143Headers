//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface InstallmentPlanSummary : SQLiteEntity
{
}

+ (id)_propertySetters;	// IMP=0x0000000100156dd8
+ (id)_propertyValuesForInstallmentPlanSummary:(id)arg1;	// IMP=0x0000000100156b08
+ (id)_predicateForInstallmentPlanPID:(id)arg1;	// IMP=0x0000000100156ae8
+ (id)summaryForInstallmentPlanPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001568b0
+ (id)insertOrUpdateSummary:(id)arg1 forInstallmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x000000010015673c
+ (void)deleteSummaryForInstallmentPlanPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100156688
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100156568
+ (id)databaseTable;	// IMP=0x000000010015655c
- (id)summary;	// IMP=0x0000000100156978
- (void)updateWithSummary:(id)arg1;	// IMP=0x000000010015683c
- (id)initWithInstallmentPlanSummary:(id)arg1 forInstallmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001565a0

@end
