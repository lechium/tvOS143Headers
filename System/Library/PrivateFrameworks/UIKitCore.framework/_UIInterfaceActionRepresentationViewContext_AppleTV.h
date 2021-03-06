/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIMotionEffectGroup, UIView;

@interface _UIInterfaceActionRepresentationViewContext_AppleTV : NSObject {

	UIMotionEffectGroup* _installedHighlightedActionMotionEffectsGroup;
	BOOL _highlighted;
	BOOL _pressed;
	UIView* _highlightTransformTargetView;

}

@property (assign,nonatomic,__weak) UIView * highlightTransformTargetView;              //@synthesize highlightTransformTargetView=_highlightTransformTargetView - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                          //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL pressed;                                              //@synthesize pressed=_pressed - In the implementation block
-(BOOL)highlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pressed;
-(void)setPressed:(BOOL)arg1 ;
-(id)initWithHighlightTransformTargetView:(id)arg1 ;
-(void)_applyHighlightTransform;
-(CATransform3D)_enlargedTransformForSize:(CGSize)arg1 pressed:(BOOL)arg2 ;
-(void)_removeMotionEffects;
-(void)_insertMotionEffects;
-(id)_newMotionEffectsGroupForHighlightedAction;
-(UIView *)highlightTransformTargetView;
-(void)setHighlightTransformTargetView:(UIView *)arg1 ;
@end

