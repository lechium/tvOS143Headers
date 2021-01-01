/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUICore/VideosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/VUIAuxiliaryViewSelecting.h>

@class UIImage, _UIStackedImageContainerLayer, _UIStackedImageConfiguration, VUIStackedImageNamedLayerStack, UIMotionEffectGroup, VUIImageProxy, NSShadow, UIView, NSString;

@interface VUIStackedImageView : UIView <VUIAuxiliaryViewSelecting> {

	UIImage* _staticImage;
	_UIStackedImageContainerLayer* _imageStackLayer;
	_UIStackedImageConfiguration* _imageStackConfig;
	VUIStackedImageNamedLayerStack* _uiLayerStack;
	UIMotionEffectGroup* _motionEffectGroup;
	double _layerSelectionDuration;
	double _layerUnselectionDuration;
	double _shadowSelectionDuration;
	double _shadowUnselectionDuration;
	double _repositionUnselectionDuration;
	BOOL _overlayComposited;
	BOOL _imageLoaded;
	VUIImageProxy* _imageProxy;
	NSShadow* _shadow;
	UIView* _overlayView;
	UIView* _unmaskedOverlayView;
	CGSize _stackSize;

}

@property (assign,getter=isImageLoaded,nonatomic) BOOL imageLoaded;                          //@synthesize imageLoaded=_imageLoaded - In the implementation block
@property (nonatomic,retain) VUIImageProxy * imageProxy;                                     //@synthesize imageProxy=_imageProxy - In the implementation block
@property (assign,nonatomic) CGSize stackSize;                                               //@synthesize stackSize=_stackSize - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,retain) UIImage * placeholderImage; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double focusSizeIncrease; 
@property (nonatomic,copy) NSShadow * shadow;                                                //@synthesize shadow=_shadow - In the implementation block
@property (assign,nonatomic) BOOL allowsNonOpaqueShadow; 
@property (assign,nonatomic) long long selectionStyle; 
@property (assign,getter=isOverlayComposited,nonatomic) BOOL overlayComposited;              //@synthesize overlayComposited=_overlayComposited - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                           //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIView * unmaskedOverlayView;                                   //@synthesize unmaskedOverlayView=_unmaskedOverlayView - In the implementation block
@property (assign,nonatomic) unsigned long long controlState; 
@property (nonatomic,readonly) unsigned long long primaryControlState; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isPressed,nonatomic) BOOL pressed; 
@property (assign,nonatomic) CGPoint focusDirection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)_scaledSizeForSize:(CGSize)arg1 focusSizeIncrease:(double)arg2 selectionStyle:(long long)arg3 ;
+(CGSize)_scaledSizeForSize:(CGSize)arg1 selectionStyle:(long long)arg2 ;
-(void)dealloc;
-(void)setStackSize:(CGSize)arg1 ;
-(CGSize)stackSize;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
-(UIImage *)image;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(NSShadow *)shadow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(long long)selectionStyle;
-(void)setSelectionStyle:(long long)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isImageLoaded;
-(void)willMoveToWindow:(id)arg1 ;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 ;
-(void)setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setFocused:(BOOL)arg1 ;
-(VUIImageProxy *)imageProxy;
-(void)setImageProxy:(VUIImageProxy *)arg1 ;
-(void)setControlState:(unsigned long long)arg1 ;
-(id)_imageConfiguration;
-(void)setAllowsNonOpaqueShadow:(BOOL)arg1 ;
-(unsigned long long)controlState;
-(BOOL)isPressed;
-(void)setShadow:(NSShadow *)arg1 ;
-(void)setFocusSizeIncrease:(double)arg1 ;
-(double)focusSizeIncrease;
-(id)initWithImageProxy:(id)arg1 ;
-(id)_newImageConfiguration;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(void)animateWithAuxiliarySelectionState:(BOOL)arg1 animations:(/*^block*/id)arg2 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)_layeredImageContainerLayer;
-(CGPoint)focusDirection;
-(void)setFocusDirection:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(void)_updateStackedImageConfiguration;
-(void)_loadImage;
-(void)setImageLoaded:(BOOL)arg1 ;
-(BOOL)allowsNonOpaqueShadow;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(double)_idleModeFocusSizeOffset;
-(id)_layerBelowTitles;
-(void)_setFocusDirection:(CGPoint)arg1 duration:(double)arg2 ;
-(void)setPressed:(BOOL)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)setUnmaskedOverlayView:(UIView *)arg1 ;
-(unsigned long long)primaryControlState;
-(void)_setShadowOpacity:(double)arg1 ;
-(void)_setShadowRadius:(double)arg1 ;
-(void)_setShadowVerticalOffset:(double)arg1 ;
-(void)_resetShadowSettings;
-(UIView *)unmaskedOverlayView;
-(id)initWithImage:(id)arg1 size:(CGSize)arg2 ;
-(void)_updateImageSamplingOverlays;
-(void)_attachMotionEffects;
-(void)_detachMotionEffects;
-(void)_updateLayerStack:(id)arg1 withImage:(CGImageRef)arg2 size:(CGSize)arg3 ;
-(void)_commitLayerStack:(id)arg1 ;
-(void)setImage:(id)arg1 withSize:(CGSize)arg2 ;
-(void)setOverlayComposited:(BOOL)arg1 ;
-(BOOL)isOverlayComposited;
@end

