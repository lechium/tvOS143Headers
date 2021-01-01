/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerContextTransitioning, _TSKAnimatorDelegate;
@class NSString;

@interface _TSKZoomAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	id<UIViewControllerContextTransitioning> _lastCompletedTransitionContext;
	long long _operation;
	id<_TSKAnimatorDelegate> _animatorDelegate;

}

@property (assign,nonatomic) long long operation;                                           //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic,__weak) id<_TSKAnimatorDelegate> animatorDelegate;              //@synthesize animatorDelegate=_animatorDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)operation;
-(void)setOperation:(long long)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(id<_TSKAnimatorDelegate>)animatorDelegate;
-(void)_animatePush:(BOOL)arg1 withContext:(id)arg2 ;
-(void)setAnimatorDelegate:(id<_TSKAnimatorDelegate>)arg1 ;
@end

