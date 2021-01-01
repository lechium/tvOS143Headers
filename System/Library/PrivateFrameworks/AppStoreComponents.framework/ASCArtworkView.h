/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIColor, UIView, UIImageView, ASCBorderView, UIImage;

@interface ASCArtworkView : UIView {

	NSString* _decoration;
	UIColor* _placeholderColor;
	UIView* _overlayView;
	UIImageView* _imageView;
	ASCBorderView* _borderView;
	CGSize _preferredSize;

}

@property (nonatomic,readonly) UIImageView * imageView;                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) ASCBorderView * borderView;                       //@synthesize borderView=_borderView - In the implementation block
@property (assign,nonatomic) CGSize preferredSize;                               //@synthesize preferredSize=_preferredSize - In the implementation block
@property (nonatomic,retain) NSString * decoration;                              //@synthesize decoration=_decoration - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIColor * placeholderColor;                         //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,retain) UIView * overlayView;                               //@synthesize overlayView=_overlayView - In the implementation block
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(CGSize)preferredSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(void)setPreferredSize:(CGSize)arg1 ;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(UIColor *)placeholderColor;
-(CGRect)jet_focusedFrame;
-(NSString *)decoration;
-(ASCBorderView *)borderView;
-(void)setDataChanged;
-(double)cornerRadiusForContentRect:(CGRect)arg1 ;
-(id)cornerCurveForContentRect:(CGRect)arg1 ;
-(unsigned long long)cornerMaskForContentRect:(CGRect)arg1 ;
-(void)setDecoration:(NSString *)arg1 ;
@end

