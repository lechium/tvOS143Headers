/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ARUICountdownAnimatorDelegate.h>

@interface SeymourUI.SessionIntroSequencePresenter : NSObject <ARUICountdownAnimatorDelegate> {

	 display;
	 sessionCountdownCoordinator;
	 onStartCountdown;
	 onCountdownSequenceStarted;
	 onCountdownSequenceCompleted;
	 onExpandMetricsRequest;
	 timerProvider;
	 subscriptionToken;
	 animator;
	 timer;
	 platform;

}
-(void)countdownAnimator:(id)arg1 performingAnimation:(id)arg2 withDuration:(double)arg3 ;
-(void)countdownAnimatorDidFinishAnimating:(id)arg1 ;
-(id)init;
@end

