/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSUserDefaults.h>

@protocol WeatherPreferencesPersistence;
@interface WeatherInternalPreferences : NSUserDefaults {

	id<WeatherPreferencesPersistence> _persistence;

}

@property (retain) id<WeatherPreferencesPersistence> persistence;                         //@synthesize persistence=_persistence - In the implementation block
@property (nonatomic,readonly) BOOL isInternalInstall; 
@property (nonatomic,readonly) unsigned long long deviceInactivityThreshold; 
@property (nonatomic,readonly) BOOL isV3Enabled; 
@property (nonatomic,readonly) BOOL shouldShowUpdateTimestamp; 
+(id)sharedInternalPreferences;
-(id<WeatherPreferencesPersistence>)persistence;
-(BOOL)isInternalInstall;
-(void)setPersistence:(id<WeatherPreferencesPersistence>)arg1 ;
-(unsigned long long)deviceInactivityThreshold;
-(BOOL)isV3Enabled;
-(BOOL)shouldShowUpdateTimestamp;
@end

