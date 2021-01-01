//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADAcousticFingerprinterDelegate-Protocol.h"
#import "ADSpeechCapturing-Protocol.h"
#import "CSAudioSessionControllerDelegate-Protocol.h"
#import "CSEndpointAnalyzerDelegate-Protocol.h"
#import "CSLanguageDetectorDelegate-Protocol.h"
#import "CSSpeakerIdentificationDelegate-Protocol.h"
#import "CSSpeechControllerDelegate-Protocol.h"

@class ADAcousticFingerprinter, ADAudioActivationInfo, ADAudioFileWriter, ADSpeechCapturingContext, AFBluetoothWirelessSplitterSessionStateObserver, AFClientConfiguration, AFExperimentContext, AFSpeechSynthesisRecord, AFWatchdogTimer, CSAudioRecordDeviceInfo, CSEndpointerMetrics, CSSpeechController, NSArray, NSFileHandle, NSMutableDictionary, NSString, NSUUID, NSXPCConnection;
@protocol ADSpeechCapturingDelegate, CSEndpointAnalyzer, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface ADSpeechRecorder : NSObject <CSAudioSessionControllerDelegate, ADAcousticFingerprinterDelegate, CSSpeechControllerDelegate, CSEndpointAnalyzerDelegate, CSLanguageDetectorDelegate, CSSpeakerIdentificationDelegate, ADSpeechCapturing>
{
    id <ADSpeechCapturingDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CSSpeechController *_speechController;	// 24 = 0x18
    long long _packetCount;	// 32 = 0x20
    long long _speechCapturingMode;	// 40 = 0x28
    long long _recordingAlertsConfiguration;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_extendedEndpointTimer;	// 56 = 0x38
    id <CSEndpointAnalyzer> _endpointAnalyzer;	// 64 = 0x40
    ADSpeechCapturingContext *_context;	// 72 = 0x48
    ADAudioActivationInfo *_currentActivationInfo;	// 80 = 0x50
    ADAudioActivationInfo *_pendingActivationInfo;	// 88 = 0x58
    CSAudioRecordDeviceInfo *_currentRecordDeviceInfo;	// 96 = 0x60
    NSString *_currentPlaybackRoute;	// 104 = 0x68
    _Bool _fingerprintingEnabled;	// 112 = 0x70
    ADAcousticFingerprinter *_fingerprinter;	// 120 = 0x78
    long long _audioFileType;	// 128 = 0x80
    _Bool _needsAVVCLPCMCallbacks;	// 136 = 0x88
    _Bool _hasReceivedEmptyLPCMRecordBuffer;	// 137 = 0x89
    NSFileHandle *_audioFileHandle;	// 144 = 0x90
    ADAudioFileWriter *_audioFileWriter;	// 152 = 0x98
    ADAudioFileWriter *_audioLogggingFileWriter;	// 160 = 0xa0
    long long _startEvent;	// 168 = 0xa8
    long long _recordingState;	// 176 = 0xb0
    long long _endpointerOperationMode;	// 184 = 0xb8
    _Bool _didReceiveFirstBuffer;	// 192 = 0xc0
    _Bool _didReceiveLastBuffer;	// 193 = 0xc1
    _Bool _didDetectStartpoint;	// 194 = 0xc2
    _Bool _didDetectEndpoint;	// 195 = 0xc3
    _Bool _didEnterTwoShotMode;	// 196 = 0xc4
    _Bool _didFakeTwoShotWithAlert;	// 197 = 0xc5
    NSUUID *_fakeTwoShotTTSPromptUUID;	// 200 = 0xc8
    _Bool _serverDidRecognizeSpeech;	// 208 = 0xd0
    _Bool _fingerprintWasRecognized;	// 209 = 0xd1
    _Bool _serverDidEndpoint;	// 210 = 0xd2
    _Bool _didTimeout;	// 211 = 0xd3
    _Bool _wasCanceled;	// 212 = 0xd4
    _Bool _suppressRecordingStoppedAlert;	// 213 = 0xd5
    _Bool _isRecordingUsingBTRoute;	// 214 = 0xd6
    double _twoShotStartTime;	// 216 = 0xd8
    _Bool _didPerformTwoShotPrompt;	// 224 = 0xe0
    _Bool _forceSuccessAlertOnStop;	// 225 = 0xe1
    _Bool _isDriving;	// 226 = 0xe2
    double _startRecordingTimestamp;	// 232 = 0xe8
    double _firstBufferTimestamp;	// 240 = 0xf0
    unsigned long long _firstBufferHostTime;	// 248 = 0xf8
    unsigned long long _estimatedSpeechEndHostTime;	// 256 = 0x100
    double _lastPrepareTimestamp;	// 264 = 0x108
    double _accumulatedBufferDuration;	// 272 = 0x110
    NSObject<OS_dispatch_group> *_recordingWillStartGroup;	// 280 = 0x118
    struct OpaqueAudioConverter *_decoder;	// 288 = 0x120
    double _expectedFirstBufferTimestamp;	// 296 = 0x128
    _Bool _isOpus;	// 304 = 0x130
    NSString *_recordDevice;	// 312 = 0x138
    _Bool _audioDuckingEnabled;	// 320 = 0x140
    NSXPCConnection *_speechRecordingEventListenerConnection;	// 328 = 0x148
    AFWatchdogTimer *_fakeTwoShotTTSPromptWatchdogTimer;	// 336 = 0x150
    unsigned long long _lastAudioRecordBufferStartTime;	// 344 = 0x158
    unsigned long long _lastAudioRecordBufferReceiptTime;	// 352 = 0x160
    CSEndpointerMetrics *_lastEndpointerMetrics;	// 360 = 0x168
    double _lastEndpointHintDuration;	// 368 = 0x170
    NSArray *_lastEndpointHintFeatures;	// 376 = 0x178
    CDUnknownBlockType _lastEndpointHintCompletion;	// 384 = 0x180
    AFSpeechSynthesisRecord *_mostRecentSpeechSynthesisRecord;	// 392 = 0x188
    AFClientConfiguration *_currentClientConfiguration;	// 400 = 0x190
    NSObject<OS_dispatch_group> *_alertPlaybackGroup;	// 408 = 0x198
    NSMutableDictionary *_numberOfAVVCAlertPlaybacksByType;	// 416 = 0x1a0
    AFBluetoothWirelessSplitterSessionStateObserver *_bluetoothWirelessSplitterSessionStateObserver;	// 424 = 0x1a8
    AFExperimentContext *_experimentContext;	// 432 = 0x1b0
    _Bool _suppressInterruptionEndedNotifications;	// 440 = 0x1b8
}

