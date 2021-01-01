/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TVTermsAndConditionsViewDelegate;
@class UILabel, UIScrollView, UIView, NSMutableArray, NSMutableDictionary, UIVisualEffectView, _UIRepeatingPressGestureRecognizer, NSString, NSArray;

@interface TVTermsAndConditionsView : UIView {

	UILabel* _titleLabel;
	UIScrollView* _contentView;
	UIView* _buttonContainerView;
	NSMutableArray* _buttons;
	NSMutableDictionary* _arrayIndexToSpecifiedButtonIndexMapping;
	UIVisualEffectView* _effectView;
	_UIRepeatingPressGestureRecognizer* _upButtonGesture;
	_UIRepeatingPressGestureRecognizer* _downButtonGesture;
	BOOL _waiting;
	id<TVTermsAndConditionsViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVTermsAndConditionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) UIScrollView * contentView;                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) NSArray * buttons; 
-(id<TVTermsAndConditionsViewDelegate>)delegate;
-(void)setDelegate:(id<TVTermsAndConditionsViewDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)buttons;
-(UIScrollView *)contentView;
-(void)setContentView:(UIScrollView *)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(id)preferredFocusedView;
-(void)_prepareForAppearance;
-(void)_didSelectButton:(id)arg1 ;
-(CGAffineTransform)_buttonInitialTransform;
-(CGAffineTransform)_buttonDisappearTransform;
-(void)addButtonWithTitle:(id)arg1 atIndex:(long long)arg2 ;
-(void)animateAppearance;
-(void)animateDisappearanceWithCompletion:(/*^block*/id)arg1 ;
@end

