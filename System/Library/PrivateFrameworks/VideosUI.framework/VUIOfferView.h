/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIOfferLayout, UIView, VUILabel, VUIMediaTagsView;

@interface VUIOfferView : UIView {

	BOOL _isEntitled;
	VUIOfferLayout* _layout;
	UIView* _imageView;
	UIView* _logoView;
	UIView* _appIconView;
	VUILabel* _channelNameLabel;
	VUILabel* _titleLabel;
	VUILabel* _subtitleLabel;
	VUILabel* _textLabel;
	UIView* _badgeView;
	VUIMediaTagsView* _tagsView;
	UIView* _versionsButton;
	UIView* _channelImageBackgroundView;

}

@property (nonatomic,retain) VUIOfferLayout * layout;                          //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) UIView * imageView;                               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * logoView;                                //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,retain) UIView * appIconView;                             //@synthesize appIconView=_appIconView - In the implementation block
@property (nonatomic,retain) VUILabel * channelNameLabel;                      //@synthesize channelNameLabel=_channelNameLabel - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * subtitleLabel;                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * textLabel;                             //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIView * badgeView;                               //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) VUIMediaTagsView * tagsView;                      //@synthesize tagsView=_tagsView - In the implementation block
@property (nonatomic,retain) UIView * versionsButton;                          //@synthesize versionsButton=_versionsButton - In the implementation block
@property (nonatomic,retain) UIView * channelImageBackgroundView;              //@synthesize channelImageBackgroundView=_channelImageBackgroundView - In the implementation block
@property (assign,nonatomic) BOOL isEntitled;                                  //@synthesize isEntitled=_isEntitled - In the implementation block
-(VUIOfferLayout *)layout;
-(void)setLayout:(VUIOfferLayout *)arg1 ;
-(VUILabel *)textLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isEntitled;
-(UIView *)imageView;
-(void)layoutSubviews;
-(VUILabel *)titleLabel;
-(VUILabel *)subtitleLabel;
-(void)setSubtitleLabel:(VUILabel *)arg1 ;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setImageView:(UIView *)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(UIView *)badgeView;
-(void)setTextLabel:(VUILabel *)arg1 ;
-(void)setBadgeView:(UIView *)arg1 ;
-(UIView *)appIconView;
-(UIView *)logoView;
-(void)setLogoView:(UIView *)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)setIsEntitled:(BOOL)arg1 ;
-(VUIMediaTagsView *)tagsView;
-(UIView *)versionsButton;
-(UIView *)channelImageBackgroundView;
-(void)setChannelNameLabel:(VUILabel *)arg1 ;
-(void)setAppIconView:(UIView *)arg1 ;
-(void)setTagsView:(VUIMediaTagsView *)arg1 ;
-(void)setVersionsButton:(UIView *)arg1 ;
-(void)setChannelImageBackgroundView:(UIView *)arg1 ;
-(void)prepareForCellReuse;
-(double)_chinHeightForSize:(CGSize)arg1 ;
-(VUILabel *)channelNameLabel;
@end

