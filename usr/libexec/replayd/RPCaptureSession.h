//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RPSession.h"

#import "RPCaptureManagerProtocol-Protocol.h"

@interface RPCaptureSession : RPSession <RPCaptureManagerProtocol>
{
}

- (void)handleClientApplicationDidEnterForeground;	// IMP=0x0000000100034e28
- (void)handleClientApplicationDidEnterBackground;	// IMP=0x0000000100034d38
- (void)handleResumeCaptureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000349bc
- (void)handleResumeContextIDFailure;	// IMP=0x0000000100034794
- (void)handleDeviceRestrictionWarning;	// IMP=0x000000010003456c
- (void)handleDeviceLockedWarning;	// IMP=0x000000010003448c
- (void)handleDisplayWarning;	// IMP=0x0000000100034264
- (void)packageAudioSampleBufferForCapture:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;	// IMP=0x00000001000341fc
- (void)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x00000001000340bc
- (void)captureDidFailWithError:(id)arg1;	// IMP=0x0000000100033f98
- (void)didCaptureSampleWithType:(int)arg1 withSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 withTransformFlags:(unsigned long long)arg3;	// IMP=0x0000000100033eb0
- (id)dispatchCaptureQueue;	// IMP=0x0000000100033e40
- (void)pauseSession;	// IMP=0x0000000100033cd0
- (void)stopCaptureWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100033aa4
- (void)presentAcknowledgmentWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100033770
- (void)startCaptureWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2 contextID:(id)arg3 windowSize:(struct CGSize)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000334c4

@end
