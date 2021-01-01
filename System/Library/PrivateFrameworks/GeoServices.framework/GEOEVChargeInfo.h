/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOEVChargeInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _gainedBatteryPercentage;
	unsigned _chargingTime;
	unsigned _gainedBatteryCharge;
	unsigned _gainedTravelRange;
	struct {
		unsigned has_gainedBatteryPercentage : 1;
		unsigned has_chargingTime : 1;
		unsigned has_gainedBatteryCharge : 1;
		unsigned has_gainedTravelRange : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasChargingTime; 
@property (assign,nonatomic) unsigned chargingTime; 
@property (assign,nonatomic) BOOL hasGainedBatteryPercentage; 
@property (assign,nonatomic) double gainedBatteryPercentage; 
@property (assign,nonatomic) BOOL hasGainedTravelRange; 
@property (assign,nonatomic) unsigned gainedTravelRange; 
@property (assign,nonatomic) BOOL hasGainedBatteryCharge; 
@property (assign,nonatomic) unsigned gainedBatteryCharge; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setChargingTime:(unsigned)arg1 ;
-(void)setGainedBatteryPercentage:(double)arg1 ;
-(void)setGainedTravelRange:(unsigned)arg1 ;
-(void)setGainedBatteryCharge:(unsigned)arg1 ;
-(unsigned)chargingTime;
-(void)setHasChargingTime:(BOOL)arg1 ;
-(BOOL)hasChargingTime;
-(double)gainedBatteryPercentage;
-(void)setHasGainedBatteryPercentage:(BOOL)arg1 ;
-(BOOL)hasGainedBatteryPercentage;
-(unsigned)gainedTravelRange;
-(void)setHasGainedTravelRange:(BOOL)arg1 ;
-(BOOL)hasGainedTravelRange;
-(unsigned)gainedBatteryCharge;
-(void)setHasGainedBatteryCharge:(BOOL)arg1 ;
-(BOOL)hasGainedBatteryCharge;
@end

