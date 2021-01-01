/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNLocationTracker.h>
#import <libobjc.A.dylib/MNArrivalUpdaterDelegate.h>
#import <libobjc.A.dylib/MNEVChargingStateMonitorDelegate.h>

@protocol GEODirectionServiceTicket;
@class GEONavigationMapMatcher, MNArrivalUpdater, NSDate, GEODirectionsRequest, NSData, NSTimer, MNLocation, NSMutableArray, MNEVChargingStateMonitor, NSString;

@interface MNTurnByTurnLocationTracker : MNLocationTracker <MNArrivalUpdaterDelegate, MNEVChargingStateMonitorDelegate> {

	GEONavigationMapMatcher* _mapMatcher;
	MNArrivalUpdater* _arrivalUpdater;
	unsigned long long _lastArrivalLegIndex;
	NSDate* _startDate;
	SCD_Struct_MN6 _originCoordinate;
	id<GEODirectionServiceTicket> _rerouteTicket;
	GEODirectionsRequest* _request;
	NSData* _serverSessionState;
	unsigned long long _rerouteReason;
	long long _responseErrorCode;
	unsigned long long _responseErrorCount;
	unsigned long long _recalculationNetworkUnreachableCount;
	NSTimer* _recalculationRetryTimer;
	MNLocation* _previousRerouteLocation;
	NSMutableArray* _rerouteDates;
	unsigned long long _consecutiveOffRouteCount;
	MNLocation* _lastKnownGoodLocationOnRoute;
	BOOL _isNavigatingInLowGuidance;
	MNEVChargingStateMonitor* _evChargingStateMonitor;

}

@property (nonatomic,copy) NSData * serverSessionState;              //@synthesize serverSessionState=_serverSessionState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)_matchedLocationForLocation:(id)arg1 ;
-(id)initWithNavigationSession:(id)arg1 ;
-(BOOL)isRerouting;
-(void)startTracking;
-(void)stopTracking;
-(void)updateDestination:(id)arg1 finishedHandler:(/*^block*/id)arg2 ;
-(void)reroute:(id)arg1 reason:(unsigned long long)arg2 ;
-(void)updateLocation:(id)arg1 ;
-(void)_setIsNavigatingInLowGuidance:(BOOL)arg1 ;
-(void)traceJumpedInTime;
-(void)forceOnRoute:(id)arg1 atLocation:(id)arg2 ;
-(void)evChargingStateMonitorShouldShowChargingInfo:(id)arg1 ;
-(void)_updateForArrivalAtLegIndex:(unsigned long long)arg1 ;
-(void)setServerSessionState:(NSData *)arg1 ;
-(NSData *)serverSessionState;
-(id)_newMapMatcherForRoute:(id)arg1 ;
-(id)_overrideLocationForLocation:(id)arg1 ;
-(void)_updateForLocation:(id)arg1 ;
-(void)_updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4 ;
-(int)_detectedMotionForLocation:(id)arg1 ;
-(BOOL)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2 ;
-(id)_alternateRouteForOffRouteLocation:(id)arg1 ;
-(id)_matchedLocationForMatchResult:(id)arg1 originalLocation:(id)arg2 ;
-(void)arrivalUpdater:(id)arg1 didArriveAtEndOfLegAtIndex:(unsigned long long)arg2 ;
-(void)arrivalUpdater:(id)arg1 didEnterPreArrivalStateForLegIndex:(unsigned long long)arg2 ;
-(void)arrivalUpdaterDidTimeoutInArrivalRegion:(id)arg1 ;
-(void)_reroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4 ;
-(void)_requestDirectionsForLocation:(id)arg1 destination:(id)arg2 transportType:(int)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)_allowRerouteForLocation:(id)arg1 outError:(out id*)arg2 ;
-(BOOL)_isRoadFeatureInOppositeDirection:(SCD_Struct_MN5*)arg1 ofCoordinate:(SCD_Struct_MN6)arg2 course:(double)arg3 ;
-(BOOL)_shouldAdvanceGuidanceToRouteMatch:(id)arg1 ;
-(int)_routeHintTypeFromGEOTransportType:(int)arg1 ;
-(id)_evInfoForRoute:(id)arg1 ;
-(BOOL)_isCameraTestMode;
-(void)_failedToRecalculateRouteWithError:(id)arg1 ;
-(id)_rerouteTicketForLocation:(id)arg1 transportType:(int)arg2 ;
-(id)_ticketForNewDestination:(id)arg1 fromLocation:(id)arg2 transportType:(int)arg3 ;
-(void)_submitRerouteTicketWithHandler:(/*^block*/id)arg1 ;
-(void)_handleOffRouteForLocation:(id)arg1 ;
-(void)_retryLastRouteRecalculation;
-(void)_recalculationRetryTimerFired:(id)arg1 ;
-(void)_sendRouteHintForLocation:(id)arg1 ;
-(BOOL)_hasArrivedAtFinalDestination;
-(void)_updateStateForLocation:(id)arg1 ;
-(void)_updateSwitchTransportTypeForLocation:(id)arg1 ;
-(void)_updateForDepartureAtLegIndex:(unsigned long long)arg1 ;
-(void)evChargingStateMonitor:(id)arg1 didReachTargetBatteryCharge:(id)arg2 ;
-(id)initForTestingWithRoute:(id)arg1 ;
@end

