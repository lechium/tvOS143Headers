/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WiFiAnalyticsAWDWiFiDPSActiveProbeStats : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _rttGatewayBE;
	unsigned _rttGatewayBK;
	unsigned _rttGatewayVI;
	unsigned _rttGatewayVO;
	unsigned _rttPrimaryDnsBE;
	unsigned _rttPrimaryDnsBK;
	unsigned _rttPrimaryDnsVI;
	unsigned _rttPrimaryDnsVO;
	SCD_Struct_Wi5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasRttGatewayBE; 
@property (assign,nonatomic) unsigned rttGatewayBE;                     //@synthesize rttGatewayBE=_rttGatewayBE - In the implementation block
@property (assign,nonatomic) BOOL hasRttGatewayBK; 
@property (assign,nonatomic) unsigned rttGatewayBK;                     //@synthesize rttGatewayBK=_rttGatewayBK - In the implementation block
@property (assign,nonatomic) BOOL hasRttGatewayVO; 
@property (assign,nonatomic) unsigned rttGatewayVO;                     //@synthesize rttGatewayVO=_rttGatewayVO - In the implementation block
@property (assign,nonatomic) BOOL hasRttGatewayVI; 
@property (assign,nonatomic) unsigned rttGatewayVI;                     //@synthesize rttGatewayVI=_rttGatewayVI - In the implementation block
@property (assign,nonatomic) BOOL hasRttPrimaryDnsBE; 
@property (assign,nonatomic) unsigned rttPrimaryDnsBE;                  //@synthesize rttPrimaryDnsBE=_rttPrimaryDnsBE - In the implementation block
@property (assign,nonatomic) BOOL hasRttPrimaryDnsBK; 
@property (assign,nonatomic) unsigned rttPrimaryDnsBK;                  //@synthesize rttPrimaryDnsBK=_rttPrimaryDnsBK - In the implementation block
@property (assign,nonatomic) BOOL hasRttPrimaryDnsVO; 
@property (assign,nonatomic) unsigned rttPrimaryDnsVO;                  //@synthesize rttPrimaryDnsVO=_rttPrimaryDnsVO - In the implementation block
@property (assign,nonatomic) BOOL hasRttPrimaryDnsVI; 
@property (assign,nonatomic) unsigned rttPrimaryDnsVI;                  //@synthesize rttPrimaryDnsVI=_rttPrimaryDnsVI - In the implementation block
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
-(void)setRttGatewayBE:(unsigned)arg1 ;
-(void)setHasRttGatewayBE:(BOOL)arg1 ;
-(BOOL)hasRttGatewayBE;
-(void)setRttGatewayBK:(unsigned)arg1 ;
-(void)setHasRttGatewayBK:(BOOL)arg1 ;
-(BOOL)hasRttGatewayBK;
-(void)setRttGatewayVO:(unsigned)arg1 ;
-(void)setHasRttGatewayVO:(BOOL)arg1 ;
-(BOOL)hasRttGatewayVO;
-(void)setRttGatewayVI:(unsigned)arg1 ;
-(void)setHasRttGatewayVI:(BOOL)arg1 ;
-(BOOL)hasRttGatewayVI;
-(void)setRttPrimaryDnsBE:(unsigned)arg1 ;
-(void)setHasRttPrimaryDnsBE:(BOOL)arg1 ;
-(BOOL)hasRttPrimaryDnsBE;
-(void)setRttPrimaryDnsBK:(unsigned)arg1 ;
-(void)setHasRttPrimaryDnsBK:(BOOL)arg1 ;
-(BOOL)hasRttPrimaryDnsBK;
-(void)setRttPrimaryDnsVO:(unsigned)arg1 ;
-(void)setHasRttPrimaryDnsVO:(BOOL)arg1 ;
-(BOOL)hasRttPrimaryDnsVO;
-(void)setRttPrimaryDnsVI:(unsigned)arg1 ;
-(void)setHasRttPrimaryDnsVI:(BOOL)arg1 ;
-(BOOL)hasRttPrimaryDnsVI;
-(unsigned)rttGatewayBE;
-(unsigned)rttGatewayBK;
-(unsigned)rttGatewayVO;
-(unsigned)rttGatewayVI;
-(unsigned)rttPrimaryDnsBE;
-(unsigned)rttPrimaryDnsBK;
-(unsigned)rttPrimaryDnsVO;
-(unsigned)rttPrimaryDnsVI;
@end

