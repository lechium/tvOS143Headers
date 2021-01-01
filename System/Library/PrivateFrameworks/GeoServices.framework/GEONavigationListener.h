/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEONavigationServerListenerXPCInterface.h>

@protocol OS_dispatch_queue, GEONavigationListenerDelegate;
@class NSXPCConnection, NSObject, NSString;

@interface GEONavigationListener : NSObject <GEONavigationServerListenerXPCInterface> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	int _navigationStartedToken;
	int _navigationStoppedToken;
	int _navigationRoutePreviewToken;
	id<GEONavigationListenerDelegate> _delegate;
	/*^block*/id _routeSummaryUpdatedHandler;
	/*^block*/id _transitSummaryUpdatedHandler;
	/*^block*/id _guidanceStateUpdatedHandler;
	/*^block*/id _activeRouteDetailsDataUpdatedHandler;
	/*^block*/id _stepIndexUpdatedHandler;
	/*^block*/id _rideSelectionsUpdatedHandler;
	/*^block*/id _positionFromSignUpdatedHandler;
	/*^block*/id _positionFromManeuverUpdatedHandler;
	/*^block*/id _positionFromDestinationUpdatedHandler;
	/*^block*/id _navigationVoiceVolumeUpdatedHandler;
	unsigned long long _navigationState;
	int _transportType;
	NSString* _currentRoadName;

}

