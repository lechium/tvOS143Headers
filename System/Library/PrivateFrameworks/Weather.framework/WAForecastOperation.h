/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class City, WFLocation, WACurrentForecast, WFAirQualityConditions, NSArray, NSDate, NSDictionary, NSError, WFWeatherConditions, WFNextHourPrecipitation, WFAggregateCommonRequest, NSCalendar, NSLocale, NSString, NSData, WFRequestOptions, WFServiceConnection, WAForecastModel;

@interface WAForecastOperation : NSOperation {

	BOOL _isDay;
	BOOL _shouldAttachRawAPIData;
	BOOL _canGeocode;
	BOOL _isLocationInGeocodeSample;
	int _units;
	City* _city;
	WFLocation* _location;
	WACurrentForecast* _currentConditions;
	WFAirQualityConditions* _airQualityConditions;
	NSArray* _hourlyForecasts;
	NSArray* _dailyForecasts;
	NSDate* _sunrise;
	NSDate* _sunset;
	NSDictionary* _links;
	NSError* _error;
	WFWeatherConditions* _currentWeatherConditions;
	NSArray* _dailyForecastConditions;
	NSArray* _hourlyForecastConditions;
	NSArray* _severeWeatherEvents;
	NSArray* _changeForecasts;
	WFNextHourPrecipitation* _nextHourPrecipitation;
	WFAggregateCommonRequest* _aggregateRequest;
	NSCalendar* _calendar;
	NSLocale* _locale;
	NSString* _trackingParameter;
	NSData* _rawAPIData;
	WFRequestOptions* _requestOptions;
	WFServiceConnection* _connection;

}

