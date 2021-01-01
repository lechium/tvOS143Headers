//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SFRemoteHotspotSessionDelegate-Protocol.h"

@class NSSet, NSString, SFRemoteHotspotSession;
@protocol OS_dispatch_queue;

@interface WiFiHotspotInterface : NSObject <SFRemoteHotspotSessionDelegate>
{
    _Bool _scanning;	// 8 = 0x8
    NSSet *_networks;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_internalQueue;	// 24 = 0x18
    SFRemoteHotspotSession *_hotspotSession;	// 32 = 0x20
    void *_callbackContext;	// 40 = 0x28
    CDUnknownBlockType _hotspotUpdateNetworkcallback;	// 48 = 0x30
}

@property(copy, nonatomic) CDUnknownBlockType hotspotUpdateNetworkcallback; // @synthesize hotspotUpdateNetworkcallback=_hotspotUpdateNetworkcallback;
@property(nonatomic) void *callbackContext; // @synthesize callbackContext=_callbackContext;
@property(retain) SFRemoteHotspotSession *hotspotSession; // @synthesize hotspotSession=_hotspotSession;
@property(nonatomic, getter=isScanning) _Bool scanning; // @synthesize scanning=_scanning;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain) NSSet *networks; // @synthesize networks=_networks;
- (void)dealloc;	// IMP=0x00000001001206dc
- (void)session:(id)arg1 updatedFoundDevices:(id)arg2;	// IMP=0x0000000100120638
- (void)registerHotspotInterfaceUpdateNetworkCallback:(CDUnknownBlockType)arg1 withCallbackContext:(void *)arg2;	// IMP=0x0000000100120598
- (unsigned char)isHotspotDeviceSupportADHS:(id)arg1;	// IMP=0x0000000100120304
- (unsigned char)isFamilyHotspot:(id)arg1;	// IMP=0x00000001001202dc
- (unsigned char)isEqualHotspotDevicesName:(id)arg1 compareTo:(id)arg2;	// IMP=0x00000001001202a0
- (unsigned char)isEqualHotspotDevices:(id)arg1 compareTo:(id)arg2;	// IMP=0x00000001001201f4
- (id)getHotspotDeviceIdentifier:(id)arg1;	// IMP=0x00000001001201e4
- (id)getHotspotDeviceName:(id)arg1;	// IMP=0x000000010012016c
- (void)_stopBrowsingRemoveCache:(_Bool)arg1;	// IMP=0x000000010012004c
- (void)pauseBrowsing;	// IMP=0x000000010012003c
- (void)stopBrowsing;	// IMP=0x000000010012002c
- (void)startBrowsing;	// IMP=0x000000010011ff3c
- (id)newHotspot:(id)arg1 error:(out id *)arg2;	// IMP=0x000000010011fab4
- (id)getSortedHotspotDevicesByAutoPreferences;	// IMP=0x000000010011f7e0
- (void)updateNetworksWithHotspots:(id)arg1;	// IMP=0x000000010011f580
- (id)init;	// IMP=0x000000010011f4a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