@property (assign,nonatomic,__weak) id<GEONavigationListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long navigationState;                           //@synthesize navigationState=_navigationState - In the implementation block
@property (nonatomic,readonly) NSString * currentRoadName;                                   //@synthesize currentRoadName=_currentRoadName - In the implementation block
@property (nonatomic,copy) id routeSummaryUpdatedHandler;                                    //@synthesize routeSummaryUpdatedHandler=_routeSummaryUpdatedHandler - In the implementation block
@property (nonatomic,copy) id transitSummaryUpdatedHandler;                                  //@synthesize transitSummaryUpdatedHandler=_transitSummaryUpdatedHandler - In the implementation block
@property (nonatomic,copy) id guidanceStateUpdatedHandler;                                   //@synthesize guidanceStateUpdatedHandler=_guidanceStateUpdatedHandler - In the implementation block
@property (nonatomic,copy) id activeRouteDetailsDataUpdatedHandler;                          //@synthesize activeRouteDetailsDataUpdatedHandler=_activeRouteDetailsDataUpdatedHandler - In the implementation block
@property (nonatomic,copy) id stepIndexUpdatedHandler;                                       //@synthesize stepIndexUpdatedHandler=_stepIndexUpdatedHandler - In the implementation block
@property (nonatomic,copy) id rideSelectionsUpdatedHandler;                                  //@synthesize rideSelectionsUpdatedHandler=_rideSelectionsUpdatedHandler - In the implementation block
@property (nonatomic,copy) id positionFromSignUpdatedHandler;                                //@synthesize positionFromSignUpdatedHandler=_positionFromSignUpdatedHandler - In the implementation block
@property (nonatomic,copy) id positionFromManeuverUpdatedHandler;                            //@synthesize positionFromManeuverUpdatedHandler=_positionFromManeuverUpdatedHandler - In the implementation block
@property (nonatomic,copy) id positionFromDestinationUpdatedHandler;                         //@synthesize positionFromDestinationUpdatedHandler=_positionFromDestinationUpdatedHandler - In the implementation block
@property (nonatomic,copy) id navigationVoiceVolumeUpdatedHandler;                           //@synthesize navigationVoiceVolumeUpdatedHandler=_navigationVoiceVolumeUpdatedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<GEONavigationListenerDelegate>)delegate;
-(void)setDelegate:(id<GEONavigationListenerDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)_open;
-(unsigned long long)navigationState;
-(void)_close;
-(void)requestRouteSummary;
-(void)_notifyWithRouteSummary:(id)arg1 ;
-(void)requestTransitSummary;
-(void)_notifyWithTransitSummary:(id)arg1 ;
-(void)requestGuidanceState;
-(void)_notifyWithGuidanceState:(id)arg1 ;
-(void)requestActiveRouteDetailsData;
-(void)_notifyWithActiveRouteDetailsData:(id)arg1 ;
-(void)requestStepIndex;
-(void)requestStepNameInfo;
-(void)_notifyWithStepIndex:(unsigned long long)arg1 ;
-(void)_notifyWithStepNameInfo:(id)arg1 ;
-(void)requestRideSelections;
-(void)_notifyWithRideSelections:(id)arg1 ;
-(void)requestPositionFromSign;
-(void)_notifyWithPositionFromSign:(GEOCoarseLocationLatLng)arg1 ;
-(void)requestPositionFromManeuver;
-(void)_notifyWithPositionFromManeuver:(GEOCoarseLocationLatLng)arg1 ;
-(void)requestPositionFromDestination;
-(void)_notifyWithPositionFromDestination:(GEOCoarseLocationLatLng)arg1 ;
-(void)requestNavigationVoiceVolume;
-(void)_notifyWithNavigationVoiceVolume:(int)arg1 ;
-(void)_connectToDaemonIfNeeded;
-(void)navigationStateChanged:(unsigned long long)arg1 transportType:(int)arg2 ;
-(void)routeSummaryUpdatedWithNavigationRouteSummaryData:(id)arg1 ;
-(void)routeSummaryUpdatedWithTransitSummaryData:(id)arg1 ;
-(void)routeSummaryUpdatedWithGuidanceStateData:(id)arg1 ;
-(void)routeSummaryUpdatedWithActiveRouteDetailsData:(id)arg1 ;
-(void)routeSummaryUpdatedWithStepIndexData:(id)arg1 ;
-(void)routeSummaryUpdatedWithStepNameInfoData:(id)arg1 ;
-(void)routeSummaryUpdatedWithRideSelectionData:(id)arg1 ;
-(void)routeSummaryUpdatedWithPositionFromSignData:(id)arg1 ;
-(void)routeSummaryUpdatedWithPositionFromManeuverData:(id)arg1 ;
-(void)routeSummaryUpdatedWithPositionFromDestinationData:(id)arg1 ;
-(void)navigationUpdatedWithVoiceVolumeData:(id)arg1 ;
-(void)currentRoadNameUpdated:(id)arg1 ;
-(unsigned long long)_listenerStateForSessionState:(unsigned long long)arg1 ;
-(NSString *)currentRoadName;
-(id)routeSummaryUpdatedHandler;
-(void)setRouteSummaryUpdatedHandler:(id)arg1 ;
-(id)transitSummaryUpdatedHandler;
-(void)setTransitSummaryUpdatedHandler:(id)arg1 ;
-(id)guidanceStateUpdatedHandler;
-(void)setGuidanceStateUpdatedHandler:(id)arg1 ;
-(id)activeRouteDetailsDataUpdatedHandler;
-(void)setActiveRouteDetailsDataUpdatedHandler:(id)arg1 ;
-(id)stepIndexUpdatedHandler;
-(void)setStepIndexUpdatedHandler:(id)arg1 ;
-(id)rideSelectionsUpdatedHandler;
-(void)setRideSelectionsUpdatedHandler:(id)arg1 ;
-(id)positionFromSignUpdatedHandler;
-(void)setPositionFromSignUpdatedHandler:(id)arg1 ;
-(id)positionFromManeuverUpdatedHandler;
-(void)setPositionFromManeuverUpdatedHandler:(id)arg1 ;
-(id)positionFromDestinationUpdatedHandler;
-(void)setPositionFromDestinationUpdatedHandler:(id)arg1 ;
-(id)navigationVoiceVolumeUpdatedHandler;
-(void)setNavigationVoiceVolumeUpdatedHandler:(id)arg1 ;
@end

