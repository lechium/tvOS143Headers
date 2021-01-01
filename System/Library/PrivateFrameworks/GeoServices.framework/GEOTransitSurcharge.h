/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOTransitSurcharge : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _surchargeUnits;
	unsigned _numberOfLegs;
	int _paymentType;
	struct {
		unsigned has_numberOfLegs : 1;
		unsigned has_paymentType : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * surchargeUnits; 
@property (assign,nonatomic) BOOL hasPaymentType; 
@property (assign,nonatomic) int paymentType; 
@property (assign,nonatomic) BOOL hasNumberOfLegs; 
@property (assign,nonatomic) unsigned numberOfLegs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)surchargeUnitType;
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
-(void)setPaymentType:(int)arg1 ;
-(void)setNumberOfLegs:(unsigned)arg1 ;
-(int)paymentType;
-(void)setHasPaymentType:(BOOL)arg1 ;
-(BOOL)hasPaymentType;
-(id)paymentTypeAsString:(int)arg1 ;
-(int)StringAsPaymentType:(id)arg1 ;
-(unsigned)numberOfLegs;
-(void)setHasNumberOfLegs:(BOOL)arg1 ;
-(BOOL)hasNumberOfLegs;
-(void)addSurchargeUnit:(id)arg1 ;
-(unsigned long long)surchargeUnitsCount;
-(void)clearSurchargeUnits;
-(id)surchargeUnitAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)surchargeUnits;
-(void)setSurchargeUnits:(NSMutableArray *)arg1 ;
@end