- (void).cxx_destruct;	// IMP=0x000000010019b6fc
@property(nonatomic) _Bool suppressInterruptionEndedNotifications; // @synthesize suppressInterruptionEndedNotifications=_suppressInterruptionEndedNotifications;
- (void)_setAudioDuckingEnabled:(_Bool)arg1;	// IMP=0x000000010019b6e8
- (void)_setDictationAudioModeEnabled:(_Bool)arg1;	// IMP=0x000000010019b6e4
- (unsigned int)_audioDeviceID;	// IMP=0x000000010019b6dc
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerResetNotification:(id)arg2;	// IMP=0x000000010019b618
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerLostNotification:(id)arg2;	// IMP=0x000000010019b4e0
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;	// IMP=0x000000010019b41c
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;	// IMP=0x000000010019b2e4
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;	// IMP=0x000000010019b220
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2;	// IMP=0x000000010019b094
- (void)speakerIdentificationDidDetectSpeakerWithScores:(id)arg1;	// IMP=0x000000010019ad18
- (_Bool)_startAudioPlaybackRequest:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010019a940
- (void)acousticFingerprinter:(id)arg1 hasFingerprint:(id)arg2 duration:(double)arg3;	// IMP=0x000000010019a7f0
- (void)setEARLanguageDetectorSpeechRequestId:(id)arg1;	// IMP=0x000000010019a7e0
- (void)performBlockAfterAlerts:(CDUnknownBlockType)arg1 timeout:(double)arg2;	// IMP=0x000000010019a2f4
- (void)setEndpointerDelayedTrigger:(_Bool)arg1;	// IMP=0x000000010019a2e4
- (void)setEndpointerThreshold:(double)arg1;	// IMP=0x000000010019a2d0
- (void)enforcePreviousEndpointHint;	// IMP=0x000000010019a2bc
- (void)_enforceEndpointHint;	// IMP=0x000000010019a1d0
- (void)_clearEndpointHint;	// IMP=0x000000010019a188
- (void)_checkIfLastEndpointHintShouldBeAccepted;	// IMP=0x0000000100199ecc
- (void)updateEndpointHintForDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100199d74
- (void)_handleFakeTwoShotPromptCallbackWithUUID:(id)arg1 timestamp:(double)arg2 duration:(double)arg3 error:(id)arg4;	// IMP=0x0000000100199bc0
- (void)_handleFakeTwoShotPromptTimeoutWithUUID:(id)arg1;	// IMP=0x0000000100199ae0
- (void)_playPhaticWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100199790
- (void)_performTwoShotPromptForType:(long long)arg1 atTime:(double)arg2;	// IMP=0x0000000100198fe8
- (void)_hardEndpointWasDetectedWithMetrics:(id)arg1 atTime:(double)arg2;	// IMP=0x0000000100198dcc
- (void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3;	// IMP=0x0000000100198894
- (void)endpointer:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x0000000100198620
- (void)speechControllerDidUpdateSmartSiriVolume:(id)arg1 forReason:(unsigned long long)arg2;	// IMP=0x0000000100198500
- (void)_speechControllerRequestsOperation:(unsigned long long)arg1 forReason:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001982c4
- (void)speechControllerRequestsOperation:(unsigned long long)arg1 forReason:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100198164
- (void)speechControllerRequestsOperation:(unsigned long long)arg1 forReason:(unsigned long long)arg2;	// IMP=0x0000000100198038
- (void)suppressUtteranceGradingIfRequired;	// IMP=0x0000000100197de8
- (void)speechControllerDidDetectVoiceTriggerTwoShot:(id)arg1 atTime:(double)arg2;	// IMP=0x0000000100197dd8
- (void)speechControllerDidDetectVoiceTriggerTwoShot:(id)arg1 atTime:(double)arg2 wantsAudibleFeedback:(_Bool)arg3;	// IMP=0x00000001001978f8
- (void)languageDetectorDidDetectLanguageWithConfidence:(id)arg1 confidence:(id)arg2 isConfident:(_Bool)arg3;	// IMP=0x0000000100197760
- (void)_playStopAlertIfNecessaryForReason:(long long)arg1 endpointMode:(long long)arg2 error:(id)arg3;	// IMP=0x0000000100197300
- (void)_setLanguageDetectorDelegateIfRequired;	// IMP=0x00000001001972fc
- (void)speechControllerDidFinishAlertPlayback:(id)arg1 ofType:(long long)arg2 error:(id)arg3;	// IMP=0x0000000100196f68
- (void)speechController:(id)arg1 didSetAudioSessionActive:(_Bool)arg2;	// IMP=0x0000000100196e4c
- (void)speechController:(id)arg1 willSetAudioSessionActive:(_Bool)arg2;	// IMP=0x0000000100196d30
- (void)speechControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(long long)arg2;	// IMP=0x0000000100196c7c
- (void)speechControllerEndRecordInterruption:(id)arg1;	// IMP=0x0000000100196b9c
- (void)speechControllerBeginRecordInterruption:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000100196a94
- (void)_speechControllerDidReceiveLastAudioRecordBuffer:(id)arg1 forReason:(long long)arg2 estimatedSpeechEndHostTime:(unsigned long long)arg3 isRecordingStopped:(_Bool)arg4;	// IMP=0x0000000100196820
- (void)speechControllerLPCMRecordBufferAvailable:(id)arg1 buffer:(id)arg2;	// IMP=0x0000000100196590
- (id)convertVirtualAudioSubTypeToString:(unsigned int)arg1;	// IMP=0x000000010019651c
- (id)getAudioRouteInstrumentationWithRecordingInfo:(id)arg1;	// IMP=0x0000000100195f30
- (void)_speechControllerDidReceiveFirstAudioRecordBufferWithHostTime:(unsigned long long)arg1 atHostTime:(unsigned long long)arg2;	// IMP=0x0000000100195c84
- (void)speechControllerRecordBufferAvailable:(id)arg1 buffers:(id)arg2 durationInSec:(float)arg3 recordedAt:(unsigned long long)arg4;	// IMP=0x00000001001956c0
- (void)_decodeRecordBufferForSecureOfflineOnly:(id)arg1 isOpus:(_Bool)arg2;	// IMP=0x00000001001951ec
- (struct OpaqueAudioConverter *)_opusDecoder;	// IMP=0x000000010019516c
- (struct OpaqueAudioConverter *)_speexDecoder;	// IMP=0x00000001001950ec
- (void)_speechControllerDidStopRecording:(id)arg1 forReason:(long long)arg2 estimatedSpeechEndHostTime:(unsigned long long)arg3 errorCodeOverride:(long long)arg4 underlyingError:(id)arg5;	// IMP=0x0000000100194534
- (void)speechControllerDidStopRecording:(id)arg1 forReason:(long long)arg2 estimatedSpeechEndHostTime:(unsigned long long)arg3;	// IMP=0x0000000100194200
- (void)speechControllerDidDeliverLastBuffer:(id)arg1 forReason:(long long)arg2 estimatedSpeechEndHostTime:(unsigned long long)arg3;	// IMP=0x0000000100194084
- (void)_speechControllerDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000100193884
- (void)speechControllerDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000100193664
- (id)_recordingInfoForEvent:(long long)arg1 audioAlertStyle:(long long)arg2 includeBTInfo:(_Bool)arg3 includeRecordDeviceInfo:(_Bool)arg4;	// IMP=0x0000000100193224
- (id)_currentRecordingInfo;	// IMP=0x00000001001931c8
- (void)_updateRecordDeviceInfoAndPlaybackRouteForReason:(id)arg1 forcesUpdate:(_Bool)arg2;	// IMP=0x0000000100192d34
- (id)_currentPlaybackRoute;	// IMP=0x0000000100192ce0
- (id)_currentRecordDeviceInfo;	// IMP=0x0000000100192c8c
- (id)_currentRecordRoute;	// IMP=0x0000000100192c30
- (void)updateServerEndpointFeatures:(id)arg1;	// IMP=0x0000000100192bc4
- (void)playRecordingStartAlert;	// IMP=0x00000001001929a0
- (void)getLastStartpointTimestampAndCurrentTime:(CDUnknownBlockType)arg1;	// IMP=0x0000000100192900
- (void)setClientConfiguration:(id)arg1;	// IMP=0x00000001001927e8
- (id)_speechRecordingEventListener;	// IMP=0x0000000100192778
- (void)setSpeechRecordingEventListeningEndpoint:(id)arg1;	// IMP=0x00000001001926b4
- (void)setIsDriving:(_Bool)arg1;	// IMP=0x00000001001926ac
- (void)setAudioFileHandle:(id)arg1;	// IMP=0x00000001001926a0
- (void)setAudioFileType:(long long)arg1;	// IMP=0x0000000100192698
- (void)forceSuccessAudioAlertOnStop;	// IMP=0x00000001001925e0
- (void)setFingerprintingEnabled:(_Bool)arg1;	// IMP=0x0000000100192564
- (void)cancelSpeechCaptureSuppressingAlert:(_Bool)arg1;	// IMP=0x0000000100192480
- (void)stopSpeechCaptureForEvent:(long long)arg1 suppressAlert:(_Bool)arg2 hostTime:(unsigned long long)arg3;	// IMP=0x0000000100192318
- (void)setFingerprintWasRecognized;	// IMP=0x0000000100192260
- (void)setSpeechWasRecognizedForElapsedTime:(double)arg1 isFinal:(_Bool)arg2;	// IMP=0x00000001001920e8
- (void)releaseAudioSession;	// IMP=0x0000000100191e1c
- (void)setDelegate:(id)arg1;	// IMP=0x0000000100191e10
- (_Bool)_updateAudioContextWithPendingInfoForReason:(id)arg1;	// IMP=0x0000000100191c64
- (_Bool)_updateAudioContextToPostVoiceForReason:(id)arg1;	// IMP=0x0000000100191b2c
- (_Bool)_setAudioContextWithInfo:(id)arg1 forReason:(id)arg2;	// IMP=0x0000000100191860
- (void)_updateAudioContextWithInfo:(id)arg1 reason:(id)arg2;	// IMP=0x0000000100191700
- (void)setSpeechRequestOptions:(id)arg1;	// IMP=0x0000000100191350
- (void)_logAudioMetrics:(id)arg1;	// IMP=0x0000000100190fe0
- (void)_logVoiceTriggerInfo:(id)arg1;	// IMP=0x0000000100190dc4
- (void)_logBluetoothState;	// IMP=0x0000000100190b90
- (void)_logFanState;	// IMP=0x0000000100190b8c
- (id)fetchRecordingInfo;	// IMP=0x0000000100190b80
- (unsigned int)_audioSessionID;	// IMP=0x0000000100190a08
- (unsigned int)fetchAudioSessionID;	// IMP=0x00000001001909fc
- (void)updateSpeechSynthesisRecord:(id)arg1;	// IMP=0x00000001001908b0
- (_Bool)startSpeechCaptureWithContext:(id)arg1 willStartHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x000000010018f6d8
- (void)prepareForMode:(long long)arg1;	// IMP=0x000000010018f57c
- (void)suspendAutomaticEndpointingInRange:(struct AFTimeRange)arg1;	// IMP=0x000000010018f568
- (id)currentVTSatScore;	// IMP=0x000000010018f418
- (id)recordingInfoForPreheatWithEvent:(long long)arg1;	// IMP=0x000000010018f324
- (_Bool)prepareSpeechCaptureWithOptions:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000010018f2b0
- (void)preheat;	// IMP=0x000000010018ede8
- (void)eagerlyInitializeAudioRecording;	// IMP=0x000000010018ed2c
- (void)_stopRecordingForEndpointReason:(CDUnion_e15ec660)arg1;	// IMP=0x000000010018ec3c
- (void)_cancelExtendedEndpointTimer;	// IMP=0x000000010018ec00
- (void)_scheduleExtendedEndpointTimer;	// IMP=0x000000010018eab0
- (void)_setEndpointStyle:(long long)arg1;	// IMP=0x000000010018e944
- (void)_setupAudioFileWritingForSpeechController:(id)arg1 info:(id)arg2 context:(id)arg3;	// IMP=0x000000010018ded8
- (_Bool)_checkAudioLoggingLimits:(id)arg1;	// IMP=0x000000010018dce0
- (void)_playAudioAlert:(long long)arg1;	// IMP=0x000000010018da90
- (int)_mapInstrumentationEndpointTypeFromStopRecordingReason:(CDUnion_e15ec660)arg1;	// IMP=0x000000010018d9d8
- (_Bool)_shouldEmitInstrumentation;	// IMP=0x000000010018d998
- (void)_disableEndpointer;	// IMP=0x000000010018d8c0
- (void)_stopRecordingWithReason:(CDUnion_e15ec660)arg1 hostTime:(unsigned long long)arg2;	// IMP=0x000000010018d270
- (_Bool)_prepareSpeechControllerWithOptions:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000010018cd3c
- (id)_fingerprinter;	// IMP=0x000000010018cc78
- (void)_resetSpeechController;	// IMP=0x000000010018cb64
- (id)_speechControllerWithError:(id *)arg1;	// IMP=0x000000010018c66c
- (id)_speechController;	// IMP=0x000000010018c65c
- (void)_updateRecordBufferDuration;	// IMP=0x000000010018c548
- (void)_setAlertsIfNeeded;	// IMP=0x000000010018bdbc
- (void)_setEndpointerOperationMode:(long long)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x000000010018bb3c
- (void)_setSpeechCapturingMode:(long long)arg1;	// IMP=0x000000010018ba44
- (void)dealloc;	// IMP=0x000000010018b9d4
- (id)initWithQueue:(id)arg1;	// IMP=0x000000010018b834

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

