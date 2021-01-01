/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, GEODirectionsResponse, GEOETATrafficUpdateResponse, GEORouteAttributes, GEODirectionsRequest;

@interface GEORouteInitializerData : NSObject <NSSecureCoding> {

	NSArray* _waypoints;
	GEODirectionsResponse* _directionsResponse;
	GEOETATrafficUpdateResponse* _etaTrafficUpdateResponse;
	GEORouteAttributes* _routeAttributes;
	GEODirectionsRequest* _directionsRequest;

}

@property (nonatomic,readonly) NSArray * waypoints;                                                 //@synthesize waypoints=_waypoints - In the implementation block
@property (nonatomic,readonly) GEODirectionsResponse * directionsResponse;                          //@synthesize directionsResponse=_directionsResponse - In the implementation block
@property (nonatomic,readonly) GEOETATrafficUpdateResponse * etaTrafficUpdateResponse;              //@synthesize etaTrafficUpdateResponse=_etaTrafficUpdateResponse - In the implementation block
@property (nonatomic,readonly) GEORouteAttributes * routeAttributes;                                //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (nonatomic,readonly) GEODirectionsRequest * directionsRequest;                            //@synthesize directionsRequest=_directionsRequest - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GEORouteAttributes *)routeAttributes;
-(NSArray *)waypoints;
-(GEODirectionsResponse *)directionsResponse;
-(GEOETATrafficUpdateResponse *)etaTrafficUpdateResponse;
-(id)incidentAtIndex:(unsigned long long)arg1 forGeoRoute:(id)arg2 ;
-(id)incidentAtIndex:(unsigned long long)arg1 forGeoWaypointRoute:(id)arg2 ;
-(BOOL)_MapsCarPlay_isEqual:(id)arg1 ;
-(id)arrivalParametersAtIndex:(unsigned long long)arg1 ;
-(id)initWithWaypoints:(id)arg1 routeAttributes:(id)arg2 directionsResponse:(id)arg3 ;
-(GEODirectionsRequest *)directionsRequest;
-(id)initWithWaypoints:(id)arg1 routeAttributes:(id)arg2 directionsResponse:(id)arg3 directionsRequest:(id)arg4 ;
-(id)initWithWaypoints:(id)arg1 routeAttributes:(id)arg2 ETATrafficUpdateResponse:(id)arg3 ;
@end

