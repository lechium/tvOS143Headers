/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSCache, NSObject, NSString;

@interface GEOLocationShifter : NSObject <GEOResourceManifestTileGroupObserver> {

	BOOL _isRequestingShiftFunction;
	os_unfair_lock_s _lock;
	NSMutableArray* _locationsToShift;
	NSCache* _shiftFunctionCache;
	int _resetPrivacyToken;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) BOOL locationShiftEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)proxyClass;
+(id)_proxy;
+(BOOL)isLocationShiftRequiredForCoordinate:(GEOCoarseLocationLatLng)arg1 ;
+(BOOL)isLocationShiftEnabled;
+(unsigned)locationShiftFunctionVersion;
+(void)flushDiskCache;
+(void)setProxyClass:(Class)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_reset;
-(void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3 ;
-(void)shiftLatLng:(id)arg1 accuracy:(double)arg2 auditToken:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 mustGoToNetworkCallback:(/*^block*/id)arg5 errorHandler:(/*^block*/id)arg6 callbackQueue:(id)arg7 ;
-(void)_countryProvidersDidChange:(id)arg1 ;
-(BOOL)_shiftLocation:(id)arg1 ;
-(void)_requestNextShiftFunctionIfNecessary;
-(void)shiftLatLng:(id)arg1 accuracy:(double)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)shiftLatLng:(id)arg1 accuracy:(double)arg2 withCompletionHandler:(/*^block*/id)arg3 mustGoToNetworkCallback:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 callbackQueue:(id)arg6 ;
-(BOOL)shiftLatLng:(id)arg1 accuracy:(double)arg2 shiftedCoordinate:(GEOCoarseLocationLatLng*)arg3 shiftedAccuracy:(double*)arg4 ;
-(BOOL)locationShiftEnabled;
-(void)shiftCoordinate:(GEOCoarseLocationLatLng)arg1 accuracy:(double)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)shiftCoordinate:(GEOCoarseLocationLatLng)arg1 accuracy:(double)arg2 withCompletionHandler:(/*^block*/id)arg3 mustGoToNetworkCallback:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 callbackQueue:(id)arg6 ;
-(BOOL)shiftCoordinate:(GEOCoarseLocationLatLng)arg1 accuracy:(double)arg2 shiftedCoordinate:(GEOCoarseLocationLatLng*)arg3 shiftedAccuracy:(double*)arg4 ;
-(void)_fetchShiftFunctionForLatLng:(id)arg1 auditToken:(id)arg2 callbackQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

