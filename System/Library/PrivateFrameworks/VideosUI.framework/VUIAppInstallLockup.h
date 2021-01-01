/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIAppInstallView, UILabel, UIStackView, UIImage, NSString, VUITextBadge;

@interface VUIAppInstallLockup : UIView {

	VUIAppInstallView* _iconView;
	UILabel* _nameLabel;
	UILabel* _iAPLabel;
	UILabel* _subtitleLabel;
	UIStackView* _nameAndRatingStack;
	UIStackView* _containerStack;
	BOOL _canFocus;
	UIImage* _icon;
	NSString* _name;
	NSString* _ageRating;
	NSString* _iAP;
	NSString* _subtitle;
	UIStackView* _metadataStackView;
	VUITextBadge* _ageRatingBadge;
	UILabel* _ageRatingLabel;

}

@property (nonatomic,retain) VUITextBadge * ageRatingBadge;                  //@synthesize ageRatingBadge=_ageRatingBadge - In the implementation block
@property (nonatomic,retain) UILabel * ageRatingLabel;                       //@synthesize ageRatingLabel=_ageRatingLabel - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * ageRating;                             //@synthesize ageRating=_ageRating - In the implementation block
@property (nonatomic,copy) NSString * iAP;                                   //@synthesize iAP=_iAP - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) VUIAppInstallView * installView; 
@property (nonatomic,retain) UIStackView * metadataStackView;                //@synthesize metadataStackView=_metadataStackView - In the implementation block
@property (assign,nonatomic) BOOL canFocus;                                  //@synthesize canFocus=_canFocus - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFocused;
-(UIStackView *)metadataStackView;
-(void)setMetadataStackView:(UIStackView *)arg1 ;
-(NSString *)ageRating;
-(void)setCanFocus:(BOOL)arg1 ;
-(BOOL)canFocus;
-(VUIAppInstallView *)installView;
-(void)setAgeRating:(NSString *)arg1 ;
-(void)setIAP:(NSString *)arg1 ;
-(void)_layoutForTvos;
-(void)_layoutForIos;
-(void)_configureLabels;
-(VUITextBadge *)ageRatingBadge;
-(UILabel *)ageRatingLabel;
-(id)_textColorForDarkMode;
-(void)_configureAgeRatingBadge;
-(NSString *)iAP;
-(void)setAgeRatingBadge:(VUITextBadge *)arg1 ;
-(void)setAgeRatingLabel:(UILabel *)arg1 ;
@end
