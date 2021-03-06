//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface CategoryVisualizationMagnitude : SQLiteEntity
{
}

+ (id)_propertySetters;	// IMP=0x0000000100031ae4
+ (id)_propertyValuesForMagnitude:(id)arg1;	// IMP=0x0000000100031978
+ (id)_predicateForBucket:(long long)arg1;	// IMP=0x0000000100031904
+ (id)_predicateForPID:(id)arg1;	// IMP=0x00000001000318e4
+ (id)_predicateForPassUniqueID:(id)arg1 bucket:(long long)arg2;	// IMP=0x00000001000317e0
+ (id)_predicateForPassUniqueID:(id)arg1;	// IMP=0x00000001000317c0
+ (id)_magnitudesMatchingQuery:(id)arg1;	// IMP=0x0000000100031600
+ (void)deleteAnyInDatabase:(id)arg1 forPassUniqueID:(id)arg2;	// IMP=0x0000000100031380
+ (id)insertOrUpdateMagnitude:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100031264
+ (id)insertMagnitude:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000311f0
+ (id)magnitudesForPassUniqueIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100031124
+ (id)anyInDatabase:(id)arg1 withPID:(id)arg2;	// IMP=0x0000000100031098
+ (id)databaseTable;	// IMP=0x0000000100030ff0
- (id)magnitude;	// IMP=0x0000000100031490
- (void)updateWithMagnitude:(id)arg1;	// IMP=0x000000010003141c
- (id)initWithMagnitude:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100030ffc

@end

