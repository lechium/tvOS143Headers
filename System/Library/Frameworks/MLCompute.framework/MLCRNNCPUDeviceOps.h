/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCCPUDeviceOps.h>

@class NSData, NSMutableArray;

@interface MLCRNNCPUDeviceOps : MLCCPUDeviceOps {

	BOOL _batchFirst;
	BOOL _hasPeephole;
	BOOL _returnsSequences;
	BOOL _biDirectional;
	NSData* _lstmDeltaParams;
	NSMutableArray* _weightAndBiasGateDeltaBuffers;
	NSData* _trainingCache;
	NSMutableArray* _combinedGateWeightsAndBias;
	NSMutableArray* _combinedInputsBuffer;
	NSMutableArray* _combinedOutputsBuffer;
	unsigned long long _numLayers;
	unsigned long long _inputSize;
	unsigned long long _hiddenSize;
	unsigned long long _numAccumulatorsPerParameter;
	unsigned long long _numParametersForSingleLSTM;

}

@property (assign,nonatomic) BOOL batchFirst;                                             //@synthesize batchFirst=_batchFirst - In the implementation block
@property (assign,nonatomic) BOOL hasPeephole;                                            //@synthesize hasPeephole=_hasPeephole - In the implementation block
@property (assign,nonatomic) BOOL returnsSequences;                                       //@synthesize returnsSequences=_returnsSequences - In the implementation block
@property (assign,nonatomic) BOOL biDirectional;                                          //@synthesize biDirectional=_biDirectional - In the implementation block
@property (nonatomic,retain) NSData * lstmDeltaParams;                                    //@synthesize lstmDeltaParams=_lstmDeltaParams - In the implementation block
@property (nonatomic,retain) NSMutableArray * weightAndBiasGateDeltaBuffers;              //@synthesize weightAndBiasGateDeltaBuffers=_weightAndBiasGateDeltaBuffers - In the implementation block
@property (nonatomic,retain) NSData * trainingCache;                                      //@synthesize trainingCache=_trainingCache - In the implementation block
@property (nonatomic,retain) NSMutableArray * combinedGateWeightsAndBias;                 //@synthesize combinedGateWeightsAndBias=_combinedGateWeightsAndBias - In the implementation block
@property (nonatomic,retain) NSMutableArray * combinedInputsBuffer;                       //@synthesize combinedInputsBuffer=_combinedInputsBuffer - In the implementation block
@property (nonatomic,retain) NSMutableArray * combinedOutputsBuffer;                      //@synthesize combinedOutputsBuffer=_combinedOutputsBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long numLayers;                                //@synthesize numLayers=_numLayers - In the implementation block
@property (assign,nonatomic) unsigned long long inputSize;                                //@synthesize inputSize=_inputSize - In the implementation block
@property (assign,nonatomic) unsigned long long hiddenSize;                               //@synthesize hiddenSize=_hiddenSize - In the implementation block
@property (assign,nonatomic) unsigned long long numAccumulatorsPerParameter;              //@synthesize numAccumulatorsPerParameter=_numAccumulatorsPerParameter - In the implementation block
@property (assign,nonatomic) unsigned long long numParametersForSingleLSTM;               //@synthesize numParametersForSingleLSTM=_numParametersForSingleLSTM - In the implementation block
+(id)deviceOpsWithType:(int)arg1 params:(id)arg2 inDeltaData:(id)arg3 outDeltaData:(id)arg4 weightsDeltaData:(id)arg5 biasDeltaData:(id)arg6 weightsMomentumData:(id)arg7 biasMomentumData:(id)arg8 ;
-(void)dealloc;
-(unsigned long long)inputSize;
-(void)setInputSize:(unsigned long long)arg1 ;
-(id)initWithType:(int)arg1 params:(id)arg2 inDeltaData:(id)arg3 outDeltaData:(id)arg4 weightsDeltaData:(id)arg5 biasDeltaData:(id)arg6 weightsMomentumData:(id)arg7 biasMomentumData:(id)arg8 betaDeltaData:(id)arg9 gammaDeltaData:(id)arg10 betaMomentumData:(id)arg11 gammaMomentumData:(id)arg12 ;
-(BOOL)batchFirst;
-(NSData *)lstmDeltaParams;
-(BOOL)biDirectional;
-(unsigned long long)numLayers;
-(BOOL)returnsSequences;
-(unsigned long long)hiddenSize;
-(void)setTrainingCache:(NSData *)arg1 ;
-(NSData *)trainingCache;
-(void)setBatchFirst:(BOOL)arg1 ;
-(void)setReturnsSequences:(BOOL)arg1 ;
-(void)setHiddenSize:(unsigned long long)arg1 ;
-(void)setNumLayers:(unsigned long long)arg1 ;
-(void)setHasPeephole:(BOOL)arg1 ;
-(void)setLstmDeltaParams:(NSData *)arg1 ;
-(void)setCombinedGateWeightsAndBias:(NSMutableArray *)arg1 ;
-(void)setBiDirectional:(BOOL)arg1 ;
-(void)setNumParametersForSingleLSTM:(unsigned long long)arg1 ;
-(void)setCombinedInputsBuffer:(NSMutableArray *)arg1 ;
-(void)setCombinedOutputsBuffer:(NSMutableArray *)arg1 ;
-(void)setNumAccumulatorsPerParameter:(unsigned long long)arg1 ;
-(unsigned long long)numParametersForSingleLSTM;
-(NSMutableArray *)weightAndBiasGateDeltaBuffers;
-(NSMutableArray *)combinedInputsBuffer;
-(NSMutableArray *)combinedOutputsBuffer;
-(BOOL)hasPeephole;
-(void)setWeightAndBiasGateDeltaBuffers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)combinedGateWeightsAndBias;
-(unsigned long long)numAccumulatorsPerParameter;
@end

