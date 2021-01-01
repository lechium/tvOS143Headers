/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOMapRegion;

@interface GEOPDViewportInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOMapRegion* _mapRegion;
	int _mapType;
	unsigned _timeSinceMapViewportChanged;
	struct {
		unsigned has_mapType : 1;
		unsigned has_timeSinceMapViewportChanged : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (assign,nonatomic) BOOL hasTimeSinceMapViewportChanged; 
@property (assign,nonatomic) unsigned timeSinceMapViewportChanged; 
@property (assign,nonatomic) BOOL hasMapType; 
@property (assign,nonatomic) int mapType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)viewportInfoForTraits:(id)arg1 ;
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
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasMapRegion;
-(void)setMapType:(int)arg1 ;
-(BOOL)hasMapType;
-(int)mapType;
-(void)setTimeSinceMapViewportChanged:(unsigned)arg1 ;
-(unsigned)timeSinceMapViewportChanged;
-(void)setHasTimeSinceMapViewportChanged:(BOOL)arg1 ;
-(BOOL)hasTimeSinceMapViewportChanged;
-(void)setHasMapType:(BOOL)arg1 ;
-(id)mapTypeAsString:(int)arg1 ;
-(int)StringAsMapType:(id)arg1 ;
-(id)initWithTraits:(id)arg1 ;
@end

