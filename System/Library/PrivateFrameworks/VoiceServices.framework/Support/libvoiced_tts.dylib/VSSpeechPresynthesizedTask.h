/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/VSSpeechSpeakableProtocol.h>

@protocol VSSpeechServiceDelegate;
@class VSPresynthesizedAudioRequest, VSAudioPlaybackService, VSInstrumentMetrics, NSMutableData, NSString;

@interface VSSpeechPresynthesizedTask : NSOperation <VSSpeechSpeakableProtocol> {

	VSPresynthesizedAudioRequest* _request;
	id<VSSpeechServiceDelegate> _delegate;
	VSAudioPlaybackService* _playbackService;
	VSInstrumentMetrics* _instrumentMetrics;
	NSMutableData* _audioData;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,readonly) VSPresynthesizedAudioRequest * request;                 //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<VSSpeechServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VSAudioPlaybackService * playbackService;                 //@synthesize playbackService=_playbackService - In the implementation block
@property (nonatomic,retain) VSInstrumentMetrics * instrumentMetrics;                  //@synthesize instrumentMetrics=_instrumentMetrics - In the implementation block
@property (nonatomic,retain) NSMutableData * audioData;                                //@synthesize audioData=_audioData - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription asbd;                         //@synthesize asbd=_asbd - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(id<VSSpeechServiceDelegate>)delegate;
-(void)setDelegate:(id<VSSpeechServiceDelegate>)arg1 ;
-(VSPresynthesizedAudioRequest *)request;
-(void)cancel;
-(void)resume;
-(void)suspend;
-(void)main;
-(BOOL)isSpeaking;
-(id)initWithRequest:(id)arg1 ;
-(NSMutableData *)audioData;
-(void)setAudioData:(NSMutableData *)arg1 ;
-(void)setInstrumentMetrics:(VSInstrumentMetrics *)arg1 ;
-(VSInstrumentMetrics *)instrumentMetrics;
-(VSAudioPlaybackService *)playbackService;
-(void)setPlaybackService:(VSAudioPlaybackService *)arg1 ;
-(void)setAsbd:(AudioStreamBasicDescription)arg1 ;
-(AudioStreamBasicDescription)asbd;
-(void)reportTimingInfo;
-(void)reportInstrumentMetrics;
-(void)reportFinish;
-(void)reportSpeechStart;
-(id)taskHash;
-(id)audioPowerProvider;
@end

