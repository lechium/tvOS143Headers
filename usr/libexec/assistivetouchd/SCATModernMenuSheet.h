//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCATModernMenuItemDelegate-Protocol.h"

@class NSArray, NSString, SCATMenu, SCATModernMenuSheetCollectionViewController, SCATModernMenuViewController, SCATStaticElementProvider, UICollectionView, UICollectionViewLayout, UIViewController;

@interface SCATModernMenuSheet : NSObject <SCATModernMenuItemDelegate>
{
    NSArray *_menuItems;	// 8 = 0x8
    _Bool _shouldIncludeBackItem;	// 16 = 0x10
    SCATStaticElementProvider *_elementProvider;	// 24 = 0x18
    UIViewController *_viewController;	// 32 = 0x20
    UICollectionViewLayout *_collectionViewLayout;	// 40 = 0x28
    SCATMenu *_menu;	// 48 = 0x30
    UICollectionView *_collectionView;	// 56 = 0x38
}

+ (_Bool)isValidForElement:(id)arg1;	// IMP=0x00000001000a79bc
- (void).cxx_destruct;	// IMP=0x00000001000a9d08
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool shouldIncludeBackItem; // @synthesize shouldIncludeBackItem=_shouldIncludeBackItem;
@property(retain, nonatomic) SCATMenu *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) UICollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (id)_capitalizedMenuTitle:(id)arg1;	// IMP=0x00000001000a9b04
- (_Bool)shouldUpdateMenuItem:(id)arg1;	// IMP=0x00000001000a9afc
- (void)menuItemWasActivated:(id)arg1;	// IMP=0x00000001000a98d4
- (id)_scannerGroupsForMenuItems:(id)arg1;	// IMP=0x00000001000a9304
- (id)_filteredMenuItemsForGuidedAccessIfNeeded:(id)arg1;	// IMP=0x00000001000a91f0
- (id)_fallbackImageForCustomActionMenuItem:(id)arg1 charactersInUse:(id)arg2;	// IMP=0x00000001000a8f6c
- (id)menuItemsForCustomActions:(id)arg1 activateBehavior:(unsigned long long)arg2;	// IMP=0x00000001000a89cc
- (void)reload;	// IMP=0x00000001000a8940
- (_Bool)isBackItemIdentifier:(id)arg1;	// IMP=0x00000001000a8928
- (unsigned long long)currentPage;	// IMP=0x00000001000a87dc
- (unsigned long long)numberOfItemsInFirstPage;	// IMP=0x00000001000a87d4
- (unsigned long long)numberOfPagesRequired;	// IMP=0x00000001000a86e4
- (void)invalidateMenuItems;	// IMP=0x00000001000a86d4
- (id)itemWithIdentifier:(id)arg1;	// IMP=0x00000001000a8540
@property(readonly, nonatomic) SCATModernMenuSheetCollectionViewController *scatCollectionViewController;
@property(readonly, retain, nonatomic) SCATStaticElementProvider *elementProvider; // @synthesize elementProvider=_elementProvider;
@property(readonly, nonatomic) SCATModernMenuViewController *menuViewController;
@property(retain, nonatomic) NSArray *menuItems;
- (Class)_menuItemClass;	// IMP=0x00000001000a7c34
@property(readonly, copy) NSString *description;
- (void)_setupMenuSheet;	// IMP=0x00000001000a7a94
- (id)initWithMenu:(id)arg1;	// IMP=0x00000001000a7a10
- (id)init;	// IMP=0x00000001000a79c4
- (id)menuItemStruts;	// IMP=0x00000001000aa524
- (id)alternateTipElement;	// IMP=0x00000001000aa51c
- (long long)preferredTipObject;	// IMP=0x00000001000aa514
- (_Bool)shouldIncludeTextLabels;	// IMP=0x00000001000aa4c0
- (id)backTitle;	// IMP=0x00000001000aa480
- (_Bool)shouldUseBackItemAsDoneItem;	// IMP=0x00000001000aa478
- (_Bool)delegatesScannerControl;	// IMP=0x00000001000aa470
- (unsigned long long)presentationMode;	// IMP=0x00000001000aa468
- (_Bool)shouldAllowDwellSelection;	// IMP=0x00000001000aa460
- (_Bool)shouldKeepScannerAwake;	// IMP=0x00000001000aa458
- (id)makeMenuItemsIfNeeded;	// IMP=0x00000001000aa450
- (struct CGRect)rectToClear;	// IMP=0x00000001000aa43c
- (_Bool)allowsExitAction;	// IMP=0x00000001000aa434
- (_Bool)allowsBackAction;	// IMP=0x00000001000aa42c
- (void)viewControllerViewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000aa428
- (void)viewControllerViewWillAppear:(_Bool)arg1;	// IMP=0x00000001000aa424
- (void)didChangeOrientation;	// IMP=0x00000001000aa420
- (void)willUnfocusFromContext:(id)arg1;	// IMP=0x00000001000aa41c
- (void)didFocusOnContext:(id)arg1 oldContext:(id)arg2;	// IMP=0x00000001000a9d6c
- (void)willFocusOnContext:(id)arg1;	// IMP=0x00000001000a9d68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

