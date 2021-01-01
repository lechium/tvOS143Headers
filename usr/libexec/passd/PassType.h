//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PassType : SQLiteEntity
{
}

+ (id)anyInDatabase:(id)arg1 withPassTypeIdentifierHash:(id)arg2;	// IMP=0x0000000100163678
+ (id)anyInDatabase:(id)arg1 withPassTypeID:(id)arg2;	// IMP=0x00000001001635ec
+ (id)_passTypeIdentifierHashPredicate:(id)arg1;	// IMP=0x00000001001635cc
+ (id)_passTypeIDPredicate:(id)arg1;	// IMP=0x00000001001635ac
+ (id)insertPassTypeWithPassTypeID:(id)arg1 teamID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x000000010016351c
+ (id)_insertionDictionaryWithPassTypeID:(id)arg1 teamID:(id)arg2;	// IMP=0x0000000100163090
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x0000000100162fb4
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100162f5c
+ (id)databaseTable;	// IMP=0x0000000100162f50
- (void)updateIdentifierHash;	// IMP=0x0000000100163454
- (void)updateFrequencyScore:(double)arg1;	// IMP=0x00000001001633f8
- (void)updateLastUpdateDate:(id)arg1;	// IMP=0x00000001001633e4
- (void)updateLastPushDate:(id)arg1;	// IMP=0x00000001001633d0
- (id)identifierHash;	// IMP=0x00000001001633bc
- (id)teamID;	// IMP=0x00000001001633a8
- (id)passTypeID;	// IMP=0x0000000100163394
- (double)frequencyScore;	// IMP=0x0000000100163338
- (id)lastUpdateDate;	// IMP=0x00000001001632e4
- (id)lastPushDate;	// IMP=0x0000000100163290
- (id)initWithPassTypeID:(id)arg1 teamID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001631c8

@end

