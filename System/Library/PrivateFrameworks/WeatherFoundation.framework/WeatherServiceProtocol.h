/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WeatherServiceProtocol <WeatherServiceInternalProtocol>
@required
-(void)cancelTaskWithIdentifier:(id)arg1;
-(void)airQualityForLocation:(id)arg1 locale:(id)arg2 options:(id)arg3 taskIdentifier:(id)arg4;
-(void)forecast:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 taskIdentifier:(id)arg4;
-(void)forecast:(unsigned long long)arg1 forLocation:(id)arg2 withUnits:(int)arg3 locale:(id)arg4 taskIdentifier:(id)arg5;
-(void)forecast:(unsigned long long)arg1 forLocation:(id)arg2 withUnits:(int)arg3 locale:(id)arg4 taskIdentifier:(id)arg5 requestOptions:(id)arg6;
-(void)forecastForLocation:(id)arg1 locale:(id)arg2 onDate:(id)arg3 options:(id)arg4 taskIdentifier:(id)arg5;
-(void)hourlyForecastForLocation:(id)arg1 locale:(id)arg2 taskIdentifier:(id)arg3;
-(void)dailyForecastForLocation:(id)arg1 locale:(id)arg2 taskIdentifier:(id)arg3;
-(void)locationForString:(id)arg1 taskIdentifier:(id)arg2;
-(void)locationForCoordinate:(CLLocationCoordinate2D)arg1 taskIdentifier:(id)arg2;
-(void)locationForSearchCompletion:(id)arg1 taskIdentifier:(id)arg2;
-(void)temperatureUnitWithIdentifier:(id)arg1;
-(void)replaceTemperatureUnitWith:(int)arg1 identifier:(id)arg2;
-(void)reachabilityConfigurationForIdentifier:(id)arg1;
-(void)invalidateCache:(id)arg1;

@end
