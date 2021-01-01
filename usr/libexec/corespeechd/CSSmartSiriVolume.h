//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSAudioServerCrashMonitorDelegate-Protocol.h"
#import "CSAudioStreamProvidingDelegate-Protocol.h"
#import "CSMediaPlayingMonitorDelegate-Protocol.h"
#import "CSSiriClientBehaviorMonitorDelegate-Protocol.h"
#import "CSSiriEnabledMonitorDelegate-Protocol.h"
#import "CSSmartSiriVolumeProcessor-Protocol.h"

@class CSAsset, CSAudioStream, CSSmartSiriVolumeEnablePolicy, NSString, NSUserDefaults;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSSmartSiriVolume : NSObject <CSMediaPlayingMonitorDelegate, CSAudioStreamProvidingDelegate, CSSiriEnabledMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSSiriClientBehaviorMonitorDelegate, CSSmartSiriVolumeProcessor>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume>> _smartSiriVolumeNoiseLevel;	// 16 = 0x10
    struct unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume>> _smartSiriVolumeLKFS;	// 24 = 0x18
    struct vector<float, std::__1::allocator<float>> _floatBuffer;	// 32 = 0x20
    NSUserDefaults *_defaults;	// 56 = 0x38
    CSSmartSiriVolumeEnablePolicy *_ssvEnablePolicy;	// 64 = 0x40
    unsigned long long _startAnalyzeSampleCount;	// 72 = 0x48
    unsigned long long _samplesFed;	// 80 = 0x50
    unsigned long long _processedSampleCount;	// 88 = 0x58
    _Bool _isStartSampleCountMarked;	// 96 = 0x60
    _Bool _isListenPollingStarting;	// 97 = 0x61
    _Bool _shouldPauseSSVProcess;	// 98 = 0x62
    _Bool _shouldPauseLKFSProcess;	// 99 = 0x63
    _Bool _alarmSoundIsFiring;	// 100 = 0x64
    _Bool _timerSoundIsFiring;	// 101 = 0x65
    _Bool _mediaIsPlaying;	// 102 = 0x66
    CSAsset *_currentAsset;	// 104 = 0x68
    float _musicVolumeDB;	// 112 = 0x70
    float _alarmVolume;	// 116 = 0x74
    unsigned long long _noiseLevelChannelBitset;	// 120 = 0x78
    unsigned long long _LKFSChannelBitset;	// 128 = 0x80
    unsigned int _energyBufferSize;	// 136 = 0x88
    unsigned int _noiseLowerPercentile;	// 140 = 0x8c
    unsigned int _noiseUpperPercentile;	// 144 = 0x90
    unsigned int _LKFSLowerPercentile;	// 148 = 0x94
    unsigned int _LKFSUpperPercentile;	// 152 = 0x98
    float _noiseTimeConstant;	// 156 = 0x9c
    float _noiseMicSensitivityOffset;	// 160 = 0xa0
    float _noiseMicSensitivityOffsetDeviceSimple;	// 164 = 0xa4
    float _LKFSTimeConstant;	// 168 = 0xa8
    float _LKFSMicSensitivityOffset;	// 172 = 0xac
    float _noiseTTSMappingInputRangeLow;	// 176 = 0xb0
    float _noiseTTSMappingInputRangeHigh;	// 180 = 0xb4
    float _noiseTTSMappingOutputRangeLow;	// 184 = 0xb8
    float _noiseTTSMappingOutputRangeHigh;	// 188 = 0xbc
    float _LKFSTTSMappingInputRangeLow;	// 192 = 0xc0
    float _LKFSTTSMappingInputRangeHigh;	// 196 = 0xc4
    float _LKFSTTSMappingOutputRangeLow;	// 200 = 0xc8
    float _LKFSTTSMappingOutputRangeHigh;	// 204 = 0xcc
    float _userOffsetInputRangeLow;	// 208 = 0xd0
    float _userOffsetInputRangeHigh;	// 212 = 0xd4
    float _userOffsetOutputRangeLow;	// 216 = 0xd8
    float _userOffsetOutputRangeHigh;	// 220 = 0xdc
    float _TTSVolumeLowerLimitDB;	// 224 = 0xe0
    float _TTSVolumeUpperLimitDB;	// 228 = 0xe4
    float _noiseWeight;	// 232 = 0xe8
    CSAudioStream *_audioStream;	// 240 = 0xf0
    NSObject<OS_dispatch_source> *_listenPollingTimer;	// 248 = 0xf8
    long long _listenPollingTimerCount;	// 256 = 0x100
}

