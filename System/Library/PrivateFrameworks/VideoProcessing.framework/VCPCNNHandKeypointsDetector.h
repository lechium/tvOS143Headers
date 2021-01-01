/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCNNHandKeypointsDetector : NSObject {

	float _std;
	float _mean;

}
+(id)detector:(BOOL)arg1 sharedModel:(BOOL)arg2 modelName:(id)arg3 ;
-(int)copyImage:(CVBufferRef)arg1 toData:(float*)arg2 ;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 offset:(float*)arg5 ;
-(int)generateHandKeypoints:(CGPoint*)arg1 keypointConfidence:(float*)arg2 offset:(float)arg3 ;
-(int)cvtHeatmaps2Keypoints:(float*)arg1 outHeight:(int)arg2 outWidth:(int)arg3 inHeight:(int)arg4 inWidth:(int)arg5 outChannel:(int)arg6 keypoints:(CGPoint*)arg7 keypointConfidence:(float*)arg8 offset:(float)arg9 ;
-(int)createInput:(float*)arg1 withBuffer:(CVBufferRef)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 box:(id)arg5 ;
-(int)handKeypointsDetection:(CVBufferRef)arg1 box:(id)arg2 keypoints:(CGPoint)arg3 keypointConfidence:(float)arg4 forGFT:(BOOL)arg5 ;
@end

