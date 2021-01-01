/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CLInUseAssertion, CLLocationManager, GEOLocationShifter, NSMutableArray, CLLocation, NSString;

@interface MNTimeballLocationManager : NSObject <CLLocationManagerDelegate> {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	CLInUseAssertion* _inUseAssertion;
	CLLocationManager* _locationProvider;
	GEOLocationShifter* _locationShifter;
	NSMutableArray* _requests;

}

@property (nonatomic,readonly) CLLocation * lastLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setLocationProviderClass:(Class)arg1 ;
-(id)init;
-(void)dealloc;
-(CLLocation *)lastLocation;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)getLocationWithAccuracy:(double)arg1 maxAttempts:(unsigned long long)arg2 timeoutInterval:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setupLocationProvider;
-(void)_addRequest:(id)arg1 ;
-(void)_requestTimedOut:(id)arg1 ;
-(void)_processPendingRequests;
-(void)_removeRequest:(id)arg1 ;
-(void)_processLocation:(id)arg1 ;
-(void)_processError:(id)arg1 ;
-(id)locationProvider;
@end

