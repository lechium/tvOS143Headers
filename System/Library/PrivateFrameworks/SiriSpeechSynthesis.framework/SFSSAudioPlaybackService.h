/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
@class NSString, NSCondition;

@interface SFSSAudioPlaybackService : NSObject {

	double _enqueuedSampleCount;
	BOOL _discontinuedDuringPlayback;
	unsigned _sessionID;
	OpaqueAudioQueueRef _audioQueue;
	NSString* _outputRoute;
	NSCondition* _audioQueueStateCondition;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,retain) NSCondition * audioQueueStateCondition;              //@synthesize audioQueueStateCondition=_audioQueueStateCondition - In the implementation block
@property (nonatomic,readonly) AudioStreamBasicDescription asbd;                  //@synthesize asbd=_asbd - In the implementation block
@property (nonatomic,readonly) OpaqueAudioQueueRef audioQueue;                    //@synthesize audioQueue=_audioQueue - In the implementation block
@property (assign,nonatomic) unsigned sessionID;                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSString * outputRoute;                            //@synthesize outputRoute=_outputRoute - In the implementation block
@property (nonatomic,readonly) BOOL discontinuedDuringPlayback;                   //@synthesize discontinuedDuringPlayback=_discontinuedDuringPlayback - In the implementation block
-(id)start;
-(void)stop;
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(void)pause;
-(void)reset;
-(OpaqueAudioQueueRef)audioQueue;
-(id)initWithAudioSessionID:(unsigned)arg1 asbd:(AudioStreamBasicDescription)arg2 ;
-(NSString *)outputRoute;
-(void)flushAndStop;
-(void)waitForAudioQueueStop;
-(AudioStreamBasicDescription)asbd;
-(id)enqueue:(id)arg1 packetCount:(long long)arg2 packetDescriptions:(id)arg3 ;
-(void)handleMediaServerReset;
-(BOOL)isAudioQueueRunning;
-(void)waitForQueueRunningStateChange;
-(void)signalQueueRunningStateChange;
-(BOOL)discontinuedDuringPlayback;
-(NSCondition *)audioQueueStateCondition;
-(void)setAudioQueueStateCondition:(NSCondition *)arg1 ;
@end

