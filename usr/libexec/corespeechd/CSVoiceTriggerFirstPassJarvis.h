//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSActivationEventNotificationHandlerDelegate-Protocol.h"
#import "CSAudioStreamProvidingDelegate-Protocol.h"
#import "CSKeywordAnalyzerNDEAPIScoreDelegate-Protocol.h"
#import "CSSPGEndpointAnalyzerDelegate-Protocol.h"
#import "CSSiriClientBehaviorMonitorDelegate-Protocol.h"

@class CSAsset, CSAudioProvider, CSAudioStream, CSAudioStreamHolding, CSKeywordAnalyzerNDEAPI, CSKeywordAnalyzerNDEAPIResult, CSPlainAudioFileWriter, CSSPGEndpointAnalyzer, CSVoiceTriggerRTModel, CSVoiceTriggerSecondPass, NSMutableArray, NSString;
@protocol CSVoiceTriggerDelegate, OS_dispatch_queue;

@interface CSVoiceTriggerFirstPassJarvis : NSObject <CSKeywordAnalyzerNDEAPIScoreDelegate, CSActivationEventNotificationHandlerDelegate, CSSPGEndpointAnalyzerDelegate, CSAudioStreamProvidingDelegate, CSSiriClientBehaviorMonitorDelegate>
{
    _Bool _hasReceivedNDEAPIResult;	// 8 = 0x8
    _Bool _hasTriggerCandidate;	// 9 = 0x9
    _Bool _isSecondPassRunning;	// 10 = 0xa
    _Bool _isSiriClientListening;	// 11 = 0xb
    _Bool _firstTimeAssetConfigured;	// 12 = 0xc
    id <CSVoiceTriggerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CSAudioStream *_audioStream;	// 32 = 0x20
    CSAudioProvider *_audioProvider;	// 40 = 0x28
    CSAudioStreamHolding *_audioStreamHolding;	// 48 = 0x30
    CSAsset *_currentAsset;	// 56 = 0x38
    CSKeywordAnalyzerNDEAPI *_keywordAnalyzerNDEAPI;	// 64 = 0x40
    unsigned long long _numProcessedSamples;	// 72 = 0x48
    unsigned long long _jarvisVoiceTriggerTimeout;	// 80 = 0x50
    unsigned long long _activeChannel;	// 88 = 0x58
    CSKeywordAnalyzerNDEAPIResult *_jarvisTriggerResult;	// 96 = 0x60
    unsigned long long _earlyDetectFiredMachTime;	// 104 = 0x68
    CSSPGEndpointAnalyzer *_endpointAnalyzer;	// 112 = 0x70
    NSString *_deviceId;	// 120 = 0x78
    CSVoiceTriggerRTModel *_rtModel;	// 128 = 0x80
    CSPlainAudioFileWriter *_audioFileWriter;	// 136 = 0x88
    CSVoiceTriggerSecondPass *_voiceTriggerSecondPass;	// 144 = 0x90
    unsigned long long _secondChanceHotTillMachTime;	// 152 = 0x98
    NSMutableArray *_assetConfigWaitingBuffer;	// 160 = 0xa0
}

