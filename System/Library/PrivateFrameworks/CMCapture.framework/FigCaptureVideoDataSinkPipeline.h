/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/FigCaptureRemoteQueueSinkPipeline.h>

@class BWFigVideoCaptureDevice, FigCaptureVISPipeline, BWPixelTransferNode, BWNodeOutput, NSString;

@interface FigCaptureVideoDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {

	BWFigVideoCaptureDevice* _captureDevice;
	FigCaptureVISPipeline* _visPipeline;
	BWPixelTransferNode* _videoDataConverterRotatorNode;
	BWNodeOutput* _faceTrackingVideoCaptureOutput;
	BWNodeOutput* _offlineVISMotionDataCaptureOutput;
	NSString* _sourceID;
	int _sourceDeviceType;

}

@property (nonatomic,readonly) NSString * sourceID;                                           //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) int sourceDeviceType;                                          //@synthesize sourceDeviceType=_sourceDeviceType - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * faceTrackingVideoCaptureOutput;                 //@synthesize faceTrackingVideoCaptureOutput=_faceTrackingVideoCaptureOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * offlineVISMotionDataCaptureOutput;              //@synthesize offlineVISMotionDataCaptureOutput=_offlineVISMotionDataCaptureOutput - In the implementation block
+(void)initialize;
-(void)dealloc;
-(NSString *)sourceID;
-(int)sourceDeviceType;
-(BWNodeOutput *)faceTrackingVideoCaptureOutput;
-(BWNodeOutput *)offlineVISMotionDataCaptureOutput;
-(id)initWithConfiguration:(id)arg1 sourceVideoOutput:(id)arg2 captureDevice:(id)arg3 graph:(id)arg4 name:(id)arg5 delegate:(id)arg6 ;
-(int)_buildVideoDataSinkPipelineWithConfiguration:(id)arg1 sourceVideoOutput:(id)arg2 captureDevice:(id)arg3 graph:(id)arg4 delegate:(id)arg5 ;
@end

