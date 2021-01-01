/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRepeatingPressGestureRecognizer.h>

@class UIView, UIScrollView;

@interface UIScrollViewDirectionalPressGestureRecognizer : _UIRepeatingPressGestureRecognizer {

	BOOL _hasBeenModified;
	UIView* _originalView;
	UIScrollView* _scrollView;
	long long _activePressType;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) long long activePressType;                   //@synthesize activePressType=_activePressType - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(UIScrollView *)scrollView;
-(void)setAllowedTouchTypes:(id)arg1 ;
-(void)setAllowedPressTypes:(id)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(void)_setEnabledIfAllowed:(BOOL)arg1 ;
-(long long)activePressType;
-(void)_addToViewIfAllowed:(id)arg1 ;
-(void)_resetToOriginalViewIfAllowed;
@end

