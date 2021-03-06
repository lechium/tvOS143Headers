//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary;

@interface ADDeviceSyncCommandPushGenerationsRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_generationsByDataType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100189424
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0000000100189700
- (void).cxx_destruct;	// IMP=0x0000000100189554
@property(readonly, copy, nonatomic) NSDictionary *generationsByDataType; // @synthesize generationsByDataType=_generationsByDataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100189528
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010018942c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100189420
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100189360
- (unsigned long long)hash;	// IMP=0x0000000100189350
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00000001001891d0
- (id)description;	// IMP=0x00000001001891c0
- (id)initWithGenerationsByDataType:(id)arg1;	// IMP=0x0000000100189140
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0000000100189780

@end

