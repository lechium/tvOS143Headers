/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRouteStep;

@interface _GEORouteMatchingSegment : NSObject {

	unsigned _startPointIndex;
	GEOCoarseLocationLatLng _startCoordinate;
	GEOCoarseLocationLatLng _endCoordinate;
	GEOComposedRouteStep* _step;

}

@property (assign,nonatomic) unsigned startPointIndex;                             //@synthesize startPointIndex=_startPointIndex - In the implementation block
@property (assign,nonatomic) GEOCoarseLocationLatLng startCoordinate;              //@synthesize startCoordinate=_startCoordinate - In the implementation block
@property (assign,nonatomic) GEOCoarseLocationLatLng endCoordinate;                //@synthesize endCoordinate=_endCoordinate - In the implementation block
@property (nonatomic,retain) GEOComposedRouteStep * step;                          //@synthesize step=_step - In the implementation block
-(id)description;
-(GEOComposedRouteStep *)step;
-(unsigned)startPointIndex;
-(double)distanceFromCoordinate:(GEOCoarseLocationLatLng)arg1 outCoordinateOnSegment:(GEOCoarseLocationLatLng*)arg2 outRouteCoordinate:(PolylineCoordinate*)arg3 ;
-(void)setStartPointIndex:(unsigned)arg1 ;
-(void)setStartCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(void)setEndCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(void)setStep:(GEOComposedRouteStep *)arg1 ;
-(GEOCoarseLocationLatLng)endCoordinate;
-(GEOCoarseLocationLatLng)startCoordinate;
@end
