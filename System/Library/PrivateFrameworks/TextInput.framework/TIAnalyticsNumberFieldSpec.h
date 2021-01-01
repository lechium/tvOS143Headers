/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TIAnalyticsFieldSpec.h>

@class NSNumber;

@interface TIAnalyticsNumberFieldSpec : TIAnalyticsFieldSpec {

	BOOL _isInteger;
	NSNumber* _minValue;
	NSNumber* _maxValue;
	NSNumber* _significantDigits;

}

@property (nonatomic,readonly) BOOL isInteger;                            //@synthesize isInteger=_isInteger - In the implementation block
@property (nonatomic,readonly) NSNumber * minValue;                       //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,readonly) NSNumber * maxValue;                       //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,readonly) NSNumber * significantDigits;              //@synthesize significantDigits=_significantDigits - In the implementation block
-(NSNumber *)maxValue;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)initWithName:(id)arg1 isInteger:(BOOL)arg2 minValue:(id)arg3 maxValue:(id)arg4 significantDigits:(id)arg5 ;
-(BOOL)isInteger;
-(NSNumber *)minValue;
-(NSNumber *)significantDigits;
@end

