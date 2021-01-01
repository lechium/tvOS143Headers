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

@class PBDataReader, NSMutableArray, NSString, GEOLocation, GEOLatLng;

@interface GEOLogMsgEventDirections : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEONavigationAudioFeedback _navigationAudioFeedback;
	GEOSessionID _navSessionId;
	NSMutableArray* _directionsFeedbacks;
	NSMutableArray* _durationInNavigationModes;
	double _durationOfTrip;
	NSString* _evChargingMode;
	NSString* _evConsumptionModel;
	GEOLocation* _finalLocation;
	GEOLatLng* _tripOrigin;
	NSMutableArray* _waypoints;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _originalEta;
	unsigned _stateOfChargeAtDestActual;
	unsigned _stateOfChargeAtDestPredicted;
	unsigned _stateOfChargeAtOrigin;
	unsigned _stateOfChargeDiffAtDest;
	BOOL _acceptedCyclingWorkout;
	BOOL _arrivedAtDestination;
	BOOL _batteryDied;
	BOOL _chargingStopAdded;
	BOOL _isBadEvExperience;
	BOOL _isCoarseLocationUsed;
	BOOL _isCyclingNlgAvailable;
	BOOL _isEvSampleTrip;
	BOOL _isSiriEngaged;
	BOOL _isVlfImprovementUsed;
	BOOL _preArrival;
	struct {
		unsigned has_navigationAudioFeedback : 1;
		unsigned has_navSessionId : 1;
		unsigned has_durationOfTrip : 1;
		unsigned has_originalEta : 1;
		unsigned has_stateOfChargeAtDestActual : 1;
		unsigned has_stateOfChargeAtDestPredicted : 1;
		unsigned has_stateOfChargeAtOrigin : 1;
		unsigned has_stateOfChargeDiffAtDest : 1;
		unsigned has_acceptedCyclingWorkout : 1;
		unsigned has_arrivedAtDestination : 1;
		unsigned has_batteryDied : 1;
		unsigned has_chargingStopAdded : 1;
		unsigned has_isBadEvExperience : 1;
		unsigned has_isCoarseLocationUsed : 1;
		unsigned has_isCyclingNlgAvailable : 1;
		unsigned has_isEvSampleTrip : 1;
		unsigned has_isSiriEngaged : 1;
		unsigned has_isVlfImprovementUsed : 1;
		unsigned has_preArrival : 1;
		unsigned read_directionsFeedbacks : 1;
		unsigned read_durationInNavigationModes : 1;
		unsigned read_evChargingMode : 1;
		unsigned read_evConsumptionModel : 1;
		unsigned read_finalLocation : 1;
		unsigned read_tripOrigin : 1;
		unsigned read_waypoints : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * directionsFeedbacks; 
@property (nonatomic,readonly) BOOL hasFinalLocation; 
@property (nonatomic,retain) GEOLocation * finalLocation; 
@property (assign,nonatomic) BOOL hasArrivedAtDestination; 
@property (assign,nonatomic) BOOL arrivedAtDestination; 
@property (assign,nonatomic) BOOL hasNavigationAudioFeedback; 
@property (assign,nonatomic) GEONavigationAudioFeedback navigationAudioFeedback; 
@property (assign,nonatomic) BOOL hasDurationOfTrip; 
@property (assign,nonatomic) double durationOfTrip; 
@property (assign,nonatomic) BOOL hasNavSessionId; 
@property (assign,nonatomic) GEOSessionID navSessionId; 
@property (nonatomic,retain) NSMutableArray * durationInNavigationModes; 
@property (assign,nonatomic) BOOL hasOriginalEta; 
@property (assign,nonatomic) unsigned originalEta; 
@property (assign,nonatomic) BOOL hasPreArrival; 
@property (assign,nonatomic) BOOL preArrival; 
@property (assign,nonatomic) BOOL hasIsCyclingNlgAvailable; 
@property (assign,nonatomic) BOOL isCyclingNlgAvailable; 
@property (assign,nonatomic) BOOL hasIsCoarseLocationUsed; 
@property (assign,nonatomic) BOOL isCoarseLocationUsed; 
@property (assign,nonatomic) BOOL hasIsVlfImprovementUsed; 
@property (assign,nonatomic) BOOL isVlfImprovementUsed; 
@property (assign,nonatomic) BOOL hasAcceptedCyclingWorkout; 
@property (assign,nonatomic) BOOL acceptedCyclingWorkout; 
@property (assign,nonatomic) BOOL hasBatteryDied; 
@property (assign,nonatomic) BOOL batteryDied; 
@property (assign,nonatomic) BOOL hasChargingStopAdded; 
@property (assign,nonatomic) BOOL chargingStopAdded; 
@property (assign,nonatomic) BOOL hasIsSiriEngaged; 
@property (assign,nonatomic) BOOL isSiriEngaged; 
@property (nonatomic,readonly) BOOL hasTripOrigin; 
@property (nonatomic,retain) GEOLatLng * tripOrigin; 
@property (assign,nonatomic) BOOL hasIsBadEvExperience; 
@property (assign,nonatomic) BOOL isBadEvExperience; 
@property (assign,nonatomic) BOOL hasIsEvSampleTrip; 
@property (assign,nonatomic) BOOL isEvSampleTrip; 
@property (assign,nonatomic) BOOL hasStateOfChargeAtOrigin; 
@property (assign,nonatomic) unsigned stateOfChargeAtOrigin; 
@property (assign,nonatomic) BOOL hasStateOfChargeAtDestPredicted; 
@property (assign,nonatomic) unsigned stateOfChargeAtDestPredicted; 
@property (assign,nonatomic) BOOL hasStateOfChargeAtDestActual; 
@property (assign,nonatomic) unsigned stateOfChargeAtDestActual; 
@property (assign,nonatomic) BOOL hasStateOfChargeDiffAtDest; 
@property (assign,nonatomic) unsigned stateOfChargeDiffAtDest; 
@property (nonatomic,retain) NSMutableArray * waypoints; 
@property (nonatomic,readonly) BOOL hasEvConsumptionModel; 
@property (nonatomic,retain) NSString * evConsumptionModel; 
@property (nonatomic,readonly) BOOL hasEvChargingMode; 
@property (nonatomic,retain) NSString * evChargingMode; 
+(BOOL)isValid:(id)arg1 ;
+(Class)directionsFeedbackType;
+(Class)waypointsType;
+(Class)durationInNavigationModeType;
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
-(GEOLocation *)finalLocation;
-(void)addDirectionsFeedback:(id)arg1 ;
-(void)setFinalLocation:(GEOLocation *)arg1 ;
-(void)setArrivedAtDestination:(BOOL)arg1 ;
-(void)setNavigationAudioFeedback:(GEONavigationAudioFeedback)arg1 ;
-(void)setDurationOfTrip:(double)arg1 ;
-(unsigned long long)directionsFeedbacksCount;
-(void)clearDirectionsFeedbacks;
-(id)directionsFeedbackAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)directionsFeedbacks;
-(void)setDirectionsFeedbacks:(NSMutableArray *)arg1 ;
-(BOOL)hasFinalLocation;
-(BOOL)arrivedAtDestination;
-(void)setHasArrivedAtDestination:(BOOL)arg1 ;
-(BOOL)hasArrivedAtDestination;
-(GEONavigationAudioFeedback)navigationAudioFeedback;
-(void)setHasNavigationAudioFeedback:(BOOL)arg1 ;
-(BOOL)hasNavigationAudioFeedback;
-(double)durationOfTrip;
-(void)setHasDurationOfTrip:(BOOL)arg1 ;
-(BOOL)hasDurationOfTrip;
-(NSMutableArray *)waypoints;
-(void)addWaypoints:(id)arg1 ;
-(unsigned long long)waypointsCount;
-(void)clearWaypoints;
-(id)waypointsAtIndex:(unsigned long long)arg1 ;
-(void)setWaypoints:(NSMutableArray *)arg1 ;
-(void)setTripOrigin:(GEOLatLng *)arg1 ;
-(void)setChargingStopAdded:(BOOL)arg1 ;
-(void)setIsCoarseLocationUsed:(BOOL)arg1 ;
-(BOOL)batteryDied;
-(void)setBatteryDied:(BOOL)arg1 ;
-(BOOL)isBadEvExperience;
-(void)setIsBadEvExperience:(BOOL)arg1 ;
-(unsigned)stateOfChargeAtOrigin;
-(void)setStateOfChargeAtOrigin:(unsigned)arg1 ;
-(unsigned)stateOfChargeAtDestPredicted;
-(void)setStateOfChargeAtDestPredicted:(unsigned)arg1 ;
-(unsigned)stateOfChargeAtDestActual;
-(void)setStateOfChargeAtDestActual:(unsigned)arg1 ;
-(NSString *)evConsumptionModel;
-(void)setEvConsumptionModel:(NSString *)arg1 ;
-(void)setNavSessionId:(GEOSessionID)arg1 ;
-(void)setDurationInNavigationModes:(NSMutableArray *)arg1 ;
-(void)setPreArrival:(BOOL)arg1 ;
-(void)setOriginalEta:(unsigned)arg1 ;
-(void)setIsCyclingNlgAvailable:(BOOL)arg1 ;
-(void)setIsVlfImprovementUsed:(BOOL)arg1 ;
-(void)setAcceptedCyclingWorkout:(BOOL)arg1 ;
-(void)setIsSiriEngaged:(BOOL)arg1 ;
-(void)setIsEvSampleTrip:(BOOL)arg1 ;
-(void)setStateOfChargeDiffAtDest:(unsigned)arg1 ;
-(void)setEvChargingMode:(NSString *)arg1 ;
-(GEOLatLng *)tripOrigin;
-(BOOL)hasTripOrigin;
-(NSString *)evChargingMode;
-(void)addDurationInNavigationMode:(id)arg1 ;
-(unsigned long long)durationInNavigationModesCount;
-(void)clearDurationInNavigationModes;
-(id)durationInNavigationModeAtIndex:(unsigned long long)arg1 ;
-(GEOSessionID)navSessionId;
-(void)setHasNavSessionId:(BOOL)arg1 ;
-(BOOL)hasNavSessionId;
-(NSMutableArray *)durationInNavigationModes;
-(unsigned)originalEta;
-(void)setHasOriginalEta:(BOOL)arg1 ;
-(BOOL)hasOriginalEta;
-(BOOL)preArrival;
-(void)setHasPreArrival:(BOOL)arg1 ;
-(BOOL)hasPreArrival;
-(BOOL)isCyclingNlgAvailable;
-(void)setHasIsCyclingNlgAvailable:(BOOL)arg1 ;
-(BOOL)hasIsCyclingNlgAvailable;
-(BOOL)isCoarseLocationUsed;
-(void)setHasIsCoarseLocationUsed:(BOOL)arg1 ;
-(BOOL)hasIsCoarseLocationUsed;
-(BOOL)isVlfImprovementUsed;
-(void)setHasIsVlfImprovementUsed:(BOOL)arg1 ;
-(BOOL)hasIsVlfImprovementUsed;
-(BOOL)acceptedCyclingWorkout;
-(void)setHasAcceptedCyclingWorkout:(BOOL)arg1 ;
-(BOOL)hasAcceptedCyclingWorkout;
-(void)setHasBatteryDied:(BOOL)arg1 ;
-(BOOL)hasBatteryDied;
-(BOOL)chargingStopAdded;
-(void)setHasChargingStopAdded:(BOOL)arg1 ;
-(BOOL)hasChargingStopAdded;
-(BOOL)isSiriEngaged;
-(void)setHasIsSiriEngaged:(BOOL)arg1 ;
-(BOOL)hasIsSiriEngaged;
-(void)setHasIsBadEvExperience:(BOOL)arg1 ;
-(BOOL)hasIsBadEvExperience;
-(BOOL)isEvSampleTrip;
-(void)setHasIsEvSampleTrip:(BOOL)arg1 ;
-(BOOL)hasIsEvSampleTrip;
-(void)setHasStateOfChargeAtOrigin:(BOOL)arg1 ;
-(BOOL)hasStateOfChargeAtOrigin;
-(void)setHasStateOfChargeAtDestPredicted:(BOOL)arg1 ;
-(BOOL)hasStateOfChargeAtDestPredicted;
-(void)setHasStateOfChargeAtDestActual:(BOOL)arg1 ;
-(BOOL)hasStateOfChargeAtDestActual;
-(unsigned)stateOfChargeDiffAtDest;
-(void)setHasStateOfChargeDiffAtDest:(BOOL)arg1 ;
-(BOOL)hasStateOfChargeDiffAtDest;
-(BOOL)hasEvConsumptionModel;
-(BOOL)hasEvChargingMode;
@end

