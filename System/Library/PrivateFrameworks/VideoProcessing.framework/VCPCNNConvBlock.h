/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VCPCNNBlock.h>

@class VCPCNNData;

@interface VCPCNNConvBlock : VCPCNNBlock {

	int _filterSize;
	int _filterNum;
	VCPCNNData* _filter;
	VCPCNNData* _bias;
	int _chunk;
	BOOL _reLU;
	int _padding;
	int _padSize;
	int _stride;
	int _groups;
	BOOL _batchNorm;

}
+(Class)convBlockClass:(int)arg1 ;
+(id)convBlockWithFilterSize:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 reLU:(BOOL)arg4 padding:(BOOL)arg5 ;
+(id)convBlockWithFilterSize:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 reLU:(BOOL)arg4 padding:(BOOL)arg5 groups:(int)arg6 stride:(int)arg7 batchNorm:(BOOL)arg8 ;
-(BOOL)useGPU;
-(BOOL)supportGPU;
-(id)initWithParameters:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 reLU:(BOOL)arg4 padding:(BOOL)arg5 groups:(int)arg6 stride:(int)arg7 batchNorm:(BOOL)arg8 ;
-(int)constructBlock:(id)arg1 context:(id)arg2 ;
@end
