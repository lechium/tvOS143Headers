//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NIConfiguration.h"

@class NIDiscoveryToken;

@interface NINearbyPeerConfiguration : NIConfiguration
{
    NIDiscoveryToken *_peerDiscoveryToken;	// 8 = 0x8
}

+ (id)new;	// IMP=0x0000000100162630
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100162418
- (void).cxx_destruct;	// IMP=0x0000000100162950
@property(copy, nonatomic) NIDiscoveryToken *peerDiscoveryToken; // @synthesize peerDiscoveryToken=_peerDiscoveryToken;
- (id)descriptionInternal;	// IMP=0x0000000100162850
- (id)description;	// IMP=0x0000000100162784
- (unsigned long long)hash;	// IMP=0x0000000100162758
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100162658
- (id)init;	// IMP=0x00000001001625e4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001624f8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100162464
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100162420
- (id)initWithPeerToken:(id)arg1;	// IMP=0x00000001001622f4

@end
