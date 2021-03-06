//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HBAppGridViewControllerDelegate-Protocol.h"
#import "HBUILaunchAnimationEnvironment-Protocol.h"
#import "HBUITopShelfContentViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class HBAppGridViewController, HBRootFolderController, HBRootItem, HBTopShelfManager, HBUITopShelfHostViewController, NSString, UIGestureRecognizer;
@protocol HBUITopShelfContentViewController;

@interface HBMainViewController : UIViewController <HBAppGridViewControllerDelegate, HBUITopShelfContentViewControllerDelegate, UIGestureRecognizerDelegate, HBUILaunchAnimationEnvironment>
{
    HBAppGridViewController *_gridViewController;	// 8 = 0x8
    HBRootFolderController *_rootFolderController;	// 16 = 0x10
    HBUITopShelfHostViewController *_topShelfViewController;	// 24 = 0x18
    HBTopShelfManager *_topShelfManager;	// 32 = 0x20
    HBRootItem *_currentTopShelfItem;	// 40 = 0x28
    CDUnknownBlockType _topShelfDelayCallback;	// 48 = 0x30
    CDUnknownBlockType _topShelfDecelerationCompleteCallback;	// 56 = 0x38
    UIViewController<HBUITopShelfContentViewController> *_currentTopShelfItemViewController;	// 64 = 0x40
    UIGestureRecognizer *_menuGestureRecognizer;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000a5720
@property(readonly, nonatomic) UIGestureRecognizer *menuGestureRecognizer; // @synthesize menuGestureRecognizer=_menuGestureRecognizer;
@property(retain, nonatomic) UIViewController<HBUITopShelfContentViewController> *currentTopShelfItemViewController; // @synthesize currentTopShelfItemViewController=_currentTopShelfItemViewController;
@property(copy, nonatomic) CDUnknownBlockType topShelfDecelerationCompleteCallback; // @synthesize topShelfDecelerationCompleteCallback=_topShelfDecelerationCompleteCallback;
@property(copy, nonatomic) CDUnknownBlockType topShelfDelayCallback; // @synthesize topShelfDelayCallback=_topShelfDelayCallback;
@property(retain, nonatomic) HBRootItem *currentTopShelfItem; // @synthesize currentTopShelfItem=_currentTopShelfItem;
@property(retain, nonatomic) HBTopShelfManager *topShelfManager; // @synthesize topShelfManager=_topShelfManager;
@property(readonly, nonatomic) HBUITopShelfHostViewController *topShelfViewController; // @synthesize topShelfViewController=_topShelfViewController;
@property(readonly, nonatomic, getter=_rootFolderController) HBRootFolderController *rootFolderController; // @synthesize rootFolderController=_rootFolderController;
@property(readonly, nonatomic) HBAppGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000a5560
- (id)nextLaunchAnimationEnvironments;	// IMP=0x00000001000a5454
- (void)topShelfContentViewController:(id)arg1 willScrollToFirstItem:(_Bool)arg2;	// IMP=0x00000001000a53b0
- (void)topShelfContentViewController:(id)arg1 contentStyleDidChange:(unsigned long long)arg2;	// IMP=0x00000001000a5360
- (void)_handleTopShelfDecelerationCallback;	// IMP=0x00000001000a52d0
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000001000a51e0
- (void)_purgeAssetCache;	// IMP=0x00000001000a5180
- (void)_handleTVTapEvent:(id)arg1;	// IMP=0x00000001000a50e0
- (void)_menuGesture:(id)arg1;	// IMP=0x00000001000a50a0
- (void)gridViewControllerItemsBecameReady:(id)arg1;	// IMP=0x00000001000a4d60
- (void)gridViewControllerDidScrollCloseEnoughToTop:(id)arg1;	// IMP=0x00000001000a4d20
- (void)gridViewControllerDidEndDecelerating:(id)arg1;	// IMP=0x00000001000a4d14
- (void)gridViewController:(id)arg1 itemMovedOutOfDock:(id)arg2 replacedWithItem:(id)arg3;	// IMP=0x00000001000a4c84
- (void)gridViewController:(id)arg1 itemMovedIntoDock:(id)arg2;	// IMP=0x00000001000a4c24
- (void)appGridViewController:(id)arg1 didUpdateFocusInContext:(CDStruct_334d6f95)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000001000a4b3c
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000001000a4948
- (void)_updateTopShelfWithItem:(id)arg1 inDirection:(long long)arg2;	// IMP=0x00000001000a448c
- (void)_delayedTopShelfChange;	// IMP=0x00000001000a43fc
- (id)preferredFocusEnvironments;	// IMP=0x00000001000a428c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000a4144
- (void)viewDidLoad;	// IMP=0x00000001000a3d74
- (void)loadView;	// IMP=0x00000001000a3ce0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000a3c04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

