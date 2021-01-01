/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol OFUICircularPagingViewDelegate;
@class OFUICircularPagingViewController, UIScrollView, UIView, NSString;

@interface OFUICircularPagingView : OFUIView <UIScrollViewDelegate> {

	double _gapBetweenPages;
	OFUICircularPagingViewController* _circularPagingViewController;
	id<OFUICircularPagingViewDelegate> _delegate;
	UIScrollView* _scrollView;
	UIView* _previousPagingView;
	UIView* _currentPagingView;
	UIView* _nextPagingView;
	BOOL _rotationInProgress;
	BOOL _scrollViewIsMoving;

}

@property (assign,nonatomic) OFUICircularPagingViewController * circularPagingViewController;              //@synthesize circularPagingViewController=_circularPagingViewController - In the implementation block
@property (assign,nonatomic) id<OFUICircularPagingViewDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<OFUICircularPagingViewDelegate>)delegate;
-(void)setDelegate:(id<OFUICircularPagingViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)reloadData;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)commonInit;
-(void)didRotate;
-(void)_updateLayout;
-(void)setCircularPagingViewController:(OFUICircularPagingViewController *)arg1 ;
-(void)willAnimateRotation;
-(CGRect)_frameForScrollView;
-(CGRect)_frameForPageAtIndex:(unsigned long long)arg1 ;
-(id)pagingViewAtIndex:(unsigned long long)arg1 ;
-(OFUICircularPagingViewController *)circularPagingViewController;
@end

