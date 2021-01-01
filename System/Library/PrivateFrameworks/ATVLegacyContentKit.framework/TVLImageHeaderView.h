/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIView.h>

@class TVImageView, UILabel, TVShadowView, NSURL, TVLImageHeaderElement, UIImage, TVImageProxy, NSString;

@interface TVLImageHeaderView : UIView {

	TVImageView* _headerImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	long long _horizontalAlignment;
	TVShadowView* _shadowView;
	NSURL* _headerImageURL;
	BOOL _useUberImageLayout;
	TVLImageHeaderElement* _imageHeaderElement;
	UIImage* _headerImage;
	TVImageProxy* _headerImageProxy;
	UIEdgeInsets _imageInsets;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) long long horizontalAlignment;                             //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (assign,nonatomic) UIEdgeInsets imageInsets;                                  //@synthesize imageInsets=_imageInsets - In the implementation block
@property (assign,nonatomic) BOOL useUberImageLayout;                                   //@synthesize useUberImageLayout=_useUberImageLayout - In the implementation block
@property (nonatomic,retain) UIImage * headerImage;                                     //@synthesize headerImage=_headerImage - In the implementation block
@property (nonatomic,retain) TVImageProxy * headerImageProxy;                           //@synthesize headerImageProxy=_headerImageProxy - In the implementation block
@property (nonatomic,readonly) TVLImageHeaderElement * imageHeaderElement;              //@synthesize imageHeaderElement=_imageHeaderElement - In the implementation block
+(id)subtitleColor;
+(id)titleColor;
+(id)subtitleFont;
+(id)titleFont;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)titleLabel;
-(id)subtitleLabel;
-(UIImage *)headerImage;
-(void)setHeaderImage:(UIImage *)arg1 ;
-(id)headerImageView;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(long long)horizontalAlignment;
-(void)setHeaderImageProxy:(TVImageProxy *)arg1 ;
-(id)initWithImageHeaderElement:(id)arg1 ;
-(double)shadowHeight;
-(void)hideShadowView;
-(UIEdgeInsets)imageInsets;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(void)setHeaderImageProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(TVImageProxy *)headerImageProxy;
-(id)headerImageURL;
-(TVLImageHeaderElement *)imageHeaderElement;
-(BOOL)useUberImageLayout;
-(void)setUseUberImageLayout:(BOOL)arg1 ;
@end

