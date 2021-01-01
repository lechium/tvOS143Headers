/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class UIViewController;

@interface TVPMusicNowPlayingDismissOperation : NSOperation {

	BOOL _isAnimated;
	BOOL _isExecuting;
	BOOL _isFinished;
	UIViewController* _presentedViewController;

}

@property (nonatomic,readonly) UIViewController * presentedViewController;              //@synthesize presentedViewController=_presentedViewController - In the implementation block
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)_finish;
-(UIViewController *)presentedViewController;
-(id)initWithPresentedViewController:(id)arg1 animated:(BOOL)arg2 ;
@end

