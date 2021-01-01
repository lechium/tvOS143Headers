/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WFResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WFTemperatureUnitResponse : WFResponse <NSSecureCoding> {

	int _temperatureUnit;

}

@property (assign,nonatomic) int temperatureUnit;              //@synthesize temperatureUnit=_temperatureUnit - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)temperatureUnit;
-(void)setTemperatureUnit:(int)arg1 ;
@end

