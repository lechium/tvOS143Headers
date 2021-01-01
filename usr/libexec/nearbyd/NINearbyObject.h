//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class MISSING_TYPE, NIDiscoveryToken, NSString;

@interface NINearbyObject : NSObject <NSCopying, NSSecureCoding>
{
    float _distance;	// 8 = 0x8
    float _azimuth;	// 12 = 0xc
    float _elevation;	// 16 = 0x10
    NIDiscoveryToken *_discoveryToken;	// 24 = 0x18
    unsigned long long _relationship;	// 32 = 0x20
    NSString *_deviceIdentifer;	// 40 = 0x28
    MISSING_TYPE *_direction;	// 48 = 0x30
    struct {
        MISSING_TYPE *vector;
    } _quaternion;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001668d4
+ (id)new;	// IMP=0x00000001001668ac
+ (id)objectFromBluetoothDevice:(id)arg1;	// IMP=0x0000000100168798
- (void).cxx_destruct;	// IMP=0x0000000100167410
@property(copy) NSString *deviceIdentifer; // @synthesize deviceIdentifer=_deviceIdentifer;
@property(nonatomic) unsigned long long relationship; // @synthesize relationship=_relationship;
@property(nonatomic) float elevation; // @synthesize elevation=_elevation;
@property(nonatomic) float azimuth; // @synthesize azimuth=_azimuth;
@property(nonatomic) struct quaternion; // @synthesize quaternion=_quaternion;
@property(nonatomic) MISSING_TYPE *direction; // @synthesize direction=_direction;
@property(nonatomic) float distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NIDiscoveryToken *discoveryToken; // @synthesize discoveryToken=_discoveryToken;
- (id)description;	// IMP=0x00000001001671a0
- (unsigned long long)hash;	// IMP=0x0000000100166f28
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100166cb8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100166a40
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010016691c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001668dc
- (id)init;	// IMP=0x0000000100166860
- (id)initWithNearbyObject:(id)arg1;	// IMP=0x0000000100166668
- (id)initWithToken:(id)arg1;	// IMP=0x0000000100166500

@end

