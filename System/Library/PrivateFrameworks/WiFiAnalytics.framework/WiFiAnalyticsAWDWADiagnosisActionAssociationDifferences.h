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

@interface WiFiAnalyticsAWDWADiagnosisActionAssociationDifferences : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	BOOL _changedChannel;
	BOOL _changedDNSPrimary;
	BOOL _changedDNSSecondary;
	BOOL _changedMAC;
	BOOL _newBSSID;
	SCD_Struct_Wi12 _has;

}

@property (assign,nonatomic) BOOL hasNewBSSID; 
@property (assign,nonatomic) BOOL newBSSID;                             //@synthesize newBSSID=_newBSSID - In the implementation block
@property (assign,nonatomic) BOOL hasChangedChannel; 
@property (assign,nonatomic) BOOL changedChannel;                       //@synthesize changedChannel=_changedChannel - In the implementation block
@property (assign,nonatomic) BOOL hasChangedDNSPrimary; 
@property (assign,nonatomic) BOOL changedDNSPrimary;                    //@synthesize changedDNSPrimary=_changedDNSPrimary - In the implementation block
@property (assign,nonatomic) BOOL hasChangedDNSSecondary; 
@property (assign,nonatomic) BOOL changedDNSSecondary;                  //@synthesize changedDNSSecondary=_changedDNSSecondary - In the implementation block
@property (assign,nonatomic) BOOL hasChangedMAC; 
@property (assign,nonatomic) BOOL changedMAC;                           //@synthesize changedMAC=_changedMAC - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
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
-(void)setNewBSSID:(BOOL)arg1 ;
-(void)setHasNewBSSID:(BOOL)arg1 ;
-(BOOL)hasNewBSSID;
-(void)setChangedChannel:(BOOL)arg1 ;
-(void)setHasChangedChannel:(BOOL)arg1 ;
-(BOOL)hasChangedChannel;
-(void)setChangedDNSPrimary:(BOOL)arg1 ;
-(void)setHasChangedDNSPrimary:(BOOL)arg1 ;
-(BOOL)hasChangedDNSPrimary;
-(void)setChangedDNSSecondary:(BOOL)arg1 ;
-(void)setHasChangedDNSSecondary:(BOOL)arg1 ;
-(BOOL)hasChangedDNSSecondary;
-(void)setChangedMAC:(BOOL)arg1 ;
-(void)setHasChangedMAC:(BOOL)arg1 ;
-(BOOL)hasChangedMAC;
-(BOOL)newBSSID;
-(BOOL)changedChannel;
-(BOOL)changedDNSPrimary;
-(BOOL)changedDNSSecondary;
-(BOOL)changedMAC;
@end

