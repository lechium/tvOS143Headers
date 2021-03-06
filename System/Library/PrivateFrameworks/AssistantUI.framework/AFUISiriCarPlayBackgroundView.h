/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@protocol AFUISiriCarPlayBackgroundViewDelegate;
@class AFUISiriCarPlayFullScreenBackgroundView, UIView;

@interface AFUISiriCarPlayBackgroundView : UIView {

	AFUISiriCarPlayFullScreenBackgroundView* _fullScreenBackgroundView;
	UIView* _systemBackgroundView;
	id<AFUISiriCarPlayBackgroundViewDelegate> _delegate;
	BOOL _visible;
	long long _backgroundViewMode;

}

@property (assign,nonatomic) long long backgroundViewMode;               //@synthesize backgroundViewMode=_backgroundViewMode - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;              //@synthesize visible=_visible - In the implementation block
-(id)initWithDelegate:(id)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(long long)backgroundViewMode;
-(void)_animateBackgroundsWithVisibility:(BOOL)arg1 backgroundViewMode:(long long)arg2 ;
-(void)_updateViewsForVisibility:(BOOL)arg1 backgroundViewMode:(long long)arg2 ;
-(void)_updateCarPlayStatusBarForVisibility:(BOOL)arg1 backgroundViewMode:(long long)arg2 ;
-(void)setBackgroundViewMode:(long long)arg1 ;
@end

