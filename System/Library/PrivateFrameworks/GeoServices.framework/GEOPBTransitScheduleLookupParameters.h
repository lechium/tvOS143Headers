/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSData;

@interface GEOPBTransitScheduleLookupParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _lineId;
	unsigned long long _referenceTripId;
	NSData* _routingParameters;
	unsigned long long _transitId;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasLineId; 
@property (assign,nonatomic) unsigned long long lineId; 
@property (assign,nonatomic) BOOL hasTransitId; 
@property (assign,nonatomic) unsigned long long transitId; 
@property (assign,nonatomic) BOOL hasReferenceTripId; 
@property (assign,nonatomic) unsigned long long referenceTripId; 
@property (nonatomic,readonly) BOOL hasRoutingParameters; 
@property (nonatomic,retain) NSData * routingParameters; 
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
-(NSData *)routingParameters;
-(void)setRoutingParameters:(NSData *)arg1 ;
-(BOOL)hasRoutingParameters;
-(void)setLineId:(unsigned long long)arg1 ;
-(BOOL)hasLineId;
-(unsigned long long)lineId;
-(void)setReferenceTripId:(unsigned long long)arg1 ;
-(unsigned long long)referenceTripId;
-(void)setHasReferenceTripId:(BOOL)arg1 ;
-(BOOL)hasReferenceTripId;
-(void)setHasLineId:(BOOL)arg1 ;
-(void)setTransitId:(unsigned long long)arg1 ;
-(unsigned long long)transitId;
-(void)setHasTransitId:(BOOL)arg1 ;
-(BOOL)hasTransitId;
@end

