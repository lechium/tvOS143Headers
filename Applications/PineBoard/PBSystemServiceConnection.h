//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSystemServiceInterface-Protocol.h"

@class NSString, NSXPCConnection, PBAirPlayService, PBAppInfoService, PBBulletinService, PBDisplayManagerService, PBOSUpdateService, PBOverlayLayoutService, PBPictureInPictureService, PBRestrictionService, PBUserPresentationService, PBUserProfileService, PBVideoSubscriberAccountService;
@protocol PBSystemServiceNowPlayingDelegate;

@interface PBSystemServiceConnection : NSObject <PBSystemServiceInterface>
{
    PBAirPlayService *_airPlayService;	// 8 = 0x8
    PBAppInfoService *_appInfoService;	// 16 = 0x10
    PBBulletinService *_bulletinService;	// 24 = 0x18
    PBOSUpdateService *_osUpdateService;	// 32 = 0x20
    PBRestrictionService *_restrictionService;	// 40 = 0x28
    PBUserPresentationService *_userPresentationService;	// 48 = 0x30
    PBVideoSubscriberAccountService *_videoSubscriberAccountService;	// 56 = 0x38
    PBDisplayManagerService *_displayManagerService;	// 64 = 0x40
    PBPictureInPictureService *_pictureInPictureService;	// 72 = 0x48
    PBOverlayLayoutService *_overlayLayoutService;	// 80 = 0x50
    PBUserProfileService *_userProfileService;	// 88 = 0x58
    NSXPCConnection *_remoteConnection;	// 96 = 0x60
    _Bool _hiliteModeActive;	// 104 = 0x68
    NSString *_clientBundleIdentifier;	// 112 = 0x70
    id <PBSystemServiceNowPlayingDelegate> _nowPlayingPresentationDelegate;	// 120 = 0x78
}

