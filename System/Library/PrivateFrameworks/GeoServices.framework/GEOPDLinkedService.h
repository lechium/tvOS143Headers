/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDEntity, NSMutableArray, GEOPDPlaceInfo;

@interface GEOPDLinkedService : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDEntity* _entity;
	NSMutableArray* _hours;
	GEOPDPlaceInfo* _placeInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_entity : 1;
		unsigned read_hours : 1;
		unsigned read_placeInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasEntity; 
@property (nonatomic,retain) GEOPDEntity * entity; 
@property (nonatomic,readonly) BOOL hasPlaceInfo; 
@property (nonatomic,retain) GEOPDPlaceInfo * placeInfo; 
@property (nonatomic,retain) NSMutableArray * hours; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)hoursType;
+(id)linkedServicesForPlaceData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)hours;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOPDEntity *)entity;
-(void)setEntity:(GEOPDEntity *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDPlaceInfo *)placeInfo;
-(BOOL)hasPlaceInfo;
-(BOOL)hasEntity;
-(void)setHours:(NSMutableArray *)arg1 ;
-(void)setPlaceInfo:(GEOPDPlaceInfo *)arg1 ;
-(void)addHours:(id)arg1 ;
-(unsigned long long)hoursCount;
-(void)clearHours;
-(id)hoursAtIndex:(unsigned long long)arg1 ;
@end

