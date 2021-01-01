/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CSAudioStreamProvidingDelegate.h>
#import <libobjc.A.dylib/CSKeywordAnalyzerNDAPIScoreDelegate.h>
#import <libobjc.A.dylib/CSVoiceTriggerEnabledMonitorDelegate.h>
#import <libobjc.A.dylib/CSSiriClientBehaviorMonitorDelegate.h>
#import <libobjc.A.dylib/CSOpportuneSpeakEventMonitorDelegate.h>

@protocol CSVoiceTriggerDelegate, OS_dispatch_queue, OS_dispatch_group;
@class NSObject, CSAsset, CSKeywordAnalyzerNDAPI, CSAudioStream, CSVoiceTriggerSecondPass, CSOSTransaction, NSString, CSAudioProvider, NSMutableArray;

@interface CSVoiceTriggerFirstPassHearstAP : NSObject <CSAudioStreamProvidingDelegate, CSKeywordAnalyzerNDAPIScoreDelegate, CSVoiceTriggerEnabledMonitorDelegate, CSSiriClientBehaviorMonitorDelegate, CSOpportuneSpeakEventMonitorDelegate> {

	BOOL _isAPHearstFirstPassEnabled;
	BOOL _isSiriClientListening;
	BOOL _isSecondPassRunning;
	BOOL _isVoiceTriggerEnabled;
	float _keywordThreshold;
	id<CSVoiceTriggerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	CSAsset* _currentAsset;
	CSKeywordAnalyzerNDAPI* _keywordAnalyzerNDAPI;
	CSAudioStream* _audioStream;
	NSObject*<OS_dispatch_group> _recordingWillStartGroup;
	CSVoiceTriggerSecondPass* _voiceTriggerSecondPass;
	CSOSTransaction* _secondPassTransaction;
	unsigned long long _secondChanceHotTillMachTime;
	NSString* _deviceId;
	CSAudioProvider* _audioProvider;
	NSString* _opportuneSpeakAudioProviderUUID;
	NSMutableArray* _audioStreamHoldings;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSAsset * currentAsset;                                            //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,retain) CSKeywordAnalyzerNDAPI * keywordAnalyzerNDAPI;                     //@synthesize keywordAnalyzerNDAPI=_keywordAnalyzerNDAPI - In the implementation block
@property (nonatomic,retain) CSAudioStream * audioStream;                                       //@synthesize audioStream=_audioStream - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> recordingWillStartGroup;              //@synthesize recordingWillStartGroup=_recordingWillStartGroup - In the implementation block
@property (assign,nonatomic) BOOL isAPHearstFirstPassEnabled;                                   //@synthesize isAPHearstFirstPassEnabled=_isAPHearstFirstPassEnabled - In the implementation block
@property (assign,nonatomic) float keywordThreshold;                                            //@synthesize keywordThreshold=_keywordThreshold - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerSecondPass * voiceTriggerSecondPass;                 //@synthesize voiceTriggerSecondPass=_voiceTriggerSecondPass - In the implementation block
@property (nonatomic,retain) CSOSTransaction * secondPassTransaction;                           //@synthesize secondPassTransaction=_secondPassTransaction - In the implementation block
@property (assign,nonatomic) BOOL isSiriClientListening;                                        //@synthesize isSiriClientListening=_isSiriClientListening - In the implementation block
@property (assign,nonatomic) BOOL isSecondPassRunning;                                          //@synthesize isSecondPassRunning=_isSecondPassRunning - In the implementation block
@property (assign,nonatomic) unsigned long long secondChanceHotTillMachTime;                    //@synthesize secondChanceHotTillMachTime=_secondChanceHotTillMachTime - In the implementation block
@property (nonatomic,retain) NSString * deviceId;                                               //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,retain) CSAudioProvider * audioProvider;                                   //@synthesize audioProvider=_audioProvider - In the implementation block
@property (nonatomic,retain) NSString * opportuneSpeakAudioProviderUUID;                        //@synthesize opportuneSpeakAudioProviderUUID=_opportuneSpeakAudioProviderUUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * audioStreamHoldings;                              //@synthesize audioStreamHoldings=_audioStreamHoldings - In the implementation block
@property (assign,nonatomic) BOOL isVoiceTriggerEnabled;                                        //@synthesize isVoiceTriggerEnabled=_isVoiceTriggerEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<CSVoiceTriggerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<CSVoiceTriggerDelegate>)delegate;
-(void)setDelegate:(id<CSVoiceTriggerDelegate>)arg1 ;
-(void)start;
-(void)_reset;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)deviceId;
-(void)setAsset:(id)arg1 ;
-(void)setDeviceId:(NSString *)arg1 ;
-(void)_stopListening;
-(void)setCurrentAsset:(CSAsset *)arg1 ;
-(CSAsset *)currentAsset;
-(CSAudioProvider *)audioProvider;
-(CSVoiceTriggerSecondPass *)voiceTriggerSecondPass;
-(void)setVoiceTriggerSecondPass:(CSVoiceTriggerSecondPass *)arg1 ;
-(BOOL)isSecondPassRunning;
-(void)setIsSecondPassRunning:(BOOL)arg1 ;
-(void)setAudioProvider:(CSAudioProvider *)arg1 ;
-(void)_setAsset:(id)arg1 ;
-(void)setSecondChanceHotTillMachTime:(unsigned long long)arg1 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 withEventUUID:(id)arg5 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3 ;
-(unsigned long long)secondChanceHotTillMachTime;
-(void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(float)keywordThreshold;
-(void)setKeywordThreshold:(float)arg1 ;
-(void)setAudioStream:(CSAudioStream *)arg1 ;
-(CSAudioStream *)audioStream;
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2 ;
-(void)_teardownSecondPass;
-(BOOL)isSiriClientListening;
-(void)setIsSiriClientListening:(BOOL)arg1 ;
-(void)opportuneSpeakEventMonitor:(id)arg1 didStreamStateChanged:(BOOL)arg2 ;
-(void)_cancelLastAudioStreamHold;
-(void)_createSecondPass;
-(void)_addAudioStreamHold:(id)arg1 ;
-(void)_handleSecondPassResult:(unsigned long long)arg1 voiceTriggerInfo:(id)arg2 deviceId:(id)arg3 secondChanceCandidate:(BOOL)arg4 error:(id)arg5 ;
-(void)_startListenWithAudioProviderUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_shouldHearstAPModeEnabled;
-(void)_transitHearstAPEnable:(BOOL)arg1 ;
-(void)CSVoiceTriggerEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2 ;
-(CSKeywordAnalyzerNDAPI *)keywordAnalyzerNDAPI;
-(void)setKeywordAnalyzerNDAPI:(CSKeywordAnalyzerNDAPI *)arg1 ;
-(NSObject*<OS_dispatch_group>)recordingWillStartGroup;
-(void)setRecordingWillStartGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(BOOL)isAPHearstFirstPassEnabled;
-(void)setIsAPHearstFirstPassEnabled:(BOOL)arg1 ;
-(CSOSTransaction *)secondPassTransaction;
-(void)setSecondPassTransaction:(CSOSTransaction *)arg1 ;
-(NSString *)opportuneSpeakAudioProviderUUID;
-(void)setOpportuneSpeakAudioProviderUUID:(NSString *)arg1 ;
-(NSMutableArray *)audioStreamHoldings;
-(void)setAudioStreamHoldings:(NSMutableArray *)arg1 ;
-(BOOL)isVoiceTriggerEnabled;
-(void)setIsVoiceTriggerEnabled:(BOOL)arg1 ;
@end

