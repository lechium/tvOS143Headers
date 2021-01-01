//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "TVAppRootViewController-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"
#import "_TVAppDocumentControllerDelegate-Protocol.h"
#import "_TVAppDocumentRequestControllerDelegate-Protocol.h"

@class IKAppTabBar, NSArray, NSString, UINavigationController, UIViewController;
@protocol IKAppNavigationController, _TVAppNavigationControllerDelegate;

@interface ATATabBarController : UITabBarController <UITabBarControllerDelegate, _TVAppDocumentControllerDelegate, _TVAppDocumentRequestControllerDelegate, TVAppRootViewController>
{
    _Bool _hasSetTabBarIndex;	// 8 = 0x8
    NSArray *_tabBarItems;	// 16 = 0x10
    unsigned long long _previousSelectedIndex;	// 24 = 0x18
    id <_TVAppNavigationControllerDelegate> _appNavigationControllerDelegate;	// 32 = 0x20
}

+ (id)_tabBarImageForTabIdentifier:(id)arg1;	// IMP=0x000000010000d504
+ (id)_tabBarImageForResource:(id)arg1;	// IMP=0x000000010000d340
+ (void)_setAppNavigationControllerDelegate:(id)arg1 onViewControllers:(id)arg2;	// IMP=0x000000010000cc6c
- (void).cxx_destruct;	// IMP=0x000000010000d640
@property(nonatomic) _Bool hasSetTabBarIndex; // @synthesize hasSetTabBarIndex=_hasSetTabBarIndex;
@property(retain, nonatomic) id <_TVAppNavigationControllerDelegate> appNavigationControllerDelegate; // @synthesize appNavigationControllerDelegate=_appNavigationControllerDelegate;
@property(nonatomic) unsigned long long previousSelectedIndex; // @synthesize previousSelectedIndex=_previousSelectedIndex;
@property(retain, nonatomic) NSArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;
- (void)appDocumentController:(id)arg1 didHideUI:(_Bool)arg2;	// IMP=0x000000010000d570
- (void)appDocumentController:(id)arg1 didHostTemplateViewController:(id)arg2 usedTransitions:(_Bool)arg3;	// IMP=0x000000010000d50c
- (id)_tabBarChildViewControllerWithIdentifier:(id)arg1 documentRef:(id)arg2 supportsInAppBanner:(_Bool)arg3 viewModelUI:(_Bool)arg4 title:(id)arg5 isSelectedTab:(_Bool)arg6 appContext:(id)arg7 iconResource:(id)arg8 contextData:(id)arg9;	// IMP=0x000000010000ce58
- (void)_updateTabBarChildViewController:(id)arg1 withTitle:(id)arg2;	// IMP=0x000000010000cdc4
- (void)_handleSelectedViewControllerDidChange:(id)arg1;	// IMP=0x000000010000ca74
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;	// IMP=0x000000010000c86c
- (void)_setSelectedViewController:(id)arg1;	// IMP=0x000000010000c5c4
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010000c4c4
@property(readonly, nonatomic) IKAppTabBar *appTabBar;
@property(readonly, nonatomic) id <IKAppNavigationController> appNavigationController;
@property(readonly, nonatomic) UIViewController *currentViewController;
@property(readonly, nonatomic) UINavigationController *currentNavigationController;
- (void)setAppNavigationControllersDelegate:(id)arg1;	// IMP=0x000000010000c224
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000c0e0
- (void)viewDidLoad;	// IMP=0x000000010000c06c
- (void)setSelectedIndexForTabBarItemIdentifier:(id)arg1;	// IMP=0x000000010000be4c
- (void)updateWithTabBarItems:(id)arg1 setSelectedIndexFromDefaults:(_Bool)arg2 appContext:(id)arg3;	// IMP=0x000000010000b268
- (void)dealloc;	// IMP=0x000000010000b218
- (id)init;	// IMP=0x000000010000b178

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
