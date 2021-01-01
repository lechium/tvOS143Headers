/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSString, NSNumber, NSData, NSUUID, NSDictionary, CUWiFiDevice, HMFUnfairLock;

@interface HAPWACAccessory : HMFObject {

	BOOL _supportsAirPlay;
	BOOL _requiresOwnershipToken;
	BOOL _homeKitPaired;
	BOOL _pairSetupWAC;
	NSString* _name;
	NSString* _model;
	NSString* _manufacturer;
	NSNumber* _wacCategory;
	NSNumber* _rssi;
	NSData* _bssid;
	NSString* _ssid;
	NSUUID* _identifier;
	NSString* _deviceId;
	NSData* _setupHash;
	NSDictionary* _rawScanResult;
	unsigned long long _supportedWiFiBands;
	unsigned long long _authFeatures;
	unsigned long long _version;
	double _discoveryTime;
	CUWiFiDevice* _cuWiFiDevice;
	HMFUnfairLock* _lock;

}

@property (nonatomic,readonly) CUWiFiDevice * cuWiFiDevice;                        //@synthesize cuWiFiDevice=_cuWiFiDevice - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * lock;                               //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) double discoveryTime;                                 //@synthesize discoveryTime=_discoveryTime - In the implementation block
@property (nonatomic,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * model;                                   //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) NSString * manufacturer;                            //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) NSNumber * wacCategory;                             //@synthesize wacCategory=_wacCategory - In the implementation block
@property (nonatomic,readonly) NSNumber * rssi;                                    //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,readonly) NSData * bssid;                                     //@synthesize bssid=_bssid - In the implementation block
@property (nonatomic,readonly) NSString * ssid;                                    //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * deviceId;                                //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,readonly) NSData * setupHash;                                 //@synthesize setupHash=_setupHash - In the implementation block
@property (nonatomic,readonly) NSDictionary * rawScanResult;                       //@synthesize rawScanResult=_rawScanResult - In the implementation block
@property (nonatomic,readonly) BOOL supportsAirPlay;                               //@synthesize supportsAirPlay=_supportsAirPlay - In the implementation block
@property (nonatomic,readonly) BOOL supportsLegacyWAC; 
@property (nonatomic,readonly) BOOL supportsWAC2; 
@property (nonatomic,readonly) BOOL supportsTokenAuth; 
@property (nonatomic,readonly) BOOL supportsCertAuth; 
@property (nonatomic,readonly) BOOL requiresOwnershipToken;                        //@synthesize requiresOwnershipToken=_requiresOwnershipToken - In the implementation block
@property (nonatomic,readonly) BOOL isHomeKitAccessory; 
@property (nonatomic,readonly) BOOL isAirPlayAccessory; 
@property (nonatomic,readonly) unsigned long long supportedWiFiBands;              //@synthesize supportedWiFiBands=_supportedWiFiBands - In the implementation block
@property (nonatomic,readonly) BOOL homeKitPaired;                                 //@synthesize homeKitPaired=_homeKitPaired - In the implementation block
@property (nonatomic,readonly) BOOL pairSetupWAC;                                  //@synthesize pairSetupWAC=_pairSetupWAC - In the implementation block
@property (nonatomic,readonly) unsigned long long authFeatures;                    //@synthesize authFeatures=_authFeatures - In the implementation block
@property (nonatomic,readonly) unsigned long long version;                         //@synthesize version=_version - In the implementation block
-(NSString *)name;
-(id)description;
-(HMFUnfairLock *)lock;
-(NSUUID *)identifier;
-(unsigned long long)version;
-(NSString *)model;
-(NSNumber *)rssi;
-(NSString *)ssid;
-(NSData *)bssid;
-(NSString *)deviceId;
-(NSString *)manufacturer;
-(NSDictionary *)rawScanResult;
-(BOOL)requiresOwnershipToken;
-(NSData *)setupHash;
-(unsigned long long)authFeatures;
-(void)updateWithHAPWACAccessory:(id)arg1 ;
-(BOOL)pairSetupWAC;
-(NSNumber *)wacCategory;
-(BOOL)supportsTokenAuth;
-(BOOL)supportsCertAuth;
-(BOOL)supportsWAC2;
-(BOOL)supportsLegacyWAC;
-(void)__setupSupportedFlags:(unsigned)arg1 ;
-(BOOL)supportsAirPlay;
-(BOOL)homeKitPaired;
-(unsigned long long)supportedWiFiBands;
-(double)discoveryTime;
-(CUWiFiDevice *)cuWiFiDevice;
-(id)initWithWiFiDevice:(id)arg1 ;
-(id)initWithName:(id)arg1 identifier:(id)arg2 category:(id)arg3 ssid:(id)arg4 deviceId:(id)arg5 flags:(unsigned)arg6 ;
-(BOOL)isHomeKitAccessory;
-(BOOL)isAirPlayAccessory;
-(void)setDiscoveryTime:(double)arg1 ;
@end

