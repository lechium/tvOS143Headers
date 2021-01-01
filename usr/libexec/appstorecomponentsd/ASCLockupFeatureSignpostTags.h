//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASCLockupFeature-Protocol.h"

@class NSSet, NSString;

@interface ASCLockupFeatureSignpostTags : NSObject <ASCLockupFeature>
{
    NSSet *_signpostTags;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100004fa0
- (void).cxx_destruct;	// IMP=0x000000010000537c
@property(readonly, copy, nonatomic) NSSet *signpostTags; // @synthesize signpostTags=_signpostTags;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000051bc
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100005134
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000050bc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100004fa8
- (id)initWithSignpostTags:(id)arg1;	// IMP=0x0000000100004f20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
