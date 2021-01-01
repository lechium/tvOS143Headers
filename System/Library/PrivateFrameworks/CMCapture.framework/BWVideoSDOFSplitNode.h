/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFanOutNode.h>

@class BWNodeOutput;

@interface BWVideoSDOFSplitNode : BWFanOutNode {

	opaqueCMFormatDescriptionRef _originalVideoFormatDescription;
	BWNodeOutput* _originalOutput;
	BWNodeOutput* _sdofOutput;

}

@property (nonatomic,readonly) BWNodeOutput * originalOutput;              //@synthesize originalOutput=_originalOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * sdofOutput;                  //@synthesize sdofOutput=_sdofOutput - In the implementation block
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)nodeSubType;
-(BWNodeOutput *)originalOutput;
-(BWNodeOutput *)sdofOutput;
@end

