/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSMutableData;

@interface CSShadowMicScoreCreator : NSObject {

	unsigned long long _bestStartDetectSample;
	unsigned long long _bestEarlyDetectSample;
	unsigned long long _bestEndDetectSample;
	double _shadowMicScore;
	NSMutableArray* _rmsSamplesForEntireAudio;
	NSMutableData* _audioBuffer;
	double _speechVoiceLevel;
	unsigned long long _numberOfVoicingFrames;
	long long _numberOfTotalFramesETFT;

}

@property (nonatomic,retain) NSMutableArray * rmsSamplesForEntireAudio;              //@synthesize rmsSamplesForEntireAudio=_rmsSamplesForEntireAudio - In the implementation block
@property (nonatomic,retain) NSMutableData * audioBuffer;                            //@synthesize audioBuffer=_audioBuffer - In the implementation block
@property (assign,nonatomic) double speechVoiceLevel;                                //@synthesize speechVoiceLevel=_speechVoiceLevel - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfVoicingFrames;               //@synthesize numberOfVoicingFrames=_numberOfVoicingFrames - In the implementation block
@property (assign,nonatomic) long long numberOfTotalFramesETFT;                      //@synthesize numberOfTotalFramesETFT=_numberOfTotalFramesETFT - In the implementation block
@property (assign,nonatomic) unsigned long long bestStartDetectSample;               //@synthesize bestStartDetectSample=_bestStartDetectSample - In the implementation block
@property (assign,nonatomic) unsigned long long bestEarlyDetectSample;               //@synthesize bestEarlyDetectSample=_bestEarlyDetectSample - In the implementation block
@property (assign,nonatomic) unsigned long long bestEndDetectSample;                 //@synthesize bestEndDetectSample=_bestEndDetectSample - In the implementation block
@property (assign,nonatomic) double shadowMicScore;                                  //@synthesize shadowMicScore=_shadowMicScore - In the implementation block
-(id)init;
-(NSMutableData *)audioBuffer;
-(void)setAudioBuffer:(NSMutableData *)arg1 ;
-(void)addDataToBuffer:(id)arg1 ;
-(void)setBestEarlyDetectSample:(unsigned long long)arg1 ;
-(void)setBestStartDetectSample:(unsigned long long)arg1 ;
-(void)setBestEndDetectSample:(unsigned long long)arg1 ;
-(void)calculateShadowMicScore;
-(double)shadowMicScore;
-(double)_calculateRMSWithFrameData:(short)arg1 ;
-(void)_calculateSpeechVoicingLevel;
-(void)_calculateNumberOfVoicingFrames;
-(unsigned long long)numberOfVoicingFrames;
-(unsigned long long)bestStartDetectSample;
-(unsigned long long)bestEarlyDetectSample;
-(unsigned long long)bestEndDetectSample;
-(void)setShadowMicScore:(double)arg1 ;
-(NSMutableArray *)rmsSamplesForEntireAudio;
-(void)setRmsSamplesForEntireAudio:(NSMutableArray *)arg1 ;
-(double)speechVoiceLevel;
-(void)setSpeechVoiceLevel:(double)arg1 ;
-(void)setNumberOfVoicingFrames:(unsigned long long)arg1 ;
-(long long)numberOfTotalFramesETFT;
-(void)setNumberOfTotalFramesETFT:(long long)arg1 ;
@end

