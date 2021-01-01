/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/_MLCGPULayer.h>

@interface _MLCGPUConvolution : _MLCGPULayer
+(BOOL)setOptimizerDataForDevice:(id)arg1 deviceOps:(id)arg2 weights:(id)arg3 bias:(id)arg4 ;
+(void)setGradientComputeWeightsAndBiasOnly:(id)arg1 deviceOps:(id)arg2 ;
+(BOOL)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 ;
+(id)layerWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 descriptor:(id)arg4 neuronDescriptor:(id)arg5 ;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 descriptor:(id)arg4 neuronDescriptor:(id)arg5 ;
@end
