/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIInputView.h>

@class UIStackView, UIColor;

@interface PKNumberPadInputView : UIInputView {

	UIStackView* _verticalStackView;
	BOOL _showsDecimalPointButton;
	UIColor* _numberPadColor;
	UIColor* _textColor;

}

@property (assign,nonatomic) BOOL showsDecimalPointButton;              //@synthesize showsDecimalPointButton=_showsDecimalPointButton - In the implementation block
@property (nonatomic,copy) UIColor * numberPadColor;                    //@synthesize numberPadColor=_numberPadColor - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                         //@synthesize textColor=_textColor - In the implementation block
+(CGSize)defaultSizeForInterfaceOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)setShowsDecimalPointButton:(BOOL)arg1 ;
-(void)setNumberPadColor:(UIColor *)arg1 ;
-(void)_reloadSubviews;
-(void)_performDelete;
-(void)_performInsertion:(id)arg1 ;
-(void)_numericKeyPressed:(id)arg1 ;
-(id)initWithDefaultFrameForInterfaceOrientation:(long long)arg1 ;
-(BOOL)showsDecimalPointButton;
-(UIColor *)numberPadColor;
@end
