/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIPanelControllerDelegate <NSObject>
@optional
-(double)panelController:(id)arg1 expectedWidthForColumnForViewController:(id)arg2 forceNoSupplementaryFill:(BOOL)arg3;
-(id)panelController:(id)arg1 navigationBarForViewController:(id)arg2;
-(Class)viewClassForPanelController:(id)arg1;
-(id)primaryViewControllerForCollapsingPanelController:(id)arg1;
-(long long)topColumnForCollapsingPanelController:(id)arg1;
-(BOOL)panelController:(id)arg1 collapseOntoPrimaryViewController:(id)arg2;
-(BOOL)panelController:(id)arg1 collapsePrimaryViewController:(id)arg2 withFallbackSecondaryViewController:(id)arg3 onTopOfSupplementaryViewController:(id)arg4 transitionCoordinator:(id)arg5;
-(void)panelController:(id)arg1 collapsePrimaryViewController:(id)arg2 withFallbackSecondaryViewController:(id)arg3 transitionCoordinator:(id)arg4;
-(void)panelControllerDidCollapse:(id)arg1;
-(id)primaryViewControllerForExpandingPanelController:(id)arg1;
-(id)panelController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
-(id)panelController:(id)arg1 separateSupplementaryViewControllerFromPrimaryViewController:(id)arg2;
-(void)panelControllerDidExpand:(id)arg1;
-(/*^block*/id)panelControllerWillUpdate:(id)arg1;
-(void)panelController:(id)arg1 willChangeToState:(id)arg2;
-(void)panelController:(id)arg1 didChangeToState:(id)arg2 withSize:(CGSize)arg3;
-(void)panelController:(id)arg1 willBeginAnimatedTransitionToStateRequest:(id)arg2 predictedEndState:(id)arg3 predictedDuration:(double)arg4;
-(void)panelController:(id)arg1 animateTransitionToStateRequest:(id)arg2 predictedEndState:(id)arg3 predictedDuration:(double)arg4;
-(void)panelController:(id)arg1 didEndAnimatedTransitionToStateRequest:(id)arg2;
-(void)panelController:(id)arg1 willBeginAnimationToPrimarySize:(CGSize)arg2 supplementarySize:(CGSize)arg3 secondarySize:(CGSize)arg4;
-(void)panelController:(id)arg1 adjustLeadingViewController:(id)arg2 forKeyboardInfo:(id)arg3;
-(void)panelController:(id)arg1 adjustTrailingViewController:(id)arg2 forKeyboardInfo:(id)arg3;

@end

