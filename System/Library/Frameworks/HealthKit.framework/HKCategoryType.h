/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HKSampleType.h>

@interface HKCategoryType : HKSampleType
+(id)_categoryTypeWithCode:(long long)arg1 ;
-(long long)_defaultValue;
-(id)_predicateForSDKVersion:(unsigned)arg1 ;
-(BOOL)_validateMetadata:(id)arg1 sample:(id)arg2 error:(id*)arg3 ;
-(BOOL)_acceptsValue:(long long)arg1 ;
-(long long)_categoryValueForValue:(long long)arg1 ;
@end

