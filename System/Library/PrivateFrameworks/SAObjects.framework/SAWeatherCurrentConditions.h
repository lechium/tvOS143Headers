/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAWeatherBarometricPressure, SAWeatherCondition, NSNumber, NSString, SAWeatherWindSpeed;

@interface SAWeatherCurrentConditions : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAWeatherBarometricPressure * barometricPressure; 
@property (nonatomic,retain) SAWeatherCondition * condition; 
@property (nonatomic,copy) NSNumber * dayOfWeek; 
@property (nonatomic,copy) NSString * dewPoint; 
@property (nonatomic,copy) NSString * heatIndex; 
@property (nonatomic,copy) NSString * moonPhase; 
@property (nonatomic,copy) NSString * percentHumidity; 
@property (nonatomic,copy) NSNumber * percentOfMoonFaceVisible; 
@property (nonatomic,copy) NSString * sunrise; 
@property (nonatomic,copy) NSString * sunset; 
@property (nonatomic,copy) NSString * temperature; 
@property (nonatomic,copy) NSString * timeOfObservation; 
@property (nonatomic,copy) NSString * timeZone; 
@property (nonatomic,copy) NSString * totalDailyPrecipitation; 
@property (nonatomic,copy) NSNumber * uvIndex; 
@property (nonatomic,copy) NSString * visibility; 
@property (nonatomic,copy) NSString * windChill; 
@property (nonatomic,retain) SAWeatherWindSpeed * windSpeed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentConditions;
+(id)currentConditionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTimeZone:(NSString *)arg1 ;
-(NSString *)timeZone;
-(NSNumber *)dayOfWeek;
-(SAWeatherCondition *)condition;
-(void)setVisibility:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)visibility;
-(void)setTemperature:(NSString *)arg1 ;
-(NSString *)temperature;
-(void)setDayOfWeek:(NSNumber *)arg1 ;
-(void)setCondition:(SAWeatherCondition *)arg1 ;
-(NSString *)sunrise;
-(NSString *)sunset;
-(id)encodedClassName;
-(SAWeatherBarometricPressure *)barometricPressure;
-(void)setBarometricPressure:(SAWeatherBarometricPressure *)arg1 ;
-(NSString *)dewPoint;
-(void)setDewPoint:(NSString *)arg1 ;
-(NSString *)heatIndex;
-(void)setHeatIndex:(NSString *)arg1 ;
-(NSString *)moonPhase;
-(void)setMoonPhase:(NSString *)arg1 ;
-(NSString *)percentHumidity;
-(void)setPercentHumidity:(NSString *)arg1 ;
-(NSNumber *)percentOfMoonFaceVisible;
-(void)setPercentOfMoonFaceVisible:(NSNumber *)arg1 ;
-(void)setSunrise:(NSString *)arg1 ;
-(void)setSunset:(NSString *)arg1 ;
-(NSString *)timeOfObservation;
-(void)setTimeOfObservation:(NSString *)arg1 ;
-(NSString *)totalDailyPrecipitation;
-(void)setTotalDailyPrecipitation:(NSString *)arg1 ;
-(NSNumber *)uvIndex;
-(void)setUvIndex:(NSNumber *)arg1 ;
-(NSString *)windChill;
-(void)setWindChill:(NSString *)arg1 ;
-(SAWeatherWindSpeed *)windSpeed;
-(void)setWindSpeed:(SAWeatherWindSpeed *)arg1 ;
@end