- (id).cxx_construct;	// IMP=0x000000010006dab4
- (void).cxx_destruct;	// IMP=0x000000010006da2c
@property(nonatomic) long long listenPollingTimerCount; // @synthesize listenPollingTimerCount=_listenPollingTimerCount;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *listenPollingTimer; // @synthesize listenPollingTimer=_listenPollingTimer;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
- (id)getVolumeForTTSType:(unsigned long long)arg1 withOverrideMediaVolume:(id)arg2 WithRequestTime:(unsigned long long)arg3;	// IMP=0x000000010006d848
- (float)_getUserOffsetFromMusicVolumeDB:(float)arg1;	// IMP=0x000000010006d7d0
- (float)_getMusicVolumeDBCSSSVDeviceDefault:(float)arg1;	// IMP=0x000000010006d78c
- (float)_getMusicVolumeDBCSSSVDeviceSimple:(float)arg1;	// IMP=0x000000010006d780
- (float)_getDevicedBFSForInputLinearVolume:(float)arg1;	// IMP=0x000000010006d720
- (float)_convertDB2Mag:(float)arg1;	// IMP=0x000000010006d714
- (void)_setDefaultParameters;	// IMP=0x000000010006d670
- (void)_setStartAnalyzeTime:(unsigned long long)arg1;	// IMP=0x000000010006d5a8
- (void)_resetStartAnalyzeTime;	// IMP=0x000000010006d59c
- (float *)_getFloatBufferData:(id)arg1;	// IMP=0x000000010006d4c8
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x000000010006d4c4
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;	// IMP=0x000000010006d4c0
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x000000010006d348
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x000000010006d344
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;	// IMP=0x000000010006d1cc
- (void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;	// IMP=0x000000010006d0a4
- (void)didReceiveAlarmVolumeChanged:(float)arg1;	// IMP=0x000000010006d038
- (void)didReceiveMusicVolumeChanged:(float)arg1;	// IMP=0x000000010006cfa4
- (void)didReceiveTimerChanged:(long long)arg1;	// IMP=0x000000010006cddc
- (void)didReceiveAlarmChanged:(long long)arg1;	// IMP=0x000000010006cc14
- (void)CSMediaPlayingMonitor:(id)arg1 didReceiveMediaPlayingChanged:(long long)arg2;	// IMP=0x000000010006ca5c
- (float)_combineResultsWithOptimalFromNoise:(float)arg1 andOptimalFromLkfs:(float)arg2 withUserOffset:(float)arg3;	// IMP=0x000000010006c880
- (float)_estimatedTTSVolume:(float)arg1 lowerLimit:(float)arg2 upperLimit:(float)arg3 TTSmappingInputRangeLow:(float)arg4 TTSmappingInputRangeHigh:(float)arg5 TTSmappingOutputRangeLow:(float)arg6 TTSmappingOutputRangeHigh:(float)arg7;	// IMP=0x000000010006c7dc
- (float)_scaleInputWithInRangeOutRange:(float)arg1 minIn:(float)arg2 maxIn:(float)arg3 minOut:(float)arg4 maxOut:(float)arg5;	// IMP=0x000000010006c7bc
- (float)_deviceSpecificLinearVolumeToDBMappingCSSSVDeviceSimple:(float)arg1;	// IMP=0x000000010006c788
- (float)_deviceSpecificDBToLinearVolumeMappingCSSSVDeviceSimple:(float)arg1;	// IMP=0x000000010006c74c
- (float)_getDeviceSimpledBFSForOutputLinearVolume:(float)arg1;	// IMP=0x000000010006c718
- (float)_getDeviceSimpleOutputLinearVolumeFordBFSValue:(float)arg1;	// IMP=0x000000010006c6dc
- (float)estimatedTTSVolumeForNoiseLevelAndLKFS:(float)arg1 LKFS:(float)arg2;	// IMP=0x000000010006c040
- (void)didDetectKeywordWithResult:(id)arg1;	// IMP=0x000000010006bc44
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;	// IMP=0x000000010006bc40
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;	// IMP=0x000000010006baa4
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;	// IMP=0x000000010006b7f8
- (void)reset;	// IMP=0x000000010006b758
- (void)_resumeSSVProcessing;	// IMP=0x000000010006b634
- (void)_pauseSSVProcessing;	// IMP=0x000000010006b514
- (float)estimateSoundLevelbySoundType:(long long)arg1;	// IMP=0x000000010006b2f8
- (void)_processAudioChunk:(id)arg1 soundType:(long long)arg2;	// IMP=0x000000010006b020
- (void)prepareSoundLevelBufferFromSamples:(id)arg1 soundType:(long long)arg2 firedVoiceTriggerEvent:(_Bool)arg3 triggerStartTimeSampleOffset:(unsigned long long)arg4 triggerEndTimeSampleOffset:(unsigned long long)arg5;	// IMP=0x000000010006ae44
- (void)_prepareSoundLevelBufferFromSamples:(unsigned int)arg1 soundType:(long long)arg2;	// IMP=0x000000010006adbc
- (void)_reset;	// IMP=0x000000010006ad2c
- (void)_setAsset:(id)arg1;	// IMP=0x000000010006a9a4
- (void)setAsset:(id)arg1;	// IMP=0x000000010006a90c
- (void)fetchInitSystemVolumes;	// IMP=0x000000010006a818
- (void)initializeTimerState;	// IMP=0x000000010006a664
- (void)initializeAlarmState;	// IMP=0x000000010006a4b0
- (void)initializeMediaPlayingState;	// IMP=0x000000010006a250
- (void)_stopListening;	// IMP=0x000000010006a028
- (void)_startListenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010006993c
- (void)_startListenPollingWithInterval:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000694cc
- (void)_startListenPolling;	// IMP=0x00000001000693bc
- (void)startSmartSiriVolume;	// IMP=0x0000000100068fdc
- (id)initWithSamplingRate:(float)arg1 asset:(id)arg2;	// IMP=0x0000000100068bb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

