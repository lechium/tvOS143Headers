/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNNGradientState.h>

@class MPSCNNInstanceNormalization;

@interface MPSCNNInstanceNormalizationGradientState : MPSNNGradientState {

	MPSCNNInstanceNormalization* _instanceNormalization;
	unsigned long long _numberOfFeatureChannels;

}

@property (nonatomic,retain,readonly) MPSCNNInstanceNormalization * instanceNormalization;              //@synthesize instanceNormalization=_instanceNormalization - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> gamma; 
@property (nonatomic,readonly) id<MTLBuffer> beta; 
@property (nonatomic,readonly) id<MTLBuffer> gradientForGamma; 
@property (nonatomic,readonly) id<MTLBuffer> gradientForBeta; 
+(id)temporaryStateWithCommandBuffer:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 instanceNormalization:(id)arg3 ;
-(id)debugDescription;
-(void)dealloc;
-(id<MTLBuffer>)gamma;
-(id<MTLBuffer>)beta;
-(id<MTLBuffer>)gradientForGamma;
-(id<MTLBuffer>)gradientForBeta;
-(id)initWithDevice:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 instanceNormalization:(id)arg3 ;
-(MPSCNNInstanceNormalization *)instanceNormalization;
@end

