//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class ADRapportLinkDiscoveryOptions, ADRapportLinkTransportOptions;

@interface ADRapportLinkConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    ADRapportLinkDiscoveryOptions *_discoveryOptions;	// 8 = 0x8
    ADRapportLinkTransportOptions *_transportOptions;	// 16 = 0x10
    long long _enablesProximityTracking;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010013c0b8
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x000000010013c560
- (void).cxx_destruct;	// IMP=0x000000010013c2bc
@property(readonly, nonatomic) long long enablesProximityTracking; // @synthesize enablesProximityTracking=_enablesProximityTracking;
@property(readonly, copy, nonatomic) ADRapportLinkTransportOptions *transportOptions; // @synthesize transportOptions=_transportOptions;
@property(readonly, copy, nonatomic) ADRapportLinkDiscoveryOptions *discoveryOptions; // @synthesize discoveryOptions=_discoveryOptions;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010013c1ec
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010013c0c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010013c0b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010013bf70
- (unsigned long long)hash;	// IMP=0x000000010013bee8
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x000000010013bcac
- (id)description;	// IMP=0x000000010013bc9c
- (id)initWithDiscoveryOptions:(id)arg1 transportOptions:(id)arg2 enablesProximityTracking:(long long)arg3;	// IMP=0x000000010013bbcc
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x000000010013c5e0

@end

