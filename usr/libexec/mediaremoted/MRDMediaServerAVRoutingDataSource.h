//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MRDAVRoutingDataSource.h"

@class MRDOutputDeviceRoutingDataSource;

@interface MRDMediaServerAVRoutingDataSource : MRDAVRoutingDataSource
{
    MRDOutputDeviceRoutingDataSource *_oddsShimDataSource;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010004d8e0
- (id)_oddsShimDataSource;	// IMP=0x000000010004d894
- (void)_notifyDelegateRoutesDidChange;	// IMP=0x000000010004d838
- (id)_descriptionForDiscoveryMode:(unsigned int)arg1;	// IMP=0x000000010004d820
- (void)_unregisterAVSystemControllerNotifications;	// IMP=0x000000010004d69c
- (void)_registerAVSystemControllerNotifications;	// IMP=0x000000010004d4a4
- (id)_mediaServerController;	// IMP=0x000000010004d480
- (void)_avSessionMediaServicesResetNotification:(id)arg1;	// IMP=0x000000010004d350
- (void)_portStatusDidChangeNotification:(id)arg1;	// IMP=0x000000010004cf34
- (void)_externalScreenDidChangeNotification:(id)arg1;	// IMP=0x000000010004ced8
- (void)_postCurrentRouteHasVolumeControlDidChangeNotification:(_Bool)arg1;	// IMP=0x000000010004cdb0
- (void)_currentRouteHasVolumeControlDidChangeNotification:(id)arg1;	// IMP=0x000000010004ccf8
- (void)_pickableRoutesDidChangeNotification:(id)arg1;	// IMP=0x000000010004ccec
- (_Bool)unpickAirPlayRoutes;	// IMP=0x000000010004cbe8
- (void)userCancelledPickingRoute:(id)arg1;	// IMP=0x000000010004cb48
- (_Bool)resetPickedSystemRouteForSource:(unsigned int)arg1;	// IMP=0x000000010004cb3c
- (_Bool)resetPickedRouteForSource:(unsigned int)arg1;	// IMP=0x000000010004c948
- (_Bool)setPickedSystemRoute:(id)arg1 withPassword:(id)arg2 forSource:(unsigned int)arg3;	// IMP=0x000000010004c790
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2 forSource:(unsigned int)arg3;	// IMP=0x000000010004c72c
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2;	// IMP=0x000000010004c6cc
- (id)pickableRoutesForCategory:(id)arg1 source:(unsigned int)arg2;	// IMP=0x000000010004c374
- (id)pickableRoutesForCategory:(id)arg1;	// IMP=0x000000010004c364
- (id)pickedRoutesForCategory:(id)arg1 source:(unsigned int)arg2;	// IMP=0x000000010004c1e0
- (id)pickedRouteForCategory:(id)arg1 source:(unsigned int)arg2;	// IMP=0x000000010004c18c
- (id)pickedRouteForCategory:(id)arg1;	// IMP=0x000000010004c17c
- (id)pickedRoutes;	// IMP=0x000000010004c160
- (id)pickedRoute;	// IMP=0x000000010004c10c
- (_Bool)currentRouteSupportsVolumeControl;	// IMP=0x000000010004c0c0
- (unsigned int)externalScreenType;	// IMP=0x000000010004bf98
- (void)setDiscoveryMode:(unsigned int)arg1;	// IMP=0x000000010004bedc
- (void)dealloc;	// IMP=0x000000010004be58
- (id)init;	// IMP=0x000000010004be00

@end

