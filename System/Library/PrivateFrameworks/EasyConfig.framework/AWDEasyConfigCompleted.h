/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/EasyConfig.framework/EasyConfig
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EasyConfig/EasyConfig-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDEasyConfigCompleted : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _channelOfDestinationAP;
	unsigned _channelOfSWAP;
	NSString* _eaBundleSeedID;
	NSString* _eaFirmwareRevision;
	NSString* _eaHardwareRevision;
	NSString* _eaManufacturerName;
	NSString* _eaModelName;
	NSMutableArray* _eaProtocolStrings;
	int _easyConfigStoppedReasonError;
	unsigned _enterSetupCodeMs;
	int _rssiOfDestinationAP;
	int _rssiOfSWAP;
	float _secondsToApplyConfig;
	float _secondsToCompleteFullConfig;
	float _secondsToCompleteMFiSAPAuth;
	float _secondsToCompletePostConfigCheck;
	float _secondsToFindPostConfigDevice;
	float _secondsToFindPreConfigDevice;
	float _secondsToGetLinkUpOnDestination;
	float _secondsToGetLinkUpOnSWAP;
	unsigned _snrOfDestinationAP;
	unsigned _snrOfSWAP;
	int _wifiJoinDestinationAPError;
	int _wifiJoinSWAPError;
	BOOL _adminPasswordSet;
	BOOL _destinationNetworkPSKInKeychain;
	BOOL _destinationNetworkRecommendationUsed;
	BOOL _hitJoiningDestinationAPTimeout;
	BOOL _hitJoiningTargetSWAPTimeout;
	BOOL _pauseAfterApply;
	BOOL _playPasswordSet;
	BOOL _userChangedFriendlyName;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasUserChangedFriendlyName; 
