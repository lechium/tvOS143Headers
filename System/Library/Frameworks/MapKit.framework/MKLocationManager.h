/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/MKLocationProviderDelegate.h>

@protocol MKLocationProvider, MNLocationRecorder;
@class NSHashTable, CLLocation, NSMutableArray, NSTimer, GEOLocationShifter, CLHeading, NSLock, geo_isolater, NSError, GEOLocation, NSBundle, NSString;

@interface MKLocationManager : NSObject <GEOResourceManifestTileGroupObserver, MKLocationProviderDelegate> {

	id<MKLocationProvider> _locationProvider;
	NSHashTable* _locationObservers;
	NSHashTable* _locationListeners;
	NSHashTable* _headingObservers;
	CLLocation* _lastLocation;
	CLLocation* _lastGoodLocation;
	double _lastLocationUpdateTime;
	BOOL _isLastLocationStale;
	BOOL _lastLocationPushed;
	BOOL _trackingLocation;
	BOOL _trackingHeading;
	id<MNLocationRecorder> _locationRecorder;
	double _applicationResumeTime;
	double _applicationSuspendTime;
	double _headingUpdateTime;
	double _locationAccuracyUpdateTime;
	double _locationUpdateStartTime;
	BOOL _isReceivingAccurateLocations;
	NSMutableArray* _waitForAccurateLocationsHandlers;
	NSTimer* _waitForAccurateLocationsTimer;
	double _lastLocationReportTime;
	GEOLocationShifter* _locationShifter;
	CLHeading* _throttledHeading;
	CLHeading* _heading;
	NSTimer* _headingThrottlingTimer;
	/*^block*/id _networkActivity;
	BOOL _enabled;
	BOOL _useCourseForHeading;
	double _lastVehicleHeading;
	double _lastVehicleSpeed;
	double _lastVehicleHeadingUpdateTime;
	double _lastVehicleSpeedUpdateTime;
	int _consecutiveOutOfCourseCount;
	double _navCourse;
	/*^block*/id _locationCorrector;
	double _minimumLocationUpdateInterval;
	BOOL _continuedAfterBecomingInactive;
	BOOL _suspended;
	NSMutableArray* _recentLocationUpdateIntervals;
	NSLock* _lastLocationLock;
	NSLock* _observersLock;
	int _preciseLocationAuthorizationState;
	BOOL _temporaryPreciseLocationAuthorizationPromptShown;
	geo_isolater* _authorizedForPreciseLocationIsolater;
	BOOL _hasCustomDesiredAccuracy;
	BOOL _continuesWhileInactive;
	BOOL _logStartStopLocationUpdates;
	NSError* _locationError;

}

