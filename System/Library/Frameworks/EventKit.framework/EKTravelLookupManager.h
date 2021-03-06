/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface EKTravelLookupManager : NSObject
+(id)defaultManager;
+(void)geocodeAddress:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
+(void)estimateGeolocationFromHistoricDevicePositionAtLocation:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_travelTimeWithStartCoordinate:(id)arg1 endCoordinate:(id)arg2 arrivalDate:(id)arg3 withRouteType:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)findCoordinatesForLocation:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)travelTimeFrom:(id)arg1 to:(id)arg2 arrivalDate:(id)arg3 withRouteTypes:(id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
-(void)travelTimeFrom:(id)arg1 to:(id)arg2 arrivalDate:(id)arg3 withRouteType:(id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
-(void)_updateLocation:(id)arg1 withMapItem:(id)arg2 forRoute:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
@end

