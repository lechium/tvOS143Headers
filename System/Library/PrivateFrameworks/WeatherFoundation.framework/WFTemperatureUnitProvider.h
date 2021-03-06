/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface WFTemperatureUnitProvider : NSObject {

	NSObject*<OS_dispatch_queue> _providerQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> providerQueue;              //@synthesize providerQueue=_providerQueue - In the implementation block
@property (readonly) int userTemperatureUnit; 
-(id)init;
-(int)userTemperatureUnit;
-(void)fetchTemperatureUnitWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)replaceUnit:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setProviderQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)providerQueue;
-(int)_providerQueue_readUnit;
-(int)_providerQueue_changeUnit:(int)arg1 ;
-(void)_postDidChangeUnitDefaultsPreference;
-(void)replaceUnit:(int)arg1 ;
@end

