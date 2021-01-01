/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@protocol MPSCNNInstanceNormalizationDataSource;
@interface MPSCNNInstanceNormalization : MPSCNNKernel {

	MPSAutoBuffer* _gamma;
	MPSAutoBuffer* _beta;
	id<MPSCNNInstanceNormalizationDataSource> _dataSource;
	unsigned long long _numberOfFeatureChannels;
	float _epsilon;

}

@property (assign,nonatomic) float epsilon;                                                              //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,retain,readonly) id<MPSCNNInstanceNormalizationDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(float)epsilon;
-(void)setEpsilon:(float)arg1 ;
-(unsigned long long)maxBatchSize;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id<MPSCNNInstanceNormalizationDataSource>)dataSource;
-(void)reloadGammaAndBetaFromDataSource;
-(id)initWithDevice:(id)arg1 dataSource:(id)arg2 ;
-(void)reloadDataSource:(id)arg1 ;
-(void)reloadGammaAndBetaWithCommandBuffer:(id)arg1 gammaAndBetaState:(id)arg2 ;
-(void)reloadDataSourceDeprecated:(id)arg1 ;
@end