@property (assign,nonatomic) BOOL userChangedFriendlyName;                              //@synthesize userChangedFriendlyName=_userChangedFriendlyName - In the implementation block
@property (assign,nonatomic) BOOL hasPlayPasswordSet; 
@property (assign,nonatomic) BOOL playPasswordSet;                                      //@synthesize playPasswordSet=_playPasswordSet - In the implementation block
@property (assign,nonatomic) BOOL hasAdminPasswordSet; 
@property (assign,nonatomic) BOOL adminPasswordSet;                                     //@synthesize adminPasswordSet=_adminPasswordSet - In the implementation block
@property (assign,nonatomic) BOOL hasDestinationNetworkRecommendationUsed; 
@property (assign,nonatomic) BOOL destinationNetworkRecommendationUsed;                 //@synthesize destinationNetworkRecommendationUsed=_destinationNetworkRecommendationUsed - In the implementation block
@property (assign,nonatomic) BOOL hasSecondsToCompleteFullConfig; 
@property (assign,nonatomic) float secondsToCompleteFullConfig;                         //@synthesize secondsToCompleteFullConfig=_secondsToCompleteFullConfig - In the implementation block
@property (assign,nonatomic) BOOL hasSecondsToGetLinkUpOnSWAP; 
@property (assign,nonatomic) float secondsToGetLinkUpOnSWAP;                            //@synthesize secondsToGetLinkUpOnSWAP=_secondsToGetLinkUpOnSWAP - In the implementation block
@property (assign,nonatomic) BOOL hasWifiJoinSWAPError; 
@property (assign,nonatomic) int wifiJoinSWAPError;                                     //@synthesize wifiJoinSWAPError=_wifiJoinSWAPError - In the implementation block
@property (assign,nonatomic) BOOL hasHitJoiningTargetSWAPTimeout; 
@property (assign,nonatomic) BOOL hitJoiningTargetSWAPTimeout;                          //@synthesize hitJoiningTargetSWAPTimeout=_hitJoiningTargetSWAPTimeout - In the implementation block
@property (assign,nonatomic) BOOL hasRssiOfSWAP; 
@property (assign,nonatomic) int rssiOfSWAP;                                            //@synthesize rssiOfSWAP=_rssiOfSWAP - In the implementation block
@property (assign,nonatomic) BOOL hasSnrOfSWAP; 
@property (assign,nonatomic) unsigned snrOfSWAP;                                        //@synthesize snrOfSWAP=_snrOfSWAP - In the implementation block
@property (assign,nonatomic) BOOL hasChannelOfSWAP; 
@property (assign,nonatomic) unsigned channelOfSWAP;                                    //@synthesize channelOfSWAP=_channelOfSWAP - In the implementation block
@property (assign,nonatomic) BOOL hasSecondsToGetLinkUpOnDestination; 
@property (assign,nonatomic) float secondsToGetLinkUpOnDestination;                     //@synthesize secondsToGetLinkUpOnDestination=_secondsToGetLinkUpOnDestination - In the implementation block
@property (assign,nonatomic) BOOL hasWifiJoinDestinationAPError; 
@property (assign,nonatomic) int wifiJoinDestinationAPError;                            //@synthesize wifiJoinDestinationAPError=_wifiJoinDestinationAPError - In the implementation block
@property (assign,nonatomic) BOOL hasDestinationNetworkPSKInKeychain; 
@property (assign,nonatomic) BOOL destinationNetworkPSKInKeychain;                      //@synthesize destinationNetworkPSKInKeychain=_destinationNetworkPSKInKeychain - In the implementation block
@property (assign,nonatomic) BOOL hasHitJoiningDestinationAPTimeout; 
@property (assign,nonatomic) BOOL hitJoiningDestinationAPTimeout;                       //@synthesize hitJoiningDestinationAPTimeout=_hitJoiningDestinationAPTimeout - In the implementation block
@property (assign,nonatomic) BOOL hasRssiOfDestinationAP; 
@property (assign,nonatomic) int rssiOfDestinationAP;                                   //@synthesize rssiOfDestinationAP=_rssiOfDestinationAP - In the implementation block
@property (assign,nonatomic) BOOL hasSnrOfDestinationAP; 
@property (assign,nonatomic) unsigned snrOfDestinationAP;                               //@synthesize snrOfDestinationAP=_snrOfDestinationAP - In the implementation block
@property (assign,nonatomic) BOOL hasChannelOfDestinationAP; 
@property (assign,nonatomic) unsigned channelOfDestinationAP;                           //@synthesize channelOfDestinationAP=_channelOfDestinationAP - In the implementation block
@property (assign,nonatomic) BOOL hasSecondsToFindPreConfigDevice; 
@property (assign,nonatomic) float secondsToFindPreConfigDevice;                        //@synthesize secondsToFindPreConfigDevice=_secondsToFindPreConfigDevice - In the implementation block
@property (assign,nonatomic) BOOL hasSecondsToCompleteMFiSAPAuth; 
@property (assign,nonatomic) float secondsToCompleteMFiSAPAuth;                         //@synthesize secondsToCompleteMFiSAPAuth=_secondsToCompleteMFiSAPAuth - In the implementation block
@property (assign,nonatomic) BOOL hasSecondsToApplyConfig; 
@property (assign,nonatomic) float secondsToApplyConfig;                                //@synthesize secondsToApplyConfig=_secondsToApplyConfig - In the implementation block
@property (assign,nonatomic) BOOL hasSecondsToFindPostConfigDevice; 
@property (assign,nonatomic) float secondsToFindPostConfigDevice;                       //@synthesize secondsToFindPostConfigDevice=_secondsToFindPostConfigDevice - In the implementation block
@property (assign,nonatomic) BOOL hasSecondsToCompletePostConfigCheck; 
@property (assign,nonatomic) float secondsToCompletePostConfigCheck;                    //@synthesize secondsToCompletePostConfigCheck=_secondsToCompletePostConfigCheck - In the implementation block
@property (assign,nonatomic) BOOL hasPauseAfterApply; 
@property (assign,nonatomic) BOOL pauseAfterApply;                                      //@synthesize pauseAfterApply=_pauseAfterApply - In the implementation block
@property (assign,nonatomic) BOOL hasEasyConfigStoppedReasonError; 
@property (assign,nonatomic) int easyConfigStoppedReasonError;                          //@synthesize easyConfigStoppedReasonError=_easyConfigStoppedReasonError - In the implementation block
@property (nonatomic,readonly) BOOL hasEaBundleSeedID; 
@property (nonatomic,retain) NSString * eaBundleSeedID;                                 //@synthesize eaBundleSeedID=_eaBundleSeedID - In the implementation block
@property (nonatomic,retain) NSMutableArray * eaProtocolStrings;                        //@synthesize eaProtocolStrings=_eaProtocolStrings - In the implementation block
@property (nonatomic,readonly) BOOL hasEaManufacturerName; 
@property (nonatomic,retain) NSString * eaManufacturerName;                             //@synthesize eaManufacturerName=_eaManufacturerName - In the implementation block
@property (nonatomic,readonly) BOOL hasEaModelName; 
@property (nonatomic,retain) NSString * eaModelName;                                    //@synthesize eaModelName=_eaModelName - In the implementation block
@property (nonatomic,readonly) BOOL hasEaFirmwareRevision; 
@property (nonatomic,retain) NSString * eaFirmwareRevision;                             //@synthesize eaFirmwareRevision=_eaFirmwareRevision - In the implementation block
@property (nonatomic,readonly) BOOL hasEaHardwareRevision; 
@property (nonatomic,retain) NSString * eaHardwareRevision;                             //@synthesize eaHardwareRevision=_eaHardwareRevision - In the implementation block
@property (assign,nonatomic) BOOL hasEnterSetupCodeMs; 
@property (assign,nonatomic) unsigned enterSetupCodeMs;                                 //@synthesize enterSetupCodeMs=_enterSetupCodeMs - In the implementation block
+(Class)eaProtocolStringsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setUserChangedFriendlyName:(BOOL)arg1 ;
-(void)setHasUserChangedFriendlyName:(BOOL)arg1 ;
-(BOOL)hasUserChangedFriendlyName;
-(void)setPlayPasswordSet:(BOOL)arg1 ;
-(void)setHasPlayPasswordSet:(BOOL)arg1 ;
-(BOOL)hasPlayPasswordSet;
-(void)setAdminPasswordSet:(BOOL)arg1 ;
-(void)setHasAdminPasswordSet:(BOOL)arg1 ;
-(BOOL)hasAdminPasswordSet;
-(void)setDestinationNetworkRecommendationUsed:(BOOL)arg1 ;
-(void)setHasDestinationNetworkRecommendationUsed:(BOOL)arg1 ;
-(BOOL)hasDestinationNetworkRecommendationUsed;
-(void)setSecondsToCompleteFullConfig:(float)arg1 ;
-(void)setHasSecondsToCompleteFullConfig:(BOOL)arg1 ;
-(BOOL)hasSecondsToCompleteFullConfig;
-(void)setSecondsToGetLinkUpOnSWAP:(float)arg1 ;
-(void)setHasSecondsToGetLinkUpOnSWAP:(BOOL)arg1 ;
-(BOOL)hasSecondsToGetLinkUpOnSWAP;
-(void)setWifiJoinSWAPError:(int)arg1 ;
-(void)setHasWifiJoinSWAPError:(BOOL)arg1 ;
-(BOOL)hasWifiJoinSWAPError;
-(void)setHitJoiningTargetSWAPTimeout:(BOOL)arg1 ;
-(void)setHasHitJoiningTargetSWAPTimeout:(BOOL)arg1 ;
-(BOOL)hasHitJoiningTargetSWAPTimeout;
-(void)setRssiOfSWAP:(int)arg1 ;
-(void)setHasRssiOfSWAP:(BOOL)arg1 ;
-(BOOL)hasRssiOfSWAP;
-(void)setSnrOfSWAP:(unsigned)arg1 ;
-(void)setHasSnrOfSWAP:(BOOL)arg1 ;
-(BOOL)hasSnrOfSWAP;
-(void)setChannelOfSWAP:(unsigned)arg1 ;
-(void)setHasChannelOfSWAP:(BOOL)arg1 ;
-(BOOL)hasChannelOfSWAP;
-(void)setSecondsToGetLinkUpOnDestination:(float)arg1 ;
-(void)setHasSecondsToGetLinkUpOnDestination:(BOOL)arg1 ;
-(BOOL)hasSecondsToGetLinkUpOnDestination;
-(void)setWifiJoinDestinationAPError:(int)arg1 ;
-(void)setHasWifiJoinDestinationAPError:(BOOL)arg1 ;
-(BOOL)hasWifiJoinDestinationAPError;
-(void)setDestinationNetworkPSKInKeychain:(BOOL)arg1 ;
-(void)setHasDestinationNetworkPSKInKeychain:(BOOL)arg1 ;
-(BOOL)hasDestinationNetworkPSKInKeychain;
-(void)setHitJoiningDestinationAPTimeout:(BOOL)arg1 ;
-(void)setHasHitJoiningDestinationAPTimeout:(BOOL)arg1 ;
-(BOOL)hasHitJoiningDestinationAPTimeout;
-(void)setRssiOfDestinationAP:(int)arg1 ;
-(void)setHasRssiOfDestinationAP:(BOOL)arg1 ;
-(BOOL)hasRssiOfDestinationAP;
-(void)setSnrOfDestinationAP:(unsigned)arg1 ;
-(void)setHasSnrOfDestinationAP:(BOOL)arg1 ;
-(BOOL)hasSnrOfDestinationAP;
-(void)setChannelOfDestinationAP:(unsigned)arg1 ;
-(void)setHasChannelOfDestinationAP:(BOOL)arg1 ;
-(BOOL)hasChannelOfDestinationAP;
-(void)setSecondsToFindPreConfigDevice:(float)arg1 ;
-(void)setHasSecondsToFindPreConfigDevice:(BOOL)arg1 ;
-(BOOL)hasSecondsToFindPreConfigDevice;
-(void)setSecondsToCompleteMFiSAPAuth:(float)arg1 ;
-(void)setHasSecondsToCompleteMFiSAPAuth:(BOOL)arg1 ;
-(BOOL)hasSecondsToCompleteMFiSAPAuth;
-(void)setSecondsToApplyConfig:(float)arg1 ;
-(void)setHasSecondsToApplyConfig:(BOOL)arg1 ;
-(BOOL)hasSecondsToApplyConfig;
-(void)setSecondsToFindPostConfigDevice:(float)arg1 ;
-(void)setHasSecondsToFindPostConfigDevice:(BOOL)arg1 ;
-(BOOL)hasSecondsToFindPostConfigDevice;
-(void)setSecondsToCompletePostConfigCheck:(float)arg1 ;
-(void)setHasSecondsToCompletePostConfigCheck:(BOOL)arg1 ;
-(BOOL)hasSecondsToCompletePostConfigCheck;
-(void)setPauseAfterApply:(BOOL)arg1 ;
-(void)setHasPauseAfterApply:(BOOL)arg1 ;
-(BOOL)hasPauseAfterApply;
-(void)setEasyConfigStoppedReasonError:(int)arg1 ;
-(void)setHasEasyConfigStoppedReasonError:(BOOL)arg1 ;
-(BOOL)hasEasyConfigStoppedReasonError;
-(BOOL)hasEaBundleSeedID;
-(void)clearEaProtocolStrings;
-(void)addEaProtocolStrings:(id)arg1 ;
-(unsigned long long)eaProtocolStringsCount;
-(id)eaProtocolStringsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasEaManufacturerName;
-(BOOL)hasEaModelName;
-(BOOL)hasEaFirmwareRevision;
-(BOOL)hasEaHardwareRevision;
-(void)setEnterSetupCodeMs:(unsigned)arg1 ;
-(void)setHasEnterSetupCodeMs:(BOOL)arg1 ;
-(BOOL)hasEnterSetupCodeMs;
-(BOOL)userChangedFriendlyName;
-(BOOL)playPasswordSet;
-(BOOL)adminPasswordSet;
-(BOOL)destinationNetworkRecommendationUsed;
-(float)secondsToCompleteFullConfig;
-(float)secondsToGetLinkUpOnSWAP;
-(int)wifiJoinSWAPError;
-(BOOL)hitJoiningTargetSWAPTimeout;
-(int)rssiOfSWAP;
-(unsigned)snrOfSWAP;
-(unsigned)channelOfSWAP;
-(float)secondsToGetLinkUpOnDestination;
-(int)wifiJoinDestinationAPError;
-(BOOL)destinationNetworkPSKInKeychain;
-(BOOL)hitJoiningDestinationAPTimeout;
-(int)rssiOfDestinationAP;
-(unsigned)snrOfDestinationAP;
-(unsigned)channelOfDestinationAP;
-(float)secondsToFindPreConfigDevice;
-(float)secondsToCompleteMFiSAPAuth;
-(float)secondsToApplyConfig;
-(float)secondsToFindPostConfigDevice;
-(float)secondsToCompletePostConfigCheck;
-(BOOL)pauseAfterApply;
-(int)easyConfigStoppedReasonError;
-(NSString *)eaBundleSeedID;
-(void)setEaBundleSeedID:(NSString *)arg1 ;
-(NSMutableArray *)eaProtocolStrings;
-(void)setEaProtocolStrings:(NSMutableArray *)arg1 ;
-(NSString *)eaManufacturerName;
-(void)setEaManufacturerName:(NSString *)arg1 ;
-(NSString *)eaModelName;
-(void)setEaModelName:(NSString *)arg1 ;
-(NSString *)eaFirmwareRevision;
-(void)setEaFirmwareRevision:(NSString *)arg1 ;
-(NSString *)eaHardwareRevision;
-(void)setEaHardwareRevision:(NSString *)arg1 ;
-(unsigned)enterSetupCodeMs;
@end

