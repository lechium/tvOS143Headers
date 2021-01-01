/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface _TVPMusicNowPlayingInvalidationContext : NSObject {

	BOOL _queue;
	BOOL _playingItem;
	NSString* _playingItemChangeReason;

}

@property (assign,nonatomic) BOOL queue;                                    //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL playingItem;                              //@synthesize playingItem=_playingItem - In the implementation block
@property (nonatomic,copy) NSString * playingItemChangeReason;              //@synthesize playingItemChangeReason=_playingItemChangeReason - In the implementation block
-(id)description;
-(BOOL)queue;
-(void)setQueue:(BOOL)arg1 ;
-(BOOL)playingItem;
-(NSString *)playingItemChangeReason;
-(void)setPlayingItem:(BOOL)arg1 ;
-(void)setPlayingItemChangeReason:(NSString *)arg1 ;
@end
