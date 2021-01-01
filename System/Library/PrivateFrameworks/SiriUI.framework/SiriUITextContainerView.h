/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SiriUIContentLabel, UIView, NSString, UIFont, UIColor;

@interface SiriUITextContainerView : UIView {

	SiriUIContentLabel* _label;
	UIView* _containerView;
	SCD_Struct_Si10 _textContainerStyle;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) SCD_Struct_Si6 textContainerStyle;              //@synthesize textContainerStyle=_textContainerStyle - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 text:(id)arg2 font:(id)arg3 textContainerStyle:(SCD_Struct_Si6)arg4 ;
+(CGRect)_textBoundingRectWithSize:(CGSize)arg1 text:(id)arg2 font:(id)arg3 textContainerStyle:(SCD_Struct_Si6)arg4 ;
+(double)_distanceFromBaselineToBottomWithFont:(id)arg1 textContainerStyle:(SCD_Struct_Si6)arg2 ;
+(double)_distanceFromTopToBaselineWithFont:(id)arg1 textContainerStyle:(SCD_Struct_Si6)arg2 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithText:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)textAlignment;
-(void)setTextContainerStyle:(SCD_Struct_Si6)arg1 ;
-(id)initWithText:(id)arg1 visualEffect:(id)arg2 ;
-(SCD_Struct_Si6)textContainerStyle;
@end

