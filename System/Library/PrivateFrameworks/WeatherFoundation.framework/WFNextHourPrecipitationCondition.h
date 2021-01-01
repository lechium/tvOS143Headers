/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface WFNextHourPrecipitationCondition : NSObject <NSCopying> {

	unsigned long long _type;
	double _intensity;
	double _probability;
	NSDate* _validUntil;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double intensity;                     //@synthesize intensity=_intensity - In the implementation block
@property (nonatomic,readonly) double probability;                   //@synthesize probability=_probability - In the implementation block
@property (nonatomic,readonly) NSDate * validUntil;                  //@synthesize validUntil=_validUntil - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(double)intensity;
-(double)probability;
-(NSDate *)validUntil;
-(id)initWithType:(id)arg1 intensity:(double)arg2 probability:(double)arg3 validUntil:(id)arg4 ;
-(unsigned long long)typeForString:(id)arg1 ;
@end

