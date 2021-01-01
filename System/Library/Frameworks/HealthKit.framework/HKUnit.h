/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _HKFactorization, _HKDimension, NSString;

@interface HKUnit : NSObject <NSSecureCoding, NSCopying> {

	_HKFactorization* _dimensionReduction;
	_HKFactorization* _baseUnitReduction;
	os_unfair_lock_s _dimensionReductionLock;
	double _reducedProportionalSize;
	double _scaleOffset;

}

@property (nonatomic,readonly) _HKFactorization * _baseUnits; 
@property (nonatomic,readonly) _HKDimension * dimension; 
@property (nonatomic,readonly) double scaleOffset;                         //@synthesize scaleOffset=_scaleOffset - In the implementation block
@property (readonly) NSString * unitString; 
+(BOOL)supportsSecureCoding;
+(id)milliseconds;
+(id)degreeFahrenheitUnit;
+(id)kelvinUnit;
+(id)degreeCelsiusUnit;
+(id)fluidOunceUSUnit;
+(id)literUnit;
+(id)pintUSUnit;
+(id)cupUSUnit;
+(id)meterUnitWithMetricPrefix:(long long)arg1 ;
+(id)meterUnit;
+(id)yardUnit;
+(id)inchUnit;
+(id)footUnit;
+(id)mileUnit;
+(id)kilocalorieUnit;
+(id)largeCalorieUnit;
+(id)jouleUnit;
+(id)secondUnit;
+(id)minuteUnit;
+(id)hourUnit;
+(id)dayUnit;
+(id)stoneUnit;
+(id)poundUnit;
+(id)ounceUnit;
+(id)gramUnit;
+(id)unitFromString:(id)arg1 ;
+(id)_nullUnit;
+(id)_foundationBaseUnits;
+(id)percentUnit;
+(id)_countPerMinuteUnit;
+(id)gramUnitWithMetricPrefix:(long long)arg1 ;
+(id)decibelAWeightedSoundPressureLevelUnit;
+(id)countUnit;
+(id)pascalUnitWithMetricPrefix:(long long)arg1 ;
+(id)hertzUnit;
+(id)voltUnitWithMetricPrefix:(long long)arg1 ;
+(id)decibelHearingLevelUnit;
+(id)_prefixStringForMetricPrefix:(long long)arg1 ;
+(id)moleUnitWithMolarMass:(double)arg1 ;
+(id)moles;
+(id)pascalUnit;
+(id)secondUnitWithMetricPrefix:(long long)arg1 ;
+(id)jouleUnitWithMetricPrefix:(long long)arg1 ;
+(id)siemenUnit;
+(id)voltUnit;
+(id)_voltBaseUnit;
+(id)_internationalUnitWithMassEquivalent;
+(id)_internationalUnitWithVolumeEquivalent;
+(id)equivalentsUnit;
+(id)_unitForStringPrewarmCache;
+(id)internationalUnit;
+(id)smallCalorieUnit;
+(id)cupImperialUnit;
+(id)fluidOunceImperialUnit;
+(id)literUnitWithMetricPrefix:(long long)arg1 ;
+(id)siemenUnitWithMetricPrefix:(long long)arg1 ;
+(id)millimeterOfMercuryUnit;
+(id)pintImperialUnit;
+(id)kilojoulesUnit;
+(id)moleUnitWithMetricPrefix:(long long)arg1 molarMass:(double)arg2 ;
+(id)centimeterOfWaterUnit;
+(id)atmosphereUnit;
+(id)inchesOfMercuryUnit;
+(id)calorieUnit;
+(id)hertzUnitWithMetricPrefix:(long long)arg1 ;
+(id)perMilleUnit;
+(id)titerUnit;
+(id)_internationalUnitWithMetricPrefix:(long long)arg1 massEquivalent:(double)arg2 ;
+(id)_internationalUnitWithMassEquivalent:(double)arg1 ;
+(id)_internationalUnitWithMetricPrefix:(long long)arg1 volumeEquivalent:(double)arg2 ;
+(id)_internationalUnitWithVolumeEquivalent:(double)arg1 ;
+(id)equivalentsUnitWithMolarMass:(double)arg1 valence:(long long)arg2 ;
+(id)_countPerSecondUnit;
+(void)_prewarmUnitForStringCache;
+(id)unitFromMassFormatterUnit:(long long)arg1 ;
+(long long)massFormatterUnitFromUnit:(id)arg1 ;
+(id)unitFromLengthFormatterUnit:(long long)arg1 ;
+(long long)lengthFormatterUnitFromUnit:(id)arg1 ;
+(id)unitFromEnergyFormatterUnit:(long long)arg1 ;
+(long long)energyFormatterUnitFromUnit:(id)arg1 ;
+(BOOL)_isValidUnitString:(id)arg1 ;
+(id)_heightUnitForLocale:(id)arg1 ;
+(id)_distanceUnitForLocale:(id)arg1 ;
+(id)_personMassUnitForLocale:(id)arg1 ;
+(id)_temperatureUnitForLocale:(id)arg1 ;
+(id)_foodEnergyUnitForLocale:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(_HKDimension *)dimension;
-(BOOL)isNull;
-(NSString *)unitString;
-(double)_valueByConvertingValue:(double)arg1 toUnit:(id)arg2 ;
-(BOOL)_isCompatibleWithUnit:(id)arg1 ;
-(id)_foundationUnit;
-(id)_dimensionReduction;
-(_HKFactorization *)_baseUnits;
-(id)unitDividedByUnit:(id)arg1 ;
-(id)unitMultipliedByUnit:(id)arg1 ;
-(id)unitRaisedToPower:(long long)arg1 ;
-(double)_convertToBaseUnit:(double)arg1 ;
-(double)_convertFromBaseUnit:(double)arg1 ;
-(void)_reduceIfNecessaryWithCycleSet:(id)arg1 ;
-(id)_computeBaseUnitReductionAndProportionalSize:(double*)arg1 withCycleSet:(id)arg2 ;
-(double)_reducedProportionalSize;
-(double)scaleOffset;
-(id)reciprocalUnit;
-(BOOL)_isMetricDistance;
-(BOOL)_isCompatibleWithDimension:(id)arg1 ;
-(id)_baseUnitReductionAndProportionalSize:(double*)arg1 withCycleSet:(id)arg2 ;
-(id)_baseUnitReduction;
@end

