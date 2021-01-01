/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPopoverBackgroundView.h>

@class UIView, UIVisualEffectView, UIColor;

@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView {

	UIView* _arrowBackgroundView;
	UIVisualEffectView* _blurView;
	UIView* _maskView;
	UIColor* _popoverBackgroundColor;
	UIColor* _arrowBackgroundColor;
	BOOL _popoverBackgroundColorIsOpaque;
	double _arrowOffset;
	unsigned long long _arrowDirection;
	long long _requestedBackgroundStyle;
	long long _backgroundStyle;
	BOOL _arrowVisible;
	BOOL _wasPinned;
	BOOL useShortMode;
	BOOL _debugMode;
	UIView* viewToMaskWhenContentExtendsOverArrow;
	UIColor* _contentBlendingColor;
	UIView* _arrowView;
	UIView* _leftCapView;
	UIView* _rightCapView;

}

@property (nonatomic,readonly) UIView * arrowView;                                               //@synthesize arrowView=_arrowView - In the implementation block
@property (nonatomic,readonly) UIView * leftCapView;                                             //@synthesize leftCapView=_leftCapView - In the implementation block
@property (nonatomic,readonly) UIView * rightCapView;                                            //@synthesize rightCapView=_rightCapView - In the implementation block
@property (nonatomic,readonly) BOOL hasComponentViews; 
@property (assign,nonatomic) long long backgroundStyle; 
@property (assign,getter=isArrowVisible,nonatomic) BOOL arrowVisible; 
@property (assign,nonatomic) BOOL useShortMode; 
@property (assign,getter=isDebugModeEnabled,nonatomic) BOOL debugModeEnabled;                    //@synthesize debugMode=_debugMode - In the implementation block
@property (nonatomic,copy) UIColor * popoverBackgroundColor; 
@property (nonatomic,copy) UIColor * arrowBackgroundColor; 
@property (nonatomic,readonly) UIColor * contentBlendingColor;                                   //@synthesize contentBlendingColor=_contentBlendingColor - In the implementation block
@property (assign,nonatomic,__weak) UIView * viewToMaskWhenContentExtendsOverArrow; 
+(UIEdgeInsets)contentViewInsets;
+(double)arrowHeight;
+(double)arrowBase;
-(long long)backgroundStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isPinned;
-(double)_shadowOpacity;
-(void)setBackgroundStyle:(long long)arg1 ;
-(CGSize)_shadowOffset;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)setArrowOffset:(double)arg1 ;
-(double)arrowOffset;
-(void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateBackgroundStyle;
-(double)_shadowRadius;
-(CGRect)_contentViewFrame;
-(void)setDebugModeEnabled:(BOOL)arg1 ;
-(void)setArrowVisible:(BOOL)arg1 ;
-(BOOL)isArrowVisible;
-(unsigned long long)arrowDirection;
-(id)backgroundEffect;
-(void)motionBegan:(long long)arg1 withEvent:(id)arg2 ;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(void)motionCancelled:(long long)arg1 withEvent:(id)arg2 ;
-(UIColor *)popoverBackgroundColor;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(void)setPopoverBackgroundColor:(UIColor *)arg1 ;
-(void)setArrowBackgroundColor:(UIColor *)arg1 ;
-(UIEdgeInsets)safeAreaInsetsForContentView;
-(UIColor *)arrowBackgroundColor;
-(id)_shadowPath;
-(void)_updateChrome;
-(UIEdgeInsets)_shadowInsets;
-(void)_loadNecessaryViews;
-(double)minNonPinnedOffset;
-(double)maxNonPinnedOffset;
-(BOOL)isRightArrowPinnedToTop;
-(BOOL)isRightArrowPinnedToBottom;
-(BOOL)useShortMode;
-(BOOL)wouldPinForOffset:(double)arg1 ;
-(void)_resetComponentViews;
-(void)_layoutArrowViewsUpOrDown;
-(void)_layoutArrowViewsLeftOrRight;
-(void)_layoutArrowViewsNone;
-(UIView *)viewToMaskWhenContentExtendsOverArrow;
-(BOOL)_shouldUseEqualContentInsetsOnAllSides;
-(BOOL)hasComponentViews;
-(void)_configureEffectView;
-(long long)_resolvedBackgroundStyle;
-(void)_removeEffectView;
-(void)setArrowVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setUseShortMode:(BOOL)arg1 ;
-(BOOL)isDebugModeEnabled;
-(void)setViewToMaskWhenContentExtendsOverArrow:(UIView *)arg1 ;
-(UIColor *)contentBlendingColor;
-(UIView *)arrowView;
-(UIView *)leftCapView;
-(UIView *)rightCapView;
@end

