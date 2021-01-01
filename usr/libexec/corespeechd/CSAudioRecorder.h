//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVVoiceControllerRecordDelegate-Protocol.h"
#import "CSAudioDecoderDelegate-Protocol.h"
#import "CSAudioFileReaderDelegate-Protocol.h"
#import "CSAudioServerCrashEventProviding-Protocol.h"
#import "CSAudioSessionEventProviding-Protocol.h"

@class AVVoiceController, CSAudioFileReader, CSRemoteRecordClient, NSDictionary, NSHashTable, NSMutableDictionary, NSString;
@protocol CSAudioServerCrashEventProvidingDelegate, CSAudioSessionEventProvidingDelegate, OS_dispatch_queue;

@interface CSAudioRecorder : NSObject <AVVoiceControllerRecordDelegate, CSAudioDecoderDelegate, CSAudioFileReaderDelegate, CSAudioServerCrashEventProviding, CSAudioSessionEventProviding>
{
    AVVoiceController *_voiceController;	// 8 = 0x8
    struct OpaqueAudioConverter *_deinterleaver;	// 16 = 0x10
    struct AudioBufferList _interleavedABL;	// 24 = 0x18
    struct AudioBufferList *_pNonInterleavedABL;	// 48 = 0x30
    CSRemoteRecordClient *_remoteRecordClient;	// 56 = 0x38
    NSDictionary *_latestContext;	// 64 = 0x40
    _Bool _shouldUseRemoteRecord;	// 72 = 0x48
    NSMutableDictionary *_opusDecoders;	// 80 = 0x50
    CSAudioFileReader *_audioFileReader;	// 88 = 0x58
    unsigned long long _audioFilePathIndex;	// 96 = 0x60
    _Bool _waitingForDidStart;	// 104 = 0x68
    unsigned long long _pendingTwoShotVTToken;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_queue;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_voiceControllerCreationQueue;	// 128 = 0x80
    NSHashTable *_observers;	// 136 = 0x88
    id <CSAudioServerCrashEventProvidingDelegate> _crashEventDelegate;	// 144 = 0x90
    id <CSAudioSessionEventProvidingDelegate> _sessionEventDelegate;	// 152 = 0x98
}

