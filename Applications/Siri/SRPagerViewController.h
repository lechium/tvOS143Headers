//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SRPagerViewDataSource-Protocol.h"
#import "SRPagerViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, SRPagerView;
@protocol SRPagerViewControllerDelegate;

@interface SRPagerViewController : UIViewController <SRPagerViewDataSource, SRPagerViewDelegate>
{
    NSMutableArray *_viewControllers;	// 8 = 0x8
    _Bool _textInputEnabled;	// 16 = 0x10
    UIViewController *_activePageViewController;	// 24 = 0x18
    id <SRPagerViewControllerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000877cc
@property(nonatomic) __weak id <SRPagerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController *activePageViewController; // @synthesize activePageViewController=_activePageViewController;
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000100087784
- (id)_viewControllerForPageView:(id)arg1;	// IMP=0x00000001000875d8
- (void)pagerViewDidChangeTransitionState:(id)arg1;	// IMP=0x0000000100087590
- (void)pagerView:(id)arg1 didActivatePageView:(id)arg2 oldActivePageView:(id)arg3;	// IMP=0x0000000100087520
- (id)pagerView:(id)arg1 pageViewAtIndex:(long long)arg2;	// IMP=0x00000001000874bc
- (long long)numberOfPageViewsInPagerView:(id)arg1;	// IMP=0x00000001000874a4
@property(readonly, nonatomic) unsigned long long transitionState;
@property(nonatomic, getter=isPagingEnabled) _Bool pagingEnabled;
- (_Bool)containsPageViewController:(id)arg1;	// IMP=0x00000001000873a0
- (void)setActivePageViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100087284
- (void)removePageViewController:(id)arg1;	// IMP=0x00000001000871a4
- (void)addPageViewController:(id)arg1;	// IMP=0x0000000100087138
- (void)insertPageViewController:(id)arg1 atIndex:(long long)arg2;	// IMP=0x000000010008704c
@property(readonly, nonatomic) NSArray *pageViewControllers;
- (void)viewDidLoad;	// IMP=0x0000000100086f74
- (void)loadView;	// IMP=0x0000000100086f08
- (id)initWithTextInputEnabled:(_Bool)arg1;	// IMP=0x0000000100086e7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SRPagerView *view; // @dynamic view;

@end