+ (id)timeStampString;	// IMP=0x00000001000501cc
+ (id)jarvisAudioLogDirectory;	// IMP=0x0000000100050098
+ (id)jarvisAudioLoggingFilePath;	// IMP=0x000000010004ffc0
- (void).cxx_destruct;	// IMP=0x0000000100050474
@property(retain, nonatomic) NSMutableArray *assetConfigWaitingBuffer; // @synthesize assetConfigWaitingBuffer=_assetConfigWaitingBuffer;
@property(nonatomic) _Bool firstTimeAssetConfigured; // @synthesize firstTimeAssetConfigured=_firstTimeAssetConfigured;
@property(nonatomic) unsigned long long secondChanceHotTillMachTime; // @synthesize secondChanceHotTillMachTime=_secondChanceHotTillMachTime;
@property(nonatomic) _Bool isSiriClientListening; // @synthesize isSiriClientListening=_isSiriClientListening;
@property(nonatomic) _Bool isSecondPassRunning; // @synthesize isSecondPassRunning=_isSecondPassRunning;
@property(retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass; // @synthesize voiceTriggerSecondPass=_voiceTriggerSecondPass;
@property(retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter; // @synthesize audioFileWriter=_audioFileWriter;
@property(retain, nonatomic) CSVoiceTriggerRTModel *rtModel; // @synthesize rtModel=_rtModel;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) CSSPGEndpointAnalyzer *endpointAnalyzer; // @synthesize endpointAnalyzer=_endpointAnalyzer;
@property(nonatomic) unsigned long long earlyDetectFiredMachTime; // @synthesize earlyDetectFiredMachTime=_earlyDetectFiredMachTime;
@property(retain, nonatomic) CSKeywordAnalyzerNDEAPIResult *jarvisTriggerResult; // @synthesize jarvisTriggerResult=_jarvisTriggerResult;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property(nonatomic) unsigned long long jarvisVoiceTriggerTimeout; // @synthesize jarvisVoiceTriggerTimeout=_jarvisVoiceTriggerTimeout;
@property(nonatomic) unsigned long long numProcessedSamples; // @synthesize numProcessedSamples=_numProcessedSamples;
@property(nonatomic) _Bool hasTriggerCandidate; // @synthesize hasTriggerCandidate=_hasTriggerCandidate;
@property(nonatomic) _Bool hasReceivedNDEAPIResult; // @synthesize hasReceivedNDEAPIResult=_hasReceivedNDEAPIResult;
@property(retain, nonatomic) CSKeywordAnalyzerNDEAPI *keywordAnalyzerNDEAPI; // @synthesize keywordAnalyzerNDEAPI=_keywordAnalyzerNDEAPI;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) CSAudioStreamHolding *audioStreamHolding; // @synthesize audioStreamHolding=_audioStreamHolding;
@property(retain, nonatomic) CSAudioProvider *audioProvider; // @synthesize audioProvider=_audioProvider;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSVoiceTriggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;	// IMP=0x000000010004feb8
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x000000010004feb4
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x000000010004fd9c
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x000000010004fbe4
- (void)_cancelAudioStreamHold;	// IMP=0x000000010004fb90
- (void)_holdAudioStreamWithTimeout:(double)arg1;	// IMP=0x000000010004fb1c
- (void)_teardownSecondPass;	// IMP=0x000000010004fae8
- (void)_createSecondPassIfNeeded;	// IMP=0x000000010004fa48
- (void)_handleSecondPassResult:(unsigned long long)arg1 deviceId:(id)arg2 voiceTriggerInfo:(id)arg3 secondChanceCandidate:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000010004f494
- (void)_reportJarvisVoiceTriggerFire;	// IMP=0x000000010004efb0
- (void)_notifyJarvisVoiceTriggerReject;	// IMP=0x000000010004ee00
- (void)_didDetectKeywordFromDeviceId:(id)arg1 activationInfo:(id)arg2 triggerHostTime:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010004ea20
- (void)_requestStartAudioStreamWitContext:(id)arg1 startStreamOption:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004e6c0
- (void)_handleJarvisVoiceTriggerFromDeviceId:(id)arg1 activationInfo:(id)arg2 triggerHostTime:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010004e054
- (void)spgEndpointAnalyzerDidDetectEndpoint:(id)arg1;	// IMP=0x000000010004df48
- (void)activationEventNotificationHandler:(id)arg1 event:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004dc48
- (void)keywordAnalyzerNDEAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;	// IMP=0x000000010004db04
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;	// IMP=0x000000010004db00
- (void)_handleAudioChunk:(id)arg1;	// IMP=0x000000010004d814
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;	// IMP=0x000000010004d5e8
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;	// IMP=0x000000010004d4c8
- (void)_didStopAudioStream;	// IMP=0x000000010004d3d4
- (void)_didStartAudioStream;	// IMP=0x000000010004d1f4
- (void)_clearTriggerCandidate;	// IMP=0x000000010004d148
- (void)_setAsset:(id)arg1;	// IMP=0x000000010004d06c
- (void)setAsset:(id)arg1;	// IMP=0x000000010004cfd4
- (void)_reset;	// IMP=0x000000010004cf98
- (void)reset;	// IMP=0x000000010004cf30
- (void)start;	// IMP=0x000000010004ce40
- (id)init;	// IMP=0x000000010004cce8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

