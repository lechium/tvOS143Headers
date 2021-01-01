/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/MNLocationProvider.h>
#import <libobjc.A.dylib/MNTimeProvider.h>

@protocol MNLocationProviderDelegate;
@class NSMutableArray, MNTraceEventRecorder, NSDate, GEOComposedRoute, GEODirectionsRequest, GEODirectionsResponse, GEORouteAttributes, NSArray, NSDictionary, NSBundle, NSString;

@interface MNTraceRouteSimulator : NSObject <MNLocationProvider, MNTimeProvider> {

	double _time;
	NSMutableArray* _priorityQueue;
	MNTraceEventRecorder* _recorder;
	double _deltaT;
	double _horizontalAccuracy;
	double _verticalAccuracy;
	NSDate* _startTime;
	GEOComposedRoute* _route;
	GEODirectionsRequest* _request;
	GEODirectionsResponse* _response;
	GEORouteAttributes* _routeAttributes;
	SCD_Struct_MN6 _walkingStart;
	SCD_Struct_MN6 _walkingEnd;
	SCD_Struct_MN6 _origin;
	SCD_Struct_MN6 _destination;
	NSMutableArray* _mutableLocations;
	NSArray* _locations;
	NSDictionary* _pointTimestamps;
	double _duration;
	id<MNLocationProviderDelegate> _delegate;
	/*^block*/id _authorizationRequestBlock;
	NSArray* _traceEvents;
	double _simulationSpeedOverride;

}

@property (nonatomic,readonly) NSArray * locations;                                                                                        //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) NSArray * traceEvents;                                                                                      //@synthesize traceEvents=_traceEvents - In the implementation block
@property (assign,nonatomic) double horizontalAccuracy;                                                                                    //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) double simulationSpeedOverride;                                                                               //@synthesize simulationSpeedOverride=_simulationSpeedOverride - In the implementation block
@property (assign,nonatomic,__weak) id<MNLocationProviderDelegate> delegate;                                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) BOOL matchInfoEnabled; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock;                                                                                   //@synthesize authorizationRequestBlock=_authorizationRequestBlock - In the implementation block
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (nonatomic,readonly) BOOL coarseModeEnabled; 
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (nonatomic,readonly) BOOL isSimulation; 
@property (nonatomic,readonly) BOOL isTracePlayer; 
@property (nonatomic,readonly) unsigned long long traceVersion; 
@property (nonatomic,readonly) double timeScale; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double currentTime; 
-(id<MNLocationProviderDelegate>)delegate;
-(void)setDelegate:(id<MNLocationProviderDelegate>)arg1 ;
-(void)_setup;
-(void)_tearDown;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(double)horizontalAccuracy;
-(NSArray *)locations;
-(int)authorizationStatus;
-(double)currentTime;
-(BOOL)isSimulation;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(double)distanceFilter;
-(void)setDistanceFilter:(double)arg1 ;
-(double)desiredAccuracy;
-(void)setDesiredAccuracy:(double)arg1 ;
-(BOOL)matchInfoEnabled;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(void)startUpdatingHeading;
-(void)requestWhenInUseAuthorization;
-(double)expectedGpsUpdateInterval;
-(void)setHeadingOrientation:(int)arg1 ;
-(int)headingOrientation;
-(void)stopUpdatingHeading;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(id)currentDate;
-(void)navigationSessionDidStart:(id)arg1 isReconnecting:(BOOL)arg2 ;
-(void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2 ;
-(void)navigationSessionWillReroute:(id)arg1 ;
-(void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5 ;
-(void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 ;
-(void)navigationSession:(id)arg1 didAnnounce:(id)arg2 stage:(unsigned long long)arg3 ;
-(void)navigationSession:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8 ;
-(void)navigationSession:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 ;
-(void)navigationSessionHideSecondaryStep:(id)arg1 ;
-(void)navigationSession:(id)arg1 didAnnounceArrival:(id)arg2 ;
-(void)navigationSession:(id)arg1 didEnableGuidancePrompts:(BOOL)arg2 ;
-(void)insertVoiceEventAtTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(id)initWithRoute:(id)arg1 request:(id)arg2 response:(id)arg3 routeAttributes:(id)arg4 ;
-(void)setSimulationSpeedOverride:(double)arg1 ;
-(void)recordLocationsAlongRouteWithRecorder:(id)arg1 ;
-(BOOL)usesCLMapCorrection;
-(void)resetForActiveTileGroupChanged;
-(NSBundle *)effectiveBundle;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(NSString *)effectiveBundleIdentifier;
-(id)authorizationRequestBlock;
-(void)setAuthorizationRequestBlock:(id)arg1 ;
-(BOOL)coarseModeEnabled;
-(BOOL)isTracePlayer;
-(unsigned long long)traceVersion;
-(double)timeScale;
-(void)_addLocation:(SCD_Struct_MN6)arg1 withCourse:(double)arg2 altitude:(double)arg3 speed:(double)arg4 transport:(int)arg5 ;
-(void)generateLocations;
-(double)_estimateDuration;
-(void)_simulateWalkingFrom:(SCD_Struct_MN6)arg1 to:(SCD_Struct_MN6)arg2 ;
-(void)_generateLocationsWithSpeedOverride:(double)arg1 ;
-(void)_generateGuidanceWithRequest:(id)arg1 response:(id)arg2 routeAttributes:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_generateEvents;
-(id)initWithRoute:(id)arg1 request:(id)arg2 response:(id)arg3 routeAttributes:(id)arg4 locations:(id)arg5 ;
-(void)generateGuidance;
-(NSArray *)traceEvents;
-(double)simulationSpeedOverride;
@end

