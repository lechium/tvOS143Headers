/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UISelectionGrabber;

@interface UISelectionGrabberDot : UIImageView {

	UISelectionGrabber* m_grabber;

}

@property (assign,nonatomic,__weak) UISelectionGrabber * grabber; 
-(void)setFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UISelectionGrabber *)grabber;
-(int)textEffectsVisibilityLevel;
-(int)textEffectsVisibilityLevelInKeyboardWindow;
-(CGRect)_extendedHitTestingRectWithEvent:(id)arg1 includingCalloutBarAdjustments:(BOOL)arg2 ;
-(void)redrawRasterizedImageForScale:(double)arg1 ;
-(id)_rasterizedDotImageForScale:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 container:(id)arg2 ;
-(void)setGrabber:(UISelectionGrabber *)arg1 ;
@end

