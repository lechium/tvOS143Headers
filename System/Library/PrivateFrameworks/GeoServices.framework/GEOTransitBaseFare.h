/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitFare.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDecimalNumber, NSString, NSArray, PBDataReader, PBUnknownFields, GEOTransitPrice, NSMutableArray;

@interface GEOTransitBaseFare : PBCodable <GEOTransitFare, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTransitPrice* _price;
	NSMutableArray* _supportedPaymentMethods;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _numberOfLegs;
	int _paymentType;
	BOOL _cashOnly;
	struct {
		unsigned has_numberOfLegs : 1;
		unsigned has_paymentType : 1;
		unsigned has_cashOnly : 1;
		unsigned read_unknownFields : 1;
		unsigned read_price : 1;
		unsigned read_supportedPaymentMethods : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSDecimalNumber * value; 
@property (nonatomic,copy,readonly) NSString * currencyCode; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSArray * supportedICCardProviders; 
@property (nonatomic,readonly) BOOL cashOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasPrice; 
@property (nonatomic,retain) GEOTransitPrice * price; 
@property (assign,nonatomic) BOOL hasPaymentType; 
@property (assign,nonatomic) int paymentType; 
@property (assign,nonatomic) BOOL hasNumberOfLegs; 
@property (assign,nonatomic) unsigned numberOfLegs; 
@property (nonatomic,retain) NSMutableArray * supportedPaymentMethods; 
@property (assign,nonatomic) BOOL hasCashOnly; 
@property (assign,nonatomic) BOOL cashOnly; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)supportedPaymentMethodType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)currencyCode;
-(NSDecimalNumber *)value;
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
-(GEOTransitPrice *)price;
-(void)setPrice:(GEOTransitPrice *)arg1 ;
-(void)setPaymentType:(int)arg1 ;
-(void)setNumberOfLegs:(unsigned)arg1 ;
-(void)addSupportedPaymentMethod:(id)arg1 ;
-(void)setCashOnly:(BOOL)arg1 ;
-(unsigned long long)supportedPaymentMethodsCount;
-(void)clearSupportedPaymentMethods;
-(id)supportedPaymentMethodAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPrice;
-(int)paymentType;
-(void)setHasPaymentType:(BOOL)arg1 ;
-(BOOL)hasPaymentType;
-(id)paymentTypeAsString:(int)arg1 ;
-(int)StringAsPaymentType:(id)arg1 ;
-(unsigned)numberOfLegs;
-(void)setHasNumberOfLegs:(BOOL)arg1 ;
-(BOOL)hasNumberOfLegs;
-(NSMutableArray *)supportedPaymentMethods;
-(void)setSupportedPaymentMethods:(NSMutableArray *)arg1 ;
-(BOOL)cashOnly;
-(void)setHasCashOnly:(BOOL)arg1 ;
-(BOOL)hasCashOnly;
-(NSArray *)supportedICCardProviders;
@end
