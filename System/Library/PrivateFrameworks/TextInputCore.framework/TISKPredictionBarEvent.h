/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TISKTimestampEvent.h>

@interface TISKPredictionBarEvent : TISKTimestampEvent {

	BOOL _emojiPrediction;

}

@property (assign,nonatomic) BOOL emojiPrediction;              //@synthesize emojiPrediction=_emojiPrediction - In the implementation block
-(id)description;
-(void)reportToSession:(id)arg1 ;
-(void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2 ;
-(id)init:(double)arg1 emojiPrediction:(BOOL)arg2 emojiSearchMode:(BOOL)arg3 order:(long long)arg4 ;
-(BOOL)emojiPrediction;
-(void)setEmojiPrediction:(BOOL)arg1 ;
@end

