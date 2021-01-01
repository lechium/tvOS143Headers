/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoardUI/BaseBoardUI-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSString;

@interface BSUIScrollView : UIScrollView <UIScrollViewDelegate> {

	BOOL _isScrolling;
	BOOL _preventDidEndScrolling;
	BOOL _didScroll;
	/*^block*/id _scrollCompletion;
	CGPoint _previousContentOffset;
	CGPoint _initialContentOffset;
	BOOL _scrolling;

}

@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling;                     //@synthesize scrolling=_scrolling - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BS3 currentScrollContext; 
@property (assign,nonatomic,__weak) id<BSUIScrollViewDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<BSUIScrollViewDelegate>)delegate;
-(void)setDelegate:(id<BSUIScrollViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isScrolling;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)_willBeginDraggingNotification:(id)arg1 ;
-(void)_didEndDraggingNotification:(id)arg1 ;
-(void)_didDidEndDeceleratingNotification:(id)arg1 ;
-(void)_didEndScrollAnimationNotification:(id)arg1 ;
-(void)_setContentOffset:(CGPoint)arg1 animation:(id)arg2 ;
-(void)_notifyDidScroll;
-(SCD_Struct_BS3)currentScrollContext;
-(void)_bs_didScrollWithContext:(SCD_Struct_BS3)arg1 ;
-(void)_bs_willBeginScrolling;
-(void)_bs_didEndScrolling;
-(BOOL)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)setContentOffset:(CGPoint)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

