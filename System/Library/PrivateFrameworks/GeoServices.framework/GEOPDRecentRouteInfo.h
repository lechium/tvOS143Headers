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

@class PBDataReader, PBUnknownFields, NSData, NSMutableArray;

@interface GEOPDRecentRouteInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSData* _etaFilter;
	NSData* _evChargingMetadata;
	NSData* _originalWaypointRoute;
	NSData* _routeId;
	NSData* _sessionState;
	NSMutableArray* _zilchPointSegments;
	NSData* _zilchPoints;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _preferredTransportType;
	struct {
		unsigned has_preferredTransportType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_etaFilter : 1;
		unsigned read_evChargingMetadata : 1;
		unsigned read_originalWaypointRoute : 1;
		unsigned read_routeId : 1;
		unsigned read_sessionState : 1;
		unsigned read_zilchPointSegments : 1;
		unsigned read_zilchPoints : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints; 
@property (nonatomic,readonly) BOOL hasSessionState; 
@property (nonatomic,retain) NSData * sessionState; 
@property (nonatomic,readonly) BOOL hasRouteId; 
@property (nonatomic,retain) NSData * routeId; 
@property (assign,nonatomic) BOOL hasPreferredTransportType; 
@property (assign,nonatomic) int preferredTransportType; 
@property (nonatomic,readonly) BOOL hasEtaFilter; 
@property (nonatomic,retain) NSData * etaFilter; 
@property (nonatomic,retain) NSMutableArray * zilchPointSegments; 
@property (nonatomic,readonly) BOOL hasEvChargingMetadata; 
@property (nonatomic,retain) NSData * evChargingMetadata; 
@property (nonatomic,readonly) BOOL hasOriginalWaypointRoute; 
@property (nonatomic,retain) NSData * originalWaypointRoute; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)zilchPointSegmentType;
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
-(void)setZilchPoints:(NSData *)arg1 ;
-(NSData *)zilchPoints;
-(NSData *)etaFilter;
-(void)setEtaFilter:(NSData *)arg1 ;
-(BOOL)hasEtaFilter;
-(NSData *)sessionState;
-(NSData *)routeId;
-(NSMutableArray *)zilchPointSegments;
-(NSData *)evChargingMetadata;
-(NSData *)originalWaypointRoute;
-(void)setSessionState:(NSData *)arg1 ;
-(void)setRouteId:(NSData *)arg1 ;
-(void)setPreferredTransportType:(int)arg1 ;
-(void)addZilchPointSegment:(id)arg1 ;
-(void)setEvChargingMetadata:(NSData *)arg1 ;
-(void)setOriginalWaypointRoute:(NSData *)arg1 ;
-(unsigned long long)zilchPointSegmentsCount;
-(void)clearZilchPointSegments;
-(id)zilchPointSegmentAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasZilchPoints;
-(BOOL)hasSessionState;
-(BOOL)hasRouteId;
-(int)preferredTransportType;
-(void)setHasPreferredTransportType:(BOOL)arg1 ;
-(BOOL)hasPreferredTransportType;
-(id)preferredTransportTypeAsString:(int)arg1 ;
-(int)StringAsPreferredTransportType:(id)arg1 ;
-(void)setZilchPointSegments:(NSMutableArray *)arg1 ;
-(BOOL)hasEvChargingMetadata;
-(BOOL)hasOriginalWaypointRoute;
@end

