/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class _UIFloatingContentView, UIVisualEffectView, UILongPressGestureRecognizer, UIView, NSString;

@interface TVPFloatingButton : UIControl <UIGestureRecognizerDelegate> {

	_UIFloatingContentView* _floatingView;
	UIVisualEffectView* _backgroundEffectView;
	UILongPressGestureRecognizer* _selectRecognizer;
	BOOL _alwaysAllowFocus;
	double _cornerRadius;
	/*^block*/id _primaryActionHandler;

}

@property (assign,nonatomic) BOOL alwaysAllowFocus;                 //@synthesize alwaysAllowFocus=_alwaysAllowFocus - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
@property (assign,nonatomic) double cornerRadius;                   //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,copy) id primaryActionHandler;                 //@synthesize primaryActionHandler=_primaryActionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSelected:(BOOL)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)contentView;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(BOOL)_isEligibleForFocusInteraction;
-(void)_selectButtonAction:(id)arg1 ;
-(void)setAlwaysAllowFocus:(BOOL)arg1 ;
-(BOOL)alwaysAllowFocus;
-(void)_updateFloatingTintColor;
-(void)_handlePrimaryAction;
-(id)primaryActionHandler;
-(void)setPrimaryActionHandler:(id)arg1 ;
@end
