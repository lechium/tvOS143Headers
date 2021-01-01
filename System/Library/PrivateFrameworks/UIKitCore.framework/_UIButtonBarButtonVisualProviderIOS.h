/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIButtonBarButtonVisualProvider.h>

@protocol _UIButtonBarAppearanceDelegate;
@class NSMutableDictionary, UIButton, _UIBackButtonMaskView, _UIModernBarButton, UIImageView, NSArray, UIColor, NSLayoutConstraint;

@interface _UIButtonBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider {

	NSMutableDictionary* _currentConstraints;
	NSMutableDictionary* _oldConstraints;
	UIButton* _backIndicatorButton;
	_UIBackButtonMaskView* _backButtonMask;
	_UIModernBarButton* _titleButton;
	_UIModernBarButton* _imageButton;
	UIImageView* _backgroundView;
	id<_UIButtonBarAppearanceDelegate> _appearanceDelegate;
	NSArray* _barButtonTitleAttributes;
	NSArray* _finalTitleAttributes;
	UIColor* _tintColor;
	NSMutableDictionary* _backgroundImages;
	NSArray* _titleContent;
	NSMutableDictionary* _titleLookup;
	NSLayoutConstraint* _backButtonTitleMaxWidthConstraint;
	long long _systemItem;
	struct {
		unsigned imageHasBaseline : 1;
		unsigned backButtonMaskEnabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
	}  _flags;

}
-(id)contentView;
-(void)_setTitle:(id)arg1 ;
-(id)tintColor;
-(id)imageButton;
-(id)backgroundImageView;
-(void)configureButton:(id)arg1 fromBarButtonItem:(id)arg2 ;
-(BOOL)supportsBackButtons;
-(id)backIndicatorView;
-(BOOL)backButtonMaskEnabled;
-(void)setBackButtonMaskEnabled:(BOOL)arg1 ;
-(BOOL)buttonSelectionState:(id)arg1 forRequestedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forSelectedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forHighlightedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forEnabledState:(BOOL)arg2 ;
-(void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3 ;
-(void)updateButton:(id)arg1 appearance:(id)arg2 ;
-(void)buttonLayoutSubviews:(id)arg1 baseImplementation:(/*^block*/id)arg2 ;
-(void)traitCollectionChangedInSubtreeFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)shouldButtonAdjustToTraitCollection:(id)arg1 ;
-(void)resetButtonHasHighlighted;
-(id)alignmentViewForStaticNavBarButtonLeading;
-(id)alignmentViewForStaticNavBarButtonTrailing;
-(void)_updateViewsForMaskingEnabled;
-(void)_computeTextAttributes;
-(void)_setupAlternateTitles;
-(void)_removeTitleButton;
-(id)symbolConfigurationCompact:(BOOL)arg1 ;
-(id)backButtonBackgroundImageForState:(unsigned long long)arg1 compact:(BOOL)arg2 ;
-(id)backgroundImageForState:(unsigned long long)arg1 compact:(BOOL)arg2 ;
-(void)addActiveConstraint:(id)arg1 named:(id)arg2 ;
-(UIOffset)backgroundVerticalAdjustmentForCompact:(BOOL)arg1 ;
-(void)activateWidthMinimizer;
-(double)_defaultPaddingForInsets:(UIEdgeInsets)arg1 ;
-(void)activateHeightMinimizer;
-(void)_addHorizontalConstraintsForImageWithInsets:(UIEdgeInsets)arg1 paddingEdges:(unsigned long long)arg2 additionalPadding:(double)arg3 ;
-(void)_addVerticalConstraintsForImageWithInsets:(UIEdgeInsets)arg1 ;
-(void)_addHorizontalConstraintsForTextWithOffset:(double)arg1 additionalPadding:(UIEdgeInsets)arg2 ;
-(void)_addVerticalConstraintsForTextWithOffset:(double)arg1 ;
-(void)_addHorizontalConstraintsForContentButton:(id)arg1 titleOffset:(double)arg2 backButtonLayoutInsets:(NSDirectionalEdgeInsets)arg3 ;
-(void)_addVerticalConstraintsForBackIndicatorWithTitleOffset:(double)arg1 bottomOffset:(double)arg2 useBaselineAlignment:(BOOL)arg3 ;
-(void)_configureBackButtonMask;
-(id)_titleContentForTitle:(id)arg1 ;
-(void)_computeTextAttributesForBarButtonItem:(id)arg1 ;
-(void)_configureImageOrTitleCompact:(BOOL)arg1 ;
-(id)_backIndicatorImageForCompact:(BOOL)arg1 ;
-(id)_backIndicatorSymbolConfigurationForCompact:(BOOL)arg1 ;
-(id)_backIndicatorMaskForCompact:(BOOL)arg1 ;
-(id)_backIndicatorMaskSymbolConfigurationForCompact:(BOOL)arg1 ;
-(void)_prepareBackgroundViewFromBarButtonItem:(id)arg1 isBackButton:(BOOL)arg2 ;
-(UIEdgeInsets)_insetsForCompact:(BOOL)arg1 ;
-(double)_defaultBackIndicatorBaselineInsetCompact:(BOOL)arg1 ;
-(UIEdgeInsets)_imageInsetsForBarButtonItem:(id)arg1 compact:(BOOL)arg2 isBackButton:(BOOL)arg3 ;
-(void)_configureImageBackButtonWithImageInsets:(UIEdgeInsets)arg1 backButtonLayoutInsets:(NSDirectionalEdgeInsets)arg2 useBaselineAlignment:(BOOL)arg3 ;
-(UIOffset)backButtonTitlePositionOffsetForCompact:(BOOL)arg1 ;
-(void)_configureTextBackButtonWithTitlePositionAdjustment:(UIOffset)arg1 backButtonLayoutInsets:(NSDirectionalEdgeInsets)arg2 useBaselineAlignment:(BOOL)arg3 ;
-(void)_configureBackButtonWithBackButtonLayoutInsets:(NSDirectionalEdgeInsets)arg1 useBaselineAlignment:(BOOL)arg2 ;
-(void)_configureImageWithInsets:(UIEdgeInsets)arg1 paddingEdges:(unsigned long long)arg2 additionalPadding:(double)arg3 ;
-(UIOffset)titlePositionOffsetForCompact:(BOOL)arg1 ;
-(void)_configureTextWithOffset:(UIOffset)arg1 additionalPadding:(UIEdgeInsets)arg2 ;
-(UIOffset)backButtonBackgroundVerticalAdjustmentForCompact:(BOOL)arg1 ;
-(void)_addConstraintsForBackgroundViewWithOffset:(double)arg1 isBackButton:(BOOL)arg2 resizesImage:(BOOL)arg3 ;
-(void)updateActiveConstraints:(/*^block*/id)arg1 ;
-(id)textButton;
@end

