//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary;

@interface ADDeviceSyncCommandPullGenerationsResponse : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_generationsByDataType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001002b0da0
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00000001002b107c
- (void).cxx_destruct;	// IMP=0x00000001002b0ed0
@property(readonly, copy, nonatomic) NSDictionary *generationsByDataType; // @synthesize generationsByDataType=_generationsByDataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001002b0ea4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001002b0da8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002b0d9c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001002b0cdc
- (unsigned long long)hash;	// IMP=0x00000001002b0ccc
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00000001002b0b4c
- (id)description;	// IMP=0x00000001002b0b3c
- (id)initWithGenerationsByDataType:(id)arg1;	// IMP=0x00000001002b0abc
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00000001002b10fc

@end

