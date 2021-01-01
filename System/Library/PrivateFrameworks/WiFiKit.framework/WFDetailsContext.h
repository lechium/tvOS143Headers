/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFDetailsProviderContext.h>
#import <libobjc.A.dylib/WFContextPresenting.h>

@protocol WFNetworkView;
@class NSArray, NSString, UIViewController, WFNetworkProfile, WFIPMonitor, WFNetworkScanRecord, WFKnownNetworkStore, WFDiagnosticsContext;

@interface WFDetailsContext : NSObject <WFDetailsProviderContext, WFContextPresenting> {

	BOOL _autoJoinEnabled;
	BOOL _autoLoginEnabled;
	BOOL _isInSaveDataMode;
	BOOL _diagnosable;
	BOOL _randomMACAddressDisabled;
	BOOL _randomMACAddressConfigurable;
	BOOL _randomMACFeatureEnabled;
	BOOL _randomMACSwitchOn;
	BOOL _connectedWithHardwareAddress;
	BOOL _current;
	BOOL _supportsAirportManagement;
	BOOL _knownNetwork;
	UIViewController*<WFNetworkView> _provider;
	NSString* _randomMACAddress;
	NSString* _hardwareMACAddress;
	/*^block*/id _actionHandler;
	NSArray* _recommendations;
	WFNetworkProfile* _profile;
	WFIPMonitor* _ipMonitor;
	NSString* _staticPrivateMACFooterText;
	NSString* _turnONPrivateMACFooterText;
	NSString* _turnOFFPrivateMACFooterText;
	WFNetworkScanRecord* _network;
	long long _requestedFields;
	WFKnownNetworkStore* _knownNetworkStore;
	WFDiagnosticsContext* _diagnosticsContext;

}

