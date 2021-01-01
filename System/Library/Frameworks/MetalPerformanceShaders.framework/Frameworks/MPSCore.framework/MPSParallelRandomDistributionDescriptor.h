/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSCore/MPSCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MPSParallelRandomDistributionDescriptor : NSObject <NSCopying> {

	float _minimum;
	float _maximum;
	float _mean;
	float _standardDeviation;
	unsigned long long _distributionType;

}

@property (assign,nonatomic) unsigned long long distributionType;              //@synthesize distributionType=_distributionType - In the implementation block
@property (assign,nonatomic) float minimum;                                    //@synthesize minimum=_minimum - In the implementation block
@property (assign,nonatomic) float maximum;                                    //@synthesize maximum=_maximum - In the implementation block
@property (assign,nonatomic) float mean;                                       //@synthesize mean=_mean - In the implementation block
@property (assign,nonatomic) float standardDeviation;                          //@synthesize standardDeviation=_standardDeviation - In the implementation block
+(id)uniformDistributionDescriptorWithMinimum:(float)arg1 maximum:(float)arg2 ;
+(id)normalDistributionDescriptorWithMean:(float)arg1 standardDeviation:(float)arg2 ;
+(id)normalDistributionDescriptorWithMean:(float)arg1 standardDeviation:(float)arg2 minimum:(float)arg3 maximum:(float)arg4 ;
+(id)defaultDistributionDescriptor;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)minimum;
-(void)setMinimum:(float)arg1 ;
-(float)maximum;
-(void)setMaximum:(float)arg1 ;
-(unsigned long long)distributionType;
-(void)setDistributionType:(unsigned long long)arg1 ;
-(float)mean;
-(void)setMean:(float)arg1 ;
-(float)standardDeviation;
-(void)setStandardDeviation:(float)arg1 ;
@end

