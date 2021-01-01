//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface ASCCollectionRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_id;	// 8 = 0x8
    NSString *_kind;	// 16 = 0x10
    NSString *_context;	// 24 = 0x18
    long long _limit;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000c87c
- (void).cxx_destruct;	// IMP=0x000000010000d044
@property(readonly, nonatomic) long long limit; // @synthesize limit=_limit;
@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(readonly, copy, nonatomic) NSString *id; // @synthesize id=_id;
- (id)description;	// IMP=0x000000010000cec4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000cc74
- (unsigned long long)hash;	// IMP=0x000000010000cb58
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000cb54
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000ca34
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010000c884
- (id)initWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 limit:(long long)arg4;	// IMP=0x000000010000c76c

@end

