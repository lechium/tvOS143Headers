/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKPass, PKDynamicContentView, UIImageView, PKDynamicLayerConfiguration, PKDynamicLayerTransactionEffectConfiguration, UIImage, NSData, CAEmitterLayer, CALayer;

@interface PKDynamicLayerView : UIView {

	PKPass* _pass;
	PKDynamicContentView* _backgroundParallaxView;
	PKDynamicContentView* _neutralView;
	PKDynamicContentView* _foregroundParallaxView;
	PKDynamicContentView* _staticOverlayView;
	UIImageView* _staticFallbackView;
	PKDynamicLayerConfiguration* _dynamicLayerConfiguration;
	PKDynamicLayerTransactionEffectConfiguration* _transactionEffectConfiguration;
	UIImage* _transactionEffectEmitterImage;
	NSData* _transactionEffectShapeData;
	CAEmitterLayer* _transactionEffectLayer;
	CALayer* _dimmingLayer;
	BOOL _invalidated;
	BOOL _paused;
	BOOL _loaded;
	BOOL _effectiveMotionEnabled;
	BOOL _automaticallyLoadContent;
	BOOL _motionEnabled;

}

@property (assign,nonatomic) BOOL automaticallyLoadContent;                          //@synthesize automaticallyLoadContent=_automaticallyLoadContent - In the implementation block
@property (assign,getter=isMotionEnabled,nonatomic) BOOL motionEnabled;              //@synthesize motionEnabled=_motionEnabled - In the implementation block
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
-(void)dealloc;
-(void)invalidate;
-(BOOL)isPaused;
-(BOOL)isLoaded;
-(void)setPaused:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)_configureViews;
-(void)_updateVisibility;
-(void)setMotionEnabled:(BOOL)arg1 ;
-(BOOL)isMotionEnabled;
-(id)initWithFrame:(CGRect)arg1 pass:(id)arg2 ;
-(void)runTransactionEffect;
-(id)initWithFrame:(CGRect)arg1 pass:(id)arg2 automaticallyLoadContent:(BOOL)arg3 ;
-(void)loadContent;
-(void)_configureDynamicViewsWithImageSet:(id)arg1 ;
-(void)_removeParallaxMotionEffect;
-(void)_addParallaxMotionEffect;
-(id)_dimmingLayerAnimationWithDuration:(double)arg1 ;
-(void)setAutomaticallyLoadContent:(BOOL)arg1 ;
-(BOOL)automaticallyLoadContent;
@end

