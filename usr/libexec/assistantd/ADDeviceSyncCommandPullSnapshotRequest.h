//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface ADDeviceSyncCommandPullSnapshotRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_dataType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000539f8
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0000000100053c6c
- (void).cxx_destruct;	// IMP=0x0000000100053ac0
@property(readonly, copy, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100053a94
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100053a00
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000539f4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100053934
- (unsigned long long)hash;	// IMP=0x0000000100053924
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00000001000537a4
- (id)description;	// IMP=0x0000000100053794
- (id)initWithDataType:(id)arg1;	// IMP=0x0000000100053714
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0000000100053cec

@end
