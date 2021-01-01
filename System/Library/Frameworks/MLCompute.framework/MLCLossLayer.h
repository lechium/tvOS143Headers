/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCLayer.h>

@class MLCLossDescriptor, MLCTensor;

@interface MLCLossLayer : MLCLayer {

	MLCLossDescriptor* _descriptor;
	MLCTensor* _weights;
	MLCTensor* _lossLabels;

}

@property (nonatomic,retain) MLCTensor * lossLabels;                             //@synthesize lossLabels=_lossLabels - In the implementation block
@property (nonatomic,copy,readonly) MLCLossDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain,readonly) MLCTensor * weights;                       //@synthesize weights=_weights - In the implementation block
+(id)layerWithDescriptor:(id)arg1 ;
+(id)layerWithDescriptor:(id)arg1 weights:(id)arg2 ;
+(id)softmaxCrossEntropyLossWithReductionType:(int)arg1 labelSmoothing:(float)arg2 classCount:(unsigned long long)arg3 weight:(float)arg4 ;
+(id)softmaxCrossEntropyLossWithReductionType:(int)arg1 labelSmoothing:(float)arg2 classCount:(unsigned long long)arg3 weights:(id)arg4 ;
+(id)categoricalCrossEntropyLossWithReductionType:(int)arg1 labelSmoothing:(float)arg2 classCount:(unsigned long long)arg3 weight:(float)arg4 ;
+(id)categoricalCrossEntropyLossWithReductionType:(int)arg1 labelSmoothing:(float)arg2 classCount:(unsigned long long)arg3 weights:(id)arg4 ;
+(id)sigmoidCrossEntropyLossWithReductionType:(int)arg1 labelSmoothing:(float)arg2 weight:(float)arg3 ;
+(id)sigmoidCrossEntropyLossWithReductionType:(int)arg1 labelSmoothing:(float)arg2 weights:(id)arg3 ;
+(id)categoricalCrossEntropyLossWithReductionType:(int)arg1 weight:(float)arg2 ;
+(id)categoricalCrossEntropyLossWithReductionType:(int)arg1 weights:(id)arg2 ;
+(id)logLossWithReductionType:(int)arg1 epsilon:(float)arg2 weight:(float)arg3 ;
+(id)logLossWithReductionType:(int)arg1 epsilon:(float)arg2 weights:(id)arg3 ;
+(id)huberLossWithReductionType:(int)arg1 delta:(float)arg2 weight:(float)arg3 ;
+(id)huberLossWithReductionType:(int)arg1 delta:(float)arg2 weights:(id)arg3 ;
+(id)meanAbsoluteErrorLossWithReductionType:(int)arg1 weight:(float)arg2 ;
+(id)meanAbsoluteErrorLossWithReductionType:(int)arg1 weights:(id)arg2 ;
+(id)meanSquaredErrorLossWithReductionType:(int)arg1 weight:(float)arg2 ;
+(id)meanSquaredErrorLossWithReductionType:(int)arg1 weights:(id)arg2 ;
+(id)hingeLossWithReductionType:(int)arg1 weight:(float)arg2 ;
+(id)hingeLossWithReductionType:(int)arg1 weights:(id)arg2 ;
+(id)cosineDistanceLossWithReductionType:(int)arg1 weight:(float)arg2 ;
+(id)cosineDistanceLossWithReductionType:(int)arg1 weights:(id)arg2 ;
-(id)description;
-(MLCLossDescriptor *)descriptor;
-(MLCTensor *)weights;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(void)linkAssociatedTensors;
-(void)unlinkAssociatedTensors;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(id)initWithDescriptor:(id)arg1 weights:(id)arg2 ;
-(MLCTensor *)lossLabels;
-(void)setLossLabels:(MLCTensor *)arg1 ;
@end

