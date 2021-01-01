/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/WFSerializableContent.h>
#import <libobjc.A.dylib/WFNaming.h>

@class NSString;

@interface DCMapsLink : NSObject <WFSerializableContent, WFNaming>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (nonatomic,readonly) NSString * mkDirectionsMode; 
@property (nonatomic,readonly) BOOL canGetDirections; 
@property (nonatomic,readonly) unsigned long long directionsTransportType; 
@property (nonatomic,readonly) CLLocationCoordinate2D centerCoordinate; 
@property (nonatomic,readonly) unsigned long long mkMapType; 
@property (nonatomic,readonly) NSString * searchQuery; 
@property (nonatomic,readonly) NSString * searchNearQuery; 
@property (nonatomic,readonly) NSString * searchLocation; 
@property (nonatomic,readonly) NSString * startAddress; 
@property (nonatomic,readonly) NSString * destinationAddress; 
@property (nonatomic,readonly) unsigned long long directionsMode; 
@property (nonatomic,readonly) NSString * centerLocation; 
@property (nonatomic,readonly) long long zoomLevel; 
@property (nonatomic,readonly) unsigned long long mapType; 
@property (nonatomic,readonly) BOOL showsTraffic; 
@property (nonatomic,readonly) BOOL showsTransit; 
@property (nonatomic,readonly) BOOL showsStreetView; 
@property (nonatomic,readonly) BOOL showsBicycling; 
@property (nonatomic,readonly) NSString * streetViewLocation; 
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(void)processLocation:(id)arg1 shiftingIfNecessary:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)createMapsLinkWithPlacemark:(id)arg1 location:(id)arg2 streetAddress:(id)arg3 shiftingLocationIfNecessary:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
+(BOOL)isMapsURL:(id)arg1 ;
+(id)mapsLinkWithURL:(id)arg1 ;
+(CGPoint)coordinateSpanForMapSize:(CGSize)arg1 centeredAtLocation:(CLLocationCoordinate2D)arg2 atZoomLevel:(long long)arg3 ;
+(double)longitudeToPixelSpaceX:(double)arg1 ;
+(double)latitudeToPixelSpaceY:(double)arg1 ;
+(double)pixelSpaceXToLongitude:(double)arg1 ;
+(double)pixelSpaceYToLatitude:(double)arg1 ;
+(SCD_Struct_DC20)coordinateRegionForMapSize:(CGSize)arg1 centeredAtLocation:(CLLocationCoordinate2D)arg2 atZoomLevel:(long long)arg3 ;
-(NSString *)description;
-(NSString *)destinationAddress;
-(id)region;
-(long long)zoomLevel;
-(unsigned long long)mapType;
-(NSString *)searchLocation;
-(NSString *)searchQuery;
-(CLLocationCoordinate2D)centerCoordinate;
-(NSString *)startAddress;
-(unsigned long long)directionsMode;
-(BOOL)showsTraffic;
-(NSString *)wfName;
-(id)wfSerializedRepresentation;
-(void)getAppleMapsDirectionsURL:(/*^block*/id)arg1 ;
-(void)getCitymapperAppURL:(/*^block*/id)arg1 ;
-(id)baiduMapsAppURL;
-(id)transitAppURL;
-(id)wazeAppURL;
-(id)googleMapsAppURL;
-(id)mapsAppURL;
-(void)geocodeAddressString:(id)arg1 inRegionIfAvailable:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)geocodeDirectionsEndpointsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)regionCenteredAtLocation:(CLLocationCoordinate2D)arg1 ;
-(unsigned long long)directionsTransportType;
-(NSString *)mkDirectionsMode;
-(void)getDirectionsToPlacemark:(id)arg1 fromPlacemark:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)canGetDirections;
-(void)getDirectionsToPlacemark:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getDirectionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)searchNearQuery;
-(NSString *)centerLocation;
-(BOOL)showsTransit;
-(BOOL)showsStreetView;
-(BOOL)showsBicycling;
-(NSString *)streetViewLocation;
-(CLLocationCoordinate2D)streetViewLocationCoordinate;
-(CLLocationCoordinate2D)centerLocationCoordinate;
-(CLLocationCoordinate2D)searchLocationCoordinate;
-(CGPoint)coordinateSpanForMapSize:(CGSize)arg1 centeredAtLocation:(CLLocationCoordinate2D)arg2 ;
-(unsigned long long)mkMapType;
-(SCD_Struct_DC20)coordinateRegionForMapSize:(CGSize)arg1 centeredAtLocation:(CLLocationCoordinate2D)arg2 ;
-(CLLocationCoordinate2D)locationCoordinateFromString:(id)arg1 ;
@end

