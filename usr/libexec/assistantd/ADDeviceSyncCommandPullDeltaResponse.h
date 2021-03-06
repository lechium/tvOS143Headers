//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray;

@interface ADDeviceSyncCommandPullDeltaResponse : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_incrementalChanges;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000997e8
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0000000100099aa8
- (void).cxx_destruct;	// IMP=0x00000001000998fc
@property(readonly, copy, nonatomic) NSArray *incrementalChanges; // @synthesize incrementalChanges=_incrementalChanges;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000998d0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000997f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000997e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100099724
- (unsigned long long)hash;	// IMP=0x0000000100099714
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0000000100099594
- (id)description;	// IMP=0x0000000100099584
- (id)initWithIncrementalChanges:(id)arg1;	// IMP=0x0000000100099504
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0000000100099b28

@end