+ (id)systemServiceConnectionForProcessIdentifier:(int)arg1;	// IMP=0x00000001001e3230
+ (void)_registerConnection:(id)arg1;	// IMP=0x00000001001e2fb4
+ (id)_activeConnectionsByProcessIdentifier;	// IMP=0x00000001001e2ecc
- (void).cxx_destruct;	// IMP=0x00000001001f3618
@property(nonatomic) _Bool hiliteModeActive; // @synthesize hiliteModeActive=_hiliteModeActive;
@property(retain, nonatomic) id <PBSystemServiceNowPlayingDelegate> nowPlayingPresentationDelegate; // @synthesize nowPlayingPresentationDelegate=_nowPlayingPresentationDelegate;
@property(readonly, copy, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(readonly, nonatomic) NSXPCConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (id)_clientBundleIdentifierFromConnection;	// IMP=0x00000001001f3428
- (_Bool)sendMessagePresentNowPlayingUI;	// IMP=0x00000001001f3398
- (void)defaultKioskAppPurgeTopShelfContentForApplicationIdentifiers:(id)arg1;	// IMP=0x00000001001f32d4
- (void)listen;	// IMP=0x00000001001f32c0
- (void)getUserProfileServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f3184
- (void)getOverlayLayoutServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f3048
- (void)getPictureInPictureServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f2f0c
- (void)getDisplayManagerServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f2dd0
- (void)getVideoSubscriberAccountServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f2a98
- (void)getUserPresentationServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f2760
- (void)getMediaRemoteServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f24a8
- (void)getRestrictionServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f237c
- (void)getAirPlayServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f2044
- (void)getOSUpdateServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f1d0c
- (void)getBulletinServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f19d4
- (void)getAppInfoServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f157c
- (void)endpointForProviderType:(id)arg1 withIdentifier:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f1484
- (void)registerServiceProviderEndpoint:(id)arg1 forProviderType:(id)arg2;	// IMP=0x00000001001f137c
- (void)getStoreFrontCountryCodeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f1294
- (void)showVolumeHUDWithImageName:(id)arg1 level:(id)arg2;	// IMP=0x00000001001f0f30
- (void)showVolumeHUDForRouteType:(long long)arg1 withLevel:(id)arg2;	// IMP=0x00000001001f0c10
- (void)setShouldSuppressSystemVolumeHUD:(_Bool)arg1;	// IMP=0x00000001001f08d4
- (void)setWantsVolumeButtonEvents:(_Bool)arg1;	// IMP=0x00000001001f0598
- (void)setWantsPlayPauseButtonEvents:(_Bool)arg1;	// IMP=0x00000001001f025c
- (void)pairAppleRemote:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001eff18
- (void)fetchPairedAppleRemoteStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001efc38
- (void)fetchEnforceProvisioningOnSystemAppsEnabledWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ef9cc
- (void)fetchApplicationIdentifiersByBundleIdentifierMappingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ef754
- (void)fetchDisabledAdamIDsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ef464
- (void)fetchProvisionAppIdentifiersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ef1a4
- (void)launchKioskApp;	// IMP=0x00000001001eec3c
- (void)stopSiriListening;	// IMP=0x00000001001ee810
- (void)startSiriListening;	// IMP=0x00000001001ee3e4
- (void)activateSiri;	// IMP=0x00000001001edef0
- (void)setMinimumBackgroundFetchInterval:(double)arg1;	// IMP=0x00000001001ede48
- (void)fetchUserPreferenceForFirmwareUpdatesForAccessoryID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001edab0
- (void)presentAirDropPromptForDiagnosticFileWithOptions:(id)arg1;	// IMP=0x00000001001ed828
- (void)handleIntent:(id)arg1;	// IMP=0x00000001001ecf88
- (void)setControlCenterFullScreenOverlayActive:(_Bool)arg1;	// IMP=0x00000001001ecce8
- (void)takeScreenshotWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001eca08
- (void)setKioskAppBundleIdentifier:(id)arg1;	// IMP=0x00000001001ec5f0
- (void)kioskAppBundleIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ec2d0
- (void)setSystemAppearance:(long long)arg1;	// IMP=0x00000001001ebf28
- (void)systemAppearanceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ebb08
- (void)sendEventData:(id)arg1;	// IMP=0x00000001001eb694
- (void)sendMenuButtonEvent;	// IMP=0x00000001001eb284
- (void)performScreenActionWithName:(id)arg1 forItemIdentifier:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001001ea958
- (void)setNextAssistantRecognitionStrings:(id)arg1;	// IMP=0x00000001001ea67c
- (void)setNextVoiceRecognitionAudioInputPaths:(id)arg1;	// IMP=0x00000001001ea3a0
- (void)topActiveOrActivatingApplicationIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e9fc0
- (void)recentApplicationBundleIdentifiersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e9d40
- (void)purgeTopShelfContentForApplicationIdentifiers:(id)arg1;	// IMP=0x00000001001e9b20
- (void)dismissSoftwareUpdateWindowWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e96b4
- (void)presentSoftwareUpdateWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001e8f54
- (void)dismissEventMaskingWindowWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e8ae8
- (void)presentEventMaskingWindowWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e867c
- (void)dismissThermalAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e8208
- (void)presentThermalAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e7d94
- (void)presentNowPlayingWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001e78f0
- (void)presentSystemRoutingUIWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001e7364
- (void)presentOdeonUIWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001e6230
- (void)presentShareAudioUIWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e5dd0
- (void)presentShareAudioUI;	// IMP=0x00000001001e5d94
- (void)launchCRDApp;	// IMP=0x00000001001e5b44
- (void)setAirPlayActive:(_Bool)arg1;	// IMP=0x00000001001e58a4
- (void)deactivateScreenSaver;	// IMP=0x00000001001e5494
- (void)activateScreenSaverWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e4fe4
- (void)activateScreenSaver;	// IMP=0x00000001001e4fa8
- (void)sleepTimeoutWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e4c94
- (void)setSleepTimeout:(double)arg1;	// IMP=0x00000001001e4994
- (void)reboot;	// IMP=0x00000001001e46a8
- (void)relaunch;	// IMP=0x00000001001e43bc
- (void)relaunchBackboardd;	// IMP=0x00000001001e4168
- (void)fetchDeviceIsAsleepWithResult:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e3f04
- (void)wakeSystemForReason:(id)arg1;	// IMP=0x00000001001e3bbc
- (void)sleepSystemForReason:(id)arg1;	// IMP=0x00000001001e3874
- (void)deactivateApplication;	// IMP=0x00000001001e36fc
- (void)registerNowPlayingDelegate:(id)arg1;	// IMP=0x00000001001e3698
- (id)osUpdateService;	// IMP=0x00000001001e366c
- (void)invalidate;	// IMP=0x00000001001e33e0
- (void)resume;	// IMP=0x00000001001e33a8
- (void)dealloc;	// IMP=0x00000001001e2e04
- (id)init;	// IMP=0x00000001001e2dcc
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001001e0e88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

