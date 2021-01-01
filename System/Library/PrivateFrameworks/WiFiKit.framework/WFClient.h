/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <WiFiKit/WiFiKit-Structs.h>
@class NSString, WFInterface, CWFInterface, NSRunLoop, NSNumber, NSObject, WFNetworkScanRecord;

@interface WFClient : NSObject {

	BOOL _networkRestrictionActive;
	BOOL _powered;
	BOOL _isKnownNetworkUIEnabled;
	BOOL _WAPIEnabled;
	BOOL _diagnosticsEnabled;
	BOOL _coreWiFiEnabled;
	BOOL _randomMACFeatureEnabled;
	BOOL _randomFeatureForSecureNetworksEnabled;
	BOOL _WPA3PersonalEnabled;
	BOOL _WPA3EnterpriseEnabled;
	BOOL _mfpCapable;
	BOOL _powerModificationDisabled;
	BOOL _managedAppleID;
	BOOL _showAllHS20Networks;
	BOOL _wiFiHealthUIDisabled;
	BOOL _extraLoggingEnabled;
	BOOL _diagnosticsModeEnabled;
	BOOL _userAutoJoinState;
	unsigned long long _airplaneModeBehavior;
	NSString* _whitelistingUUID;
	long long _askToJoinMode;
	long long _autoInstantHotspotJoinOption;
	WFInterface* _interface;
	CWFInterface* _cInterface;
	WiFiManagerClientRef _manager;
	NSRunLoop* _callbackRunLoop;
	NSNumber* _rssiThresholdNumber;
	NSObject*<OS_dispatch_queue> _serialClientQueue;
	NSObject*<OS_dispatch_queue> _currentNetworkQueue;
	WFNetworkScanRecord* _currentNetwork;

}

