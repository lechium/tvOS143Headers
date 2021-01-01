//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, SQLitePredicate;

@interface SQLiteQueryDescriptor : NSObject <NSCopying>
{
    Class _entityClass;	// 8 = 0x8
    long long _limitCount;	// 16 = 0x10
    NSArray *_orderingDirections;	// 24 = 0x18
    NSArray *_orderingProperties;	// 32 = 0x20
    SQLitePredicate *_predicate;	// 40 = 0x28
    NSArray *_groupingProperties;	// 48 = 0x30
    _Bool _returnsDistinctEntities;	// 56 = 0x38
}

@property(copy, nonatomic) NSArray *groupingProperties; // @synthesize groupingProperties=_groupingProperties;
@property(nonatomic) _Bool returnsDistinctEntities; // @synthesize returnsDistinctEntities=_returnsDistinctEntities;
@property(copy, nonatomic) SQLitePredicate *predicate; // @synthesize predicate=_predicate;
@property(copy, nonatomic) NSArray *orderingProperties; // @synthesize orderingProperties=_orderingProperties;
@property(copy, nonatomic) NSArray *orderingDirections; // @synthesize orderingDirections=_orderingDirections;
@property(nonatomic) long long limitCount; // @synthesize limitCount=_limitCount;
@property(nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
- (id)_newSelectSQLWithProperties:(id)arg1 columns:(id)arg2;	// IMP=0x0000000100057414
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100057354
- (void)dealloc;	// IMP=0x00000001000572f4

@end

