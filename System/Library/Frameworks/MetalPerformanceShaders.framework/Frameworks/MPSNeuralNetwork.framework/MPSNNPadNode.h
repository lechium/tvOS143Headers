/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNPadNode : MPSNNFilterNode {

	MPSImageCoordinate _paddingSizeBefore;
	MPSImageCoordinate _paddingSizeAfter;
	unsigned long long _edgeMode;
	float _fillValue;

}

@property (assign,nonatomic) float fillValue;              //@synthesize fillValue=_fillValue - In the implementation block
+(id)nodeWithSource:(id)arg1 paddingSizeBefore:(MPSImageCoordinate)arg2 paddingSizeAfter:(MPSImageCoordinate)arg3 edgeMode:(unsigned long long)arg4 ;
-(float)fillValue;
-(void)setFillValue:(float)arg1 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg1 paddingSizeBefore:(MPSImageCoordinate)arg2 paddingSizeAfter:(MPSImageCoordinate)arg3 edgeMode:(unsigned long long)arg4 ;
@end

