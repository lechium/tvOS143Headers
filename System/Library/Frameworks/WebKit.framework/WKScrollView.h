/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIScrollView.h>

@protocol UIScrollViewDelegate;
@class WKScrollViewDelegateForwarder, WKWebView;

@interface WKScrollView : UIScrollView {

	WeakObjCPtr<id<UIScrollViewDelegate> > _externalDelegate;
	WKScrollViewDelegateForwarder* _delegateForwarder;
	double _keyboardBottomInsetAdjustment;
	BOOL _scrollEnabledByClient;
	BOOL _scrollEnabledInternal;
	BOOL _zoomEnabledByClient;
	BOOL _zoomEnabledInternal;
	WKWebView*<UIScrollViewDelegate> _internalDelegate;

}

@property (assign,nonatomic) WKWebView*<UIScrollViewDelegate> internalDelegate;              //@synthesize internalDelegate=_internalDelegate - In the implementation block
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setInternalDelegate:(WKWebView*<UIScrollViewDelegate>)arg1 ;
-(WKWebView*<UIScrollViewDelegate>)internalDelegate;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)_setScrollEnabledInternal:(BOOL)arg1 ;
-(void)_setContentSizePreservingContentOffsetDuringRubberband:(CGSize)arg1 ;
-(void)_setZoomEnabledInternal:(BOOL)arg1 ;
-(void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(BOOL)arg2 lastAdjustment:(double*)arg3 ;
-(void)_updateDelegate;
-(double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(BOOL*)arg5 ;
-(CGSize)_currentTopLeftRubberbandAmount;
-(void)_restoreContentOffsetWithRubberbandAmount:(CGSize)arg1 ;
-(UIEdgeInsets)_systemContentInset;
-(void)_updateScrollability;
-(void)_updateZoomability;
-(void)setZoomEnabled:(BOOL)arg1 ;
@end

