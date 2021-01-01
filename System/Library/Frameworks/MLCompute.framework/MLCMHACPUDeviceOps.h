/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCCPUDeviceOps.h>

@class NSData, NSArray, NSMutableArray;

@interface MLCMHACPUDeviceOps : MLCCPUDeviceOps {

	BOOL _hasAttnBias;
	BOOL _hasKeyMask;
	BOOL _hasAttnMask;
	NSData* _keyMask;
	NSData* _attnMask;
	unsigned long long _keyMaskStride;
	unsigned long long _backpropCacheSize;
	NSData* _backpropCacheData;
	NSArray* _attnBiasDeltaData;
	NSMutableArray* _weightsMomentumDeltaDataArray;
	NSMutableArray* _biasMomentumDeltaDataArray;

}

@property (assign,nonatomic) BOOL hasAttnBias;                                            //@synthesize hasAttnBias=_hasAttnBias - In the implementation block
@property (assign,nonatomic) BOOL hasKeyMask;                                             //@synthesize hasKeyMask=_hasKeyMask - In the implementation block
@property (assign,nonatomic) BOOL hasAttnMask;                                            //@synthesize hasAttnMask=_hasAttnMask - In the implementation block
@property (nonatomic,retain) NSData * keyMask;                                            //@synthesize keyMask=_keyMask - In the implementation block
@property (nonatomic,retain) NSData * attnMask;                                           //@synthesize attnMask=_attnMask - In the implementation block
@property (assign,nonatomic) unsigned long long keyMaskStride;                            //@synthesize keyMaskStride=_keyMaskStride - In the implementation block
@property (assign,nonatomic) unsigned long long backpropCacheSize;                        //@synthesize backpropCacheSize=_backpropCacheSize - In the implementation block
@property (nonatomic,retain) NSData * backpropCacheData;                                  //@synthesize backpropCacheData=_backpropCacheData - In the implementation block
@property (nonatomic,retain) NSArray * attnBiasDeltaData;                                 //@synthesize attnBiasDeltaData=_attnBiasDeltaData - In the implementation block
@property (nonatomic,retain) NSMutableArray * weightsMomentumDeltaDataArray;              //@synthesize weightsMomentumDeltaDataArray=_weightsMomentumDeltaDataArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * biasMomentumDeltaDataArray;                 //@synthesize biasMomentumDeltaDataArray=_biasMomentumDeltaDataArray - In the implementation block
+(id)deviceOpsWithType:(int)arg1 params:(id)arg2 inDeltaData:(id)arg3 outDeltaData:(id)arg4 weightsDeltaData:(id)arg5 biasDeltaData:(id)arg6 weightsMomentumData:(id)arg7 biasMomentumData:(id)arg8 ;
-(id)initWithType:(int)arg1 params:(id)arg2 inDeltaData:(id)arg3 outDeltaData:(id)arg4 weightsDeltaData:(id)arg5 biasDeltaData:(id)arg6 weightsMomentumData:(id)arg7 biasMomentumData:(id)arg8 betaDeltaData:(id)arg9 gammaDeltaData:(id)arg10 betaMomentumData:(id)arg11 gammaMomentumData:(id)arg12 ;
-(BOOL)hasAttnBias;
-(void)setHasAttnBias:(BOOL)arg1 ;
-(BOOL)hasKeyMask;
-(void)setHasKeyMask:(BOOL)arg1 ;
-(BOOL)hasAttnMask;
-(void)setHasAttnMask:(BOOL)arg1 ;
-(NSData *)keyMask;
-(void)setKeyMask:(NSData *)arg1 ;
-(NSData *)attnMask;
-(void)setAttnMask:(NSData *)arg1 ;
-(unsigned long long)keyMaskStride;
-(void)setKeyMaskStride:(unsigned long long)arg1 ;
-(unsigned long long)backpropCacheSize;
-(void)setBackpropCacheSize:(unsigned long long)arg1 ;
-(NSData *)backpropCacheData;
-(void)setBackpropCacheData:(NSData *)arg1 ;
-(NSArray *)attnBiasDeltaData;
-(void)setAttnBiasDeltaData:(NSArray *)arg1 ;
-(NSMutableArray *)weightsMomentumDeltaDataArray;
-(void)setWeightsMomentumDeltaDataArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)biasMomentumDeltaDataArray;
-(void)setBiasMomentumDeltaDataArray:(NSMutableArray *)arg1 ;
@end

