//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLitePropertyPredicate.h"

#import "NSCopying-Protocol.h"

@interface SQLiteNullPredicate : SQLitePropertyPredicate <NSCopying>
{
    _Bool _matchesNull;	// 16 = 0x10
}

+ (id)isNullPredicateWithProperty:(id)arg1;	// IMP=0x000000010005320c
+ (id)isNotNullPredicateWithProperty:(id)arg1;	// IMP=0x000000010005318c
@property(readonly, nonatomic) _Bool matchesNull; // @synthesize matchesNull=_matchesNull;
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x0000000100053330
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100053294
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100053290

@end