@property (nonatomic,readonly) int lastLocationSource; 
@property (nonatomic,retain) id<MKLocationProvider> locationProvider; 
@property (nonatomic,copy) id locationCorrector;                                                                                           //@synthesize locationCorrector=_locationCorrector - In the implementation block
@property (assign,nonatomic) BOOL logStartStopLocationUpdates;                                                                             //@synthesize logStartStopLocationUpdates=_logStartStopLocationUpdates - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                                                //@synthesize enabled=_enabled - In the implementation block
@property (getter=isLocationServicesAuthorizationNeeded,nonatomic,readonly) BOOL locationServicesAuthorizationNeeded; 
@property (nonatomic,readonly) BOOL isLocationServicesAvailable; 
@property (nonatomic,readonly) BOOL isLocationServicesPossiblyAvailable; 
@property (nonatomic,readonly) BOOL isLocationServicesEnabled; 
@property (nonatomic,readonly) BOOL isLocationServicesApproved; 
@property (nonatomic,readonly) BOOL isLocationServicesDenied; 
@property (nonatomic,readonly) BOOL isLocationServicesRestricted; 
@property (nonatomic,readonly) BOOL isHeadingServicesAvailable; 
@property (nonatomic,readonly) BOOL isAuthorizedForPreciseLocation; 
@property (nonatomic,readonly) BOOL isTemporaryPreciseLocationAuthorizationPromptShown; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (nonatomic,readonly) double headingUpdateTimeInterval; 
@property (nonatomic,readonly) GEOLocation * currentLocation; 
@property (nonatomic,readonly) GEOLocation * gridSnappedCurrentLocation; 
@property (nonatomic,readonly) GEOLocation * courseCorrectedLocation; 
@property (assign,nonatomic) long long headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,readonly) CLLocation * lastLocation; 
@property (nonatomic,readonly) CLLocation * lastGoodLocation;                                                                              //@synthesize lastGoodLocation=_lastGoodLocation - In the implementation block
@property (nonatomic,readonly) BOOL isLastLocationStale;                                                                                   //@synthesize isLastLocationStale=_isLastLocationStale - In the implementation block
@property (nonatomic,readonly) NSError * locationError;                                                                                    //@synthesize locationError=_locationError - In the implementation block
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) BOOL matchInfoEnabled; 
@property (assign,nonatomic) BOOL fusionInfoEnabled; 
@property (nonatomic,readonly) CLLocation * lastProviderLocation; 
@property (assign,nonatomic) long long activityType; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) double timeScale; 
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) BOOL useCourseForHeading;                                                                                     //@synthesize useCourseForHeading=_useCourseForHeading - In the implementation block
@property (nonatomic,readonly) CLHeading * heading;                                                                                        //@synthesize heading=_heading - In the implementation block
@property (nonatomic,retain) CLHeading * throttledHeading;                                                                                 //@synthesize throttledHeading=_throttledHeading - In the implementation block
@property (nonatomic,readonly) double currentVehicleHeading; 
@property (nonatomic,readonly) double currentVehicleSpeed; 
@property (nonatomic,readonly) double vehicleHeadingOrCourse; 
@property (nonatomic,copy) id networkActivity;                                                                                             //@synthesize networkActivity=_networkActivity - In the implementation block
@property (nonatomic,retain) id<MNLocationRecorder> locationRecorder;                                                                      //@synthesize locationRecorder=_locationRecorder - In the implementation block
@property (nonatomic,readonly) double navigationCourse;                                                                                    //@synthesize navCourse=_navCourse - In the implementation block
@property (assign,nonatomic) double minimumLocationUpdateInterval;                                                                         //@synthesize minimumLocationUpdateInterval=_minimumLocationUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL continuesWhileInactive;                                                                                  //@synthesize continuesWhileInactive=_continuesWhileInactive - In the implementation block
@property (getter=wasLastLocationPushed,nonatomic,readonly) BOOL lastLocationPushed;                                                       //@synthesize lastLocationPushed=_lastLocationPushed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)timeoutError;
+(id)sharedLocationManager;
+(void)setCanMonitorWiFiStatus:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_suspend;
-(void)setEnabled:(BOOL)arg1 ;
-(void)reset;
-(long long)activityType;
-(BOOL)isEnabled;
-(void)setActivityType:(long long)arg1 ;
-(CLHeading *)heading;
-(void)applicationWillResignActive:(id)arg1 ;
-(BOOL)hasLocation;
-(void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3 ;
-(void)setHeading:(CLHeading *)arg1 ;
-(GEOLocation *)currentLocation;
-(void)setLastLocation:(CLLocation *)arg1 ;
-(CLLocation *)lastLocation;
-(double)distanceFilter;
-(void)setDistanceFilter:(double)arg1 ;
-(double)desiredAccuracy;
-(void)setDesiredAccuracy:(double)arg1 ;
-(BOOL)matchInfoEnabled;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(BOOL)fusionInfoEnabled;
-(void)setFusionInfoEnabled:(BOOL)arg1 ;
-(void)requestWhenInUseAuthorization;
-(double)expectedGpsUpdateInterval;
-(void)setHeadingOrientation:(long long)arg1 ;
-(long long)headingOrientation;
-(void)dismissHeadingCalibrationDisplay;
-(BOOL)isAuthorizedForPreciseLocation;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(void)requestTemporaryPreciseLocationAuthorizationWithPurposeKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(void)setLocationRecorder:(id<MNLocationRecorder>)arg1 ;
-(void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 ;
-(void)locationProvider:(id)arg1 didReceiveError:(id)arg2 ;
-(void)locationProviderDidPauseLocationUpdates:(id)arg1 ;
-(void)locationProviderDidResumeLocationUpdates:(id)arg1 ;
-(void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2 ;
-(void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(NSBundle *)effectiveBundle;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(NSString *)effectiveBundleIdentifier;
-(id)authorizationRequestBlock;
-(void)setAuthorizationRequestBlock:(id)arg1 ;
-(double)timeScale;
-(void)locationProviderDidChangeAuthorizationStatus:(id)arg1 ;
-(BOOL)locationProviderShouldPauseLocationUpdates:(id)arg1 ;
-(id<MKLocationProvider>)locationProvider;
-(void)_setTrackingLocation:(BOOL)arg1 ;
-(void)setLocationProvider:(id<MKLocationProvider>)arg1 ;
-(void)_startLocationUpdateWithObserver:(id)arg1 desiredAccuracy:(double)arg2 ;
-(void)_setTrackingHeading:(BOOL)arg1 ;
-(void)_reportLocationSuccess;
-(void)_reportLocationReset;
-(BOOL)isLocationServicesPossiblyAvailable:(id*)arg1 ;
-(void)_reportLocationFailureWithError:(id)arg1 ;
-(void)_reportLocationStatus:(SEL)arg1 ;
-(BOOL)isLocationServicesDenied;
-(BOOL)isLocationServicesRestricted;
-(BOOL)isLocationServicesPossiblyAvailable;
-(BOOL)isLocationServicesApproved;
-(BOOL)isLocationServicesAvailable;
-(id<MNLocationRecorder>)locationRecorder;
-(void)setLocationCorrector:(id)arg1 ;
-(BOOL)isHeadingServicesAvailable;
-(void)startLocationUpdateWithObserver:(id)arg1 ;
-(void)stopLocationUpdateWithObserver:(id)arg1 ;
-(void)startHeadingUpdateWithObserver:(id)arg1 ;
-(void)stopHeadingUpdateWithObserver:(id)arg1 ;
-(void)pushLocation:(id)arg1 ;
-(BOOL)isLocationServicesAuthorizationNeeded;
-(id)locationCorrector;
-(BOOL)isLastLocationStale;
-(NSError *)locationError;
-(id)initWithCLLocationManager:(id)arg1 ;
-(double)currentVehicleHeading;
-(double)headingUpdateTimeInterval;
-(void)setThrottledHeading:(CLHeading *)arg1 ;
-(void)_useDefaultCoreLocationProvider;
-(void)_syncLocationProviderWithTracking;
-(CLHeading *)throttledHeading;
-(void)_reportHeadingSuccess;
-(BOOL)_isTimeToResetOnResume;
-(void)resetAfterResumeIfNecessary;
-(BOOL)continuesWhileInactive;
-(void)_setIsReceivingAccurateLocations:(BOOL)arg1 ;
-(BOOL)isLocationServicesEnabled;
-(void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3 ;
-(void)_locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3 ;
-(int)lastLocationSource;
-(BOOL)_shouldAllowLocationUpdateInterval:(double)arg1 ;
-(void)dampenGPSLocationAccuracy:(id*)arg1 oldLocationSource:(int)arg2 ;
-(id)observersDescription;
-(void)_waitForAccurateLocationsTimerFired:(id)arg1 ;
-(BOOL)isTemporaryPreciseLocationAuthorizationPromptShown;
-(CLLocation *)lastGoodLocation;
-(CLLocation *)lastProviderLocation;
-(GEOLocation *)gridSnappedCurrentLocation;
-(GEOLocation *)courseCorrectedLocation;
-(double)currentVehicleSpeed;
-(double)vehicleHeadingOrCourse;
-(void)setContinuesWhileInactive:(BOOL)arg1 ;
-(void)_reportHeadingFailureWithError:(id)arg1 ;
-(void)listenForLocationUpdates:(id)arg1 ;
-(void)stopListeningForLocationUpdates:(id)arg1 ;
-(void)waitForAccurateLocationWithTimeout:(double)arg1 handler:(/*^block*/id)arg2 ;
-(id)singleLocationUpdateWithHandler:(/*^block*/id)arg1 ;
-(id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(/*^block*/id)arg2 ;
-(id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(/*^block*/id)arg2 timeout:(double)arg3 ;
-(id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(/*^block*/id)arg2 timeout:(double)arg3 maxLocationAge:(double)arg4 ;
-(void)startVehicleSpeedUpdate;
-(void)stopVehicleSpeedUpdate;
-(void)startVehicleHeadingUpdate;
-(void)stopVehicleHeadingUpdate;
-(id)networkActivity;
-(void)setNetworkActivity:(id)arg1 ;
-(BOOL)useCourseForHeading;
-(void)setUseCourseForHeading:(BOOL)arg1 ;
-(double)navigationCourse;
-(BOOL)wasLastLocationPushed;
-(double)minimumLocationUpdateInterval;
-(void)setMinimumLocationUpdateInterval:(double)arg1 ;
-(BOOL)logStartStopLocationUpdates;
-(void)setLogStartStopLocationUpdates:(BOOL)arg1 ;
@end

