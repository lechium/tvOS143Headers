/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SFSSInstrumentMetrics : NSObject {

	BOOL _isSpeechRequest;
	NSString* _text;
	NSString* _voiceAssetKey;
	NSString* _resourceAssetKey;
	NSString* _audioOutputRoute;
	NSString* _clientBundleIdentifier;
	long long _requestCreatedTimestamp;
	long long _synthesisBeginTimestamp;
	long long _synthesisEndTimestamp;
	long long _speakBeginTimestamp;
	long long _speakEndTimestamp;
	double _audioDuration;
	long long _errorCode;
	long long _sourceOfTTS;

}

@property (copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (copy) NSString * voiceAssetKey;                         //@synthesize voiceAssetKey=_voiceAssetKey - In the implementation block
@property (copy) NSString * resourceAssetKey;                      //@synthesize resourceAssetKey=_resourceAssetKey - In the implementation block
@property (copy) NSString * audioOutputRoute;                      //@synthesize audioOutputRoute=_audioOutputRoute - In the implementation block
@property (copy) NSString * clientBundleIdentifier;                //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (assign) long long requestCreatedTimestamp;              //@synthesize requestCreatedTimestamp=_requestCreatedTimestamp - In the implementation block
@property (assign) long long synthesisBeginTimestamp;              //@synthesize synthesisBeginTimestamp=_synthesisBeginTimestamp - In the implementation block
@property (assign) long long synthesisEndTimestamp;                //@synthesize synthesisEndTimestamp=_synthesisEndTimestamp - In the implementation block
@property (assign) long long speakBeginTimestamp;                  //@synthesize speakBeginTimestamp=_speakBeginTimestamp - In the implementation block
@property (assign) long long speakEndTimestamp;                    //@synthesize speakEndTimestamp=_speakEndTimestamp - In the implementation block
@property (assign) double audioDuration;                           //@synthesize audioDuration=_audioDuration - In the implementation block
@property (assign) long long errorCode;                            //@synthesize errorCode=_errorCode - In the implementation block
@property (assign) long long sourceOfTTS;                          //@synthesize sourceOfTTS=_sourceOfTTS - In the implementation block
@property (assign) BOOL isSpeechRequest;                           //@synthesize isSpeechRequest=_isSpeechRequest - In the implementation block
-(id)description;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(long long)errorCode;
-(NSString *)clientBundleIdentifier;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(id)dictionaryMetrics;
-(NSString *)voiceAssetKey;
-(void)setVoiceAssetKey:(NSString *)arg1 ;
-(NSString *)audioOutputRoute;
-(void)setAudioOutputRoute:(NSString *)arg1 ;
-(long long)requestCreatedTimestamp;
-(void)setRequestCreatedTimestamp:(long long)arg1 ;
-(long long)synthesisBeginTimestamp;
-(void)setSynthesisBeginTimestamp:(long long)arg1 ;
-(long long)synthesisEndTimestamp;
-(void)setSynthesisEndTimestamp:(long long)arg1 ;
-(double)audioDuration;
-(void)setAudioDuration:(double)arg1 ;
-(long long)sourceOfTTS;
-(void)setSourceOfTTS:(long long)arg1 ;
-(BOOL)isSpeechRequest;
-(void)setIsSpeechRequest:(BOOL)arg1 ;
-(double)playbackDuration;
-(void)setResourceAssetKey:(NSString *)arg1 ;
-(void)setSpeakBeginTimestamp:(long long)arg1 ;
-(void)setSpeakEndTimestamp:(long long)arg1 ;
-(double)clockFactor;
-(double)speakLatency;
-(double)synthesisLatency;
-(NSString *)resourceAssetKey;
-(long long)speakBeginTimestamp;
-(long long)speakEndTimestamp;
@end

