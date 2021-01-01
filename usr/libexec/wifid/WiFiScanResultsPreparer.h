//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WiFiAvailabilityEngine;

@interface WiFiScanResultsPreparer : NSObject
{
    _Bool _disableProminentFiltering;	// 8 = 0x8
    struct __WiFiDeviceManager *_manager;	// 16 = 0x10
    NSArray *_preparedScanResults;	// 24 = 0x18
    unsigned long long _prominentScanResultsCount;	// 32 = 0x20
    NSArray *_blacklistedSSIDs;	// 40 = 0x28
    WiFiAvailabilityEngine *_engine;	// 48 = 0x30
}

+ (_Bool)wifiNetworkShouldBeProminentlyDisplayed:(struct __WiFiNetwork *)arg1;	// IMP=0x00000001000e796c
@property(nonatomic) _Bool disableProminentFiltering; // @synthesize disableProminentFiltering=_disableProminentFiltering;
@property(retain, nonatomic) WiFiAvailabilityEngine *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSArray *blacklistedSSIDs; // @synthesize blacklistedSSIDs=_blacklistedSSIDs;
@property(nonatomic) unsigned long long prominentScanResultsCount; // @synthesize prominentScanResultsCount=_prominentScanResultsCount;
@property(retain, nonatomic) NSArray *preparedScanResults; // @synthesize preparedScanResults=_preparedScanResults;
@property(nonatomic) struct __WiFiDeviceManager *manager; // @synthesize manager=_manager;
- (id)topRecommendableNetwork;	// IMP=0x00000001000e7a40
- (void)_prepareScanResults:(id)arg1;	// IMP=0x00000001000e7120
- (void)dealloc;	// IMP=0x00000001000e70b8
- (id)initWithManager:(struct __WiFiDeviceManager *)arg1 availabilityEngine:(id)arg2 scanResults:(id)arg3 disableProminentFiltering:(_Bool)arg4 blacklistedSSIDs:(id)arg5;	// IMP=0x00000001000e6ff4
- (id)initWithManager:(struct __WiFiDeviceManager *)arg1 availabilityEngine:(id)arg2 scanResults:(id)arg3;	// IMP=0x00000001000e6fe4
- (id)initWithManager:(struct __WiFiDeviceManager *)arg1 availabilityEngine:(id)arg2 scanResults:(id)arg3 disableProminentFiltering:(_Bool)arg4;	// IMP=0x00000001000e6fd4

@end