@property (nonatomic,retain) WFWeatherConditions * currentWeatherConditions;               //@synthesize currentWeatherConditions=_currentWeatherConditions - In the implementation block
@property (nonatomic,retain) WACurrentForecast * currentConditions;                        //@synthesize currentConditions=_currentConditions - In the implementation block
@property (nonatomic,retain) WFAirQualityConditions * airQualityConditions;                //@synthesize airQualityConditions=_airQualityConditions - In the implementation block
@property (nonatomic,retain) NSArray * dailyForecastConditions;                            //@synthesize dailyForecastConditions=_dailyForecastConditions - In the implementation block
@property (nonatomic,retain) NSArray * hourlyForecastConditions;                           //@synthesize hourlyForecastConditions=_hourlyForecastConditions - In the implementation block
@property (nonatomic,retain) NSArray * hourlyForecasts;                                    //@synthesize hourlyForecasts=_hourlyForecasts - In the implementation block
@property (nonatomic,retain) NSArray * dailyForecasts;                                     //@synthesize dailyForecasts=_dailyForecasts - In the implementation block
@property (nonatomic,retain) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSDate * sunset;                                              //@synthesize sunset=_sunset - In the implementation block
@property (nonatomic,retain) NSDate * sunrise;                                             //@synthesize sunrise=_sunrise - In the implementation block
@property (nonatomic,retain) WFLocation * location;                                        //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSDictionary * links;                                         //@synthesize links=_links - In the implementation block
@property (nonatomic,retain) NSArray * severeWeatherEvents;                                //@synthesize severeWeatherEvents=_severeWeatherEvents - In the implementation block
@property (nonatomic,retain) NSArray * changeForecasts;                                    //@synthesize changeForecasts=_changeForecasts - In the implementation block
@property (nonatomic,retain) WFNextHourPrecipitation * nextHourPrecipitation;              //@synthesize nextHourPrecipitation=_nextHourPrecipitation - In the implementation block
@property (nonatomic,retain) WFAggregateCommonRequest * aggregateRequest;                  //@synthesize aggregateRequest=_aggregateRequest - In the implementation block
@property (assign,nonatomic) BOOL isDay;                                                   //@synthesize isDay=_isDay - In the implementation block
@property (nonatomic,retain) NSCalendar * calendar;                                        //@synthesize calendar=_calendar - In the implementation block
@property (retain) NSLocale * locale;                                                      //@synthesize locale=_locale - In the implementation block
@property (retain) NSString * trackingParameter;                                           //@synthesize trackingParameter=_trackingParameter - In the implementation block
@property (assign,nonatomic) BOOL shouldAttachRawAPIData;                                  //@synthesize shouldAttachRawAPIData=_shouldAttachRawAPIData - In the implementation block
@property (nonatomic,retain) NSData * rawAPIData;                                          //@synthesize rawAPIData=_rawAPIData - In the implementation block
@property (nonatomic,retain) City * city;                                                  //@synthesize city=_city - In the implementation block
@property (assign,nonatomic) int units;                                                    //@synthesize units=_units - In the implementation block
@property (nonatomic,retain) WFRequestOptions * requestOptions;                            //@synthesize requestOptions=_requestOptions - In the implementation block
@property (nonatomic,retain) WFServiceConnection * connection;                             //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL canGeocode;                                              //@synthesize canGeocode=_canGeocode - In the implementation block
@property (assign,nonatomic) BOOL isLocationInGeocodeSample;                               //@synthesize isLocationInGeocodeSample=_isLocationInGeocodeSample - In the implementation block
@property (nonatomic,readonly) WAForecastModel * forecastModel; 
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(void)main;
-(WFServiceConnection *)connection;
-(void)setConnection:(WFServiceConnection *)arg1 ;
-(int)units;
-(void)setUnits:(int)arg1 ;
-(WFLocation *)location;
-(void)setLocation:(WFLocation *)arg1 ;
-(WFRequestOptions *)requestOptions;
-(void)setRequestOptions:(WFRequestOptions *)arg1 ;
-(NSDate *)sunrise;
-(NSDate *)sunset;
-(void)setCity:(City *)arg1 ;
-(City *)city;
-(NSDictionary *)links;
-(WACurrentForecast *)currentConditions;
-(void)setSunrise:(NSDate *)arg1 ;
-(void)setSunset:(NSDate *)arg1 ;
-(void)setCurrentConditions:(WACurrentForecast *)arg1 ;
-(NSArray *)dailyForecasts;
-(void)setDailyForecasts:(NSArray *)arg1 ;
-(NSArray *)hourlyForecasts;
-(void)setHourlyForecasts:(NSArray *)arg1 ;
-(void)setLinks:(NSDictionary *)arg1 ;
-(void)_failWithError:(id)arg1 ;
-(WFAirQualityConditions *)airQualityConditions;
-(WFNextHourPrecipitation *)nextHourPrecipitation;
-(void)setNextHourPrecipitation:(WFNextHourPrecipitation *)arg1 ;
-(NSArray *)changeForecasts;
-(void)setChangeForecasts:(NSArray *)arg1 ;
-(NSArray *)severeWeatherEvents;
-(void)setSevereWeatherEvents:(NSArray *)arg1 ;
-(NSData *)rawAPIData;
-(void)setRawAPIData:(NSData *)arg1 ;
-(NSString *)trackingParameter;
-(void)setTrackingParameter:(NSString *)arg1 ;
-(void)setAirQualityConditions:(WFAirQualityConditions *)arg1 ;
-(BOOL)isDay;
-(void)setIsDay:(BOOL)arg1 ;
-(id)initWithCity:(id)arg1 withUnits:(int)arg2 onConnection:(id)arg3 ;
-(id)initWithCity:(id)arg1 withUnits:(int)arg2 canGeocode:(BOOL)arg3 onConnection:(id)arg4 ;
-(id)initWithCity:(id)arg1 withUnits:(int)arg2 requestOptions:(id)arg3 canGeocode:(BOOL)arg4 onConnection:(id)arg5 ;
-(BOOL)isLocationInGeocodeSample;
-(BOOL)_needsGeolocation;
-(BOOL)shouldRequestChangeInConditions;
-(void)setCurrentWeatherConditions:(WFWeatherConditions *)arg1 ;
-(void)setDailyForecastConditions:(NSArray *)arg1 ;
-(void)setHourlyForecastConditions:(NSArray *)arg1 ;
-(WFWeatherConditions *)currentWeatherConditions;
-(BOOL)shouldAttachRawAPIData;
-(void)setAggregateRequest:(WFAggregateCommonRequest *)arg1 ;
-(WFAggregateCommonRequest *)aggregateRequest;
-(void)_determineSunriseAndSunset;
-(void)_mapReferralLinks;
-(NSArray *)dailyForecastConditions;
-(NSArray *)hourlyForecastConditions;
-(id)initWithCity:(id)arg1 onConnection:(id)arg2 ;
-(id)initWithLocation:(id)arg1 onConnection:(id)arg2 ;
-(WAForecastModel *)forecastModel;
-(void)setShouldAttachRawAPIData:(BOOL)arg1 ;
-(BOOL)canGeocode;
-(void)setCanGeocode:(BOOL)arg1 ;
-(void)setIsLocationInGeocodeSample:(BOOL)arg1 ;
@end

