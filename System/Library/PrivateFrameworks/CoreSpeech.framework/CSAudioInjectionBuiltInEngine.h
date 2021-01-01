/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CSAudioInjectionEngine.h>
#import <libobjc.A.dylib/CSAudioInjectionEngineDelegate.h>

@protocol OS_dispatch_queue, CSAudioInjectionEngineDelegate;
@class NSObject, CSKeywordAnalyzerNDEAPI, CSAudioCircularBuffer, NSMutableArray, NSUUID, CSAudioInjectionDevice, NSString;

@interface CSAudioInjectionBuiltInEngine : CSAudioInjectionEngine <CSAudioInjectionEngineDelegate> {

	BOOL _voiceTriggerEnabled;
	BOOL _isForwarding;
	NSObject*<OS_dispatch_queue> _queue;
	id<CSAudioInjectionEngineDelegate> _delegate;
	CSKeywordAnalyzerNDEAPI* _keywordAnalyzer;
	CSAudioCircularBuffer* _circularBuffer;
	unsigned long long _lastForwardedSampleCount;
	NSMutableArray* _hostTimeBuffer;
	NSUUID* _uuid;
	CSAudioInjectionDevice* _connectedDevice;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CSAudioInjectionEngineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CSKeywordAnalyzerNDEAPI * keywordAnalyzer;                       //@synthesize keywordAnalyzer=_keywordAnalyzer - In the implementation block
@property (nonatomic,retain) CSAudioCircularBuffer * circularBuffer;                          //@synthesize circularBuffer=_circularBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long lastForwardedSampleCount;                     //@synthesize lastForwardedSampleCount=_lastForwardedSampleCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * hostTimeBuffer;                                 //@synthesize hostTimeBuffer=_hostTimeBuffer - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL voiceTriggerEnabled;                                        //@synthesize voiceTriggerEnabled=_voiceTriggerEnabled - In the implementation block
@property (assign,nonatomic,__weak) CSAudioInjectionDevice * connectedDevice;                 //@synthesize connectedDevice=_connectedDevice - In the implementation block
@property (assign,nonatomic) BOOL isForwarding;                                               //@synthesize isForwarding=_isForwarding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CSAudioInjectionEngineDelegate>)delegate;
-(void)setDelegate:(id<CSAudioInjectionEngineDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(BOOL)isRecording;
-(BOOL)voiceTriggerEnabled;
-(void)setVoiceTriggerEnabled:(BOOL)arg1 ;
-(id)initWithStreamHandleId:(unsigned long long)arg1 ;
-(void)setConnectedDevice:(CSAudioInjectionDevice *)arg1 ;
-(BOOL)isAlwaysOnVoiceTriggerAvailable;
-(void)setAlwaysOnVoiceTriggerEnabled:(BOOL)arg1 ;
-(void)startAudioStreamWithOption:(id)arg1 ;
-(void)stopAudioStream;
-(BOOL)injectAudio:(id)arg1 ;
-(BOOL)injectAudio:(id)arg1 withScaleFactor:(float)arg2 playbackStarted:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)audioEngineDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(BOOL)arg3 error:(id)arg4 ;
-(void)audioEngineDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(unsigned long long)arg3 ;
-(void)audioEngineBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 ;
-(void)audioEngineAudioChunkForTvAvailable:(id)arg1 audioChunk:(id)arg2 ;
-(BOOL)alwaysOnVoiceTriggerEnabled;
-(void)attachDevice:(id)arg1 ;
-(CSKeywordAnalyzerNDEAPI *)keywordAnalyzer;
-(void)setKeywordAnalyzer:(CSKeywordAnalyzerNDEAPI *)arg1 ;
-(CSAudioCircularBuffer *)circularBuffer;
-(void)setCircularBuffer:(CSAudioCircularBuffer *)arg1 ;
-(unsigned long long)lastForwardedSampleCount;
-(void)setLastForwardedSampleCount:(unsigned long long)arg1 ;
-(NSMutableArray *)hostTimeBuffer;
-(void)setHostTimeBuffer:(NSMutableArray *)arg1 ;
-(CSAudioInjectionDevice *)connectedDevice;
-(BOOL)isForwarding;
-(void)setIsForwarding:(BOOL)arg1 ;
@end

