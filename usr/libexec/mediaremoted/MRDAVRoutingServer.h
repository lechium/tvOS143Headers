//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVOutputDeviceAuthorizationSessionDelegate-Protocol.h"
#import "MRDAVSystemEndpointControllerDelegate-Protocol.h"
#import "MRDDiagnosticCollecting-Protocol.h"
#import "MRDXPCMessageHandling-Protocol.h"

@class MRDAVHostedRoutingService, MRDAVRoutingDataSource, MRDAVSystemEndpointController, MRDAutoConnectionController, MRDCompanionConnectionController, MRDExternalDeviceHomeServer, MRDProximityController, MROSTransaction, MSVSystemDialog, NSDate, NSMutableArray, NSMutableSet, NSOperationQueue, NSString;

@interface MRDAVRoutingServer : NSObject <MRDAVSystemEndpointControllerDelegate, AVOutputDeviceAuthorizationSessionDelegate, MRDXPCMessageHandling, MRDDiagnosticCollecting>
{
    MRDAutoConnectionController *_autoConnectionController;	// 8 = 0x8
    MRDProximityController *_proximityController;	// 16 = 0x10
    NSMutableSet *_routeUIDsToIgnorePortStatusFailures;	// 24 = 0x18
    NSDate *_lastClusterConnectionFailureDate;	// 32 = 0x20
    NSMutableSet *_reconnaissanceSessions;	// 40 = 0x28
    NSMutableArray *_mostRecentlyPickedDevices;	// 48 = 0x30
    int _mostRecentStatus;	// 56 = 0x38
    _Bool _lastAirplayActiveState;	// 60 = 0x3c
    int _airplayActiveNotificationToken;	// 64 = 0x40
    MRDExternalDeviceHomeServer *_homeServer;	// 72 = 0x48
    NSOperationQueue *_workerOperationQueue;	// 80 = 0x50
    MRDCompanionConnectionController *_companionConnectionController;	// 88 = 0x58
    MRDAVRoutingDataSource *_routingDataSource;	// 96 = 0x60
    MRDAVHostedRoutingService *_hostedRoutingService;	// 104 = 0x68
    MRDAVSystemEndpointController *_systemEndpointController;	// 112 = 0x70
    MSVSystemDialog *_activePasswordDialog;	// 120 = 0x78
    MROSTransaction *_discoveryTransaction;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000001000a2418
@property(retain, nonatomic) MROSTransaction *discoveryTransaction; // @synthesize discoveryTransaction=_discoveryTransaction;
@property(retain, nonatomic) MSVSystemDialog *activePasswordDialog; // @synthesize activePasswordDialog=_activePasswordDialog;
@property(readonly, nonatomic) MRDAVSystemEndpointController *systemEndpointController; // @synthesize systemEndpointController=_systemEndpointController;
@property(readonly, nonatomic) MRDAVHostedRoutingService *hostedRoutingService; // @synthesize hostedRoutingService=_hostedRoutingService;
@property(readonly, nonatomic) MRDAVRoutingDataSource *routingDataSource; // @synthesize routingDataSource=_routingDataSource;
- (void)_predictGroupLeaderForOutputDeviceIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a20bc
- (void)_createEndpointForOutputDeviceIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a1810
- (id)_createAirPlaySecuritySettings;	// IMP=0x00000001000a16d8
- (void)_setApplicationPickedRoutes:(id)arg1 updateRoutes:(_Bool)arg2 forClient:(id)arg3;	// IMP=0x00000001000a16d4
- (id)_preferredIdentifierForMACAddress:(id)arg1 identifier:(id)arg2 name:(id)arg3;	// IMP=0x00000001000a15c4
- (void)_storePassword:(id)arg1 forOutputDevice:(id)arg2;	// IMP=0x00000001000a14c0
- (void)_storePassword:(id)arg1 forRoute:(id)arg2;	// IMP=0x00000001000a13bc
- (void)_presentPasswordDialogForRoute:(id)arg1 withOptions:(unsigned int)arg2;	// IMP=0x00000001000a10f0
- (void)_postExternalScreenDidChange;	// IMP=0x00000001000a0fc8
- (_Bool)_setPickedRoute:(id)arg1 withPassword:(id)arg2 options:(unsigned int)arg3;	// IMP=0x00000001000a0eb4
- (void)_loadMostRecentlyPicked;	// IMP=0x00000001000a0e58
- (void)_saveMostRecentlyPicked;	// IMP=0x00000001000a0e20
- (void)_clearPasswordForOutputDevice:(id)arg1;	// IMP=0x00000001000a0dd0
- (id)_savedPasswordForOutputDevice:(id)arg1;	// IMP=0x00000001000a0d94
- (id)_existingKeychainAccountForOutputDevice:(id)arg1 password:(id *)arg2;	// IMP=0x00000001000a0ba0
- (void)_handleAuthenticationFailureForRoute:(id)arg1 withOptions:(unsigned int)arg2;	// IMP=0x00000001000a0b14
- (id)_presentDialogWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001000a0958
- (void)_handleErrorStatus:(int)arg1 forRoute:(id)arg2;	// IMP=0x00000001000a04e4
- (void)_launchTVClusterSettings;	// IMP=0x00000001000a032c
- (void)_handleClusterErrorForRoute:(id)arg1;	// IMP=0x000000010009fe00
- (_Bool)_shouldIgnorePortStatusFailureForRouteWithUID:(id)arg1 previouslyCachedRouteUID:(id *)arg2;	// IMP=0x000000010009fbfc
- (void)_updateSystemRouteDiscoveryMode;	// IMP=0x000000010009f840
- (id)_passwordDialogForRouteWithName:(id)arg1 usingInputType:(long long)arg2;	// IMP=0x000000010009f5d4
- (id)_descriptionForDiscoveryMode:(unsigned int)arg1;	// IMP=0x000000010009f5bc
- (void)_unregisterNotifications;	// IMP=0x000000010009f558
- (void)_registerNotifications;	// IMP=0x000000010009f3cc
- (void)_handleAuthorizationRequest:(id)arg1;	// IMP=0x000000010009ecc8
- (void)_postRouteStatusDidChangeNotificationForRoute:(id)arg1 newStatus:(int)arg2;	// IMP=0x000000010009eb44
- (void)_failedToConnectToOutputDeviceNotification:(id)arg1;	// IMP=0x000000010009e808
- (void)_routingDataSourceRouteStatusDidChangeNotification:(id)arg1;	// IMP=0x000000010009e618
- (void)_routingDataSourceExternalScreenDidChangeNotification:(id)arg1;	// IMP=0x000000010009e60c
- (void)_routingDataSourcePickedRouteVolumeControlAvailabilityDidChangeNotification:(id)arg1;	// IMP=0x000000010009e4f0
- (void)_routingDataSourcePickableRoutesDidChangeNotification:(id)arg1;	// IMP=0x000000010009e49c
- (void)_clientInvalidatedNotification:(id)arg1;	// IMP=0x000000010009e434
- (void)postSystemEndpointDeviceChange:(id)arg1 type:(long long)arg2 originClient:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010009e0c0
- (void)systemEndpointController:(id)arg1 activeSystemEndpointDidChangeForRequest:(id)arg2 type:(long long)arg3;	// IMP=0x000000010009e010
- (void)_handleGetExternalDeviceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009dc44
- (void)_handleRemoveFromParentGroup:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009d54c
- (void)_handlePredictGroupLeader:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009d3a0
- (void)_handleGroupDevicesAndSendCommand:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009ccb0
- (void)_handleCreateDirectEndpointForDevices:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009ca2c
- (void)_handleCreateEndpointWithDevices:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009c9fc
- (void)_handleCreateGroupWithDevices:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009c7f0
- (void)_handleGetVirtualOutputDevicesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009c538
- (void)_handleAddVirtualOutputDeviceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009c248
- (void)_handleResetOutputContextMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009c03c
- (void)_handleSetNearbyDevice:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009bef0
- (void)_handleGetAirplayStatus:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009bd74
- (void)_handlePresentRouteAuthorizationStatusMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009bc98
- (void)_handlePromptForRouteAuthorizationMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009b9e0
- (void)_handleGetHostedEndpointForDeviceUIDMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009b830
- (void)_handleGetActiveSystemEndpointUIDsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009b6d4
- (void)_handleUpdateActiveSystemEndpointUIDMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009b500
- (void)_handleGetRecentAVOutputDeviceUIDsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009b484
- (void)_handleSetRecentAVOutputDeviceUIDMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009b364
- (void)_handleGetHostedRoutingXPCEndpointMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009b1c4
- (void)_handleGetAirPlaySecuritySettingsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009b0c0
- (void)_handleSetApplicationPickedRoutes:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009ae80
- (void)_handleUnpickAirPlayRoutesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009adcc
- (void)_handleClearAllAVRoutePasswordsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009aa60
- (void)_handleSetSavedAVRoutePasswordMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009a9c0
- (void)_handleGetSavedAVRoutePasswordMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009a924
- (void)_handleGetExternalScreenTypeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009a8cc
- (void)_handleSetPickedRouteHasVolumeControlMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009a77c
- (void)_handleGetPickedRouteHasVolumeControlMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010009a65c
- (void)_handleSetPickedRouteMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100099f54
- (void)_handleGetPickableRoutesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100099e64
- (void)_handleSetRouteDiscoveryModeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100099cdc
- (_Bool)outputDeviceAuthorizationSession:(id)arg1 shouldRetryAuthorizationRequest:(id)arg2 reason:(id)arg3;	// IMP=0x0000000100099ccc
- (void)outputDeviceAuthorizationSession:(id)arg1 didProvideAuthorizationRequest:(id)arg2;	// IMP=0x00000001000993fc
- (void)collectDiagnostic:(id)arg1;	// IMP=0x0000000100099158
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00000001000990bc
- (void)restoreClientState:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100098f60
- (id)clientsWithApplicationPickedRoutes;	// IMP=0x0000000100098d70
- (id)clientsForApplicationPickedRoute:(id)arg1;	// IMP=0x0000000100098aa8
- (id)applicationPickedRoutes;	// IMP=0x00000001000988e4
- (_Bool)routeIsActiveWithUID:(id)arg1;	// IMP=0x000000010009884c
- (void)pickCachedRouteWithUID:(id)arg1;	// IMP=0x00000001000984b4
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2 options:(unsigned int)arg3;	// IMP=0x0000000100098408
- (id)pickableRoutesForCategory:(id)arg1;	// IMP=0x0000000100098264
- (void)dealloc;	// IMP=0x00000001000981d8
- (id)initWithRoutingDataSource:(id)arg1 hostedRoutingService:(id)arg2 systemEndpointController:(id)arg3 autoConnectionController:(id)arg4 proximityController:(id)arg5 homeServer:(id)arg6 avOutputDeviceAuthorizationSession:(id)arg7;	// IMP=0x0000000100097af4
- (id)initWithRoutingDataSource:(id)arg1;	// IMP=0x000000010009796c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
