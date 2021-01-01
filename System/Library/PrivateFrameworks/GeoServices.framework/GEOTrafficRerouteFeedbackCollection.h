/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSData, NSMutableArray;

@interface GEOTrafficRerouteFeedbackCollection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSData* _directionResponseID;
	NSData* _oldRouteID;
	NSMutableArray* _oldRouteIncidents;
	NSData* _reroutedRouteID;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _oldRouteHistoricTravelTime;
	unsigned _oldRouteTravelTime;
	unsigned _reroutedRouteHistoricTravelTime;
	unsigned _reroutedRouteTravelTime;
	BOOL _oldRouteBlocked;
	struct {
		unsigned has_oldRouteHistoricTravelTime : 1;
		unsigned has_oldRouteTravelTime : 1;
		unsigned has_reroutedRouteHistoricTravelTime : 1;
		unsigned has_reroutedRouteTravelTime : 1;
		unsigned has_oldRouteBlocked : 1;
		unsigned read_directionResponseID : 1;
		unsigned read_oldRouteID : 1;
		unsigned read_oldRouteIncidents : 1;
		unsigned read_reroutedRouteID : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasOldRouteTravelTime; 
@property (assign,nonatomic) unsigned oldRouteTravelTime; 
@property (assign,nonatomic) BOOL hasReroutedRouteTravelTime; 
@property (assign,nonatomic) unsigned reroutedRouteTravelTime; 
@property (assign,nonatomic) BOOL hasOldRouteHistoricTravelTime; 
@property (assign,nonatomic) unsigned oldRouteHistoricTravelTime; 
@property (assign,nonatomic) BOOL hasReroutedRouteHistoricTravelTime; 
@property (assign,nonatomic) unsigned reroutedRouteHistoricTravelTime; 
@property (assign,nonatomic) BOOL hasOldRouteBlocked; 
@property (assign,nonatomic) BOOL oldRouteBlocked; 
@property (nonatomic,retain) NSMutableArray * oldRouteIncidents; 
@property (nonatomic,readonly) BOOL hasDirectionResponseID; 
@property (nonatomic,retain) NSData * directionResponseID; 
@property (nonatomic,readonly) BOOL hasOldRouteID; 
@property (nonatomic,retain) NSData * oldRouteID; 
@property (nonatomic,readonly) BOOL hasReroutedRouteID; 
@property (nonatomic,retain) NSData * reroutedRouteID; 
+(BOOL)isValid:(id)arg1 ;
+(Class)oldRouteIncidentsType;
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
-(NSData *)directionResponseID;
-(NSData *)oldRouteID;
-(NSData *)reroutedRouteID;
-(void)setOldRouteTravelTime:(unsigned)arg1 ;
-(void)setReroutedRouteTravelTime:(unsigned)arg1 ;
-(void)setOldRouteHistoricTravelTime:(unsigned)arg1 ;
-(void)setReroutedRouteHistoricTravelTime:(unsigned)arg1 ;
-(void)setOldRouteBlocked:(BOOL)arg1 ;
-(void)addOldRouteIncidents:(id)arg1 ;
-(void)setDirectionResponseID:(NSData *)arg1 ;
-(void)setOldRouteID:(NSData *)arg1 ;
-(void)setReroutedRouteID:(NSData *)arg1 ;
-(unsigned long long)oldRouteIncidentsCount;
-(void)clearOldRouteIncidents;
-(id)oldRouteIncidentsAtIndex:(unsigned long long)arg1 ;
-(unsigned)oldRouteTravelTime;
-(void)setHasOldRouteTravelTime:(BOOL)arg1 ;
-(BOOL)hasOldRouteTravelTime;
-(unsigned)reroutedRouteTravelTime;
-(void)setHasReroutedRouteTravelTime:(BOOL)arg1 ;
-(BOOL)hasReroutedRouteTravelTime;
-(unsigned)oldRouteHistoricTravelTime;
-(void)setHasOldRouteHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasOldRouteHistoricTravelTime;
-(unsigned)reroutedRouteHistoricTravelTime;
-(void)setHasReroutedRouteHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasReroutedRouteHistoricTravelTime;
-(BOOL)oldRouteBlocked;
-(void)setHasOldRouteBlocked:(BOOL)arg1 ;
-(BOOL)hasOldRouteBlocked;
-(NSMutableArray *)oldRouteIncidents;
-(void)setOldRouteIncidents:(NSMutableArray *)arg1 ;
-(BOOL)hasDirectionResponseID;
-(BOOL)hasOldRouteID;
-(BOOL)hasReroutedRouteID;
@end

