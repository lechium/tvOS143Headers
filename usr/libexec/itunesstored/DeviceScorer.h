//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DeviceScorer : NSObject
{
}

+ (_Bool)_shouldEnableDeviceScoring;	// IMP=0x0000000100034c08
+ (id)_loadURLBag;	// IMP=0x0000000100034724
+ (id)_hexEncodingForData:(id)arg1;	// IMP=0x0000000100034638
+ (_Bool)deviceScoringSupported;	// IMP=0x000000010003449c
- (id)_serverEndpointIdentifierForServerEndpoint:(long long)arg1;	// IMP=0x0000000100034bd4
- (void)_initDeviceScorerWithContext:(id)arg1;	// IMP=0x0000000100034720
- (void)deviceScoreWithNonce:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000344a4
- (id)initWithServerEndpoint:(long long)arg1;	// IMP=0x000000010003440c

@end
