//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface FeatureApplicationDeclineDetails : SQLiteEntity
{
}

+ (id)_propertySettersForFeatureApplicationDeclineDetails;	// IMP=0x00000001002686a8
+ (id)_predicateForApplicationPID:(long long)arg1;	// IMP=0x0000000100268634
+ (void)updateFeatureApplicationDeclineDetails:(id)arg1 forApplicationPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100268494
+ (id)featureApplicationDeclineDetailsForApplicationPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001002683e0
+ (void)deleteFeatureApplicationDeclineDetailsForApplicationPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100268340
+ (id)insertFeatureApplicationDeclineDetails:(id)arg1 forApplicationPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001002682c4
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100268184
+ (id)databaseTable;	// IMP=0x0000000100268178
- (id)featureApplicationDeclineDetails;	// IMP=0x0000000100268764
- (void)updateWithFeatureApplicationDeclineDetails:(id)arg1;	// IMP=0x0000000100268590
- (id)initWithFeatureApplicationDeclineDetails:(id)arg1 forApplicationPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100268190

@end

