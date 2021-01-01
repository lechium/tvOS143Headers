/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIAssistantBarRoundedButtonViewButton;

@interface UIAssistantBarRoundedButtonView : UIView {

	UIView* _shadowView;
	BOOL _dropShadow;
	UIAssistantBarRoundedButtonViewButton* _button;

}

@property (assign,nonatomic) BOOL dropShadow;                                               //@synthesize dropShadow=_dropShadow - In the implementation block
@property (nonatomic,readonly) UIAssistantBarRoundedButtonViewButton * button;              //@synthesize button=_button - In the implementation block
-(UIAssistantBarRoundedButtonViewButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)dropShadow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setDropShadow:(BOOL)arg1 ;
@end

