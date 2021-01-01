/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgEventTimeToLeaveHypothesis : PBCodable <NSCopying> {

	double _earliestArrivalOffset;
	double _earliestDepartureOffset;
	double _latestArrivalOffset;
	double _latestDepartureOffset;
	int _arrival;
	int _departure;
	unsigned _numberOfReroutes;
	int _ttlUiNotificationShown;
	struct {
		unsigned has_earliestArrivalOffset : 1;
		unsigned has_earliestDepartureOffset : 1;
		unsigned has_latestArrivalOffset : 1;
		unsigned has_latestDepartureOffset : 1;
		unsigned has_arrival : 1;
		unsigned has_departure : 1;
		unsigned has_numberOfReroutes : 1;
		unsigned has_ttlUiNotificationShown : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDeparture; 
@property (assign,nonatomic) int departure; 
@property (assign,nonatomic) BOOL hasArrival; 
@property (assign,nonatomic) int arrival; 
@property (assign,nonatomic) BOOL hasNumberOfReroutes; 
@property (assign,nonatomic) unsigned numberOfReroutes; 
@property (assign,nonatomic) BOOL hasTtlUiNotificationShown; 
@property (assign,nonatomic) int ttlUiNotificationShown; 
@property (assign,nonatomic) BOOL hasEarliestDepartureOffset; 
@property (assign,nonatomic) double earliestDepartureOffset; 
@property (assign,nonatomic) BOOL hasLatestDepartureOffset; 
@property (assign,nonatomic) double latestDepartureOffset; 
@property (assign,nonatomic) BOOL hasEarliestArrivalOffset; 
@property (assign,nonatomic) double earliestArrivalOffset; 
@property (assign,nonatomic) BOOL hasLatestArrivalOffset; 
@property (assign,nonatomic) double latestArrivalOffset; 
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
-(void)setDeparture:(int)arg1 ;
-(void)setArrival:(int)arg1 ;
-(void)setNumberOfReroutes:(unsigned)arg1 ;
-(void)setEarliestDepartureOffset:(double)arg1 ;
-(void)setLatestDepartureOffset:(double)arg1 ;
-(void)setEarliestArrivalOffset:(double)arg1 ;
-(void)setLatestArrivalOffset:(double)arg1 ;
-(int)departure;
-(void)setHasDeparture:(BOOL)arg1 ;
-(BOOL)hasDeparture;
-(id)departureAsString:(int)arg1 ;
-(int)StringAsDeparture:(id)arg1 ;
-(int)arrival;
-(void)setHasArrival:(BOOL)arg1 ;
-(BOOL)hasArrival;
-(id)arrivalAsString:(int)arg1 ;
-(int)StringAsArrival:(id)arg1 ;
-(unsigned)numberOfReroutes;
-(void)setHasNumberOfReroutes:(BOOL)arg1 ;
-(BOOL)hasNumberOfReroutes;
-(double)earliestDepartureOffset;
-(void)setHasEarliestDepartureOffset:(BOOL)arg1 ;
-(BOOL)hasEarliestDepartureOffset;
-(double)latestDepartureOffset;
-(void)setHasLatestDepartureOffset:(BOOL)arg1 ;
-(BOOL)hasLatestDepartureOffset;
-(double)earliestArrivalOffset;
-(void)setHasEarliestArrivalOffset:(BOOL)arg1 ;
-(BOOL)hasEarliestArrivalOffset;
-(double)latestArrivalOffset;
-(void)setHasLatestArrivalOffset:(BOOL)arg1 ;
-(BOOL)hasLatestArrivalOffset;
-(void)setTtlUiNotificationShown:(int)arg1 ;
-(int)ttlUiNotificationShown;
-(void)setHasTtlUiNotificationShown:(BOOL)arg1 ;
-(BOOL)hasTtlUiNotificationShown;
-(id)ttlUiNotificationShownAsString:(int)arg1 ;
-(int)StringAsTtlUiNotificationShown:(id)arg1 ;
@end