+ (void)createSharedAudioSession;	// IMP=0x0000000100057324
+ (unsigned long long)_convertDeactivateOption:(unsigned long long)arg1;	// IMP=0x0000000100057318
- (void).cxx_destruct;	// IMP=0x000000010005bb6c
@property(nonatomic) __weak id <CSAudioSessionEventProvidingDelegate> sessionEventDelegate; // @synthesize sessionEventDelegate=_sessionEventDelegate;
@property(nonatomic) __weak id <CSAudioServerCrashEventProvidingDelegate> crashEventDelegate; // @synthesize crashEventDelegate=_crashEventDelegate;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *voiceControllerCreationQueue; // @synthesize voiceControllerCreationQueue=_voiceControllerCreationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)_getRecordSettingsWithRequest:(id)arg1;	// IMP=0x000000010005b798
- (void)audioFileReaderDidStopRecording:(id)arg1 forReason:(long long)arg2;	// IMP=0x000000010005b784
- (void)audioFileReaderDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000010005b6e4
- (void)audioFileReaderBufferAvailable:(id)arg1 buffer:(id)arg2 atTime:(unsigned long long)arg3;	// IMP=0x000000010005b6c8
- (_Bool)_needResetAudioInjectionIndex:(id)arg1;	// IMP=0x000000010005b5f8
- (void)_createDeInterleaverIfNeeded;	// IMP=0x000000010005b478
- (id)_deinterleaveBufferIfNeeded:(id)arg1 force:(_Bool)arg2;	// IMP=0x000000010005b1c0
- (void)voiceControllerMediaServicesWereReset:(id)arg1;	// IMP=0x000000010005b11c
- (void)voiceControllerMediaServicesWereLost:(id)arg1;	// IMP=0x000000010005aeb4
- (void)voiceControllerDidSetAudioSessionActive:(id)arg1 isActivated:(_Bool)arg2;	// IMP=0x000000010005ac50
- (void)voiceControllerWillSetAudioSessionActive:(id)arg1 willActivate:(_Bool)arg2;	// IMP=0x000000010005a9ec
- (void)voiceControllerEndRecordInterruption:(id)arg1;	// IMP=0x000000010005a7d0
- (void)voiceControllerBeginRecordInterruption:(id)arg1 withContext:(id)arg2;	// IMP=0x000000010005a574
- (void)voiceControllerBeginRecordInterruption:(id)arg1;	// IMP=0x000000010005a358
- (void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;	// IMP=0x000000010005a0c0
- (void)voiceControllerDidFinishAlertPlayback:(id)arg1 ofType:(int)arg2 error:(id)arg3;	// IMP=0x0000000100059e4c
- (void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;	// IMP=0x0000000100059c10
- (void)voiceControllerStreamInvalidated:(id)arg1 forStream:(unsigned long long)arg2;	// IMP=0x00000001000599dc
- (void)voiceControllerDidStopRecording:(id)arg1 forStream:(unsigned long long)arg2 forReason:(long long)arg3;	// IMP=0x0000000100059894
- (void)voiceControllerAudioCallback:(id)arg1 forStream:(unsigned long long)arg2 buffer:(id)arg3;	// IMP=0x000000010005972c
- (void)voiceControllerDidStartRecording:(id)arg1 forStream:(unsigned long long)arg2 successfully:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000100059558
- (void)_audioRecorderDidStopRecordingForReason:(long long)arg1 streamHandleID:(unsigned long long)arg2;	// IMP=0x0000000100059410
- (void)_audioRecorderDidStartRecordingSuccessfully:(_Bool)arg1 streamHandleID:(unsigned long long)arg2 error:(id)arg3;	// IMP=0x00000001000592b0
- (id)metrics;	// IMP=0x00000001000592a0
- (float)averagePowerForChannel:(unsigned long long)arg1;	// IMP=0x0000000100059298
- (float)peakPowerForChannel:(unsigned long long)arg1;	// IMP=0x0000000100059290
- (void)updateMeters;	// IMP=0x000000010005928c
- (void)setMeteringEnabled:(_Bool)arg1;	// IMP=0x0000000100059288
- (unsigned long long)alertStartTime;	// IMP=0x0000000100059278
- (_Bool)playAlertSoundForType:(long long)arg1;	// IMP=0x00000001000591a0
- (_Bool)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)arg1;	// IMP=0x0000000100059050
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;	// IMP=0x0000000100059040
- (void)audioDecoderDidDecodePackets:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 timestamp:(unsigned long long)arg5 receivedNumChannels:(unsigned int)arg6;	// IMP=0x0000000100058e08
- (id)_compensateChannelDataIfNeeded:(id)arg1 receivedNumChannels:(unsigned int)arg2;	// IMP=0x0000000100058c08
- (void)_processAudioBuffer:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;	// IMP=0x000000010005814c
- (void)_processAudioChain:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 remoteVAD:(id)arg3 atTime:(unsigned long long)arg4;	// IMP=0x0000000100057f44
- (_Bool)_shouldUseRemoteBuiltInMic:(id)arg1;	// IMP=0x0000000100057edc
- (_Bool)_shouldUseRemoteRecordForContext:(id)arg1;	// IMP=0x0000000100057ed4
- (id)_updateLanguageCodeForRemoteVTEIResult:(id)arg1;	// IMP=0x0000000100057d30
- (id)voiceTriggerInfo;	// IMP=0x0000000100057c64
- (id)playbackRoute;	// IMP=0x0000000100057c54
- (void)configureAlertBehavior:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;	// IMP=0x00000001000578c0
- (void)enableMiniDucking:(_Bool)arg1;	// IMP=0x0000000100057790
@property(nonatomic) _Bool duckOthersOption;
- (void)enableSmartRoutingConsiderationForStream:(unsigned long long)arg1 enable:(_Bool)arg2;	// IMP=0x00000001000574d4
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000100057144
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000100056de8
- (_Bool)setRecordMode:(long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000100056b78
- (void)_logResourceNotAvailableErrorIfNeeded:(id)arg1;	// IMP=0x0000000100056a80
- (_Bool)_shouldLogResourceNotAvailableError;	// IMP=0x0000000100056a40
- (_Bool)prewarmAudioSessionWithStreamHandleId:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000001000568d0
- (_Bool)isNarrowBandWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x0000000100056738
- (id)recordSettingsWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x0000000100056728
- (float)recordingSampleRateWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x0000000100056560
- (id)recordDeviceInfoWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00000001000564f0
- (id)recordRouteWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x0000000100056460
- (_Bool)isRecordingWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00000001000563ec
- (_Bool)isSessionCurrentlyActivated;	// IMP=0x000000010005626c
- (_Bool)stopAudioStreamWithStreamHandleId:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000010005603c
- (_Bool)startAudioStreamWithOption:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000100055ce0
- (_Bool)_startAudioStreamForAudioInjection;	// IMP=0x0000000100055838
- (_Bool)_shouldInjectAudio;	// IMP=0x00000001000557e4
- (_Bool)prepareAudioStreamRecord:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000001000554a0
- (_Bool)setCurrentContext:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000001000551d4
- (unsigned long long)setContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100054de8
- (id)_voiceControllerWithError:(id *)arg1;	// IMP=0x0000000100054a34
- (void)_destroyVoiceController;	// IMP=0x0000000100054954
- (void)dealloc;	// IMP=0x0000000100054860
- (void)willDestroy;	// IMP=0x0000000100054564
- (void)setAudioSessionEventDelegate:(id)arg1;	// IMP=0x00000001000544d4
- (void)setAudioServerCrashEventDelegate:(id)arg1;	// IMP=0x0000000100054444
- (void)unregisterObserver:(id)arg1;	// IMP=0x00000001000543ac
- (void)registerObserver:(id)arg1;	// IMP=0x0000000100054314
- (id)initWithQueue:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005404c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

