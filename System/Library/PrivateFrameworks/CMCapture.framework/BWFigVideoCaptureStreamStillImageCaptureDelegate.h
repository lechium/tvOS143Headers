/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWFigVideoCaptureStreamStillImageCaptureDelegate <NSObject>
@required
-(void)captureStreamWillBeginStillImageCapture:(id)arg1;
-(void)captureStream:(id)arg1 stillImageCaptureError:(int)arg2;
-(void)captureStream:(id)arg1 didCapturePreBracketedEV0ImageWithPTS:(SCD_Struct_BW7)arg2;
-(void)captureStream:(id)arg1 didCaptureReferenceFrameWithPTS:(SCD_Struct_BW7)arg2 referenceFrameBracketedCaptureSequenceNumber:(id)arg3;
-(void)captureStreamDidCompleteStillImageCapture:(id)arg1;
-(void)captureStreamWillWaitForTimeMachineToFill:(id)arg1;

@end
