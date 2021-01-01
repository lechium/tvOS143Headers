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

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOTransitDecoderData : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _accessPoints;
	NSMutableArray* _artworks;
	NSMutableArray* _halls;
	NSMutableArray* _lines;
	NSMutableArray* _stations;
	NSMutableArray* _steps;
	NSMutableArray* _stops;
	NSMutableArray* _systems;
	NSMutableArray* _transitIncidentMessages;
	NSMutableArray* _transitIncidents;
	NSMutableArray* _walkings;
	NSMutableArray* _zilchPoints;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_accessPoints : 1;
		unsigned read_artworks : 1;
		unsigned read_halls : 1;
		unsigned read_lines : 1;
		unsigned read_stations : 1;
		unsigned read_steps : 1;
		unsigned read_stops : 1;
		unsigned read_systems : 1;
		unsigned read_transitIncidentMessages : 1;
		unsigned read_transitIncidents : 1;
		unsigned read_walkings : 1;
		unsigned read_zilchPoints : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * stations; 
@property (nonatomic,retain) NSMutableArray * lines; 
@property (nonatomic,retain) NSMutableArray * accessPoints; 
@property (nonatomic,retain) NSMutableArray * walkings; 
@property (nonatomic,retain) NSMutableArray * stops; 
@property (nonatomic,retain) NSMutableArray * zilchPoints; 
@property (nonatomic,retain) NSMutableArray * systems; 
@property (nonatomic,retain) NSMutableArray * transitIncidents; 
@property (nonatomic,retain) NSMutableArray * halls; 
@property (nonatomic,retain) NSMutableArray * artworks; 
@property (nonatomic,retain) NSMutableArray * transitIncidentMessages; 
@property (nonatomic,retain) NSMutableArray * steps; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)stationType;
+(Class)lineType;
+(Class)accessPointType;
+(Class)walkingType;
+(Class)stopType;
+(Class)zilchPointsType;
+(Class)systemType;
+(Class)transitIncidentType;
+(Class)hallType;
+(Class)artworkType;
+(Class)transitIncidentMessageType;
+(Class)stepType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)addLine:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)steps;
-(unsigned long long)accessPointsCount;
-(void)clearAccessPoints;
-(NSMutableArray *)accessPoints;
-(void)setAccessPoints:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)stepsCount;
-(NSMutableArray *)stops;
-(NSMutableArray *)lines;
-(void)setZilchPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)zilchPoints;
-(void)addStation:(id)arg1 ;
-(void)addAccessPoint:(id)arg1 ;
-(void)addWalking:(id)arg1 ;
-(void)addStop:(id)arg1 ;
-(void)addZilchPoints:(id)arg1 ;
-(void)addSystem:(id)arg1 ;
-(void)addTransitIncident:(id)arg1 ;
-(void)addHall:(id)arg1 ;
-(void)addArtwork:(id)arg1 ;
-(void)addTransitIncidentMessage:(id)arg1 ;
-(void)addStep:(id)arg1 ;
-(unsigned long long)stationsCount;
-(void)clearStations;
-(id)stationAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)linesCount;
-(void)clearLines;
-(id)lineAtIndex:(unsigned long long)arg1 ;
-(id)accessPointAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)walkingsCount;
-(void)clearWalkings;
-(id)walkingAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)stopsCount;
-(void)clearStops;
-(id)stopAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)zilchPointsCount;
-(void)clearZilchPoints;
-(id)zilchPointsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)systemsCount;
-(void)clearSystems;
-(id)systemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)transitIncidentsCount;
-(void)clearTransitIncidents;
-(id)transitIncidentAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hallsCount;
-(void)clearHalls;
-(id)hallAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)artworksCount;
-(void)clearArtworks;
-(id)artworkAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)transitIncidentMessagesCount;
-(void)clearTransitIncidentMessages;
-(id)transitIncidentMessageAtIndex:(unsigned long long)arg1 ;
-(void)clearSteps;
-(id)stepAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)stations;
-(void)setStations:(NSMutableArray *)arg1 ;
-(void)setLines:(NSMutableArray *)arg1 ;
-(NSMutableArray *)walkings;
-(void)setWalkings:(NSMutableArray *)arg1 ;
-(void)setStops:(NSMutableArray *)arg1 ;
-(NSMutableArray *)systems;
-(void)setSystems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)transitIncidents;
-(void)setTransitIncidents:(NSMutableArray *)arg1 ;
-(NSMutableArray *)halls;
-(void)setHalls:(NSMutableArray *)arg1 ;
-(NSMutableArray *)artworks;
-(void)setArtworks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)transitIncidentMessages;
-(void)setTransitIncidentMessages:(NSMutableArray *)arg1 ;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(id)artworkFromIndices:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

