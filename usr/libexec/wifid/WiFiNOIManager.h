//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NWNetworkOfInterestManagerDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSTimer, NWNetworkOfInterestManager;
@protocol OS_dispatch_queue;

@interface WiFiNOIManager : NSObject <NWNetworkOfInterestManagerDelegate>
{
    NWNetworkOfInterestManager *_noiManager;	// 8 = 0x8
    NSMutableSet *_trackedHomeNetworks;	// 16 = 0x10
    NSMutableSet *_trackedWorkNetworks;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_managerQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    _Bool _isTracking;	// 48 = 0x30
    int _deviceClass;	// 52 = 0x34
    NSTimer *_homeTransitionTimer;	// 56 = 0x38
    struct __WiFiDeviceManager *_deviceManager;	// 64 = 0x40
    NSMutableArray *_sortedTopHomeNetworks;	// 72 = 0x48
    NSMutableArray *_sortedTopWorkNetworks;	// 80 = 0x50
}

+ (id)sharedWiFiNOIManagerWithQueue:(id)arg1;	// IMP=0x0000000100109d34
- (void)didStopTrackingAllNOIs:(id)arg1;	// IMP=0x000000010010b2a0
- (void)didStopTrackingNOI:(id)arg1;	// IMP=0x000000010010b220
- (void)didStartTrackingNOI:(id)arg1;	// IMP=0x000000010010b180
- (id)getHomeNetworkNextTransitionDate:(id)arg1;	// IMP=0x000000010010b0e8
- (id)copyHomeNetworkTransitionDate;	// IMP=0x000000010010af5c
- (void)disarmHomeNetworkTransitionTimer;	// IMP=0x000000010010aec0
- (void)armHomeNetworkTransitionTimer:(struct __WiFiDeviceManager *)arg1;	// IMP=0x000000010010accc
- (void)attemptHomeNetworkTransition:(id)arg1;	// IMP=0x000000010010abfc
- (void)asyncScopeWorkNetworks;	// IMP=0x000000010010a8d8
- (void)asyncScopeHomeNetworks;	// IMP=0x000000010010a5b4
- (_Bool)setNetworkOfInterest:(struct __WiFiNetwork *)arg1;	// IMP=0x000000010010a25c
- (void)asyncTrackNetworksOfInterest:(_Bool)arg1;	// IMP=0x000000010010a108
- (void)dealloc;	// IMP=0x000000010010a080
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000100109dc8

@end

