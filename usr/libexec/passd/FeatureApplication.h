//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface FeatureApplication : SQLiteEntity
{
}

+ (id)_propertySettersForFeatureApplication;	// IMP=0x000000010029041c
+ (id)_predicateForFeatureApplicationIdentifier:(id)arg1;	// IMP=0x00000001002903fc
+ (void)deleteFeatureApplicationWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001002902c8
+ (void)deleteAllFeatureApplicationsInDatabase:(id)arg1;	// IMP=0x0000000100290228
+ (void)deleteFeatureApplicationsNotIncludingIdentifiers:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010029015c
+ (id)databaseTable;	// IMP=0x0000000100290150
+ (id)insertOrUpdateFeatureApplication:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010028f6d4
+ (id)featureApplicationWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010028f630
+ (id)featureApplicationsInDatabase:(id)arg1;	// IMP=0x000000010028f3fc
- (_Bool)deleteFromDatabase;	// IMP=0x0000000100290340
- (unsigned long long)state;	// IMP=0x00000001002900fc
- (id)featureApplication;	// IMP=0x000000010028ff00
- (void)updateWithFeatureApplication:(id)arg1;	// IMP=0x000000010028fb4c
- (id)initWithFeatureApplication:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010028f7b4

@end

