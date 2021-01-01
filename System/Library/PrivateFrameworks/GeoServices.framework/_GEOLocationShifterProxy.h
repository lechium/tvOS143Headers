/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSCache;


@protocol _GEOLocationShifterProxy <NSObject>
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,readonly) NSCache * memoryCache; 
@required
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isLocationShiftRequiredForCoordinate:(GEOCoarseLocationLatLng)arg1;
-(BOOL)isLocationShiftEnabled;
-(unsigned)locationShiftFunctionVersion;
-(void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)flushDiskCache;
-(NSCache *)memoryCache;

@end

