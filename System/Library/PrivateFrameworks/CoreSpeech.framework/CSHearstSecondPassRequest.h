/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, CSVoiceTriggerSecondPass, CSAudioStreamHolding, CSAudioProvider;

@interface CSHearstSecondPassRequest : NSObject {

	BOOL _isSecondPassRunning;
	float _remoteMicVADScore;
	NSString* _firstPassDeviceID;
	CSVoiceTriggerSecondPass* _voiceTriggerSecondPass;
	CSAudioStreamHolding* _audioStreamHolding;
	CSAudioProvider* _audioProvider;

}

@property (nonatomic,retain) NSString * firstPassDeviceID;                                   //@synthesize firstPassDeviceID=_firstPassDeviceID - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerSecondPass * voiceTriggerSecondPass;              //@synthesize voiceTriggerSecondPass=_voiceTriggerSecondPass - In the implementation block
@property (assign,nonatomic) BOOL isSecondPassRunning;                                       //@synthesize isSecondPassRunning=_isSecondPassRunning - In the implementation block
@property (assign,nonatomic) float remoteMicVADScore;                                        //@synthesize remoteMicVADScore=_remoteMicVADScore - In the implementation block
@property (nonatomic,retain) CSAudioStreamHolding * audioStreamHolding;                      //@synthesize audioStreamHolding=_audioStreamHolding - In the implementation block
@property (nonatomic,retain) CSAudioProvider * audioProvider;                                //@synthesize audioProvider=_audioProvider - In the implementation block
-(void)dealloc;
-(void)start;
-(void)reset;
-(id)initWithDeviceID:(id)arg1 ;
-(void)setAsset:(id)arg1 ;
-(CSAudioProvider *)audioProvider;
-(void)holdAudioStreamWithTimeout:(double)arg1 ;
-(void)cancelAudioStreamHold;
-(NSString *)firstPassDeviceID;
-(void)setFirstPassDeviceID:(NSString *)arg1 ;
-(CSVoiceTriggerSecondPass *)voiceTriggerSecondPass;
-(void)setVoiceTriggerSecondPass:(CSVoiceTriggerSecondPass *)arg1 ;
-(BOOL)isSecondPassRunning;
-(void)setIsSecondPassRunning:(BOOL)arg1 ;
-(CSAudioStreamHolding *)audioStreamHolding;
-(void)setAudioStreamHolding:(CSAudioStreamHolding *)arg1 ;
-(void)setAudioProvider:(CSAudioProvider *)arg1 ;
-(float)remoteMicVADScore;
-(void)setRemoteMicVADScore:(float)arg1 ;
@end
