/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISearchPresentationController.h>

@class UIVisualEffectView;

@interface _UISearchCarPlayPresentationController : _UISearchPresentationController {

	UIVisualEffectView* _blurView;

}

@property (nonatomic,retain) UIVisualEffectView * blurView;              //@synthesize blurView=_blurView - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)containerViewWillLayoutSubviews;
-(UIVisualEffectView *)blurView;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(void)setContentVisible:(BOOL)arg1 ;
-(long long)adaptivePresentationStyle;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(id)backgroundObscuringView;
-(BOOL)searchBarToBecomeTopAttached;
-(double)resultsControllerContentOffset;
-(double)statusBarAdjustment;
-(void)showBackgroundObscuringView;
-(void)hideBackgroundObscuringView;
-(id)_presentedViewControllerForSizeClassPair:(SCD_Struct_UI57)arg1 ;
-(BOOL)shouldAccountForStatusBar;
-(BOOL)resultsUnderlapsSearchBar;
-(BOOL)searchBarCanContainScopeBar;
-(BOOL)searchBarShouldClipToBounds;
-(id)adaptivePresentationController;
-(CGRect)finalFrameForContainerView;
-(BOOL)animatorShouldLayoutPresentationViews;
-(BOOL)forceObeyNavigationBarInsets;
-(unsigned long long)edgeForHidingNavigationBar;
@end
