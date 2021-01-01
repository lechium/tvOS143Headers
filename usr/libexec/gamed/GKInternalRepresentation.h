//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@interface GKInternalRepresentation : NSObject <NSCoding, NSCopying, NSSecureCoding>
{
}

+ (id)secureCodedPropertyKeys;	// IMP=0x00000001000813b0
+ (id)codedPropertyKeys;	// IMP=0x000000010008138c
+ (id)internalRepresentation;	// IMP=0x0000000100080ec0
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100080eb8
+ (id)internalRepresentationWithProperties:(id)arg1;	// IMP=0x00000001001402d4
+ (id)propertiesToFetch;	// IMP=0x00000001001401f8
+ (id)internalRepresentationForCacheObject:(id)arg1;	// IMP=0x000000010013fdc8
- (void)mergePropertiesFrom:(id)arg1;	// IMP=0x0000000100081a88
- (id)serverRepresentation;	// IMP=0x0000000100081a7c
- (id)description;	// IMP=0x0000000100081a6c
- (id)_gkDescriptionWithChildren:(long long)arg1;	// IMP=0x00000001000813c8
- (id)descriptionSubstitutionMap;	// IMP=0x00000001000813bc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100081210
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000810c8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100080ed4
- (void)updateWithProperties:(id)arg1;	// IMP=0x0000000100140364
- (id)initWithProperties:(id)arg1;	// IMP=0x0000000100140304
- (void)updateWithCacheObject:(id)arg1;	// IMP=0x000000010013ff54
- (id)initWithCacheObject:(id)arg1;	// IMP=0x000000010013fdf8

@end
