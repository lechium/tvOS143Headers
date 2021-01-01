/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSLengthFormatter.h>

@class NSLocale;

@interface WeatherPrecipitationFormatter : NSLengthFormatter {

	NSLocale* _locale;

}

@property (nonatomic,retain) NSLocale * locale;              //@synthesize locale=_locale - In the implementation block
+(id)convenienceFormatter;
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(id)stringFromDistance:(double)arg1 isDataMetric:(BOOL)arg2 ;
-(long long)precipitationUnit;
-(double)convertDistanceInMetric:(double)arg1 to:(long long)arg2 ;
-(double)convertDistanceInImperial:(double)arg1 to:(long long)arg2 ;
-(id)stringFromCentimeters:(double)arg1 ;
-(id)stringFromInches:(double)arg1 ;
@end

