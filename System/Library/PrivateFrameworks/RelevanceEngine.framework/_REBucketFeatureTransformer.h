/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/REFeatureTransformer.h>

@interface _REBucketFeatureTransformer : REFeatureTransformer {

	unsigned long long _count;
	long long _bitCount;
	unsigned long long _min;
	unsigned long long _max;

}

@property (assign,nonatomic) unsigned long long min;              //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) unsigned long long max;              //@synthesize max=_max - In the implementation block
+(id)functionName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)dealloc;
-(void)setMax:(unsigned long long)arg1 ;
-(unsigned long long)max;
-(unsigned long long)min;
-(void)setMin:(unsigned long long)arg1 ;
-(unsigned long long)_outputType;
-(void)_updateConfigurationForCount:(unsigned long long)arg1 ;
-(void)configureWithInvocation:(id)arg1 ;
-(long long)_bitCount;
-(unsigned long long)_featureCount;
-(unsigned long long)_createTransformFromValues:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)_validateWithFeatures:(id)arg1 ;
@end

