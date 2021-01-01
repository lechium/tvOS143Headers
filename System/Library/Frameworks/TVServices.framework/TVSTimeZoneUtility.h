/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface TVSTimeZoneUtility : NSObject {

	NSString* _timeZoneCityName;

}

@property (assign,getter=isAutomaticTimeZoneSelectionEnabled,nonatomic) BOOL automaticTimeZoneSelectionEnabled; 
@property (nonatomic,copy) NSString * timeZoneCityID; 
@property (nonatomic,copy) NSString * timeZoneCityName;                                                                      //@synthesize timeZoneCityName=_timeZoneCityName - In the implementation block
+(id)sharedInstance;
-(id)_dateTimePreferences;
-(NSString *)timeZoneCityID;
-(BOOL)isAutomaticTimeZoneSelectionEnabled;
-(void)setAutomaticTimeZoneSelectionEnabled:(BOOL)arg1 ;
-(void)setTimeZoneCityID:(NSString *)arg1 ;
-(NSString *)timeZoneCityName;
-(id)cityNameForCityID:(id)arg1 ;
-(void)setTimeZoneCityName:(NSString *)arg1 ;
@end

