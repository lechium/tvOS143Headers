/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVSampleBufferVideoOutputInternal;

@interface AVSampleBufferVideoOutput : NSObject {

	AVSampleBufferVideoOutputInternal* _videoOutputInternal;

}

@property (nonatomic,__weak,readonly) id<AVSampleBufferVideoOutputPullDelegate> outputDelegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)_weakReference;
-(id<AVSampleBufferVideoOutputPullDelegate>)outputDelegate;
-(BOOL)setUpWithOutputSettings:(id)arg1 outputSettingsArePixelBufferAttributes:(BOOL)arg2 withExceptionReason:(id*)arg3 ;
-(CVBufferRef)_copyPixelBufferForItemTimeWithOptions:(SCD_Struct_AV6)arg1 itemTimeForDisplay:(SCD_Struct_AV6*)arg2 options:(unsigned)arg3 ;
-(CVBufferRef)copyPixelBufferForSourceTime:(SCD_Struct_AV6)arg1 sourceTimeForDisplay:(SCD_Struct_AV6*)arg2 ;
-(void)setOutputDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)hasNewPixelBufferForSourceTime:(SCD_Struct_AV6)arg1 ;
-(CVBufferRef)copyLastPixelBuffer:(SCD_Struct_AV6*)arg1 ;
-(BOOL)_configureWithVideoQueue:(OpaqueFigVideoQueueRef)arg1 ;
-(void)_resetLastImageTime;
-(void)_dispatchOutputSequenceWasFlushed;
@end
