/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteSection.h>
#import <libobjc.A.dylib/GEOComposedRouteTransitSection.h>

@class NSString;

@interface GEOComposedRouteTransitTripSection : GEOComposedRouteSection <GEOComposedRouteTransitSection> {

	SCD_Struct_GE87 _fromNodeID;
	SCD_Struct_GE87 _toNodeID;
	unsigned long long _lineID;
	GEOCoarseLocationLatLng _fromNodeLocation;
	GEOCoarseLocationLatLng _toNodeLocation;
	int _toNodeSignificance;
	Color<float, 4, geo::ColorSpace::Linear> _lineColor;
	SCD_Struct_GE36 _originalBounds;

}

@property (nonatomic,readonly) Color<float lineColor;                   //@synthesize lineColor=_lineColor - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE87 fromNodeID;              //@synthesize fromNodeID=_fromNodeID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE87 toNodeID;                //@synthesize toNodeID=_toNodeID - In the implementation block
@property (nonatomic,readonly) unsigned long long lineID;               //@synthesize lineID=_lineID - In the implementation block
@property (nonatomic,readonly) BOOL isTransfer; 
@property (nonatomic,readonly) int toNodeSignificance;                  //@synthesize toNodeSignificance=_toNodeSignificance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(BOOL)_MapsCarPlay_isEqual:(id)arg1 ;
-(unsigned long long)lineID;
-(Color<float)lineColor;
-(BOOL)isTransfer;
-(void)_initSupportWithDecoderData:(id)arg1 step:(id)arg2 toNodeSignificance:(int)arg3 transitLineColor:(id)arg4 ;
-(id)_hallForStop:(id)arg1 withDecoderData:(id)arg2 ;
-(id)_stationForHall:(id)arg1 withDecoderData:(id)arg2 ;
-(SCD_Struct_GE87)fromNodeID;
-(SCD_Struct_GE87)toNodeID;
-(int)toNodeSignificance;
-(id)initWithCoordinates:(id)arg1 segment:(id)arg2 segmentIndex:(unsigned long long)arg3 steps:(id)arg4 startCoordinateIndex:(unsigned)arg5 coordinateCount:(unsigned)arg6 stepIndex:(unsigned long long)arg7 toNodeSignificance:(int)arg8 transitLineColor:(id)arg9 startDistance:(double)arg10 lengthScaleFactor:(double)arg11 decoderData:(id)arg12 ;
-(id)initWithCoordinates:(id)arg1 segment:(id)arg2 segmentIndex:(unsigned long long)arg3 steps:(id)arg4 startCoordinateIndex:(unsigned)arg5 coordinateCount:(unsigned)arg6 stepIndex:(unsigned long long)arg7 toNodeSignificance:(int)arg8 transitLineColor:(id)arg9 startDistance:(double)arg10 lengthScaleFactor:(double)arg11 fallbackStartCoordinate:(GEOCoarseLocationLatLng)arg12 fallbackEndCoordinate:(GEOCoarseLocationLatLng)arg13 ;
@end

