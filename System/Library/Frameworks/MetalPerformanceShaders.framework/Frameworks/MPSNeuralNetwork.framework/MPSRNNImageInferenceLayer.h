/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSRNNImageInferenceLayer : MPSCNNKernel {

	int* layerTypes;
	void* layers;
	void* forwardLayers;
	int* forwardLayerTypes;
	unsigned long long nForwardLayers;
	void* backwardLayers;
	int* backwardLayerTypes;
	unsigned long long nBackwardLayers;
	BOOL _recurrentOutputIsTemporary;
	BOOL _storeAllIntermediateStates;
	unsigned long long _numberOfLayers;
	unsigned long long _bidirectionalCombineMode;
	unsigned long long _inputFeatureChannels;
	unsigned long long _outputFeatureChannels;

}

@property (nonatomic,readonly) unsigned long long inputFeatureChannels;                //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long outputFeatureChannels;               //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfLayers;                      //@synthesize numberOfLayers=_numberOfLayers - In the implementation block
@property (assign,nonatomic) BOOL recurrentOutputIsTemporary;                          //@synthesize recurrentOutputIsTemporary=_recurrentOutputIsTemporary - In the implementation block
@property (assign,nonatomic) BOOL storeAllIntermediateStates;                          //@synthesize storeAllIntermediateStates=_storeAllIntermediateStates - In the implementation block
@property (assign,nonatomic) unsigned long long bidirectionalCombineMode;              //@synthesize bidirectionalCombineMode=_bidirectionalCombineMode - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)inputFeatureChannels;
-(unsigned long long)outputFeatureChannels;
-(BOOL)storeAllIntermediateStates;
-(id)initWithDevice:(id)arg1 rnnDescriptor:(id)arg2 ;
-(id)initWithDevice:(id)arg1 rnnDescriptors:(id)arg2 ;
-(void)encodeSequenceToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImages:(id)arg3 recurrentInputState:(id)arg4 recurrentOutputStates:(id)arg5 ;
-(void)encodeBidirectionalSequenceToCommandBuffer:(id)arg1 sourceSequence:(id)arg2 destinationForwardImages:(id)arg3 destinationBackwardImages:(id)arg4 ;
-(unsigned long long)numberOfLayers;
-(BOOL)recurrentOutputIsTemporary;
-(void)setRecurrentOutputIsTemporary:(BOOL)arg1 ;
-(void)setStoreAllIntermediateStates:(BOOL)arg1 ;
-(unsigned long long)bidirectionalCombineMode;
-(void)setBidirectionalCombineMode:(unsigned long long)arg1 ;
@end
