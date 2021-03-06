/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UINavigationBarTransitionContext.h>

@interface _UINavigationBarTransitionContextPush : _UINavigationBarTransitionContext {

	CGRect _endingNewTitleViewFrame;
	CGRect _endingNewBackButtonFrame;
	CGRect _endingBackIndicatorViewFrame;
	CGSize _titleTransitionDistance;

}
-(void)cancel;
-(void)complete;
-(int)transition;
-(void)prepare;
-(void)animate;
-(void)_prepareContentView;
-(void)_animateBackgroundView;
-(id)viewUsingEaseOutCurve;
-(void)_prepareScaleTransition;
-(void)_prepareLargeTitleView;
-(void)_prepareBackgroundView;
-(void)_prepareSearchBar;
-(void)_animateContentView;
-(void)_animateScaleTransition;
-(void)_animateLargeTitleView;
-(void)_animateSearchBar;
-(void)_finishWithFinalLayout:(id)arg1 invalidLayout:(id)arg2 ;
@end

