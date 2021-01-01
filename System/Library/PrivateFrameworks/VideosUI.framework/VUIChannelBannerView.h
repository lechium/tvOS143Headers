/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIChannelBannerLayout, UIView, VUILabel, VUIFocusableTextView, NSArray, VUISeparatorView, VUIBackdropView, VUIBackdropMaskingView, UIFocusContainerGuide, UIImage;

@interface VUIChannelBannerView : UIView {

	VUIChannelBannerLayout* _layout;
	UIView* _appleTVChannelLogoView;
	UIView* _subscribeButton;
	VUILabel* _disclaimerTextLabel;
	VUIFocusableTextView* _descriptionTextView;
	NSArray* _textLabels;
	long long _backdropBlurEffectStyle;
	double _backdropInitialPeek;
	double _backdropMaskFactor;
	UIView* _bgImageView;
	UIView* _lastFocusedView;
	VUISeparatorView* _separatorView;
	VUIBackdropView* _backdropView;
	VUIBackdropMaskingView* _maskedBackdropView;
	UIFocusContainerGuide* _containerGuide;

}

@property (nonatomic,retain) VUISeparatorView * separatorView;                         //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) VUIBackdropView * backdropView;                           //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) VUIBackdropMaskingView * maskedBackdropView;              //@synthesize maskedBackdropView=_maskedBackdropView - In the implementation block
@property (nonatomic,readonly) UIImage * backdropImage; 
@property (nonatomic,retain) UIFocusContainerGuide * containerGuide;                   //@synthesize containerGuide=_containerGuide - In the implementation block
@property (nonatomic,retain) VUIChannelBannerLayout * layout;                          //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) UIView * appleTVChannelLogoView;                          //@synthesize appleTVChannelLogoView=_appleTVChannelLogoView - In the implementation block
@property (nonatomic,retain) UIView * subscribeButton;                                 //@synthesize subscribeButton=_subscribeButton - In the implementation block
@property (nonatomic,retain) VUILabel * disclaimerTextLabel;                           //@synthesize disclaimerTextLabel=_disclaimerTextLabel - In the implementation block
@property (nonatomic,retain) VUIFocusableTextView * descriptionTextView;               //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
@property (nonatomic,retain) NSArray * textLabels;                                     //@synthesize textLabels=_textLabels - In the implementation block
@property (assign,nonatomic) long long backdropBlurEffectStyle;                        //@synthesize backdropBlurEffectStyle=_backdropBlurEffectStyle - In the implementation block
@property (assign,nonatomic) double backdropInitialPeek;                               //@synthesize backdropInitialPeek=_backdropInitialPeek - In the implementation block
@property (assign,nonatomic) double backdropMaskFactor;                                //@synthesize backdropMaskFactor=_backdropMaskFactor - In the implementation block
@property (nonatomic,retain) UIView * bgImageView;                                     //@synthesize bgImageView=_bgImageView - In the implementation block
@property (nonatomic,readonly) UIView * lastFocusedView;                               //@synthesize lastFocusedView=_lastFocusedView - In the implementation block
-(VUIChannelBannerLayout *)layout;
-(void)setLayout:(VUIChannelBannerLayout *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(VUISeparatorView *)separatorView;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(VUIBackdropView *)backdropView;
-(void)setBackdropView:(VUIBackdropView *)arg1 ;
-(VUIFocusableTextView *)descriptionTextView;
-(void)setDescriptionTextView:(VUIFocusableTextView *)arg1 ;
-(UIView *)lastFocusedView;
-(UIFocusContainerGuide *)containerGuide;
-(UIView *)bgImageView;
-(void)setBgImageView:(UIView *)arg1 ;
-(void)setBackdropMaskFactor:(double)arg1 ;
-(void)setBackdropBlurEffectStyle:(long long)arg1 ;
-(void)setBackdropInitialPeek:(double)arg1 ;
-(long long)backdropBlurEffectStyle;
-(double)backdropInitialPeek;
-(double)backdropMaskFactor;
-(UIImage *)backdropImage;
-(void)setContainerGuide:(UIFocusContainerGuide *)arg1 ;
-(NSArray *)textLabels;
-(UIView *)appleTVChannelLogoView;
-(void)setAppleTVChannelLogoView:(UIView *)arg1 ;
-(VUILabel *)disclaimerTextLabel;
-(UIView *)subscribeButton;
-(void)setTextLabels:(NSArray *)arg1 ;
-(void)setSubscribeButton:(UIView *)arg1 ;
-(void)setDisclaimerTextLabel:(VUILabel *)arg1 ;
-(void)_bgImageLoaded;
-(CGSize)_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
-(void)_setBackdropViewsWithBgImageViewFrame:(CGRect)arg1 ;
-(void)_layoutLabels:(id)arg1 withOrigin:(CGPoint)arg2 maxWidth:(double)arg3 ;
-(VUIBackdropMaskingView *)maskedBackdropView;
-(void)setMaskedBackdropView:(VUIBackdropMaskingView *)arg1 ;
@end

