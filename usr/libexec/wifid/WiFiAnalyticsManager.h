//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WADeviceAnalyticsClient;

@interface WiFiAnalyticsManager : NSObject
{
    WADeviceAnalyticsClient *_deviceAnalyticsClient;	// 8 = 0x8
    struct __WiFiManager *_wifiManager;	// 16 = 0x10
    double _managerInitTime;	// 24 = 0x18
}

+ (id)sharedWiFiAnalyticsManager;	// IMP=0x0000000100004b80
@property(nonatomic) double managerInitTime; // @synthesize managerInitTime=_managerInitTime;
@property(nonatomic) struct __WiFiManager *wifiManager; // @synthesize wifiManager=_wifiManager;
@property(retain, nonatomic) WADeviceAnalyticsClient *deviceAnalyticsClient; // @synthesize deviceAnalyticsClient=_deviceAnalyticsClient;
- (void)getAdaptiveRoamParams:(struct __CFString *)arg1 ssid:(struct __CFString *)arg2;	// IMP=0x000000010000522c
- (void)submit:(id)arg1;	// IMP=0x0000000100005094
- (void)_submit11axAsrSessionDuration:(double)arg1;	// IMP=0x0000000100004edc
- (_Bool)initDeviceAnalyticsClient;	// IMP=0x0000000100004dc8
- (void)setWiFiManager:(struct __WiFiManager *)arg1;	// IMP=0x0000000100004d34
- (void)dealloc;	// IMP=0x0000000100004ce4
- (id)init;	// IMP=0x0000000100004c4c

@end

