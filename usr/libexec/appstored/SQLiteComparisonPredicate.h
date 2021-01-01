//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLitePropertyPredicate.h"

#import "NSCopying-Protocol.h"

@interface SQLiteComparisonPredicate : SQLitePropertyPredicate <NSCopying>
{
    long long _comparisonType;	// 16 = 0x10
    id _value;	// 24 = 0x18
}

+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;	// IMP=0x00000001002b5e2c
+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;	// IMP=0x00000001002b5dc4
+ (id)predicateWithProperty:(id)arg1 equalToLongLong:(long long)arg2;	// IMP=0x00000001002b5d34
- (void).cxx_destruct;	// IMP=0x00000001002b6394
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) long long comparisonType; // @synthesize comparisonType=_comparisonType;
- (id)_comparisonTypeString;	// IMP=0x00000001002b62dc
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x00000001002b620c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001002b60b8
- (unsigned long long)hash;	// IMP=0x00000001002b602c
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x00000001002b5f38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002b5f34

@end

