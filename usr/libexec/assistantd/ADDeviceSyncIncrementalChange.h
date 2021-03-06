//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray, NSDate;

@interface ADDeviceSyncIncrementalChange : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _generation;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    NSArray *_insertedOrUpdatedItems;	// 24 = 0x18
    NSArray *_deletedItemUUIDs;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001e0af0
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e1138
- (void).cxx_destruct;	// IMP=0x00000001001e0e04
@property(readonly, copy, nonatomic) NSArray *deletedItemUUIDs; // @synthesize deletedItemUUIDs=_deletedItemUUIDs;
@property(readonly, copy, nonatomic) NSArray *insertedOrUpdatedItems; // @synthesize insertedOrUpdatedItems=_insertedOrUpdatedItems;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001e0cfc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001e0af8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001e0aec
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001e0958
- (unsigned long long)hash;	// IMP=0x00000001001e08c0
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00000001001e0630
- (id)description;	// IMP=0x00000001001e0620
- (id)initWithGeneration:(unsigned long long)arg1 date:(id)arg2 insertedOrUpdatedItems:(id)arg3 deletedItemUUIDs:(id)arg4;	// IMP=0x00000001001e051c
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e11b8

@end

