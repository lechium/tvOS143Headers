//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface LocationIndex : SQLiteEntity
{
}

+ (id)propertySettersForLocation;	// IMP=0x0000000100269940
+ (id)locationsByPassUniqueIDWithBoundingBox:(CDStruct_d2b197d1)arg1 inDatabase:(id)arg2;	// IMP=0x00000001002694d8
+ (id)insertIndexedLocationWithLatitude:(id)arg1 longitude:(id)arg2 forLocation:(id)arg3 database:(id)arg4;	// IMP=0x0000000100269424
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x00000001002691bc
+ (id)databaseTable;	// IMP=0x00000001002691b0
- (id)initWithLatitude:(id)arg1 longitude:(id)arg2 forLocation:(id)arg3 database:(id)arg4;	// IMP=0x0000000100269284

@end

