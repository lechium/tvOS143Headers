/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoCapture.h>
#import <libobjc.A.dylib/VCVideoSource.h>

@protocol CannedVideoFrameFeeder, OS_dispatch_queue;
@class NSObject, NSString;

@interface CannedVideoCapture : VCVideoCapture <VCVideoSource> {

	CannedVideoCapturePrivate* _pimpl;
	id<CannedVideoFrameFeeder> _frameFeeder;
	NSObject*<OS_dispatch_queue> _captureSessionQueue;

}

@property (nonatomic,readonly) CannedVideoCapturePrivate* pimpl;                  //@synthesize pimpl=_pimpl - In the implementation block
@property (nonatomic,retain) id<CannedVideoFrameFeeder> frameFeeder;              //@synthesize frameFeeder=_frameFeeder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)cannedVideoTypeForPath:(id)arg1 ;
+(int)createPixelBufferPool:(_CVPixelBufferPool*)arg1 withWidth:(int)arg2 height:(int)arg3 ;
-(void)dealloc;
-(CannedVideoCapturePrivate*)pimpl;
-(int)startPreview;
-(int)setFrameRate:(int)arg1 ;
-(BOOL)isPreviewRunning;
-(int)stop:(BOOL)arg1 ;
-(BOOL)isFrontCamera;
-(int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(int)copyColorInfo:(const _CFDictionary*)arg1 ;
-(int)configureCaptureWithToken:(VCVideoSourceToken)arg1 ;
-(int)frameCount:(BOOL)arg1 ;
-(int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3 ;
-(BOOL)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2 ;
-(id)initWithCaptureServer:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 videoSourceToken:(VCVideoSourceToken)arg5 video:(id)arg6 error:(int*)arg7 ;
-(void)stopThreads;
-(int)startThreads;
-(id<CannedVideoFrameFeeder>)frameFeeder;
-(void)setFrameFeeder:(id<CannedVideoFrameFeeder>)arg1 ;
@end
