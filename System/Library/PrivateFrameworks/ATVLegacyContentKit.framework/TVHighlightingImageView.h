/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIView.h>

@class TVImageProxy, UIColor, UIImage, UIImageView;

@interface TVHighlightingImageView : UIView {

	TVImageProxy* _imageProxy;
	UIColor* _imageColor;
	UIColor* _highlightedImageColor;
	UIImage* _placeholderImage;
	double _highlightDuration;
	double _unhighlightDuration;
	UIImageView* _imageView;
	UIImageView* _highlightedImageView;
	UIImage* _originalImage;

}

@property (nonatomic,retain) UIImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * highlightedImageView;              //@synthesize highlightedImageView=_highlightedImageView - In the implementation block
@property (nonatomic,retain) UIImage * originalImage;                         //@synthesize originalImage=_originalImage - In the implementation block
@property (nonatomic,retain) UIColor * imageColor;                            //@synthesize imageColor=_imageColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedImageColor;                 //@synthesize highlightedImageColor=_highlightedImageColor - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * placeholderImage;                      //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,readonly) UIImage * coloredImage; 
@property (nonatomic,readonly) UIImage * highlightedImage; 
@property (assign,nonatomic) double highlightDuration;                        //@synthesize highlightDuration=_highlightDuration - In the implementation block
@property (assign,nonatomic) double unhighlightDuration;                      //@synthesize unhighlightDuration=_unhighlightDuration - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,retain) TVImageProxy * imageProxy;                       //@synthesize imageProxy=_imageProxy - In the implementation block
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(long long)contentMode;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setContentMode:(long long)arg1 ;
-(UIImage *)coloredImage;
-(void)setImageView:(UIImageView *)arg1 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(UIImageView *)highlightedImageView;
-(void)setHighlightedImageView:(UIImageView *)arg1 ;
-(TVImageProxy *)imageProxy;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(UIImage *)originalImage;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(void)setImageProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setImageColor:(UIColor *)arg1 ;
-(void)_setupImagesFromImage:(id)arg1 ;
-(UIColor *)imageColor;
-(UIColor *)highlightedImageColor;
-(UIImage *)highlightedImage;
-(void)setHighlightedImageColor:(UIColor *)arg1 ;
-(double)highlightDuration;
-(void)setHighlightDuration:(double)arg1 ;
-(double)unhighlightDuration;
-(void)setUnhighlightDuration:(double)arg1 ;
@end

