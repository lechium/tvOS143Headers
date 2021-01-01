/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UINavigationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class _SiriUINavigationControllerDelegateAdapter, NSString;

@interface SiriUINavigationController : UINavigationController <UIGestureRecognizerDelegate> {

	_SiriUINavigationControllerDelegateAdapter* _delegateAdapter;

}

@property (setter=_setDelegateAdapter:,getter=_delegateAdapter,nonatomic,retain) _SiriUINavigationControllerDelegateAdapter * delegateAdapter;              //@synthesize delegateAdapter=_delegateAdapter - In the implementation block
@property (nonatomic,retain) id<SiriUINavigationTransitioning> transitionController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_sharedInit;
-(void)viewDidLayoutSubviews;
-(id)initWithRootViewController:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(id<SiriUINavigationTransitioning>)transitionController;
-(void)setTransitionController:(id<SiriUINavigationTransitioning>)arg1 ;
-(id)_delegateAdapter;
-(void)_handleGestureFromRecognizer:(id)arg1 ;
-(void)_setDelegateAdapter:(id)arg1 ;
@end

