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

@class NSMutableArray, WiFiAnalyticsAWDSlowWiFiNotification;

@interface WiFiAnalyticsAWDWiFiSlowWiFiReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _linkQualSamples;
	WiFiAnalyticsAWDSlowWiFiNotification* _slowNotice;
	SCD_Struct_Wi1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSlowNotice; 
@property (nonatomic,retain) WiFiAnalyticsAWDSlowWiFiNotification * slowNotice;              //@synthesize slowNotice=_slowNotice - In the implementation block
@property (nonatomic,retain) NSMutableArray * linkQualSamples;                               //@synthesize linkQualSamples=_linkQualSamples - In the implementation block
+(Class)linkQualSampleType;
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
-(void)setSlowNotice:(WiFiAnalyticsAWDSlowWiFiNotification *)arg1 ;
-(void)setLinkQualSamples:(NSMutableArray *)arg1 ;
-(void)addLinkQualSample:(id)arg1 ;
-(unsigned long long)linkQualSamplesCount;
-(void)clearLinkQualSamples;
-(id)linkQualSampleAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSlowNotice;
-(WiFiAnalyticsAWDSlowWiFiNotification *)slowNotice;
-(NSMutableArray *)linkQualSamples;
@end

