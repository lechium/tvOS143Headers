/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOETAUpdaterDelegate;
@class NSString, GEOETATrafficUpdateRequest, GEOLocation, GEORouteMatch, GEOComposedRoute, GEOComposedWaypoint, GEORouteAttributes, GEOComposedETARoute, NSTimer, NSData, GEOCommonOptions, GEOApplicationAuditToken;

@interface GEOETAUpdater : NSObject {

	id<GEOETAUpdaterDelegate> _delegate;
	NSString* _requestingAppIdentifier;
	GEOETATrafficUpdateRequest* _currentETARequest;
	GEOLocation* _userLocation;
	GEORouteMatch* _routeMatch;
	GEOComposedRoute* _route;
	GEOComposedWaypoint* _destination;
	GEORouteAttributes* _routeAttributes;
	GEOComposedETARoute* _etaRoute;
	long long _etaState;
	BOOL _allowRequests;
	BOOL _shouldUseConditionalRequest;
	BOOL _shouldUpdateTrafficOnRoute;
	double _requestInterval;
	NSTimer* _etaIdleTimer;
	double _lastETARequestTime;
	double _debugTimeWindowDuration;
	unsigned long long _maxAlternateRoutesCount;
	NSData* _directionsResponseID;
	GEOCommonOptions* _commonOptions;
	GEOApplicationAuditToken* _auditToken;

}

@property (nonatomic,readonly) BOOL requestInProgress; 
@property (assign,nonatomic,__weak) id<GEOETAUpdaterDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * requestingAppIdentifier;                      //@synthesize requestingAppIdentifier=_requestingAppIdentifier - In the implementation block
@property (nonatomic,retain) GEOComposedRoute * route;                                //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) GEORouteMatch * routeMatch;                              //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,retain) GEOLocation * userLocation;                              //@synthesize userLocation=_userLocation - In the implementation block
@property (nonatomic,retain) GEOComposedWaypoint * destination;                       //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) GEORouteAttributes * routeAttributes;                    //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (nonatomic,retain) NSData * directionsResponseID;                           //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (nonatomic,retain) GEOApplicationAuditToken * auditToken;                   //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) BOOL allowRequests;                                      //@synthesize allowRequests=_allowRequests - In the implementation block
@property (assign,nonatomic) BOOL shouldUseConditionalRequest;                        //@synthesize shouldUseConditionalRequest=_shouldUseConditionalRequest - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateTrafficOnRoute;                         //@synthesize shouldUpdateTrafficOnRoute=_shouldUpdateTrafficOnRoute - In the implementation block
@property (assign,nonatomic) double requestInterval;                                  //@synthesize requestInterval=_requestInterval - In the implementation block
@property (assign,nonatomic) double debugTimeWindowDuration;                          //@synthesize debugTimeWindowDuration=_debugTimeWindowDuration - In the implementation block
@property (assign,nonatomic) unsigned long long maxAlternateRoutesCount;              //@synthesize maxAlternateRoutesCount=_maxAlternateRoutesCount - In the implementation block
-(id)init;
-(void)dealloc;
-(id<GEOETAUpdaterDelegate>)delegate;
-(void)setDelegate:(id<GEOETAUpdaterDelegate>)arg1 ;
-(GEOApplicationAuditToken *)auditToken;
-(void)reset;
-(void)setDestination:(GEOComposedWaypoint *)arg1 ;
-(GEOComposedWaypoint *)destination;
-(void)cancelRequest;
-(GEOLocation *)userLocation;
-(void)setUserLocation:(GEOLocation *)arg1 ;
-(double)_currentTime;
-(double)requestInterval;
-(void)setRequestInterval:(double)arg1 ;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(NSData *)directionsResponseID;
-(GEOComposedRoute *)route;
-(GEORouteAttributes *)routeAttributes;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(GEORouteMatch *)routeMatch;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
-(void)setAuditToken:(GEOApplicationAuditToken *)arg1 ;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(void)_clearTimer;
-(void)_continueUpdateRequests;
-(id)_updateOrCreateRequest:(id)arg1 ;
-(void)_sendRequest:(id)arg1 ;
-(BOOL)_shouldStartConditionalETARequest;
-(void)_startConditionalConnectionETARequest;
-(void)_updateRequest:(id)arg1 ;
-(void)_addRouteAttributesToRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_trafficRequest:(id)arg1 finished:(id)arg2 ;
-(double)_calculateNextTransitionTime;
-(void)_startStateWaitingForBestTimeStart:(id)arg1 ;
-(id)initWithRoute:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3 ;
-(BOOL)requestInProgress;
-(void)requestUpdate;
-(void)startUpdateRequests;
-(void)stopUpdateRequests;
-(id)currentStep;
-(NSString *)requestingAppIdentifier;
-(void)setRequestingAppIdentifier:(NSString *)arg1 ;
-(BOOL)allowRequests;
-(void)setAllowRequests:(BOOL)arg1 ;
-(BOOL)shouldUseConditionalRequest;
-(void)setShouldUseConditionalRequest:(BOOL)arg1 ;
-(BOOL)shouldUpdateTrafficOnRoute;
-(void)setShouldUpdateTrafficOnRoute:(BOOL)arg1 ;
-(double)debugTimeWindowDuration;
-(void)setDebugTimeWindowDuration:(double)arg1 ;
-(unsigned long long)maxAlternateRoutesCount;
-(void)setMaxAlternateRoutesCount:(unsigned long long)arg1 ;
@end

