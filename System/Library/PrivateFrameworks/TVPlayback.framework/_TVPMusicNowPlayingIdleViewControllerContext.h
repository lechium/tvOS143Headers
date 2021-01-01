/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVPMediaItem;
@class UIViewController;

@interface _TVPMusicNowPlayingIdleViewControllerContext : NSObject {

	BOOL _finished;
	id<TVPMediaItem> _mediaItem;
	UIViewController* _idleViewController;

}

@property (nonatomic,readonly) id<TVPMediaItem> mediaItem;                         //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,readonly) UIViewController * idleViewController;              //@synthesize idleViewController=_idleViewController - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished;                    //@synthesize finished=_finished - In the implementation block
-(BOOL)isFinished;
-(id<TVPMediaItem>)mediaItem;
-(id)initWithMediaItem:(id)arg1 ;
-(void)finishWithIdleViewController:(id)arg1 ;
-(UIViewController *)idleViewController;
@end
