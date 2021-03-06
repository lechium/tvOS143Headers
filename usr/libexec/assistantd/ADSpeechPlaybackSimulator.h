//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADSpeechCapturing-Protocol.h"

@class NSString;
@protocol ADSpeechCapturingDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ADSpeechPlaybackSimulator : NSObject <ADSpeechCapturing>
{
    id <ADSpeechCapturingDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_playbackSource;	// 24 = 0x18
}

+ (id)_speechLogDecodingError;	// IMP=0x0000000100226cd8
- (void).cxx_destruct;	// IMP=0x0000000100227a2c
- (void)startPlaybackWithURL:(id)arg1 narrowBand:(_Bool)arg2 dictation:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100226e34
- (void)enforcePreviousEndpointHint;	// IMP=0x0000000100226e30
- (void)updateEndpointHintForDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100226e14
- (void)updateServerEndpointFeatures:(id)arg1;	// IMP=0x0000000100226e10
- (void)playRecordingStartAlert;	// IMP=0x0000000100226e0c
- (void)getLastStartpointTimestampAndCurrentTime:(CDUnknownBlockType)arg1;	// IMP=0x0000000100226df0
- (void)setIsDriving:(_Bool)arg1;	// IMP=0x0000000100226dec
- (void)setFingerprintWasRecognized;	// IMP=0x0000000100226de8
- (void)setSpeechWasRecognizedForElapsedTime:(double)arg1 isFinal:(_Bool)arg2;	// IMP=0x0000000100226de4
- (void)forceSuccessAudioAlertOnStop;	// IMP=0x0000000100226de0
- (void)setFingerprintingEnabled:(_Bool)arg1;	// IMP=0x0000000100226ddc
- (void)stopFingerprinting;	// IMP=0x0000000100226dd8
- (void)cancelSpeechCaptureSuppressingAlert:(_Bool)arg1;	// IMP=0x0000000100226dc8
- (void)stopSpeechCaptureForEvent:(long long)arg1 suppressAlert:(_Bool)arg2 hostTime:(unsigned long long)arg3;	// IMP=0x0000000100226db8
- (void)setSpeechWasRecognized;	// IMP=0x0000000100226db4
- (void)suspendAutomaticEndpointingInRange:(struct AFTimeRange)arg1;	// IMP=0x0000000100226db0
- (void)setSpeechRequestOptions:(id)arg1;	// IMP=0x0000000100226dac
- (void)releaseAudioSession;	// IMP=0x0000000100226da8
- (id)delegate;	// IMP=0x0000000100226d90
- (void)setDelegate:(id)arg1;	// IMP=0x0000000100226d00
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000100226c60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

