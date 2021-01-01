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

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDViewportInfo;

@interface GEOPDCollectionSuggestionParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _categoryIds;
	NSMutableArray* _geoIds;
	NSMutableArray* _publisherIds;
	double _requestLocalTimestamp;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_requestLocalTimestamp : 1;
		unsigned read_unknownFields : 1;
		unsigned read_categoryIds : 1;
		unsigned read_geoIds : 1;
		unsigned read_publisherIds : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (assign,nonatomic) BOOL hasRequestLocalTimestamp; 
@property (assign,nonatomic) double requestLocalTimestamp; 
@property (nonatomic,retain) NSMutableArray * publisherIds; 
@property (nonatomic,retain) NSMutableArray * geoIds; 
@property (nonatomic,retain) NSMutableArray * categoryIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)publisherIdType;
+(Class)geoIdType;
+(Class)categoryIdType;
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
-(unsigned long long)geoIdsCount;
-(void)clearGeoIds;
-(NSMutableArray *)geoIds;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(BOOL)hasViewportInfo;
-(void)addPublisherId:(id)arg1 ;
-(unsigned long long)publisherIdsCount;
-(void)clearPublisherIds;
-(id)publisherIdAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)publisherIds;
-(void)setPublisherIds:(NSMutableArray *)arg1 ;
-(void)setRequestLocalTimestamp:(double)arg1 ;
-(double)requestLocalTimestamp;
-(void)setHasRequestLocalTimestamp:(BOOL)arg1 ;
-(BOOL)hasRequestLocalTimestamp;
-(NSMutableArray *)categoryIds;
-(void)addGeoId:(id)arg1 ;
-(void)addCategoryId:(id)arg1 ;
-(id)geoIdAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)categoryIdsCount;
-(void)clearCategoryIds;
-(id)categoryIdAtIndex:(unsigned long long)arg1 ;
-(void)setGeoIds:(NSMutableArray *)arg1 ;
-(void)setCategoryIds:(NSMutableArray *)arg1 ;
@end

