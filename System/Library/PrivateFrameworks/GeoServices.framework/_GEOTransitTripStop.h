/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOTransitTripStop.h>

@protocol GEOTransitDeparture;
@class NSTimeZone, NSString, NSArray, GEOLatLng, GEOStyleAttributes;

@interface _GEOTransitTripStop : NSObject <GEOTransitTripStop> {

	NSTimeZone* _timeZone;
	unsigned long long _stationIdentifier;
	NSString* _transitName;
	NSArray* _labelItems;
	GEOLatLng* _location;
	GEOStyleAttributes* _styleAttributes;
	id<GEOTransitDeparture> _departure;

}

@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) id<GEOTransitDeparture> departure;                 //@synthesize departure=_departure - In the implementation block
@property (nonatomic,readonly) unsigned long long stationIdentifier; 
@property (nonatomic,readonly) GEOLatLng * location; 
@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitTripStopsForPlaceData:(id)arg1 ;
-(NSString *)debugDescription;
-(NSTimeZone *)timeZone;
-(NSString *)displayName;
-(GEOLatLng *)location;
-(id<GEOTransitDeparture>)departure;
-(GEOStyleAttributes *)styleAttributes;
-(unsigned long long)stationIdentifier;
-(id)initWithTransitSnippet:(id)arg1 departureSequence:(id)arg2 ;
-(NSArray *)labelItems;
@end

