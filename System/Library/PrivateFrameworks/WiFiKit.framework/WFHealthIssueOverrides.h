/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WFHealthIssueOverrides : NSObject {

	BOOL _noInternetConnection;
	BOOL _hiddenNetwork;
	BOOL _commonSSID;
	BOOL _legacyPHY;
	BOOL _carrierNetwork;
	BOOL _dnsFiltered;
	long long _securityOverride;
	long long _privateAddressOverride;

}

@property (assign,nonatomic) BOOL noInternetConnection;                     //@synthesize noInternetConnection=_noInternetConnection - In the implementation block
@property (assign,nonatomic) BOOL hiddenNetwork;                            //@synthesize hiddenNetwork=_hiddenNetwork - In the implementation block
@property (assign,nonatomic) BOOL commonSSID;                               //@synthesize commonSSID=_commonSSID - In the implementation block
@property (assign,nonatomic) BOOL legacyPHY;                                //@synthesize legacyPHY=_legacyPHY - In the implementation block
@property (assign,nonatomic) BOOL carrierNetwork;                           //@synthesize carrierNetwork=_carrierNetwork - In the implementation block
@property (assign,nonatomic) BOOL dnsFiltered;                              //@synthesize dnsFiltered=_dnsFiltered - In the implementation block
@property (assign,nonatomic) long long securityOverride;                    //@synthesize securityOverride=_securityOverride - In the implementation block
@property (assign,nonatomic) long long privateAddressOverride;              //@synthesize privateAddressOverride=_privateAddressOverride - In the implementation block
-(BOOL)hiddenNetwork;
-(long long)securityOverride;
-(BOOL)noInternetConnection;
-(BOOL)legacyPHY;
-(BOOL)commonSSID;
-(BOOL)carrierNetwork;
-(BOOL)dnsFiltered;
-(long long)privateAddressOverride;
-(void)setNoInternetConnection:(BOOL)arg1 ;
-(void)setHiddenNetwork:(BOOL)arg1 ;
-(void)setCommonSSID:(BOOL)arg1 ;
-(void)setLegacyPHY:(BOOL)arg1 ;
-(void)setCarrierNetwork:(BOOL)arg1 ;
-(void)setDnsFiltered:(BOOL)arg1 ;
-(void)setSecurityOverride:(long long)arg1 ;
-(void)setPrivateAddressOverride:(long long)arg1 ;
@end

