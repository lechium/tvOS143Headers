/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/_UIStackedImageContainerView.h>

@class TVLayeredImageProxy, UIView, _UIStackedImageContainerLayer;

@interface TVLayeredImageContainerView : _UIStackedImageContainerView {

	TVLayeredImageProxy* _layeredImageProxy;
	BOOL _layeredImageLoaded;
	UIView* _overlayView;

}

@property (assign,getter=isLayeredImageLoaded,nonatomic) BOOL layeredImageLoaded;                       //@synthesize layeredImageLoaded=_layeredImageLoaded - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                                      //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) TVLayeredImageProxy * layeredImageProxy;                                   //@synthesize layeredImageProxy=_layeredImageProxy - In the implementation block
@property (nonatomic,readonly) _UIStackedImageContainerLayer * layeredImageContainerLayer; 
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(void)setLayeredImageProxy:(TVLayeredImageProxy *)arg1 ;
-(id)initWithLayeredImageProxy:(id)arg1 ;
-(_UIStackedImageContainerLayer *)layeredImageContainerLayer;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(CGPoint)focusDirection;
-(void)setFocusDirection:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setLayeredImageLoaded:(BOOL)arg1 ;
-(void)_loadLayeredImage;
-(BOOL)isLayeredImageLoaded;
-(TVLayeredImageProxy *)layeredImageProxy;
@end

