/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RESingleton.h>
#import <libobjc.A.dylib/REPipedLocationReceiver.h>

@protocol OS_dispatch_queue;
@class REObserverStore, NSXPCConnection, NSObject, CLLocation, NSLock, NSString;

@interface REPipedLocationDonor : RESingleton <REPipedLocationReceiver> {

	REObserverStore* _observers;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	CLLocation* _location;
	NSLock* _locationAccessLock;

}

@property (nonatomic,readonly) CLLocation * location; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_locationFromDefaults;
+(void)_saveLocationIntoDefaultsWithLocation:(id)arg1 ;
-(id)_init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)setConnection:(id)arg1 ;
-(CLLocation *)location;
-(void)_handleInvalidation;
-(void)updateLocation:(id)arg1 ;
@end

