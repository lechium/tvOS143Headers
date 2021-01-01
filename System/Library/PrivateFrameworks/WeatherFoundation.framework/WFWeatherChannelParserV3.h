/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFForecastDataParser.h>

@class NSCalendar, NSString;

@interface WFWeatherChannelParserV3 : NSObject <WFForecastDataParser> {

	NSCalendar* _calendar;

}

@property (nonatomic,readonly) NSCalendar * calendar;               //@synthesize calendar=_calendar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSCalendar *)calendar;
-(id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 rules:(id)arg7 ;
-(id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 ;
-(void)_parseCommonComponents:(id)arg1 intoConditions:(id)arg2 ;
-(id)_parseForecastedConditions:(id)arg1 individualForecastProcessingBlock:(/*^block*/id)arg2 uniqueParsingBlock:(/*^block*/id)arg3 ;
-(id)_parseCurrentConditions:(id)arg1 ;
-(void)_parseWebLinks:(id)arg1 intoWeatherConditions:(id)arg2 ;
-(id)_parseLastTwentyFourHoursOfObservations:(id)arg1 ;
-(id)_parseHourlyForecastedConditions:(id)arg1 ;
-(id)_parseDailyForecastedConditions:(id)arg1 ;
-(id)parseAirQualityData:(id)arg1 location:(id)arg2 locale:(id)arg3 error:(id*)arg4 ;
-(id)_parseDailyPollenForecastedConditions:(id)arg1 ;
-(id)_parsePollutants:(id)arg1 ;
@end

