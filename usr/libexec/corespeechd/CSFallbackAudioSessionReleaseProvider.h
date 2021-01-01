//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSAudioRecorderDelegate-Protocol.h"
#import "CSFallbackAudioSessionReleaseProviding-Protocol.h"

@class CSAudioRecorder, NSString;
@protocol OS_dispatch_queue;

@interface CSFallbackAudioSessionReleaseProvider : NSObject <CSAudioRecorderDelegate, CSFallbackAudioSessionReleaseProviding>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CSAudioRecorder *_audioRecorder;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000985c
@property(retain, nonatomic) CSAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)audioRecorderWillBeDestroyed:(id)arg1;	// IMP=0x00000001000097ac
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5;	// IMP=0x00000001000097a8
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3;	// IMP=0x00000001000097a4
- (_Bool)fallbackDeactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000010000943c
- (id)initWithAudioRecorder:(id)arg1;	// IMP=0x0000000100009294

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

