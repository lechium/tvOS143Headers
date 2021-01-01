//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLitePredicate.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SQLiteCompoundPredicate : SQLitePredicate <NSCopying>
{
    _Bool _unary;	// 8 = 0x8
    _Bool _trueIfNoPredicates;	// 9 = 0x9
    NSString *_combinationOperation;	// 16 = 0x10
    NSArray *_predicates;	// 24 = 0x18
}

+ (id)predicateWithProperty:(id)arg1 notEqualToValues:(id)arg2;	// IMP=0x0000000100053994
+ (id)predicateWithProperty:(id)arg1 equalToValues:(id)arg2;	// IMP=0x000000010005392c
+ (id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(long long)arg3;	// IMP=0x000000010005376c
+ (id)negatedPredicate:(id)arg1;	// IMP=0x00000001000536b4
+ (id)predicateMatchingAnyPredicates:(id)arg1;	// IMP=0x000000010005360c
+ (id)predicateMatchingAllPredicates:(id)arg1;	// IMP=0x0000000100053560
- (void).cxx_destruct;	// IMP=0x0000000100054180
@property(readonly, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;	// IMP=0x0000000100053fe0
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x0000000100053d18
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100053bf4
- (unsigned long long)hash;	// IMP=0x0000000100053b58
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;	// IMP=0x0000000100053a28
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100053a24

@end

