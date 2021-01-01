/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKUnit;

@interface HKQuantity : NSObject <NSSecureCoding, NSCopying> {

	HKUnit* _unit;
	double _value;

}

@property (getter=_unit,nonatomic,readonly) HKUnit * unit;              //@synthesize unit=_unit - In the implementation block
@property (getter=_value,nonatomic,readonly) double value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)quantityWithUnit:(id)arg1 doubleValue:(double)arg2 ;
+(id)hk_quantityWithSeconds:(id)arg1 ;
+(id)hk_quantityWithMinutes:(id)arg1 ;
+(id)_quantityWithBeatsPerMinute:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)_value;
-(id)_unit;
-(double)_beatsPerMinute;
-(BOOL)isCompatibleWithUnit:(id)arg1 ;
-(double)doubleValueForUnit:(id)arg1 ;
-(id)hk_secondsNumber;
-(id)hk_minutesNumber;
-(id)_initWithUnit:(id)arg1 doubleValue:(double)arg2 ;
-(double)_valueScaledForDisplay;
-(id)_quantityByAddingQuantity:(id)arg1 ;
-(BOOL)_isZero;
-(id)_foundationMeasurement;
-(BOOL)hk_isLessThanQuantity:(id)arg1 ;
-(BOOL)hk_isGreaterThanQuantity:(id)arg1 ;
@end

