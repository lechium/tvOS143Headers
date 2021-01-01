/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCLayer.h>

@class NSArray;

@interface MLCTransposeLayer : MLCLayer {

	NSArray* _dimensions;
	NSArray* _shape;

}

@property (nonatomic,readonly) NSArray * shape;                        //@synthesize shape=_shape - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dimensions;              //@synthesize dimensions=_dimensions - In the implementation block
+(id)layerWithDimensions:(id)arg1 ;
-(id)description;
-(NSArray *)shape;
-(id)initWithDimensions:(id)arg1 ;
-(NSArray *)dimensions;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(unsigned long long)resultSizeFromSourceSizes:(id)arg1 dimension:(unsigned long long)arg2 ;
-(BOOL)isStaticBatchSize;
@end