@property (nonatomic,retain) WFInterface * interface;                                                                                //@synthesize interface=_interface - In the implementation block
@property (nonatomic,retain) CWFInterface * cInterface;                                                                              //@synthesize cInterface=_cInterface - In the implementation block
@property (assign) WiFiManagerClientRef manager;                                                                                     //@synthesize manager=_manager - In the implementation block
@property (retain) NSRunLoop * callbackRunLoop;                                                                                      //@synthesize callbackRunLoop=_callbackRunLoop - In the implementation block
@property (assign) BOOL showAllHS20Networks;                                                                                         //@synthesize showAllHS20Networks=_showAllHS20Networks - In the implementation block
@property (getter=isWiFiHealthUIDisabled) BOOL wiFiHealthUIDisabled;                                                                 //@synthesize wiFiHealthUIDisabled=_wiFiHealthUIDisabled - In the implementation block
@property (assign) BOOL extraLoggingEnabled;                                                                                         //@synthesize extraLoggingEnabled=_extraLoggingEnabled - In the implementation block
@property (getter=isDiagnosticsModeEnabled) BOOL diagnosticsModeEnabled;                                                             //@synthesize diagnosticsModeEnabled=_diagnosticsModeEnabled - In the implementation block
@property (assign,getter=isNetworkRestrictionActive,nonatomic) BOOL networkRestrictionActive;                                        //@synthesize networkRestrictionActive=_networkRestrictionActive - In the implementation block
@property (retain) NSNumber * rssiThresholdNumber;                                                                                   //@synthesize rssiThresholdNumber=_rssiThresholdNumber - In the implementation block
@property (nonatomic,readonly) BOOL isKnownNetworkUIEnabled;                                                                         //@synthesize isKnownNetworkUIEnabled=_isKnownNetworkUIEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long airplaneModeBehavior;                                                                //@synthesize airplaneModeBehavior=_airplaneModeBehavior - In the implementation block
@property (assign,nonatomic) BOOL userAutoJoinState;                                                                                 //@synthesize userAutoJoinState=_userAutoJoinState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialClientQueue;                                                         //@synthesize serialClientQueue=_serialClientQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> currentNetworkQueue;                                                       //@synthesize currentNetworkQueue=_currentNetworkQueue - In the implementation block
@property (nonatomic,readonly) NSString * whitelistingUUID;                                                                          //@synthesize whitelistingUUID=_whitelistingUUID - In the implementation block
@property (assign,getter=isWPA3PersonalEnabled,nonatomic) BOOL WPA3PersonalEnabled;                                                  //@synthesize WPA3PersonalEnabled=_WPA3PersonalEnabled - In the implementation block
@property (assign,getter=isWPA3EnterpriseEnabled,nonatomic) BOOL WPA3EnterpriseEnabled;                                              //@synthesize WPA3EnterpriseEnabled=_WPA3EnterpriseEnabled - In the implementation block
@property (assign,getter=isMfpCapable,nonatomic) BOOL mfpCapable;                                                                    //@synthesize mfpCapable=_mfpCapable - In the implementation block
@property (nonatomic,retain) WFNetworkScanRecord * currentNetwork;                                                                   //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (assign) BOOL powered;                                                                                                     //@synthesize powered=_powered - In the implementation block
@property (readonly) NSString * hardwareMACAddress; 
@property (assign,getter=isWAPIEnabled,nonatomic) BOOL WAPIEnabled;                                                                  //@synthesize WAPIEnabled=_WAPIEnabled - In the implementation block
@property (assign,getter=isDiagnosticsEnabled,nonatomic) BOOL diagnosticsEnabled;                                                    //@synthesize diagnosticsEnabled=_diagnosticsEnabled - In the implementation block
@property (assign,nonatomic) long long askToJoinMode;                                                                                //@synthesize askToJoinMode=_askToJoinMode - In the implementation block
@property (assign,getter=isCoreWiFiEnabled,nonatomic) BOOL coreWiFiEnabled;                                                          //@synthesize coreWiFiEnabled=_coreWiFiEnabled - In the implementation block
@property (assign,getter=israndomMACFeatureEnabled,nonatomic) BOOL randomMACFeatureEnabled;                                          //@synthesize randomMACFeatureEnabled=_randomMACFeatureEnabled - In the implementation block
@property (assign,getter=isRandomFeatureForSecureNetworksEnabled,nonatomic) BOOL randomFeatureForSecureNetworksEnabled;              //@synthesize randomFeatureForSecureNetworksEnabled=_randomFeatureForSecureNetworksEnabled - In the implementation block
@property (getter=isPowerModificationDisabled,nonatomic,readonly) BOOL powerModificationDisabled;                                    //@synthesize powerModificationDisabled=_powerModificationDisabled - In the implementation block
@property (getter=isManagedAppleID,nonatomic,readonly) BOOL managedAppleID;                                                          //@synthesize managedAppleID=_managedAppleID - In the implementation block
@property (assign,nonatomic) long long autoInstantHotspotJoinOption;                                                                 //@synthesize autoInstantHotspotJoinOption=_autoInstantHotspotJoinOption - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(WFInterface *)interface;
-(void)setInterface:(WFInterface *)arg1 ;
-(WiFiManagerClientRef)manager;
-(void)setCurrentNetwork:(WFNetworkScanRecord *)arg1 ;
-(WFNetworkScanRecord *)currentNetwork;
-(long long)rssiThreshold;
-(void)setManager:(WiFiManagerClientRef)arg1 ;
-(BOOL)powered;
-(BOOL)isManagedAppleID;
-(void)setPowered:(BOOL)arg1 ;
-(void)setDiagnosticsEnabled:(BOOL)arg1 ;
-(BOOL)isDiagnosticsEnabled;
-(void)setCoreWiFiEnabled:(BOOL)arg1 ;
-(void)setAskToJoinMode:(long long)arg1 ;
-(void)setAutoInstantHotspotJoinOption:(long long)arg1 ;
-(void)setAutoJoinEnabled:(BOOL)arg1 ;
-(NSString *)hardwareMACAddress;
-(void)setWAPIEnabled:(BOOL)arg1 ;
-(void)setWPA3PersonalEnabled:(BOOL)arg1 ;
-(void)setWPA3EnterpriseEnabled:(BOOL)arg1 ;
-(void)_preferredNetworksDidChange:(id)arg1 ;
-(id)_copyCurrentNetworks;
-(void)_updateNetwork:(WiFiNetworkRef)arg1 ;
-(void)_addNetwork:(WiFiNetworkRef)arg1 ;
-(void)_removeNetwork:(WiFiNetworkRef)arg1 ;
-(void)_setAutoJoinEnabled:(BOOL)arg1 forNetwork:(WiFiNetworkRef)arg2 ;
-(id)_getGeoTagsForNetwork:(WiFiNetworkRef)arg1 ;
-(id)_getScoreForNetwork:(WiFiNetworkRef)arg1 ;
-(void)_updateWithDeviceAttachment:(WiFiDeviceClientRef)arg1 ;
-(BOOL)isCoreWiFiEnabled;
-(BOOL)isNetworkRestrictionActive;
-(CWFInterface *)cInterface;
-(void)_updatePowerState;
-(void)reloadConfiguration;
-(BOOL)isPowerModificationDisabled;
-(void)asyncPowered:(/*^block*/id)arg1 ;
-(BOOL)showAllHS20Networks;
-(NSString *)whitelistingUUID;
-(void)dispatchCertificateTrustAction:(long long)arg1 profile:(id)arg2 ;
-(BOOL)isWiFiHealthUIDisabled;
-(void)setEnableRandomMACForNetwork:(id)arg1 enable:(BOOL)arg2 randomMAC:(id)arg3 ;
-(BOOL)israndomMACFeatureEnabled;
-(BOOL)isWAPIEnabled;
-(long long)autoInstantHotspotJoinOption;
-(long long)askToJoinMode;
-(BOOL)isDiagnosticsModeEnabled;
-(BOOL)isKnownNetworkUIEnabled;
-(BOOL)isWPA3PersonalEnabled;
-(BOOL)isWPA3EnterpriseEnabled;
-(BOOL)isMfpCapable;
-(NSObject*<OS_dispatch_queue>)currentNetworkQueue;
-(void)setCurrentNetworkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSRunLoop *)callbackRunLoop;
-(void)setCallbackRunLoop:(NSRunLoop *)arg1 ;
-(void)setCInterface:(CWFInterface *)arg1 ;
-(void)setUserAutoJoinState:(BOOL)arg1 ;
-(void)setMISState:(BOOL)arg1 ;
-(void)_unscheduleCallbacksWithManager:(WiFiManagerClientRef)arg1 ;
-(void)_updateCoreWiFiEnabled;
-(void)_updateRandomMACFeatureEnabled;
-(void)_updateRandomMACFeatureForSecuredNetworksEnabled;
-(void)_scheduleCallbacksWithManager:(WiFiManagerClientRef)arg1 runLoop:(id)arg2 ;
-(void)_setupDefaultInterfaceWithManager:(WiFiManagerClientRef)arg1 ;
-(void)_setupCoreWiFiInterface;
-(void)_managedConfigurationDidChange:(id)arg1 ;
-(long long)_askToJoinModeFromWiFiAskToJoinPreference:(int)arg1 ;
-(long long)_hotspotJoinOptionFromWiFiAutoHotspotMode:(int)arg1 ;
-(id)initWithCallbackRunLoop:(id)arg1 ;
-(void)setMfpCapable:(BOOL)arg1 ;
-(void)_updateDebugProperties;
-(void)_updateWAPIEnabled;
-(void)_updateDiagnosticsEnabled;
-(void)_updateAskToJoinMode;
-(void)_updateAutoInstantHotspotJoinOption;
-(void)_updateNetworkRestrictionActive;
-(void)_updateAirplaneModeStickiness;
-(void)_updateWPA3Properties:(WiFiManagerClientRef)arg1 ;
-(void)_updatePowerModificationDisableState;
-(void)_logWiFiManagerPropertyChange:(id)arg1 value:(BOOL)arg2 ;
-(void)_notifyWiFiPropertyChanged:(id)arg1 value:(id)arg2 ;
-(void)setNetworkRestrictionActive:(BOOL)arg1 ;
-(void)setPowerModificationDisableState:(BOOL)arg1 ;
-(void)setShowAllHS20Networks:(BOOL)arg1 ;
-(BOOL)extraLoggingEnabled;
-(void)setExtraLoggingEnabled:(BOOL)arg1 ;
-(void)setWiFiHealthUIDisabled:(BOOL)arg1 ;
-(void)setDiagnosticsModeEnabled:(BOOL)arg1 ;
-(BOOL)userAutoJoinState;
-(NSObject*<OS_dispatch_queue>)serialClientQueue;
-(void)setIsCoreWiFiEnabled:(BOOL)arg1 ;
-(BOOL)hasShownSBPickerDontAsk;
-(void)setHasShownSBPickerDontAsk:(BOOL)arg1 ;
-(void)setAirplaneModeBehavior:(unsigned long long)arg1 ;
-(BOOL)isInfraAssociationAllowed;
-(void)asyncUserAutoJoinState:(/*^block*/id)arg1 ;
-(void)_userAutoJoinStateDidChange:(BOOL)arg1 info:(id)arg2 ;
-(void)_askToJoinNotification:(unsigned)arg1 ;
-(void)_trustNotificationWithID:(unsigned)arg1 network:(WiFiNetworkRef)arg2 data:(id)arg3 ;
-(void)asyncMISState:(/*^block*/id)arg1 ;
-(void)asyncMISDiscoveryState:(/*^block*/id)arg1 ;
-(void)setMISDiscoveryState:(BOOL)arg1 immediateDisable:(BOOL)arg2 ;
-(void)_joinRecommendationWithID:(unsigned)arg1 network:(WiFiNetworkRef)arg2 ;
-(void)dispatchJoinRecommendationAction:(long long)arg1 profile:(id)arg2 ;
-(void)dispatchAskToJoinAction:(unsigned long long)arg1 notificationId:(unsigned)arg2 network:(id)arg3 ;
-(void)setClientTypeAsForeground;
-(id)newRandomMACAddressForSSID:(id)arg1 ;
-(unsigned long long)airplaneModeBehavior;
-(void)setRandomMACFeatureEnabled:(BOOL)arg1 ;
-(BOOL)isRandomFeatureForSecureNetworksEnabled;
-(void)setRandomFeatureForSecureNetworksEnabled:(BOOL)arg1 ;
-(NSNumber *)rssiThresholdNumber;
-(void)setRssiThresholdNumber:(NSNumber *)arg1 ;
-(void)setSerialClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

