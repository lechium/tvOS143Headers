//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICCloudServerAvailabilityServiceProtocol-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSString;

@interface ICDNetworkAvailabilityService : NSObject <ICCloudServerAvailabilityServiceProtocol, NSXPCListenerDelegate>
{
}

- (void)_isCellularDataRestrictedDidChangeNotification:(id)arg1;	// IMP=0x000000010002f2a4
- (void)_canShowCloudTracksDidChangeNotification:(id)arg1;	// IMP=0x000000010002f278
- (void)_canShowCloudDownloadButtonsDidChangeNotification:(id)arg1;	// IMP=0x000000010002f24c
- (void)_setupNotifications;	// IMP=0x000000010002f144
- (void)canShowCloudVideoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002f0c4
- (void)canShowCloudMusicWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002f044
- (void)canShowCloudDownloadButtonsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002efc4
- (void)shouldProhibitStoreAppsActionForCurrentNetworkConditionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002ef44
- (void)isCellularDataRestrictedForStoreAppsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002eec4
- (void)shouldProhibitVideosActionForCurrentNetworkConditionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002ee44
- (void)isCellularDataRestrictedForVideosWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002edc4
- (void)shouldProhibitMusicActionForCurrentNetworkConditionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002ed44
- (void)isCellularDataRestrictedForMusicWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002ecc4
- (void)hasProperNetworkConditionsToShowCloudMediaWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002ec44
- (void)hasProperNetworkConditionsToPlayMediaWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002ebc4
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010002e9fc
- (void)dealloc;	// IMP=0x000000010002e97c
- (id)init;	// IMP=0x000000010002e924

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

