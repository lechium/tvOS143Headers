//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDXPCAppleIDAuthInterface-Protocol.h"
#import "SDXPCClientInterface-Protocol.h"
#import "SDXPCCoordinatedAlertsInterface-Protocol.h"
#import "SDXPCDeviceDiscoveryInterface-Protocol.h"
#import "SDXPCDiagnosticsInterface-Protocol.h"
#import "SDXPCNFCTagReaderInterface-Protocol.h"
#import "SDXPCProximityClientInterface-Protocol.h"
#import "SDXPCRemoteAutoFillSessionInterface-Protocol.h"
#import "SDXPCRemoteInteractionSessionInterface-Protocol.h"
#import "SDXPCServiceInterface-Protocol.h"
#import "SDXPCSessionInterface-Protocol.h"
#import "SDXPCUserNotificationInterface-Protocol.h"

@class NSMutableSet, NSString, NSXPCConnection, SDXPCServer, SFCoordinatedAlertRequest, SFDeviceDiscovery, SFProximityClient, SFRemoteAutoFillSessionHelper, SFRemoteInteractionSession, SFService, SFSession, SFUserAlert;

__attribute__((visibility("hidden")))
@interface SDXPCConnection : NSObject <SDXPCAppleIDAuthInterface, SDXPCClientInterface, SDXPCCoordinatedAlertsInterface, SDXPCDeviceDiscoveryInterface, SDXPCDiagnosticsInterface, SDXPCNFCTagReaderInterface, SDXPCProximityClientInterface, SDXPCRemoteAutoFillSessionInterface, SDXPCRemoteInteractionSessionInterface, SDXPCServiceInterface, SDXPCSessionInterface, SDXPCUserNotificationInterface>
{
    SFRemoteAutoFillSessionHelper *_afsHelper;	// 8 = 0x8
    NSMutableSet *_assertions;	// 16 = 0x10
    SFCoordinatedAlertRequest *_caRequest;	// 24 = 0x18
    SFDeviceDiscovery *_ddRequest;	// 32 = 0x20
    _Bool _diagnosticBLEModeStarted;	// 40 = 0x28
    _Bool _entitledBluetoothUserInteraction;	// 41 = 0x29
    _Bool _entitledClient;	// 42 = 0x2a
    _Bool _entitledCoordinatedAlerts;	// 43 = 0x2b
    _Bool _entitledDeviceDiscovery;	// 44 = 0x2c
    _Bool _entitledDiagnostics;	// 45 = 0x2d
    _Bool _entitledProximityClient;	// 46 = 0x2e
    _Bool _entitledRemoteInteractionSession;	// 47 = 0x2f
    _Bool _entitledService;	// 48 = 0x30
    _Bool _entitledSession;	// 49 = 0x31
    SFUserAlert *_notification;	// 56 = 0x38
    NSString *_preventExitForLocaleReason;	// 64 = 0x40
    SFProximityClient *_proxClient;	// 72 = 0x48
    SFRemoteInteractionSession *_riSession;	// 80 = 0x50
    SFService *_service;	// 88 = 0x58
    SFSession *_session;	// 96 = 0x60
    SDXPCServer *_server;	// 104 = 0x68
    _Bool _unlockTestClientStarted;	// 112 = 0x70
    NSXPCConnection *_xpcCnx;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000100124480
- (void)userNotificationPresent:(id)arg1;	// IMP=0x0000000100124408
- (void)sessionSendResponse:(id)arg1;	// IMP=0x00000001001242d8
- (void)sessionSendRequest:(id)arg1;	// IMP=0x00000001001241a8
- (void)sessionSendFrameType:(unsigned char)arg1 data:(id)arg2;	// IMP=0x0000000100123fd8
- (void)sessionSendEvent:(id)arg1;	// IMP=0x0000000100123ea8
- (void)sessionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010012377c
- (void)serviceSendResponse:(id)arg1;	// IMP=0x000000010012365c
- (void)serviceSendRequest:(id)arg1;	// IMP=0x000000010012353c
- (void)serviceSendFrameType:(unsigned char)arg1 data:(id)arg2 peer:(id)arg3;	// IMP=0x00000001001233a0
- (void)serviceSendEvent:(id)arg1;	// IMP=0x0000000100123280
- (void)servicePeerDisconnected:(id)arg1 error:(id)arg2;	// IMP=0x000000010012314c
- (void)serviceUpdate:(id)arg1;	// IMP=0x0000000100123020
- (void)serviceActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001225e4
- (void)remoteInteractionSessionSendPayload:(id)arg1;	// IMP=0x00000001001224cc
- (void)remoteInteractionSessionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100121f74
- (void)proximityClientRequestScannerTimerReset;	// IMP=0x0000000100121d58
- (void)proximityClientUpdateContent:(id)arg1 forDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100121b40
- (void)proximityClientStopSuppressingDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100121944
- (void)proximityClientSuppressDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100121748
- (void)proximityClientProvideContent:(id)arg1 forDevice:(id)arg2 force:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100121528
- (void)proximityClientDismissContentForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010012132c
- (void)proximityClientUpdate:(id)arg1;	// IMP=0x00000001001211bc
- (void)proximityClientActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010012081c
- (void)nfcTagReaderUIActivateWithEndpoint:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010012056c
- (void)diagnosticUnlockTestServer;	// IMP=0x000000010012048c
- (void)diagnosticUnlockTestClientWithDevice:(id)arg1;	// IMP=0x00000001001203a0
- (void)diagnosticShow:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011fbfc
- (void)diagnosticMockStop:(CDUnknownBlockType)arg1;	// IMP=0x000000010011fb54
- (void)diagnosticMockStart:(CDUnknownBlockType)arg1;	// IMP=0x000000010011faac
- (void)diagnosticMock:(id)arg1 device:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010011f940
- (void)diagnosticLogControl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011f800
- (void)diagnosticControl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011ed64
- (void)diagnosticBLEModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010011eb40
- (void)bluetoothUserInteraction;	// IMP=0x000000010011ea94
- (void)deviceDiscoveryFastScanCancel:(id)arg1;	// IMP=0x000000010011ea3c
- (void)deviceDiscoveryFastScanTrigger:(id)arg1;	// IMP=0x000000010011e9e4
- (void)deviceDiscoveryUpdate:(id)arg1;	// IMP=0x000000010011e580
- (void)deviceDiscoveryActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011e030
- (void)coordinatedAlertsRequestFinish;	// IMP=0x000000010011df78
- (void)coordinatedAlertsRequestStart:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011dc3c
- (void)startProxCardTransactionWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011daec
- (void)wifiPasswordSharingAvailabilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010011d888
- (void)triggerProximityAutoFillDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011d7c4
- (void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011d5ec
- (void)testContinuityKeyboardBegin:(_Bool)arg1;	// IMP=0x000000010011d594
- (void)statusInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010011d51c
- (void)showDevicePickerWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011d430
- (void)setupDevice:(id)arg1 homeIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010011d320
- (void)setAudioRoutingScore:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011d1fc
- (void)retriggerProximitySetup:(CDUnknownBlockType)arg1;	// IMP=0x000000010011d048
- (void)retriggerProximityPairing:(CDUnknownBlockType)arg1;	// IMP=0x000000010011cea4
- (void)requestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011ce2c
- (void)repairDevice:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010011cd30
- (void)reenableProxCardType:(unsigned char)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011c968
- (void)preventExitForLocaleReason:(id)arg1;	// IMP=0x000000010011c890
- (void)personInfoWithEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011c818
- (void)preheatXPCConnection;	// IMP=0x000000010011c7b8
- (void)openSetupURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011c5c8
- (void)clearXPCHelperImageCacheWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010011c568
- (void)_getPeopleSuggestions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011b8a4
- (void)_getPeopleInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011b190
- (void)getPeopleSuggestions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011af9c
- (void)getDeviceAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011aed4
- (void)findContact:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011a3c4
- (void)myAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010011a204
- (void)displayStringForContactIdentifier:(id)arg1 deviceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010011a098
- (void)displayNameForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100119f30
- (void)contactIDForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100119dc8
- (void)appleIDInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100119a78
- (void)accountForAppleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100119894
- (void)activityStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001196dc
- (void)_invalidateAssertions;	// IMP=0x0000000100119390
- (void)activateAssertionWithIdentifier:(id)arg1;	// IMP=0x0000000100119028
- (void)autoFillHelperUserNotificationDidDismiss:(id)arg1;	// IMP=0x0000000100118efc
- (void)autoFillHelperUserNotificationDidActivate:(id)arg1;	// IMP=0x0000000100118dd0
- (void)autoFillHelperTryPIN:(id)arg1;	// IMP=0x0000000100118ca4
- (void)autoFillHelperDidPickUsername:(id)arg1 password:(id)arg2 error:(id)arg3;	// IMP=0x0000000100118b38
- (void)autoFillHelperActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001186ac
- (int)_entitledService:(id)arg1 state:(_Bool *)arg2;	// IMP=0x0000000100118580
- (int)_entitled:(id)arg1 state:(_Bool *)arg2 label:(id)arg3;	// IMP=0x0000000100118454
- (void)connectionInvalidated;	// IMP=0x0000000100118134
- (id)initWithServer:(id)arg1 xpcConnection:(id)arg2;	// IMP=0x0000000100118090

@end

