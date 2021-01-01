/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemMenuUI.framework/TVSystemMenuUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemMenuUI/TVSystemMenuUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVSystemMenuUI/_TVSMButtonContentConfigurable.h>
#import <TVSystemMenuUI/TVSMBaseViewAttributesApplying.h>

@class _TVSMColorSettings, UIImageView, UIView, UILabel, _TVSMContainerView, UILayoutGuide, TVSMProgressView, TVSMCAPackageView, CAGradientLayer, UIImage, NSString;

@interface _TVSMButtonContentView : UIView <_TVSMButtonContentConfigurable, TVSMBaseViewAttributesApplying> {

	UIImageView* _artworkImageView;
	UIView* _artworkBackgroundView;
	UIImageView* _symbolImageView;
	UILabel* _titleTextLabel;
	UILabel* _subtitleTextLabel;
	_TVSMContainerView* _progressContentView;
	UILayoutGuide* _caPackageViewLayoutGuide;
	BOOL _allowsTextMarquee;
	_TVSMColorSettings* _backgroundColorSettings;
	_TVSMColorSettings* _artworkBackgroundColorSettings;
	_TVSMColorSettings* _symbolImageColorSettings;
	_TVSMColorSettings* _titleTextColorSettings;
	_TVSMColorSettings* _subtitleTextColorSettings;
	long long _style;
	TVSMProgressView* _progressView;
	TVSMCAPackageView* _caPackageView;
	UIView* _backgroundColorView;
	CAGradientLayer* _backgroundGradientLayer;

}

@property (nonatomic,readonly) UIView * backgroundColorView;                                 //@synthesize backgroundColorView=_backgroundColorView - In the implementation block
@property (nonatomic,readonly) CAGradientLayer * backgroundGradientLayer;                    //@synthesize backgroundGradientLayer=_backgroundGradientLayer - In the implementation block
@property (nonatomic,readonly) long long style;                                              //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIImage * artworkImage; 
@property (nonatomic,retain) UIImage * symbolImage; 
@property (nonatomic,retain) NSString * titleText; 
@property (nonatomic,retain) NSString * subtitleText; 
@property (assign,nonatomic) BOOL allowsTextMarquee;                                         //@synthesize allowsTextMarquee=_allowsTextMarquee - In the implementation block
@property (nonatomic,retain) TVSMProgressView * progressView;                                //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) TVSMCAPackageView * caPackageView;                              //@synthesize caPackageView=_caPackageView - In the implementation block
@property (nonatomic,copy) _TVSMColorSettings * backgroundColorSettings;                     //@synthesize backgroundColorSettings=_backgroundColorSettings - In the implementation block
@property (nonatomic,copy) _TVSMColorSettings * artworkBackgroundColorSettings;              //@synthesize artworkBackgroundColorSettings=_artworkBackgroundColorSettings - In the implementation block
@property (nonatomic,copy) _TVSMColorSettings * symbolImageColorSettings;                    //@synthesize symbolImageColorSettings=_symbolImageColorSettings - In the implementation block
@property (nonatomic,copy) _TVSMColorSettings * titleTextColorSettings;                      //@synthesize titleTextColorSettings=_titleTextColorSettings - In the implementation block
@property (nonatomic,copy) _TVSMColorSettings * subtitleTextColorSettings;                   //@synthesize subtitleTextColorSettings=_subtitleTextColorSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonContentViewForStyle:(long long)arg1 ;
+(id)buttonImageForSymbolName:(id)arg1 style:(long long)arg2 ;
-(long long)style;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(void)setSymbolImage:(UIImage *)arg1 ;
-(UIImage *)symbolImage;
-(void)_setCornerRadius:(double)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(TVSMProgressView *)progressView;
-(void)setProgressView:(TVSMProgressView *)arg1 ;
-(UIImage *)artworkImage;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(UIView *)backgroundColorView;
-(void)setAllowsTextMarquee:(BOOL)arg1 ;
-(void)setBackgroundColorSettings:(_TVSMColorSettings *)arg1 ;
-(void)setArtworkBackgroundColorSettings:(_TVSMColorSettings *)arg1 ;
-(void)setTitleTextColorSettings:(_TVSMColorSettings *)arg1 ;
-(void)setSubtitleTextColorSettings:(_TVSMColorSettings *)arg1 ;
-(void)setSymbolImageColorSettings:(_TVSMColorSettings *)arg1 ;
-(void)setCaPackageView:(TVSMCAPackageView *)arg1 ;
-(void)applyCollectionViewLayoutAttributes:(id)arg1 ;
-(TVSMCAPackageView *)caPackageView;
-(id)_initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(id)_filterForColorSettings:(id)arg1 ;
-(_TVSMColorSettings *)backgroundColorSettings;
-(_TVSMColorSettings *)artworkBackgroundColorSettings;
-(_TVSMColorSettings *)symbolImageColorSettings;
-(_TVSMColorSettings *)titleTextColorSettings;
-(_TVSMColorSettings *)subtitleTextColorSettings;
-(BOOL)allowsTextMarquee;
-(CAGradientLayer *)backgroundGradientLayer;
@end

