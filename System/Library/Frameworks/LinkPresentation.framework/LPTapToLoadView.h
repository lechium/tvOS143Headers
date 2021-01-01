/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol LPTapToLoadViewDelegate;
@class LPTextView, UIView, LPTapToLoadViewStyle, UILongPressGestureRecognizer, NSString;

@interface LPTapToLoadView : LPComponentView <CAAnimationDelegate, UIGestureRecognizerDelegate> {

	LPTextView* _captionView;
	UIView* _progressView;
	LPTapToLoadViewStyle* _style;
	UIView* _highlightView;
	UILongPressGestureRecognizer* _highlightGestureRecognizer;
	BOOL _wasTapped;
	/*^block*/id _animateOutCompletionHandler;
	id<LPTapToLoadViewDelegate> _tapToLoadViewDelegate;

}

@property (assign,nonatomic,__weak) id<LPTapToLoadViewDelegate> tapToLoadViewDelegate;              //@synthesize tapToLoadViewDelegate=_tapToLoadViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(id)arg1 ;
-(void)_didScroll;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_highlightLongPressRecognized:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2 ;
-(void)_tapRecognized:(id)arg1 ;
-(void)layoutComponentView;
-(void)setTapToLoadViewDelegate:(id<LPTapToLoadViewDelegate>)arg1 ;
-(void)_buildViews;
-(id)_createIndeterminateProgressIndicator;
-(void)_animateToProgressView;
-(void)animateOutWithCompletionHandler:(/*^block*/id)arg1 ;
-(id<LPTapToLoadViewDelegate>)tapToLoadViewDelegate;
@end

