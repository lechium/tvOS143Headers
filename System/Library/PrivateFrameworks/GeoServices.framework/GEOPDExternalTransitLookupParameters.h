/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString, GEOLocation;

@interface GEOPDExternalTransitLookupParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _externalTransitStationCodes;
	NSString* _sourceId;
	GEOLocation* _transactionLocation;
	double _transactionTimestamp;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_transactionTimestamp : 1;
		unsigned read_unknownFields : 1;
		unsigned read_externalTransitStationCodes : 1;
		unsigned read_sourceId : 1;
		unsigned read_transactionLocation : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTransactionTimestamp; 
@property (assign,nonatomic) double transactionTimestamp; 
@property (nonatomic,readonly) BOOL hasTransactionLocation; 
@property (nonatomic,retain) GEOLocation * transactionLocation; 
@property (nonatomic,readonly) BOOL hasSourceId; 
@property (nonatomic,retain) NSString * sourceId; 
@property (nonatomic,retain) NSMutableArray * externalTransitStationCodes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)externalTransitStationCodeType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)sourceId;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(GEOLocation *)transactionLocation;
-(NSMutableArray *)externalTransitStationCodes;
-(void)setTransactionTimestamp:(double)arg1 ;
-(void)setTransactionLocation:(GEOLocation *)arg1 ;
-(void)setSourceId:(NSString *)arg1 ;
-(void)addExternalTransitStationCode:(id)arg1 ;
-(BOOL)hasTransactionLocation;
-(unsigned long long)externalTransitStationCodesCount;
-(void)clearExternalTransitStationCodes;
-(id)externalTransitStationCodeAtIndex:(unsigned long long)arg1 ;
-(double)transactionTimestamp;
-(void)setHasTransactionTimestamp:(BOOL)arg1 ;
-(BOOL)hasTransactionTimestamp;
-(BOOL)hasSourceId;
-(void)setExternalTransitStationCodes:(NSMutableArray *)arg1 ;
@end

