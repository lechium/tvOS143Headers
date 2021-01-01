/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoTrackDecoder.h>

@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore;
@class AVAssetReader, AVAssetReaderSampleReferenceOutput, NSObject;

@interface VCPVideoTrackSyncDecoder : VCPVideoTrackDecoder {

	AVAssetReader* _assetReader;
	AVAssetReaderSampleReferenceOutput* _trackReader;
	SCD_Struct_VC17 _timerange;
	BOOL _launchOnce;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _group;
	NSObject*<OS_dispatch_semaphore> _inputSemaphore;
	NSObject*<OS_dispatch_semaphore> _outputSemaphore;
	BOOL _cancelDecode;
	int _decodeError;
	BOOL _decodeFinished;
	int _decodedFrames;
	int _outputFrameIdx;
	opaqueCMSampleBuffer* _sampleBuffer[2];

}
-(void)dealloc;
-(long long)status;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(id)initWithTrack:(id)arg1 timerange:(const SCD_Struct_VC17*)arg2 ;
-(int)findNextSample:(BOOL)arg1 timerange:(SCD_Struct_VC17*)arg2 ;
-(int)decodeSample:(SCD_Struct_VC17)arg1 sample:(opaqueCMSampleBuffer*)arg2 ;
-(void)decodeTask;
@end
