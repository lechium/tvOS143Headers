//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WiFiRecommendation-Protocol.h"

@class NSString;
@protocol WiFiCandidateNetwork, WiFiScannedNetwork;

@interface WiFiRecommendationStub : NSObject <WiFiRecommendation>
{
    _Bool _unwantedNetworkName;	// 8 = 0x8
    id <WiFiCandidateNetwork> _network;	// 16 = 0x10
    long long _priority;	// 24 = 0x18
    NSString *_SSID;	// 32 = 0x20
    id <WiFiScannedNetwork> _scannedNetwork;	// 40 = 0x28
}

@property(readonly, nonatomic) _Bool unwantedNetworkName; // @synthesize unwantedNetworkName=_unwantedNetworkName;
@property(readonly, nonatomic) id <WiFiScannedNetwork> scannedNetwork; // @synthesize scannedNetwork=_scannedNetwork;
@property(copy, nonatomic) NSString *SSID; // @synthesize SSID=_SSID;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) id <WiFiCandidateNetwork> network; // @synthesize network=_network;
- (void)dealloc;	// IMP=0x00000001000f0764
- (id)initWithWiFiNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x00000001000f06a8

@end
