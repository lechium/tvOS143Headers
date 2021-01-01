/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/GEORoutePreloadStrategy.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class GEORoutePreloader, GEOComposedRoute, GEOTransitSuggestedRoute, _GEOTransitRoutePreloaderData, GEOMapServiceTraits, NSObject, NSMutableDictionary, NSString;

@interface GEOTransitRoutePreloadStrategy : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadStrategy> {

	GEOTransitSuggestedRoute* _suggestedRoute;
	_GEOTransitRoutePreloaderData* _reserved;
	GEOMapServiceTraits* _traits;
	double _endRoutePosition;
	unsigned long long _indexOfLastStepWithPreparedBatch;
	double _radialDistanceToImplicateTilesMeters;
	long long _tilesRequested;
	BOOL _shouldPreloadEntireRoute;
	NSObject*<OS_dispatch_queue> _workQueue;
	GEORoutePreloader* _preloader;
	GEOComposedRoute* _route;
	NSObject*<OS_dispatch_source> _geodCrashTimer;
	double _currentRoutePosition;
	int _downloadState;
	double _stepSizeInMeters;
	BOOL _enabled;
	NSMutableDictionary* _tileSetStyles;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) GEORoutePreloader * preloader;              //@synthesize preloader=_preloader - In the implementation block
@property (nonatomic,retain) GEOComposedRoute * route;                          //@synthesize route=_route - In the implementation block
-(id)init;
-(void)start;
-(void)stop;
-(void)_start;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)setPreloader:(GEORoutePreloader *)arg1 ;
-(void)updateWithRoute:(id)arg1 routeMatch:(id)arg2 ;
-(void)performTearDown;
-(void)_stop;
-(GEOComposedRoute *)route;
-(void)updateWithRouteMatch:(id)arg1 ;
-(void)observedNetworkQualityDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(void)_retryFailuresWithErrorsReset:(BOOL)arg1 ;
-(void)_resetErrorCounts;
-(void)_performNextRequests;
-(void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned)arg2 andZoom:(unsigned)arg3 ;
-(void)_cancelAllBatches;
-(PolylineCoordinate)_polylineCoordinateForDouble:(double)arg1 ;
-(void)_makeBatchesForSteps:(id)arg1 ;
-(void)_makeBatchForTilesAroundStationsForSteps:(id)arg1 ;
-(void)_processBatches;
-(void)_makePreloadBatchForSteps:(id)arg1 ;
-(void)_ignoreAlreadyRequestedTilesAndUpdateGlobalListWithNonDuplicatesForTileKeyList:(id)arg1 ;
-(void)_makePreloadBatchForPlaceDataOnSteps:(id)arg1 ;
-(void)_makePreloadBatchForTilesOnRouteWithSteps:(id)arg1 andPriority:(unsigned)arg2 ;
-(void)_loadPlacecardsForBatch:(id)arg1 ;
-(void)_loadTilesForBatch:(id)arg1 ;
-(void)_processedFinishedBatch:(id)arg1 withPartialStatus:(unsigned long long)arg2 ;
-(void)_geodCrashed;
-(GEORoutePreloader *)preloader;
-(void)setTraits:(id)arg1 ;
-(long long)tilesRequested;
-(void)setShouldPreloadEntireRoute:(BOOL)arg1 ;
@end

