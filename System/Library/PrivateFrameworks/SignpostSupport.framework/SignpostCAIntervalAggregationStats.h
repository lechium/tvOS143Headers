/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SignpostSupport/SignpostSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SignpostCAIntervalAggregationStats : NSObject <NSCopying> {

	float _maxIntervalDurationNs;
	unsigned long long _intervalCount;
	unsigned long long _totalIntervalDurationNs;

}

@property (nonatomic,readonly) unsigned long long intervalCount;                        //@synthesize intervalCount=_intervalCount - In the implementation block
@property (nonatomic,readonly) unsigned long long totalIntervalDurationNs;              //@synthesize totalIntervalDurationNs=_totalIntervalDurationNs - In the implementation block
@property (nonatomic,readonly) float averageIntervalDurationNs; 
@property (nonatomic,readonly) float maxIntervalDurationNs;                             //@synthesize maxIntervalDurationNs=_maxIntervalDurationNs - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(void)_addAggregationStats:(id)arg1 ;
-(unsigned long long)intervalCount;
-(unsigned long long)totalIntervalDurationNs;
-(float)maxIntervalDurationNs;
-(float)averageIntervalDurationNs;
-(void)_addDurationNsToAggregation:(unsigned long long)arg1 ;
@end
