/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIButtonBarButtonVisualProvider.h>

@protocol _UIButtonBarAppearanceDelegate;
@class UIView, UIImageView, UILabel, NSArray, NSMutableDictionary, NSLayoutConstraint;

@interface _UIButtonBarButtonVisualProviderCarPlay : _UIButtonBarButtonVisualProvider {

	id<_UIButtonBarAppearanceDelegate> _appearanceDelegate;
	UIView* _focusedView;
	UIImageView* _backView;
	UIImageView* _imageView;
	UILabel* _titleView;
	NSArray* _titleAlternatives;
	NSMutableDictionary* _titleAlterntativeLookup;
	NSArray* _buttonConstraints;
	NSLayoutConstraint* _maxTitleViewWidthConstraint;
	NSLayoutConstraint* _backViewToContentConstraint;

}

@property (assign,nonatomic,__weak) id<_UIButtonBarAppearanceDelegate> appearanceDelegate;              //@synthesize appearanceDelegate=_appearanceDelegate - In the implementation block
@property (nonatomic,retain) UIView * focusedView;                                                      //@synthesize focusedView=_focusedView - In the implementation block
@property (nonatomic,retain) UIImageView * backView;                                                    //@synthesize backView=_backView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleView;                                                       //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) NSArray * titleAlternatives;                                               //@synthesize titleAlternatives=_titleAlternatives - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * titleAlterntativeLookup;                             //@synthesize titleAlterntativeLookup=_titleAlterntativeLookup - In the implementation block
@property (nonatomic,retain) NSArray * buttonConstraints;                                               //@synthesize buttonConstraints=_buttonConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * maxTitleViewWidthConstraint;                          //@synthesize maxTitleViewWidthConstraint=_maxTitleViewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * backViewToContentConstraint;                          //@synthesize backViewToContentConstraint=_backViewToContentConstraint - In the implementation block
-(id)contentView;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIView *)focusedView;
-(void)_selectGestureChanged:(id)arg1 ;
-(void)setTitleView:(UILabel *)arg1 ;
-(UILabel *)titleView;
-(UIImageView *)backView;
-(void)setBackView:(UIImageView *)arg1 ;
-(void)configureButton:(id)arg1 fromBarButtonItem:(id)arg2 ;
-(id<_UIButtonBarAppearanceDelegate>)appearanceDelegate;
-(void)setAppearanceDelegate:(id<_UIButtonBarAppearanceDelegate>)arg1 ;
-(BOOL)supportsBackButtons;
-(id)backIndicatorView;
-(void)updateButton:(id)arg1 forHighlightedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forFocusedState:(BOOL)arg2 ;
-(void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3 ;
-(void)buttonLayoutSubviews:(id)arg1 baseImplementation:(/*^block*/id)arg2 ;
-(NSArray *)buttonConstraints;
-(void)setBackViewToContentConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFocusedView:(UIView *)arg1 ;
-(void)_setupAlternateTitlesFromBarButtonItem:(id)arg1 ;
-(NSLayoutConstraint *)backViewToContentConstraint;
-(void)setButtonConstraints:(NSArray *)arg1 ;
-(NSArray *)titleAlternatives;
-(NSMutableDictionary *)titleAlterntativeLookup;
-(void)setTitleAlternatives:(NSArray *)arg1 ;
-(void)setTitleAlterntativeLookup:(NSMutableDictionary *)arg1 ;
-(id)_titleAlternativeForTitle:(id)arg1 ;
-(NSLayoutConstraint *)maxTitleViewWidthConstraint;
-(void)setMaxTitleViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end

