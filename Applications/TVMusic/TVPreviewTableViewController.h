//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "TVTableViewDelegate-Protocol.h"

@class NSIndexPath, NSString, TVFocusRedirectView, TVTableView, UIView, UIViewController, UIVisualEffectView;

@interface TVPreviewTableViewController : UITableViewController <TVTableViewDelegate>
{
    UIView *_lastFocusedDescendentView;	// 8 = 0x8
    UIVisualEffectView *_backdropView;	// 16 = 0x10
    UIView *_tableContainingView;	// 24 = 0x18
    TVFocusRedirectView *_previewContainerView;	// 32 = 0x20
    NSIndexPath *_lastAutoUpdatePreviewIndexPath;	// 40 = 0x28
    double _lastAutoUpdatePreviewDelay;	// 48 = 0x30
    NSIndexPath *_pendingAutoUpdatePreviewIndexPath;	// 56 = 0x38
    _Bool _previewOnRightSide;	// 64 = 0x40
    _Bool _useSmallBackdropStyle;	// 65 = 0x41
    _Bool _fadeThroughPreviews;	// 66 = 0x42
    UIViewController *_previewViewController;	// 72 = 0x48
    double _tableViewWidth;	// 80 = 0x50
    unsigned long long _backdropViewMode;	// 88 = 0x58
    UIView *_bannerView;	// 96 = 0x60
    UIView *_headerView;	// 104 = 0x68
    UIView *_previewView;	// 112 = 0x70
    CDUnknownBlockType _autoUpdatePreviewViewControllerBlock;	// 120 = 0x78
    struct UIEdgeInsets _tableViewPadding;	// 128 = 0x80
    struct UIEdgeInsets _previewViewPadding;	// 160 = 0xa0
    struct UIEdgeInsets _smallBackdropInsets;	// 192 = 0xc0
}

+ (double)defaultSectionHeaderHeight;	// IMP=0x0000000100081e54
+ (double)defaultRowHeight;	// IMP=0x0000000100081e48
- (void).cxx_destruct;	// IMP=0x0000000100081fc0
@property(copy, nonatomic) CDUnknownBlockType autoUpdatePreviewViewControllerBlock; // @synthesize autoUpdatePreviewViewControllerBlock=_autoUpdatePreviewViewControllerBlock;
@property(nonatomic) _Bool fadeThroughPreviews; // @synthesize fadeThroughPreviews=_fadeThroughPreviews;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) struct UIEdgeInsets smallBackdropInsets; // @synthesize smallBackdropInsets=_smallBackdropInsets;
@property(nonatomic) _Bool useSmallBackdropStyle; // @synthesize useSmallBackdropStyle=_useSmallBackdropStyle;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) unsigned long long backdropViewMode; // @synthesize backdropViewMode=_backdropViewMode;
@property(nonatomic) _Bool previewOnRightSide; // @synthesize previewOnRightSide=_previewOnRightSide;
@property(nonatomic) struct UIEdgeInsets previewViewPadding; // @synthesize previewViewPadding=_previewViewPadding;
@property(nonatomic) struct UIEdgeInsets tableViewPadding; // @synthesize tableViewPadding=_tableViewPadding;
@property(nonatomic) double tableViewWidth; // @synthesize tableViewWidth=_tableViewWidth;
@property(retain, nonatomic) UIViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
- (void)_setPreviewPaused:(_Bool)arg1;	// IMP=0x0000000100081dcc
- (struct CGRect)_frameForPreview;	// IMP=0x0000000100081bb0
- (struct CGRect)_frameForTable;	// IMP=0x0000000100081a44
- (struct CGRect)_frameForHeaderView;	// IMP=0x00000001000819bc
- (void)_updateBackdropViewBeforeSettingPreviewViewIfNessecary;	// IMP=0x0000000100081938
- (void)_updateBackdropViewAfterSettingPreviewViewIfNessecary;	// IMP=0x00000001000818d0
- (_Bool)_isBackdropViewVisible;	// IMP=0x00000001000818a0
- (void)_unregisterForBackdropViewHideStateUpdates;	// IMP=0x0000000100081884
- (void)_registerForBackdropViewHideStateUpdates;	// IMP=0x0000000100081790
- (void)_delayedAutoUpdatePreviewViewController;	// IMP=0x0000000100081664
- (void)_cancelAutoUpdatingPreviewViewController;	// IMP=0x0000000100081658
- (void)_resetAutoUpdatePreviewViewControllerState;	// IMP=0x0000000100081608
- (_Bool)_isAutoUpdatingPreviewViewController;	// IMP=0x00000001000815cc
- (void)_removeBackdropView;	// IMP=0x0000000100081590
- (void)_addBackdropView;	// IMP=0x0000000100081444
- (_Bool)_layoutIsRTL;	// IMP=0x00000001000813f4
- (void)setBackdropViewHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000812e8
- (struct CGRect)adjustedFrameForPreviewFrame:(struct CGRect)arg1;	// IMP=0x0000000100080fd8
- (void)_setPreviewView:(id)arg1 forced:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100080c60
- (void)setPreviewViewController:(id)arg1 forced:(_Bool)arg2;	// IMP=0x0000000100080928
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000010008079c
- (void)_applicationDidFinishSuspension:(id)arg1;	// IMP=0x000000010008066c
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x000000010008065c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100080588
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100080054
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010007fef8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010007fd84
@property(retain, nonatomic) TVTableView *tableView; // @dynamic tableView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010007fc24
- (id)preferredFocusEnvironments;	// IMP=0x000000010007fb18
- (void)loadView;	// IMP=0x000000010007f884
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010007f7dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
