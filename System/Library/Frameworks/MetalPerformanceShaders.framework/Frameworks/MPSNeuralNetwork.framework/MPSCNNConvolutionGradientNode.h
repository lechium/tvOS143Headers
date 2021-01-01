/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>
#import <MPSNeuralNetwork/MPSNNTrainableNode.h>

@protocol MPSCNNConvolutionDataSource;
@class NSString;

@interface MPSCNNConvolutionGradientNode : MPSNNGradientFilterNode <MPSNNTrainableNode> {

	id<MPSCNNConvolutionDataSource> _weights;
	unsigned long long _trainingStyle;

}

@property (nonatomic,readonly) id<MPSCNNConvolutionDataSource> weights;              //@synthesize weights=_weights - In the implementation block
@property (assign,nonatomic) unsigned long long trainingStyle;                       //@synthesize trainingStyle=_trainingStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 convolutionGradientState:(id)arg3 weights:(id)arg4 ;
-(NSString *)debugDescription;
-(void)dealloc;
-(id<MPSCNNConvolutionDataSource>)weights;
-(FilterGraphNode*)newFilterNode;
-(id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2 ;
-(unsigned long long)trainingStyle;
-(void)setTrainingStyle:(unsigned long long)arg1 ;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 convolutionGradientState:(id)arg3 weights:(id)arg4 ;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 weights:(id)arg4 ;
@end

