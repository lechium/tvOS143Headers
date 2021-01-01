//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSUUID;

@interface ADDeviceSyncItem : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010025c398
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x000000010025c85c
- (void).cxx_destruct;	// IMP=0x000000010025c600
@property(readonly, copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010025c57c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010025c3a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010025c394
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010025c274
- (unsigned long long)hash;	// IMP=0x000000010025c228
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x000000010025c04c
- (id)description;	// IMP=0x000000010025c03c
- (id)initWithUUID:(id)arg1 properties:(id)arg2;	// IMP=0x000000010025bf7c
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x000000010025c8dc

@end

