/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFWeatherEventConfig;

@interface WFWeatherEventsConfig : NSObject <NSCopying> {

	WFWeatherEventConfig* _changeInConditions;
	WFWeatherEventConfig* _nextHourPrecipitation;
	WFWeatherEventConfig* _severeWeather;

}

@property (nonatomic,retain) WFWeatherEventConfig * changeInConditions;                 //@synthesize changeInConditions=_changeInConditions - In the implementation block
@property (nonatomic,retain) WFWeatherEventConfig * nextHourPrecipitation;              //@synthesize nextHourPrecipitation=_nextHourPrecipitation - In the implementation block
@property (nonatomic,retain) WFWeatherEventConfig * severeWeather;                      //@synthesize severeWeather=_severeWeather - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(WFWeatherEventConfig *)changeInConditions;
-(void)setChangeInConditions:(WFWeatherEventConfig *)arg1 ;
-(WFWeatherEventConfig *)nextHourPrecipitation;
-(void)setNextHourPrecipitation:(WFWeatherEventConfig *)arg1 ;
-(WFWeatherEventConfig *)severeWeather;
-(void)setSevereWeather:(WFWeatherEventConfig *)arg1 ;
@end

