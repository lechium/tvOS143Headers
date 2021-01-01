/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteSegment.h>

@class GEOComposedWalkingRouteStep, GEOComposedTransitWalkingRouteStep;

@interface GEOComposedWalkingRouteSegment : GEOComposedRouteSegment {

	unsigned long long _transitIncidentMessageStepIndex;

}

@property (nonatomic,readonly) unsigned long long transitIncidentMessageStepIndex;                                   //@synthesize transitIncidentMessageStepIndex=_transitIncidentMessageStepIndex - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> transitSteppingIncidentMessage; 
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> transitRouteDetailsIncidentMessage; 
@property (nonatomic,readonly) GEOComposedWalkingRouteStep * lastWalkingStep; 
@property (nonatomic,readonly) GEOComposedTransitWalkingRouteStep * arrivalStep; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithComposedRoute:(id)arg1 stepRange:(NSRange)arg2 pointRange:(NSRange)arg3 transitIncidentMessageStepIndex:(unsigned long long)arg4 ;
-(id)_transitIncidentMessageStep;
-(id<GEOTransitRoutingIncidentMessage>)transitSteppingIncidentMessage;
-(id<GEOTransitRoutingIncidentMessage>)transitRouteDetailsIncidentMessage;
-(GEOComposedWalkingRouteStep *)lastWalkingStep;
-(GEOComposedTransitWalkingRouteStep *)arrivalStep;
-(unsigned long long)transitIncidentMessageStepIndex;
@end

