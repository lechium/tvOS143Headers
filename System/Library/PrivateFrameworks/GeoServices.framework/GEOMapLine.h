/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOMapLine <NSObject>
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng* coordinates; 
@property (nonatomic,readonly) double length; 
@required
-(double)length;
-(GEOCoarseLocationLatLng*)coordinates;
-(unsigned long long)coordinateCount;
-(double)distanceFromCoordinate:(GEOCoarseLocationLatLng)arg1 outSegmentCoordinate:(PolylineCoordinate*)arg2;

@end

