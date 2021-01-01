/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/_HKComparisonFilter.h>

@interface _HKElectrocardiogramComparisonFilter : _HKComparisonFilter
+(long long)enumRepresentationForKeyPath:(id)arg1 ;
+(BOOL)isSupportedKeyPath:(id)arg1 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg1 ;
+(id)allowedValueClassesForKeyPath:(id)arg1 ;
+(BOOL)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2 ;
+(BOOL)areValidTypes:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
+(BOOL)isValidValue:(id)arg1 forKeyPath:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 error:(id*)arg5 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(BOOL)_acceptsECGWithAverageHeartRate:(id)arg1 ;
-(BOOL)_acceptsECGWithPublicClassification:(long long)arg1 ;
-(BOOL)_acceptsECGWithPrivateClassification:(unsigned long long)arg1 ;
-(BOOL)_acceptsECGWithSymptomsStatus:(long long)arg1 ;
@end

