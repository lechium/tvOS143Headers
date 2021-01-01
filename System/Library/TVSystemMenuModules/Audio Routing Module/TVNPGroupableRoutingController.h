//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMMediaDestinationControllerDelegate-Protocol.h"
#import "MPAVRoutingControllerDelegate-Protocol.h"
#import "TVNPRoutingController-Protocol.h"

@class HMMediaDestinationController, MPAVEndpointRoutingDataSource, MPAVOutputDeviceRoutingDataSource, MPAVRoutingController, NSArray, NSMutableDictionary, NSString, TVCSHomeManager, TVNPRoutingDestination;
@protocol OS_dispatch_queue;

@interface TVNPGroupableRoutingController : NSObject <MPAVRoutingControllerDelegate, HMMediaDestinationControllerDelegate, TVNPRoutingController>
{
    _Bool _allowsDestinationSelection;	// 8 = 0x8
    _Bool _allowsRetargeting;	// 9 = 0x9
    _Bool _needsAvailableRoutesUpdate;	// 10 = 0xa
    _Bool _multipleSelectionEnabled;	// 11 = 0xb
    NSArray *_availableDestinations;	// 16 = 0x10
    NSArray *_availableRoutes;	// 24 = 0x18
    NSArray *_availableRoutesAndGroups;	// 32 = 0x20
    TVNPRoutingDestination *_currentDestination;	// 40 = 0x28
    NSArray *_currentRoutes;	// 48 = 0x30
    unsigned long long _discoveryMode;	// 56 = 0x38
    long long _numberOfExternalRoutesInLocalDestination;	// 64 = 0x40
    HMMediaDestinationController *_homeDestinationController;	// 72 = 0x48
    NSArray *_eligibleOdeonRoutes;	// 80 = 0x50
    NSString *_outputContextUID;	// 88 = 0x58
    NSString *_systemOutputRouteName;	// 96 = 0x60
    MPAVEndpointRoutingDataSource *_endpointRoutingDataSource;	// 104 = 0x68
    MPAVOutputDeviceRoutingDataSource *_outputDeviceRoutingDataSource;	// 112 = 0x70
    MPAVRoutingController *_endpointRoutingController;	// 120 = 0x78
    MPAVRoutingController *_outputDeviceRoutingController;	// 128 = 0x80
    TVCSHomeManager *_homeManager;	// 136 = 0x88
    NSMutableDictionary *_mediaDestinationIdentifiersToRoutes;	// 144 = 0x90
    NSString *_localRouteIdentifier;	// 152 = 0x98
    NSString *_placeholderRouteIdentifier;	// 160 = 0xa0
    NSString *_pendingSelectedMediaDestination;	// 168 = 0xa8
    NSString *_selectedMediaDestinationIdentifier;	// 176 = 0xb0
    NSMutableDictionary *_outputDeviceIdentifiersToRoutes;	// 184 = 0xb8
    NSMutableDictionary *_endpointIdentifiersToDestinations;	// 192 = 0xc0
    NSMutableDictionary *_groupIdentifiersToGroups;	// 200 = 0xc8
    NSArray *_allOutputDevices;	// 208 = 0xd0
    NSArray *_allEndpoints;	// 216 = 0xd8
    NSString *_currentEndpointRouteUID;	// 224 = 0xe0
    NSObject<OS_dispatch_queue> *_updateQueue;	// 232 = 0xe8
    unsigned long long _numberOfUpdates;	// 240 = 0xf0
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0000000000002ad0
- (void).cxx_destruct;	// IMP=0x0000000000007e90
@property(readonly, nonatomic) _Bool multipleSelectionEnabled; // @synthesize multipleSelectionEnabled=_multipleSelectionEnabled;
@property(readonly, nonatomic) _Bool needsAvailableRoutesUpdate; // @synthesize needsAvailableRoutesUpdate=_needsAvailableRoutesUpdate;
@property(readonly, nonatomic) unsigned long long numberOfUpdates; // @synthesize numberOfUpdates=_numberOfUpdates;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(readonly, copy, nonatomic) NSString *currentEndpointRouteUID; // @synthesize currentEndpointRouteUID=_currentEndpointRouteUID;
@property(readonly, copy, nonatomic) NSArray *allEndpoints; // @synthesize allEndpoints=_allEndpoints;
@property(readonly, copy, nonatomic) NSArray *allOutputDevices; // @synthesize allOutputDevices=_allOutputDevices;
@property(readonly, copy, nonatomic) NSMutableDictionary *groupIdentifiersToGroups; // @synthesize groupIdentifiersToGroups=_groupIdentifiersToGroups;
@property(readonly, copy, nonatomic) NSMutableDictionary *endpointIdentifiersToDestinations; // @synthesize endpointIdentifiersToDestinations=_endpointIdentifiersToDestinations;
@property(readonly, copy, nonatomic) NSMutableDictionary *outputDeviceIdentifiersToRoutes; // @synthesize outputDeviceIdentifiersToRoutes=_outputDeviceIdentifiersToRoutes;
@property(retain, nonatomic) NSString *selectedMediaDestinationIdentifier; // @synthesize selectedMediaDestinationIdentifier=_selectedMediaDestinationIdentifier;
@property(retain, nonatomic) NSString *pendingSelectedMediaDestination; // @synthesize pendingSelectedMediaDestination=_pendingSelectedMediaDestination;
@property(readonly, nonatomic) NSString *placeholderRouteIdentifier; // @synthesize placeholderRouteIdentifier=_placeholderRouteIdentifier;
@property(readonly, nonatomic) NSString *localRouteIdentifier; // @synthesize localRouteIdentifier=_localRouteIdentifier;
@property(readonly, copy, nonatomic) NSMutableDictionary *mediaDestinationIdentifiersToRoutes; // @synthesize mediaDestinationIdentifiersToRoutes=_mediaDestinationIdentifiersToRoutes;
@property(readonly, nonatomic) TVCSHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) MPAVRoutingController *outputDeviceRoutingController; // @synthesize outputDeviceRoutingController=_outputDeviceRoutingController;
@property(readonly, nonatomic) MPAVRoutingController *endpointRoutingController; // @synthesize endpointRoutingController=_endpointRoutingController;
@property(readonly, nonatomic) MPAVOutputDeviceRoutingDataSource *outputDeviceRoutingDataSource; // @synthesize outputDeviceRoutingDataSource=_outputDeviceRoutingDataSource;
@property(readonly, nonatomic) MPAVEndpointRoutingDataSource *endpointRoutingDataSource; // @synthesize endpointRoutingDataSource=_endpointRoutingDataSource;
@property(readonly, copy, nonatomic) NSString *systemOutputRouteName; // @synthesize systemOutputRouteName=_systemOutputRouteName;
@property(nonatomic) _Bool allowsRetargeting; // @synthesize allowsRetargeting=_allowsRetargeting;
@property(copy, nonatomic) NSString *outputContextUID; // @synthesize outputContextUID=_outputContextUID;
@property(readonly, copy, nonatomic) NSArray *eligibleOdeonRoutes; // @synthesize eligibleOdeonRoutes=_eligibleOdeonRoutes;
@property(readonly, nonatomic) HMMediaDestinationController *homeDestinationController; // @synthesize homeDestinationController=_homeDestinationController;
@property(readonly, nonatomic) long long numberOfExternalRoutesInLocalDestination; // @synthesize numberOfExternalRoutesInLocalDestination=_numberOfExternalRoutesInLocalDestination;
@property(nonatomic) unsigned long long discoveryMode; // @synthesize discoveryMode=_discoveryMode;
@property(readonly, copy, nonatomic) NSArray *currentRoutes; // @synthesize currentRoutes=_currentRoutes;
@property(retain, nonatomic) TVNPRoutingDestination *currentDestination; // @synthesize currentDestination=_currentDestination;
@property(readonly, copy, nonatomic) NSArray *availableRoutesAndGroups; // @synthesize availableRoutesAndGroups=_availableRoutesAndGroups;
@property(readonly, copy, nonatomic) NSArray *availableRoutes; // @synthesize availableRoutes=_availableRoutes;
@property(readonly, copy, nonatomic) NSArray *availableDestinations; // @synthesize availableDestinations=_availableDestinations;
@property(readonly, nonatomic) _Bool allowsDestinationSelection; // @synthesize allowsDestinationSelection=_allowsDestinationSelection;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000007a98
- (void)_updateWithAvailableMediaDestinations:(id)arg1;	// IMP=0x0000000000007224
- (void)_updateWithAvailableEndpoints:(id)arg1 outputDevices:(id)arg2;	// IMP=0x00000000000051e4
- (id)_endpointRoutesWithForcedLocalRoute:(id)arg1;	// IMP=0x0000000000004f78
- (void)_updateAvailableRoutes;	// IMP=0x00000000000048b8
- (void)_setNeedsDisplayedRoutesUpdate;	// IMP=0x0000000000004750
- (void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2;	// IMP=0x0000000000004744
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;	// IMP=0x0000000000004738
- (void)targetDestination:(id)arg1;	// IMP=0x0000000000004620
- (void)selectOdeonDestination:(id)arg1;	// IMP=0x00000000000041dc
- (void)unpickRoutes:(id)arg1 forDestination:(id)arg2;	// IMP=0x0000000000003e90
- (void)pickRoutes:(id)arg1 forDestination:(id)arg2;	// IMP=0x0000000000003524
- (void)_updateAllowsDestinationSelection;	// IMP=0x0000000000003490
- (void)dealloc;	// IMP=0x0000000000003180
- (id)initWithOutputContextUID:(id)arg1 allowsRetargeting:(_Bool)arg2 initalFetchCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002b74
- (id)initWithOutputContextUID:(id)arg1 allowsRetargeting:(_Bool)arg2;	// IMP=0x0000000000002b64
- (id)init;	// IMP=0x0000000000002b50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