@property (nonatomic,retain) WFNetworkProfile * profile;                                                             //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) WFNetworkScanRecord * network;                                                          //@synthesize network=_network - In the implementation block
@property (assign,nonatomic) long long requestedFields;                                                              //@synthesize requestedFields=_requestedFields - In the implementation block
@property (nonatomic,retain) WFKnownNetworkStore * knownNetworkStore;                                                //@synthesize knownNetworkStore=_knownNetworkStore - In the implementation block
@property (assign,getter=isKnownNetwork,nonatomic) BOOL knownNetwork;                                                //@synthesize knownNetwork=_knownNetwork - In the implementation block
@property (nonatomic,retain) WFIPMonitor * ipMonitor;                                                                //@synthesize ipMonitor=_ipMonitor - In the implementation block
@property (nonatomic,retain) WFDiagnosticsContext * diagnosticsContext;                                              //@synthesize diagnosticsContext=_diagnosticsContext - In the implementation block
@property (assign,getter=isRandomMACAddressDisabled,nonatomic) BOOL randomMACAddressDisabled;                        //@synthesize randomMACAddressDisabled=_randomMACAddressDisabled - In the implementation block
@property (assign,getter=isConnectedWithHardwareAddress,nonatomic) BOOL connectedWithHardwareAddress;                //@synthesize connectedWithHardwareAddress=_connectedWithHardwareAddress - In the implementation block
@property (assign,getter=isRandomMACSwitchOn,nonatomic) BOOL randomMACSwitchOn;                                      //@synthesize randomMACSwitchOn=_randomMACSwitchOn - In the implementation block
@property (nonatomic,copy) id actionHandler;                                                                         //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,retain) NSArray * recommendations;                                                              //@synthesize recommendations=_recommendations - In the implementation block
@property (assign) BOOL diagnosable;                                                                                 //@synthesize diagnosable=_diagnosable - In the implementation block
@property (assign,getter=isCurrent,nonatomic) BOOL current;                                                          //@synthesize current=_current - In the implementation block
@property (assign,nonatomic) BOOL supportsAirportManagement;                                                         //@synthesize supportsAirportManagement=_supportsAirportManagement - In the implementation block
@property (nonatomic,copy) NSString * hardwareMACAddress;                                                            //@synthesize hardwareMACAddress=_hardwareMACAddress - In the implementation block
@property (nonatomic,copy) NSString * staticPrivateMACFooterText;                                                    //@synthesize staticPrivateMACFooterText=_staticPrivateMACFooterText - In the implementation block
@property (nonatomic,copy) NSString * turnONPrivateMACFooterText;                                                    //@synthesize turnONPrivateMACFooterText=_turnONPrivateMACFooterText - In the implementation block
@property (nonatomic,copy) NSString * turnOFFPrivateMACFooterText;                                                   //@synthesize turnOFFPrivateMACFooterText=_turnOFFPrivateMACFooterText - In the implementation block
@property (assign,nonatomic) BOOL autoJoinEnabled;                                                                   //@synthesize autoJoinEnabled=_autoJoinEnabled - In the implementation block
@property (assign,nonatomic) BOOL autoLoginEnabled;                                                                  //@synthesize autoLoginEnabled=_autoLoginEnabled - In the implementation block
@property (assign,nonatomic) BOOL isInSaveDataMode;                                                                  //@synthesize isInSaveDataMode=_isInSaveDataMode - In the implementation block
@property (getter=isRandomMACAddressConfigurable,nonatomic,readonly) BOOL randomMACAddressConfigurable;              //@synthesize randomMACAddressConfigurable=_randomMACAddressConfigurable - In the implementation block
@property (getter=isRandomMACFeatureEnabled,nonatomic,readonly) BOOL randomMACFeatureEnabled;                        //@synthesize randomMACFeatureEnabled=_randomMACFeatureEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * randomMACAddress;                                                     //@synthesize randomMACAddress=_randomMACAddress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIViewController*<WFNetworkView> provider;                                       //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) BOOL needsDismissal; 
-(NSString *)description;
-(void)dealloc;
-(void)cancel;
-(void)setProvider:(UIViewController*<WFNetworkView>)arg1 ;
-(UIViewController*<WFNetworkView>)provider;
-(WFNetworkScanRecord *)network;
-(WFNetworkProfile *)profile;
-(void)setProfile:(WFNetworkProfile *)arg1 ;
-(id)actionHandler;
-(void)setActionHandler:(id)arg1 ;
-(void)setNetwork:(WFNetworkScanRecord *)arg1 ;
-(void)setCurrent:(BOOL)arg1 ;
-(void)forget;
-(BOOL)isCurrent;
-(long long)requestedFields;
-(void)setRequestedFields:(long long)arg1 ;
-(void)join;
-(void)manage;
-(BOOL)diagnosable;
-(void)setDiagnosable:(BOOL)arg1 ;
-(BOOL)autoJoinEnabled;
-(void)setAutoJoinEnabled:(BOOL)arg1 ;
-(BOOL)autoLoginEnabled;
-(void)setAutoLoginEnabled:(BOOL)arg1 ;
-(BOOL)isInSaveDataMode;
-(void)setIsInSaveDataMode:(BOOL)arg1 ;
-(NSString *)randomMACAddress;
-(NSString *)hardwareMACAddress;
-(void)setHardwareMACAddress:(NSString *)arg1 ;
-(BOOL)isRandomMACAddressDisabled;
-(BOOL)isRandomMACSwitchOn;
-(BOOL)isRandomMACAddressConfigurable;
-(WFDiagnosticsContext *)diagnosticsContext;
-(void)setRandomMACSwitchOn:(BOOL)arg1 ;
-(void)enableRandomMAC;
-(void)disableRandomMAC;
-(BOOL)isRandomMACFeatureEnabled;
-(void)openRecommendationLink;
-(NSString *)staticPrivateMACFooterText;
-(void)renewLease;
-(WFKnownNetworkStore *)knownNetworkStore;
-(WFIPMonitor *)ipMonitor;
-(id)initWithNetwork:(id)arg1 profile:(id)arg2 knownNetworkStore:(id)arg3 ipMonitor:(id)arg4 privateMACConfig:(id)arg5 ;
-(void)setRecommendations:(NSArray *)arg1 ;
-(void)setStaticPrivateMACFooterText:(NSString *)arg1 ;
-(void)setTurnONPrivateMACFooterText:(NSString *)arg1 ;
-(void)setTurnOFFPrivateMACFooterText:(NSString *)arg1 ;
-(NSArray *)recommendations;
-(BOOL)needsDismissal;
-(void)setKnownNetworkStore:(WFKnownNetworkStore *)arg1 ;
-(void)setIpMonitor:(WFIPMonitor *)arg1 ;
-(BOOL)isConnectedWithHardwareAddress;
-(BOOL)isKnownNetwork;
-(NSString *)turnONPrivateMACFooterText;
-(NSString *)turnOFFPrivateMACFooterText;
-(void)setRandomMACAddressDisabled:(BOOL)arg1 ;
-(void)setConnectedWithHardwareAddress:(BOOL)arg1 ;
-(BOOL)supportsAirportManagement;
-(void)setSupportsAirportManagement:(BOOL)arg1 ;
-(void)setKnownNetwork:(BOOL)arg1 ;
-(void)setDiagnosticsContext:(WFDiagnosticsContext *)arg1 ;
@end

