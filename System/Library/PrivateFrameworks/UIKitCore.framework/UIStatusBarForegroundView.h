/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIAccessibilityHUDGestureDelegate.h>

@class UIStatusBarLayoutManager, NSMutableArray, UIStatusBarComposedData, UIAccessibilityHUDGestureManager, UIStatusBarForegroundStyleAttributes, UIStatusBar, NSString;

@interface UIStatusBarForegroundView : UIView <UIAccessibilityHUDGestureDelegate> {

	BOOL _usesVerticalLayout;
	BOOL _itemIsEnabled[49];
	UIStatusBarLayoutManager* _layoutManagers[3];
	int _ignoreDataLevel;
	NSMutableArray* _actionAnimationStack;
	UIStatusBarComposedData* _currentData;
	UIStatusBarComposedData* _pendedData;
	int _pendedActions;
	UIAccessibilityHUDGestureManager* _accessibilityHUDGestureManager;
	long long _idiom;
	UIStatusBarForegroundStyleAttributes* _foregroundStyle;

}

@property (assign,nonatomic) long long idiom;                                                       //@synthesize idiom=_idiom - In the implementation block
@property (nonatomic,readonly) UIStatusBarForegroundStyleAttributes * foregroundStyle;              //@synthesize foregroundStyle=_foregroundStyle - In the implementation block
@property (nonatomic,readonly) UIStatusBar * statusBar; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(long long)idiom;
-(void)setIdiom:(long long)arg1 ;
-(UIStatusBar *)statusBar;
-(void)didMoveToWindow;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_setStatusBarData:(id)arg1 actions:(int)arg2 animated:(BOOL)arg3 ;
-(void)_accessibilityHUDGestureManager:(id)arg1 showHUDItem:(id)arg2 ;
-(void)_dismissAccessibilityHUDForGestureManager:(id)arg1 ;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(CGPoint)arg2 ;
-(void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(CGPoint)arg2 ;
-(double)leftEdgePadding;
-(double)rightEdgePadding;
-(UIStatusBarForegroundStyleAttributes *)foregroundStyle;
-(void)setPersistentAnimationsEnabled:(BOOL)arg1 ;
-(void)reflowItemViewsForgettingEitherSideItemHistory;
-(BOOL)isShowingBreadcrumb;
-(id)_statusBarWindowForAccessibilityHUD;
-(void)setStatusBarData:(id)arg1 actions:(int)arg2 animated:(BOOL)arg3 ;
-(BOOL)willChangeNavigationItemDisplayWithSystemNavigationAction:(id)arg1 ;
-(void)startIgnoringData;
-(void)stopIgnoringData:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 foregroundStyle:(id)arg2 usesVerticalLayout:(BOOL)arg3 ;
-(void)reflowItemViews:(BOOL)arg1 ;
-(BOOL)ignoringData;
-(void)reflowItemViewsCrossfadingCenter:(id)arg1 duration:(double)arg2 ;
-(void)animateUnlock;
-(void)jiggleLockIcon;
-(CGRect)frameForItemOfType:(int)arg1 ;
-(CGRect)frameForAllItemsInRegion:(int)arg1 ;
-(BOOL)rectIntersectsTimeItem:(CGRect)arg1 ;
-(id)_statusBarItemViewAtPoint:(CGPoint)arg1 ;
-(void)_cleanUpAfterDataChange;
-(void)_reflowItemViewsWithDuration:(double)arg1 preserveHistory:(BOOL)arg2 ;
-(void)_animateUnlockCompletionBlock:(/*^block*/id)arg1 ;
-(void)_reflowItemViewsCrossfadingCenterWithDuration:(double)arg1 timeWasEnabled:(BOOL)arg2 ;
-(id)_computeVisibleItemsPreservingHistory:(BOOL)arg1 ;
-(void)_cleanUpAfterSimpleReflow;
-(BOOL)_tryToPlaceItem:(id)arg1 inItemArray:(id)arg2 layoutManager:(id)arg3 roomRemaining:(double*)arg4 allowSwap:(BOOL)arg5 swappedItem:(id*)arg6 ;
-(BOOL)rectIntersectsBatteryItem:(CGRect)arg1 ;
@end

