/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIRemoteViewController_ViewControllerOperatorInterface
@required
-(void)__setViewServiceIsDisplayingPopover:(BOOL)arg1;
-(void)__handleFocusMovementAction:(id)arg1;
-(void)__showServiceForText:(id)arg1 selectedTextRangeValue:(id)arg2 type:(long long)arg3 fromRectValue:(id)arg4 replyHandler:(/*^block*/id)arg5;
-(void)__viewServiceDidPromoteFirstResponder;
-(void)__viewServiceDidChangeKeyWindow:(BOOL)arg1;
-(void)__viewServiceDidRegisterScrollToTopView;
-(void)__viewServiceDidUnregisterScrollToTopView;
-(void)__setSupportedInterfaceOrientations:(id)arg1;
-(void)__showServiceForType:(long long)arg1 withContext:(id)arg2 replyHandler:(/*^block*/id)arg3;
-(void)__showServiceForText:(id)arg1 type:(long long)arg2 fromRectValue:(id)arg3 replyHandler:(/*^block*/id)arg4;
-(void)__dismissTextServiceSessionAnimated:(BOOL)arg1;
-(void)__viewServicePopoverDidChangeContentSize:(CGSize)arg1 animated:(BOOL)arg2 fence:(id)arg3 withReplyHandler:(/*^block*/id)arg4;
-(void)__viewServicePopoverDidSetUseToolbarShine:(BOOL)arg1;
-(void)__viewServicePreferredContentSizeDidChange:(CGSize)arg1 fence:(id)arg2;
-(void)__viewServiceInstrinsicContentSizeDidChange:(CGSize)arg1 fence:(id)arg2;
-(void)__viewServiceDidUpdatePreferredStatusBarStyle:(long long)arg1 preferredStatusBarVisibility:(int)arg2 updateAnimation:(long long)arg3 currentAnimationSettings:(id)arg4;
-(void)__viewServiceDidUpdatePreferredWhitePointAdaptationStyle:(long long)arg1 animationSettings:(id)arg2;
-(void)__viewServiceSheetInteractionDidChangeOffset:(CGPoint)arg1 dragging:(BOOL)arg2 dismissible:(BOOL)arg3 indexOfCurrentDetent:(unsigned long long)arg4 duration:(double)arg5 timingCurve:(id)arg6;
-(void)__viewServiceDidUpdatePreferredUserInterfaceStyle:(long long)arg1;
-(void)__viewServiceDidUpdateMultitaskingDragExclusionRects:(id)arg1;
-(void)__trampolineButtonPressData:(id)arg1 canceled:(BOOL)arg2;
-(void)__showEditAlertViewWithToken:(long long)arg1 canUndo:(BOOL)arg2 canRedo:(BOOL)arg3;

@end

