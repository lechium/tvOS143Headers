/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSData;

@interface GEOURLRouteHandle : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSData* _directionsResponseID;
	NSData* _routeID;
	NSData* _transitData;
	NSData* _zilchPoints;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_directionsResponseID : 1;
		unsigned read_routeID : 1;
		unsigned read_transitData : 1;
		unsigned read_zilchPoints : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID; 
@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID; 
@property (nonatomic,readonly) BOOL hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints; 
@property (nonatomic,readonly) BOOL hasTransitData; 
@property (nonatomic,retain) NSData * transitData; 
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
-(NSData *)routeID;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(void)setRouteID:(NSData *)arg1 ;
-(void)setZilchPoints:(NSData *)arg1 ;
-(void)setTransitData:(NSData *)arg1 ;
-(NSData *)directionsResponseID;
-(NSData *)zilchPoints;
-(NSData *)transitData;
-(BOOL)hasZilchPoints;
-(BOOL)hasRouteID;
-(BOOL)hasDirectionsResponseID;
-(BOOL)hasTransitData;
@end
