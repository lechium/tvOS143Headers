/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEORouteIncident;

@interface GEOComposedRouteTrafficIncidentInfo : NSObject <NSSecureCoding> {

	GEORouteIncident* _incident;
	double _offsetMeters;
	SCD_Struct_GE83 _routeCoordinate;

}

@property (nonatomic,retain) GEORouteIncident * incident;                  //@synthesize incident=_incident - In the implementation block
@property (assign,nonatomic) double offsetMeters;                          //@synthesize offsetMeters=_offsetMeters - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE83 routeCoordinate;              //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_GE83)routeCoordinate;
-(void)setRouteCoordinate:(SCD_Struct_GE83)arg1 ;
-(void)setOffsetMeters:(double)arg1 ;
-(double)offsetMeters;
-(GEORouteIncident *)incident;
-(void)setIncident:(GEORouteIncident *)arg1 ;
@end

