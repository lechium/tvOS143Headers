/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteStep.h>

@class GEOComposedRouteEVStepInfo;

@interface GEOComposedDrivingRouteStep : GEOComposedRouteStep {

	GEOComposedRouteEVStepInfo* _evInfo;

}
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)evInfo;
-(id)initWithComposedRoute:(id)arg1 geoRouteLeg:(id)arg2 geoStep:(id)arg3 stepIndex:(unsigned long long)arg4 pointRange:(NSRange)arg5 maneuverPointRange:(NSRange)arg6 ;
@end

