/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarItemView.h>

@class NSString;

@interface UIStatusBarServiceItemView : UIStatusBarItemView {

	NSString* _serviceString;
	NSString* _crossfadeString;
	unsigned long long _crossfadeStep;
	double _maxWidth;
	double _serviceWidth;
	double _crossfadeWidth;
	int _contentType;
	BOOL _loopingNecessaryForString;
	BOOL _loopNowIfNecessary;
	BOOL _loopingNow;
	double _letterSpacing;

}
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)accessibilityHUDRepresentation;
-(double)standardPadding;
-(long long)legibilityStyle;
-(double)updateContentsAndWidth;
-(void)setVisible:(BOOL)arg1 frame:(CGRect)arg2 duration:(double)arg3 ;
-(id)contentsImage;
-(double)extraRightPadding;
-(BOOL)animatesDataChange;
-(void)performPendedActions;
-(double)resetContentOverlap;
-(double)addContentOverlap:(double)arg1 ;
-(BOOL)updateForContentType:(int)arg1 serviceString:(id)arg2 serviceCrossfadeString:(id)arg3 maxWidth:(double)arg4 actions:(int)arg5 ;
-(id)_contentsImageFromString:(id)arg1 withWidth:(double)arg2 letterSpacing:(double)arg3 ;
-(void)_crossfadeStepAnimation;
-(BOOL)_crossfaded;
-(BOOL)_loopingNecessary;
-(id)_crossfadeContentsImage;
-(id)_serviceContentsImage;
-(void)_loopAnimationDidStopInDirection:(BOOL)arg1 ;
@end

