/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Announce/ANTrackPlayer.h>

@class AVAudioPlayer;

@interface ANSimpleTrackPlayer : ANTrackPlayer {

	AVAudioPlayer* _currentPlayer;

}

@property (retain) AVAudioPlayer * currentPlayer;              //@synthesize currentPlayer=_currentPlayer - In the implementation block
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)playWithCompletionHandler:(/*^block*/id)arg1 ;
-(AVAudioPlayer *)currentPlayer;
-(void)setCurrentPlayer:(AVAudioPlayer *)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 audioSession:(id)arg2 ;
-(id)_nextPlayer:(id)arg1 ;
-(id)_previousPlayer:(id)arg1 ;
-(BOOL)playInternalSync;
-(id)whatIsPlaying;
-(void)stopInternalSync;
-(void)nextInternalSync;
-(void)previousInternalSync;
-(void)handleInterruptionDelay:(double)arg1 ;
-(int)numberActivePlayers;
-(id)startNextPlaybackOnDidFinish:(id)arg1 ;
@end

