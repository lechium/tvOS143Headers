/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton;

@interface TVSUITextEntryFooterView : UIView {

	UIButton* _submitButton;

}

@property (nonatomic,retain) UIButton * submitButton;              //@synthesize submitButton=_submitButton - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setSubmitButton:(UIButton *)arg1 ;
-(UIButton *)submitButton;
-(CGRect)_buttonFrameWithBounds:(CGRect)arg1 ;
@end
