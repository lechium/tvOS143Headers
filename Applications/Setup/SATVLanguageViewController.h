//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSIndexPath, NSString, SATVInternationalUtility, SATVTableViewController;

@interface SATVLanguageViewController : TVSKViewController <UITableViewDelegate, UITableViewDataSource>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSIndexPath *_selectedIndexPath;	// 16 = 0x10
    NSIndexPath *_focusedIndexPath;	// 24 = 0x18
    SATVInternationalUtility *_internationalUtility;	// 32 = 0x20
    SATVTableViewController *_tableViewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010003e3b4
@property(retain, nonatomic) SATVTableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(retain, nonatomic) SATVInternationalUtility *internationalUtility; // @synthesize internationalUtility=_internationalUtility;
@property(retain, nonatomic) NSIndexPath *focusedIndexPath; // @synthesize focusedIndexPath=_focusedIndexPath;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_updateLabelValue;	// IMP=0x000000010003e174
- (void)_buildTable;	// IMP=0x000000010003dee8
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;	// IMP=0x000000010003de20
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010003dd38
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000010003dc88
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010003dac4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010003da50
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010003da48
- (void)_selectLanguage:(id)arg1;	// IMP=0x000000010003d770
- (id)preferredFocusEnvironments;	// IMP=0x000000010003d6e8
- (void)viewDidLayoutSubviews;	// IMP=0x000000010003d4fc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010003d494
- (void)viewDidLoad;	// IMP=0x000000010003d294
- (void)autoAdvance;	// IMP=0x000000010003d200
- (id)init;	// IMP=0x000000010003d184

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

