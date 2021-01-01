/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIComingSoonCardLayout, VUILabel, VUILegacyButton, UIVisualEffectView;

@interface VUIComingSoonBannerCardView : UIView {

	VUIComingSoonCardLayout* _layout;
	VUILabel* _titleLabel;
	VUILabel* _textLabel;
	VUILegacyButton* _button;
	UIVisualEffectView* _vibrantEffectView;

}

@property (nonatomic,retain) VUIComingSoonCardLayout * layout;                    //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * textLabel;                                //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) VUILegacyButton * button;                            //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * vibrantEffectView;              //@synthesize vibrantEffectView=_vibrantEffectView - In the implementation block
+(id)configureViewWithDataDictionary:(id)arg1 andButtonViewElement:(id)arg2 existingView:(id)arg3 ;
-(VUIComingSoonCardLayout *)layout;
-(void)setLayout:(VUIComingSoonCardLayout *)arg1 ;
-(VUILegacyButton *)button;
-(void)setButton:(VUILegacyButton *)arg1 ;
-(VUILabel *)textLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(VUILabel *)titleLabel;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)setTextLabel:(VUILabel *)arg1 ;
-(UIVisualEffectView *)vibrantEffectView;
-(void)setVibrantEffectView:(UIVisualEffectView *)arg1 ;
@end
