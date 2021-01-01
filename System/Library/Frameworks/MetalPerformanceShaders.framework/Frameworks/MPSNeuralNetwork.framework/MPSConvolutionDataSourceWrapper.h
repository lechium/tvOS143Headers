/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNConvolutionDataSource.h>

@protocol MPSCNNConvolutionDataSource;
@class MPSCNNConvolutionDescriptor, NSObject, MPSNNNeuronDescriptor, NSString;

@interface MPSConvolutionDataSourceWrapper : NSObject <MPSCNNConvolutionDataSource> {

	id<MPSCNNConvolutionDataSource> _dataSource;
	MPSCNNConvolutionDescriptor* _convolution;
	NSObject* _batchNorm;
	MPSNNNeuronDescriptor* _neuron;
	atomic<long> _loadCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wrapperForDataSource:(id)arg1 ;
-(void)initialize;
-(BOOL)load;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(void)dealloc;
-(id)label;
-(id)descriptor;
-(unsigned)dataType;
-(void)purge;
-(void*)weights;
-(float*)biasTerms;
-(1*)rangesForUInt8Kernel;
-(float*)lookupTableForUInt8Kernel;
-(unsigned)weightsQuantizationType;
-(id)updateWithCommandBuffer:(id)arg1 gradientState:(id)arg2 sourceState:(id)arg3 ;
-(BOOL)updateWithGradientState:(id)arg1 sourceState:(id)arg2 ;
-(NeuronInfo)neuronInfo;
-(BOOL)appendNeuron:(const NeuronInfo*)arg1 ;
-(BOOL)appendBatchNorm:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(BOOL)appendNeuronDescriptor:(id)arg1 ;
-(BOOL)hasBatchNorm;
@end

