//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSActivationEventNotificationHandlerDelegate-Protocol.h"
#import "CSAudioProviderDelegate-Protocol.h"
#import "CSAudioRecorderDelegate-Protocol.h"
#import "CSAudioServerCrashMonitorDelegate-Protocol.h"
#import "CSOpportuneSpeakEventMonitorDelegate-Protocol.h"
#import "CSVoiceTriggerAssetHandlerDelegate-Protocol.h"

@class CSAdBlocker, CSAudioRecorder, CSBuiltInVoiceTrigger, CSContinuousAudioFingerprintProvider, CSFallbackAudioSessionReleaseProvider, CSKeywordDetector, CSMyriadPHash, CSMyriadSelfTriggerCoordinator, CSOpportuneSpeakListnerTestService, CSPostBuildInstallService, CSSelfTriggerDetector, CSSmartSiriVolumeManager, CSVoiceProfileRetrainManager, CSVoiceTriggerEventNotifier, CSVoiceTriggerFidesClient, CSVoiceTriggerFileLogger, CSVoiceTriggerFirstPassHearst, CSVoiceTriggerFirstPassHearstAP, CSVoiceTriggerFirstPassJarvis, CSVoiceTriggerFirstPassRemora, NSMutableDictionary, NSString;
@protocol CSSpeechManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CSSpeechManager : NSObject <CSAudioServerCrashMonitorDelegate, CSVoiceTriggerAssetHandlerDelegate, CSActivationEventNotificationHandlerDelegate, CSAudioRecorderDelegate, CSAudioProviderDelegate, CSOpportuneSpeakEventMonitorDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_assetQueryQueue;	// 16 = 0x10
    CSAudioRecorder *_audioRecorder;	// 24 = 0x18
    NSMutableDictionary *_audioProviders;	// 32 = 0x20
    CSFallbackAudioSessionReleaseProvider *_fallbackAudioSessionReleaseProvider;	// 40 = 0x28
    id <CSSpeechManagerDelegate> _clientController;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_voiceTriggerQueue;	// 56 = 0x38
    CSBuiltInVoiceTrigger *_voiceTrigger;	// 64 = 0x40
    CSVoiceTriggerEventNotifier *_voiceTriggerEventNotifier;	// 72 = 0x48
    CSVoiceTriggerFileLogger *_voiceTriggerFileLogger;	// 80 = 0x50
    CSSelfTriggerDetector *_selfTriggerDetector;	// 88 = 0x58
    CSKeywordDetector *_keywordDetector;	// 96 = 0x60
    CSMyriadPHash *_myriad;	// 104 = 0x68
    CSMyriadSelfTriggerCoordinator *_myriadSelfTriggerCoordinator;	// 112 = 0x70
    CSVoiceTriggerFidesClient *_voiceTriggerFidesClient;	// 120 = 0x78
    CSVoiceTriggerFirstPassJarvis *_voiceTriggerFirstPassJarvis;	// 128 = 0x80
    CSVoiceTriggerFirstPassHearst *_voiceTriggerFirstPassHearst;	// 136 = 0x88
    CSVoiceTriggerFirstPassHearstAP *_voiceTriggerFirstPassHearstAP;	// 144 = 0x90
    CSVoiceTriggerFirstPassRemora *_voiceTriggerFirstPassRemora;	// 152 = 0x98
    CSVoiceProfileRetrainManager *_voiceTriggerRetrainer;	// 160 = 0xa0
    NSObject<OS_dispatch_source> *_clearLoggingFileTimer;	// 168 = 0xa8
    long long _clearLoggingFileTimerCount;	// 176 = 0xb0
    CSOpportuneSpeakListnerTestService *_opportuneSpeakListnerTestService;	// 184 = 0xb8
    CSAdBlocker *_adBlocker;	// 192 = 0xc0
    CSContinuousAudioFingerprintProvider *_fingerprintProvider;	// 200 = 0xc8
    CSPostBuildInstallService *_postBuildInstallService;	// 208 = 0xd0
    CSSmartSiriVolumeManager *_ssvManager;	// 216 = 0xd8
}

