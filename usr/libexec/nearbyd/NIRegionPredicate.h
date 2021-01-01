//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface NIRegionPredicate : NSObject <NSCopying, NSSecureCoding>
{
    float _radius;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    long long _preferredUpdateRate;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001942a8
- (void).cxx_destruct;	// IMP=0x00000001001947e4
@property long long preferredUpdateRate; // @synthesize preferredUpdateRate=_preferredUpdateRate;
@property(readonly) float radius; // @synthesize radius=_radius;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)descriptionInternal;	// IMP=0x000000010019472c
- (id)description;	// IMP=0x0000000100194660
- (unsigned long long)hash;	// IMP=0x000000010019461c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001944ec
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100194388
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001942f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001942b0
- (id)initWithName:(id)arg1 radius:(float)arg2 preferredUpdateRate:(long long)arg3;	// IMP=0x0000000100194114
- (id)initWithName:(id)arg1 radius:(float)arg2;	// IMP=0x000000010019407c

@end

