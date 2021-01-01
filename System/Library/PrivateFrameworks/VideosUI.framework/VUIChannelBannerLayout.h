/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVViewLayout.h>

@class VUIAppleTVChannelLogoLayout, VUITextLayout, VUIButtonLayout, TVImageLayout;

@interface VUIChannelBannerLayout : TVViewLayout {

	BOOL _isSubscribed;
	BOOL _descriptionPreferredOnPhoneSizeClass;
	VUIAppleTVChannelLogoLayout* _channelLogoLayout;
	VUITextLayout* _descriptionTextLayout;
	VUITextLayout* _textLayout;
	VUITextLayout* _disclaimerTextLayout;
	VUIButtonLayout* _subscribeButtonLayout;
	TVImageLayout* _bgImageLayout;

}

@property (assign,nonatomic) BOOL isSubscribed;                                            //@synthesize isSubscribed=_isSubscribed - In the implementation block
@property (assign,nonatomic) BOOL descriptionPreferredOnPhoneSizeClass;                    //@synthesize descriptionPreferredOnPhoneSizeClass=_descriptionPreferredOnPhoneSizeClass - In the implementation block
@property (nonatomic,retain) VUIAppleTVChannelLogoLayout * channelLogoLayout;              //@synthesize channelLogoLayout=_channelLogoLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * descriptionTextLayout;                        //@synthesize descriptionTextLayout=_descriptionTextLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * textLayout;                                   //@synthesize textLayout=_textLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * disclaimerTextLayout;                         //@synthesize disclaimerTextLayout=_disclaimerTextLayout - In the implementation block
@property (nonatomic,retain) VUIButtonLayout * subscribeButtonLayout;                      //@synthesize subscribeButtonLayout=_subscribeButtonLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * bgImageLayout;                                //@synthesize bgImageLayout=_bgImageLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
+(void)_updateTextColorForDisclaimerLayout:(id)arg1 hasBgImage:(BOOL)arg2 ;
+(void)_updateTextColorForDescriptionLayout:(id)arg1 hasBgImage:(BOOL)arg2 ;
-(id)init;
-(BOOL)isSubscribed;
-(void)setIsSubscribed:(BOOL)arg1 ;
-(void)setTextLayout:(VUITextLayout *)arg1 ;
-(VUITextLayout *)textLayout;
-(VUITextLayout *)descriptionTextLayout;
-(VUITextLayout *)disclaimerTextLayout;
-(VUIAppleTVChannelLogoLayout *)channelLogoLayout;
-(void)setDescriptionTextLayout:(VUITextLayout *)arg1 ;
-(void)setDescriptionPreferredOnPhoneSizeClass:(BOOL)arg1 ;
-(TVImageLayout *)bgImageLayout;
-(VUIButtonLayout *)subscribeButtonLayout;
-(BOOL)descriptionPreferredOnPhoneSizeClass;
-(void)setChannelLogoLayout:(VUIAppleTVChannelLogoLayout *)arg1 ;
-(void)setDisclaimerTextLayout:(VUITextLayout *)arg1 ;
-(void)setSubscribeButtonLayout:(VUIButtonLayout *)arg1 ;
-(void)setBgImageLayout:(TVImageLayout *)arg1 ;
@end

