/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/FigCaptureSinkPipeline.h>

@class BWFileCoordinatorNode, BWAudioConverterNode, BWAudioFileSinkNode;

@interface FigCaptureAudioFileSinkPipeline : FigCaptureSinkPipeline {

	BWFileCoordinatorNode* _fileCoordinatorNode;
	BWAudioConverterNode* _audioConverterNode;
	BWAudioFileSinkNode* _audioFileSinkNode;

}

@property (nonatomic,readonly) BWFileCoordinatorNode * fileCoordinatorNode;              //@synthesize fileCoordinatorNode=_fileCoordinatorNode - In the implementation block
@property (nonatomic,readonly) BWAudioFileSinkNode * audioFileSinkNode;                  //@synthesize audioFileSinkNode=_audioFileSinkNode - In the implementation block
+(void)initialize;
-(void)dealloc;
-(BWFileCoordinatorNode *)fileCoordinatorNode;
-(BWAudioFileSinkNode *)audioFileSinkNode;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 sourceAudioOutput:(id)arg4 recordingStatusDelegate:(id)arg5 ;
-(int)_buildAudioFileSinkPipeline:(id)arg1 graph:(id)arg2 sourceAudioOutput:(id)arg3 recordingStatusDelegate:(id)arg4 ;
@end