+ (id)sharedManagerForCoreSpeechDaemon;	// IMP=0x00000001000a691c
+ (id)sharedManager;	// IMP=0x00000001000a6914
- (void).cxx_destruct;	// IMP=0x00000001000ab658
@property(retain, nonatomic) CSSmartSiriVolumeManager *ssvManager; // @synthesize ssvManager=_ssvManager;
@property(retain, nonatomic) CSPostBuildInstallService *postBuildInstallService; // @synthesize postBuildInstallService=_postBuildInstallService;
@property(retain, nonatomic) CSContinuousAudioFingerprintProvider *fingerprintProvider; // @synthesize fingerprintProvider=_fingerprintProvider;
@property(retain, nonatomic) CSAdBlocker *adBlocker; // @synthesize adBlocker=_adBlocker;
@property(retain, nonatomic) CSOpportuneSpeakListnerTestService *opportuneSpeakListnerTestService; // @synthesize opportuneSpeakListnerTestService=_opportuneSpeakListnerTestService;
@property(nonatomic) long long clearLoggingFileTimerCount; // @synthesize clearLoggingFileTimerCount=_clearLoggingFileTimerCount;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *clearLoggingFileTimer; // @synthesize clearLoggingFileTimer=_clearLoggingFileTimer;
@property(retain, nonatomic) CSVoiceProfileRetrainManager *voiceTriggerRetrainer; // @synthesize voiceTriggerRetrainer=_voiceTriggerRetrainer;
@property(retain, nonatomic) CSVoiceTriggerFirstPassRemora *voiceTriggerFirstPassRemora; // @synthesize voiceTriggerFirstPassRemora=_voiceTriggerFirstPassRemora;
@property(retain, nonatomic) CSVoiceTriggerFirstPassHearstAP *voiceTriggerFirstPassHearstAP; // @synthesize voiceTriggerFirstPassHearstAP=_voiceTriggerFirstPassHearstAP;
@property(retain, nonatomic) CSVoiceTriggerFirstPassHearst *voiceTriggerFirstPassHearst; // @synthesize voiceTriggerFirstPassHearst=_voiceTriggerFirstPassHearst;
@property(retain, nonatomic) CSVoiceTriggerFirstPassJarvis *voiceTriggerFirstPassJarvis; // @synthesize voiceTriggerFirstPassJarvis=_voiceTriggerFirstPassJarvis;
@property(retain, nonatomic) CSVoiceTriggerFidesClient *voiceTriggerFidesClient; // @synthesize voiceTriggerFidesClient=_voiceTriggerFidesClient;
@property(retain, nonatomic) CSMyriadSelfTriggerCoordinator *myriadSelfTriggerCoordinator; // @synthesize myriadSelfTriggerCoordinator=_myriadSelfTriggerCoordinator;
@property(retain, nonatomic) CSMyriadPHash *myriad; // @synthesize myriad=_myriad;
@property(retain, nonatomic) CSKeywordDetector *keywordDetector; // @synthesize keywordDetector=_keywordDetector;
@property(retain, nonatomic) CSSelfTriggerDetector *selfTriggerDetector; // @synthesize selfTriggerDetector=_selfTriggerDetector;
@property(retain, nonatomic) CSVoiceTriggerFileLogger *voiceTriggerFileLogger; // @synthesize voiceTriggerFileLogger=_voiceTriggerFileLogger;
@property(retain, nonatomic) CSVoiceTriggerEventNotifier *voiceTriggerEventNotifier; // @synthesize voiceTriggerEventNotifier=_voiceTriggerEventNotifier;
@property(retain, nonatomic) CSBuiltInVoiceTrigger *voiceTrigger; // @synthesize voiceTrigger=_voiceTrigger;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *voiceTriggerQueue; // @synthesize voiceTriggerQueue=_voiceTriggerQueue;
@property(nonatomic) __weak id <CSSpeechManagerDelegate> clientController; // @synthesize clientController=_clientController;
@property(retain, nonatomic) CSFallbackAudioSessionReleaseProvider *fallbackAudioSessionReleaseProvider; // @synthesize fallbackAudioSessionReleaseProvider=_fallbackAudioSessionReleaseProvider;
@property(retain, nonatomic) NSMutableDictionary *audioProviders; // @synthesize audioProviders=_audioProviders;
@property(retain, nonatomic) CSAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetQueryQueue; // @synthesize assetQueryQueue=_assetQueryQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)opportuneSpeakEventMonitor:(id)arg1 didStreamStateChanged:(_Bool)arg2;	// IMP=0x00000001000ab180
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;	// IMP=0x00000001000ab16c
- (void)_teardownForBluetoothDevice;	// IMP=0x00000001000ab04c
- (void)_prepareRemoraDeviceWithAsset:(id)arg1;	// IMP=0x00000001000aaf7c
- (void)_startForBluetoothDeviceWithDeviceType:(unsigned long long)arg1 asset:(id)arg2;	// IMP=0x00000001000aaefc
- (_Bool)_prepareForBluetoothDeviceWithDeviceType:(unsigned long long)arg1;	// IMP=0x00000001000aad54
- (void)_setupForBluetoothDeviceIfNeededWithDeviceType:(unsigned long long)arg1 prepareCompletion:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000aab5c
- (void)_setupForRemoraIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000aa950
- (void)_setupForJarvisIfNeededWithPrepareCompletion:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000aa858
- (void)_setupForHearstIfNeededWithPrepareCompletion:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000aa760
- (void)CSAudioRouteChangeMonitor:(id)arg1 didReceiveAudioRouteChangeEvent:(long long)arg2;	// IMP=0x00000001000aa494
- (void)activationEventNotificationHandler:(id)arg1 event:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a9fec
- (void)_startClearLoggingFilesTimer;	// IMP=0x00000001000a9ef4
- (void)_createClearLoggingFileTimer;	// IMP=0x00000001000a9d1c
- (void)_reinitializeSmartSiriVolumeWithAsset:(id)arg1;	// IMP=0x00000001000a9d04
- (void)_reinitializeVoiceTriggerWithAsset:(id)arg1;	// IMP=0x00000001000a9b68
- (void)_reinitializeVoiceTriggerIfNeeded;	// IMP=0x00000001000a98ec
- (void)voiceTriggerAssetHandler:(id)arg1 didChangeCachedAsset:(id)arg2;	// IMP=0x00000001000a9834
- (void)audioRecorderWillBeDestroyed:(id)arg1;	// IMP=0x00000001000a96e0
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3;	// IMP=0x00000001000a96dc
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5;	// IMP=0x00000001000a96d8
- (void)audioProviderInvalidated:(id)arg1 streamHandleId:(unsigned long long)arg2;	// IMP=0x00000001000a93d8
- (id)_getAudioRecorderWithError:(id *)arg1;	// IMP=0x00000001000a90f4
- (id)fetchFallbackAudioSessionReleaseProvider;	// IMP=0x00000001000a8fe0
- (id)audioProviderWithStreamID:(unsigned long long)arg1;	// IMP=0x00000001000a8d00
- (id)audioProviderWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000a86d0
- (id)audioProviderWithUUID:(id)arg1;	// IMP=0x00000001000a84c8
- (void)registerSiriClientProxy:(id)arg1;	// IMP=0x00000001000a83c0
- (void)registerSpeechController:(id)arg1;	// IMP=0x00000001000a8284
- (void)_startAllClients;	// IMP=0x00000001000a8194
- (void)_startVoiceTrigger;	// IMP=0x00000001000a80a4
- (void)_setupVoiceTriggerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a744c
- (void)_setupSpeakerRecognitionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a71f4
- (id)_myriadSelfTriggerCoordinatorIfNeeded:(_Bool)arg1;	// IMP=0x00000001000a71ac
- (id)_voiceTriggerFileLoggerCreateIfNeeded:(_Bool)arg1;	// IMP=0x00000001000a712c
- (id)_voiceTriggerEventNotifierCreateIfNeeded:(_Bool)arg1;	// IMP=0x00000001000a7058
- (void)_getVoiceTriggerAssetIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a6fb0
- (id)audioFingerprintProvider;	// IMP=0x00000001000a6fa8
- (void)startManager;	// IMP=0x00000001000a6bd0
- (void)dealloc;	// IMP=0x00000001000a6b58
- (id)init;	// IMP=0x00000001000a69a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

