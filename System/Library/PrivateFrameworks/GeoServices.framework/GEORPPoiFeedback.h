/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPPoiCorrections, GEOPDPlaceRequest, GEOPDPlace, GEORPCuratedCollectionContext;

@interface GEORPPoiFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPPoiCorrections* _corrections;
	GEOPDPlaceRequest* _placeRequest;
	GEOPDPlace* _place;
	GEORPCuratedCollectionContext* _poiCuratedCollectionContext;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _correctionType;
	BOOL _addOtherPoi;
	struct {
		unsigned has_correctionType : 1;
		unsigned has_addOtherPoi : 1;
		unsigned read_unknownFields : 1;
		unsigned read_corrections : 1;
		unsigned read_placeRequest : 1;
		unsigned read_place : 1;
		unsigned read_poiCuratedCollectionContext : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasCorrectionType; 
@property (assign,nonatomic) int correctionType; 
@property (nonatomic,readonly) BOOL hasCorrections; 
@property (nonatomic,retain) GEORPPoiCorrections * corrections; 
@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place; 
@property (nonatomic,readonly) BOOL hasPlaceRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * placeRequest; 
@property (assign,nonatomic) BOOL hasAddOtherPoi; 
@property (assign,nonatomic) BOOL addOtherPoi; 
@property (nonatomic,readonly) BOOL hasPoiCuratedCollectionContext; 
@property (nonatomic,retain) GEORPCuratedCollectionContext * poiCuratedCollectionContext; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
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
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasPlace;
-(GEOPDPlace *)place;
-(GEOPDPlaceRequest *)placeRequest;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(void)setPlaceRequest:(GEOPDPlaceRequest *)arg1 ;
-(BOOL)hasPlaceRequest;
-(void)setCorrectionType:(int)arg1 ;
-(int)correctionType;
-(void)setHasCorrectionType:(BOOL)arg1 ;
-(BOOL)hasCorrectionType;
-(id)correctionTypeAsString:(int)arg1 ;
-(int)StringAsCorrectionType:(id)arg1 ;
-(GEORPPoiCorrections *)corrections;
-(void)setCorrections:(GEORPPoiCorrections *)arg1 ;
-(BOOL)hasCorrections;
-(GEORPCuratedCollectionContext *)poiCuratedCollectionContext;
-(void)setAddOtherPoi:(BOOL)arg1 ;
-(void)setPoiCuratedCollectionContext:(GEORPCuratedCollectionContext *)arg1 ;
-(BOOL)addOtherPoi;
-(void)setHasAddOtherPoi:(BOOL)arg1 ;
-(BOOL)hasAddOtherPoi;
-(BOOL)hasPoiCuratedCollectionContext;
@end

