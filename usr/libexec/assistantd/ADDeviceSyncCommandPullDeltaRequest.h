//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface ADDeviceSyncCommandPullDeltaRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_dataType;	// 8 = 0x8
    unsigned long long _generation;	// 16 = 0x10
    unsigned long long _limit;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001002ace7c
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00000001002ad2fc
- (void).cxx_destruct;	// IMP=0x00000001002ad0c0
@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property(readonly, copy, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001002acfc4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001002ace84
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002ace78
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001002acd68
- (unsigned long long)hash;	// IMP=0x00000001002accb4
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00000001002aca6c
- (id)description;	// IMP=0x00000001002aca5c
- (id)initWithDataType:(id)arg1 generation:(unsigned long long)arg2 limit:(unsigned long long)arg3;	// IMP=0x00000001002ac9c8
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00000001002ad37c

@end

