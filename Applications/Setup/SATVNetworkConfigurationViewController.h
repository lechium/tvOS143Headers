//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SATVTableViewController.h"

#import "SATVIPEntryViewControllerDelegate-Protocol.h"
#import "SATVNetworkConfigurationWizardDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, TVSEthernetInterface, UIButton;
@protocol SATVNetworkConfigurationDelegate;

@interface SATVNetworkConfigurationViewController : SATVTableViewController <UITableViewDataSource, UITableViewDelegate, SATVNetworkConfigurationWizardDelegate, SATVIPEntryViewControllerDelegate>
{
    id <SATVNetworkConfigurationDelegate> _configurationDelegate;	// 8 = 0x8
    TVSEthernetInterface *_activeInterface;	// 16 = 0x10
    UIButton *_doneButton;	// 24 = 0x18
    CDUnknownBlockType _ipEntryCompletionBlock;	// 32 = 0x20
    long long _currentlyEditedConfigurationOption;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100014864
@property(nonatomic) long long currentlyEditedConfigurationOption; // @synthesize currentlyEditedConfigurationOption=_currentlyEditedConfigurationOption;
@property(copy, nonatomic) CDUnknownBlockType ipEntryCompletionBlock; // @synthesize ipEntryCompletionBlock=_ipEntryCompletionBlock;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) TVSEthernetInterface *activeInterface; // @synthesize activeInterface=_activeInterface;
@property(nonatomic) __weak id <SATVNetworkConfigurationDelegate> configurationDelegate; // @synthesize configurationDelegate=_configurationDelegate;
- (void)_doneButtonSelected:(id)arg1;	// IMP=0x000000010001476c
- (void)_handleInactiveInterfaceIfNeeded;	// IMP=0x00000001000146d8
- (long long)_cellAccessoryTypeForConfigurationOption:(long long)arg1;	// IMP=0x00000001000146cc
- (_Bool)_isCellEnabledForConfigurationOption:(long long)arg1;	// IMP=0x00000001000145fc
- (id)_titleForActiveInterface;	// IMP=0x0000000100014504
- (id)_ipValueForConfigurationOption:(long long)arg1;	// IMP=0x0000000100014418
- (void)_setIPValue:(id)arg1 forNetworkConfigurationOption:(long long)arg2;	// IMP=0x0000000100014288
- (id)_detailTextForConfigurationOption:(long long)arg1;	// IMP=0x0000000100013ffc
- (id)_titleForConfigurationOption:(long long)arg1;	// IMP=0x0000000100013ccc
- (id)_keyPathForConfigurationOption:(long long)arg1;	// IMP=0x0000000100013c5c
- (void)_teardownObserversForInterface:(id)arg1;	// IMP=0x0000000100013ba0
- (void)_setupObserversForInterface:(id)arg1;	// IMP=0x0000000100013adc
- (void)_updateTableCellForKeyPath:(id)arg1;	// IMP=0x0000000100013960
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000138f4
- (void)ipEntryViewControllerDidFinish:(id)arg1;	// IMP=0x00000001000137f8
- (void)didCancelNetworkConfigurationWizard:(id)arg1;	// IMP=0x0000000100013774
- (void)interfaceDidBecomeInactiveForConfigurationWizard:(id)arg1;	// IMP=0x0000000100013768
- (void)didCompleteNetworkConfigurationWizard:(id)arg1;	// IMP=0x00000001000135d4
- (void)didRequestEntryForOption:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001337c
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100013370
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000130a0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100013098
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100013090
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100012e88
- (void)_didSelectMenu;	// IMP=0x0000000100012e48
- (id)preferredFocusEnvironments;	// IMP=0x0000000100012d9c
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100012ba0
- (void)loadView;	// IMP=0x00000001000126d4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100012654
- (void)dealloc;	// IMP=0x00000001000125e0
- (id)init;	// IMP=0x00000001000124c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
