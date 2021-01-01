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

@class NSMutableArray;

@interface GEOLogMsgEventCommuteWindow : PBCodable <NSCopying> {

	NSMutableArray* _predictedDestinations;
	double _startTime;
	unsigned _duration;
	int _endReason;
	unsigned _numberOfAlertingResponses;
	unsigned _numberOfDoomRoutingRequests;
	unsigned _predictedExitTime;
	struct {
		unsigned has_startTime : 1;
		unsigned has_duration : 1;
		unsigned has_endReason : 1;
		unsigned has_numberOfAlertingResponses : 1;
		unsigned has_numberOfDoomRoutingRequests : 1;
		unsigned has_predictedExitTime : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration; 
@property (assign,nonatomic) BOOL hasPredictedExitTime; 
@property (assign,nonatomic) unsigned predictedExitTime; 
@property (assign,nonatomic) BOOL hasEndReason; 
@property (assign,nonatomic) int endReason; 
@property (nonatomic,retain) NSMutableArray * predictedDestinations; 
@property (assign,nonatomic) BOOL hasNumberOfDoomRoutingRequests; 
@property (assign,nonatomic) unsigned numberOfDoomRoutingRequests; 
@property (assign,nonatomic) BOOL hasNumberOfAlertingResponses; 
@property (assign,nonatomic) unsigned numberOfAlertingResponses; 
+(BOOL)isValid:(id)arg1 ;
+(Class)predictedDestinationType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setPredictedExitTime:(unsigned)arg1 ;
-(void)setEndReason:(int)arg1 ;
-(void)setNumberOfAlertingResponses:(unsigned)arg1 ;
-(void)setNumberOfDoomRoutingRequests:(unsigned)arg1 ;
-(NSMutableArray *)predictedDestinations;
-(void)setPredictedDestinations:(NSMutableArray *)arg1 ;
-(void)addPredictedDestination:(id)arg1 ;
-(unsigned long long)predictedDestinationsCount;
-(void)clearPredictedDestinations;
-(id)predictedDestinationAtIndex:(unsigned long long)arg1 ;
-(unsigned)predictedExitTime;
-(void)setHasPredictedExitTime:(BOOL)arg1 ;
-(BOOL)hasPredictedExitTime;
-(int)endReason;
-(void)setHasEndReason:(BOOL)arg1 ;
-(BOOL)hasEndReason;
-(id)endReasonAsString:(int)arg1 ;
-(int)StringAsEndReason:(id)arg1 ;
-(unsigned)numberOfDoomRoutingRequests;
-(void)setHasNumberOfDoomRoutingRequests:(BOOL)arg1 ;
-(BOOL)hasNumberOfDoomRoutingRequests;
-(unsigned)numberOfAlertingResponses;
-(void)setHasNumberOfAlertingResponses:(BOOL)arg1 ;
-(BOOL)hasNumberOfAlertingResponses;
@end

