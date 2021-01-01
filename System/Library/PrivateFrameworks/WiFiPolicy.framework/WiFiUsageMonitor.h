/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject, WiFiUsageInterfaceStats;

@interface WiFiUsageMonitor : NSObject {

	BOOL _isSystemAwake;
	BOOL _deviceLocked;
	BOOL _displayOn;
	BOOL _deviceCharging;
	BOOL _inMotion;
	BOOL _inVehicle;
	BOOL _inActiveCall;
	BOOL _inMediaPlayback;
	unsigned long long _hidCount;
	BOOL _inActiveA2dp;
	BOOL _inActiveSco;
	BOOL _inActiveAwdl;
	BOOL _inActiveRoam;
	BOOL _inActiveScan;
	BOOL _poweredOn;
	BOOL _controlCenterEnabled;
	BOOL _cellularFallbackEnabled;
	NSString* _secondaryInterfaceName;
	NSMutableDictionary* _usageSessions;
	NSMutableDictionary* _connectedNetworks;
	NSObject*<OS_dispatch_queue> _internalQueue;
	BOOL _privacyRestrictionDisabled;
	/*^block*/id _completionHandler;
	void* _completionContext;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	WiFiUsageInterfaceStats* _ifStatsAtLastLqmUpdate;

}
+(id)sharedInstance;
-(id)init;
-(void)setDisplayState:(BOOL)arg1 ;
-(void)addSoftApClientEvent:(BOOL)arg1 identifier:(id)arg2 isAppleClient:(BOOL)arg3 isInstantHotspot:(BOOL)arg4 isAutoHotspot:(BOOL)arg5 isHidden:(BOOL)arg6 ;
-(void)addSoftApCoexEvent:(unsigned long long)arg1 deniedUnii1ChannelMap:(unsigned long long)arg2 deniedUnii2aChannelMap:(unsigned long long)arg3 deniedUnii2cChannelMap:(unsigned long long)arg4 deniedUnii3ChannelMap:(unsigned long long)arg5 ;
-(void)setDeviceLockState:(BOOL)arg1 ;
-(void)setMotionState:(BOOL)arg1 andVehicularState:(BOOL)arg2 ;
-(void)setCallState:(BOOL)arg1 ;
-(void)setMediaState:(BOOL)arg1 ;
-(void)setDeviceChargingState:(BOOL)arg1 ;
-(void)setSecondaryInterfaceName:(id)arg1 ;
-(BOOL)submitAnalytics:(id)arg1 ;
-(void)setCompletionHandler:(/*^block*/id)arg1 withContext:(void*)arg2 onQueue:(id)arg3 ;
-(void)setPrivacyRestrictionDisabled:(BOOL)arg1 ;
-(void)initializeDeviceLockState:(BOOL)arg1 displayState:(BOOL)arg2 motionState:(BOOL)arg3 vehicularState:(BOOL)arg4 callState:(BOOL)arg5 mediaState:(BOOL)arg6 chargingState:(BOOL)arg7 andSecondaryInterfaceName:(id)arg8 ;
-(void)startMonitoringWiFiInterface:(id)arg1 ;
-(void)setSystemWakeState:(BOOL)arg1 wokenByWiFi:(BOOL)arg2 ;
-(void)setCurrentApplicationName:(id)arg1 withAttributes:(id)arg2 ;
-(void)setJoinEvent:(BOOL)arg1 withReason:(unsigned long long)arg2 lastDisconnectReason:(long long)arg3 lastJoinFailure:(long long)arg4 andNetworkDetails:(id)arg5 forInterface:(id)arg6 ;
-(void)setLinkEvent:(BOOL)arg1 isInvoluntary:(BOOL)arg2 linkChangeReason:(long long)arg3 linkChangeSubreason:(long long)arg4 withNetworkDetails:(id)arg5 forInterface:(id)arg6 ;
-(void)updateLinkQuality:(id)arg1 andDataStats:(id)arg2 forInterface:(id)arg3 ;
-(void)setPowerBudget:(long long)arg1 andThermalIndex:(long long)arg2 forInterface:(id)arg3 ;
-(void)setBluetoothState:(BOOL)arg1 connectedDeviceCount:(unsigned long long)arg2 inA2dp:(BOOL)arg3 inSco:(BOOL)arg4 ;
-(void)setAwdlState:(BOOL)arg1 inMode:(long long)arg2 ;
-(void)setSoftApState:(BOOL)arg1 requester:(id)arg2 status:(id)arg3 changeReason:(id)arg4 channelNumber:(unsigned long long)arg5 countryCode:(unsigned long long)arg6 isHidden:(BOOL)arg7 isInfraConnected:(BOOL)arg8 isAwdlUp:(BOOL)arg9 lowPowerModeDuration:(double)arg10 compatibilityMode:(BOOL)arg11 ;
-(void)setRoamingState:(BOOL)arg1 reason:(unsigned long long)arg2 andStatus:(long long)arg3 forInterface:(id)arg4 ;
-(void)setScanningState:(BOOL)arg1 client:(unsigned long long)arg2 neighborBSS:(id)arg3 otherBSS:(id)arg4 forInterface:(id)arg5 ;
-(void)setPowerState:(BOOL)arg1 forInterface:(id)arg2 ;
-(void)setControlCenterState:(BOOL)arg1 withKnownLocation:(BOOL)arg2 forInterface:(id)arg3 ;
-(void)setCellularFallbackState:(BOOL)arg1 forInterface:(id)arg2 ;
-(void)addFaultEvent:(unsigned long long)arg1 forInterface:(id)arg2 ;
-(void)addTriggerDisconnectEvent:(id)arg1 isAlerted:(BOOL)arg2 isConfirmed:(BOOL)arg3 isExecuted:(BOOL)arg4 ;
-(id)summaryForInterface:(id)arg1 ;
@end

