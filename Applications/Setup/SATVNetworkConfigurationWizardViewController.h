//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SATVTableViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, TVSEthernetInterface;
@protocol SATVNetworkConfigurationWizardDelegate;

@interface SATVNetworkConfigurationWizardViewController : SATVTableViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <SATVNetworkConfigurationWizardDelegate> _wizardDelegate;	// 8 = 0x8
    TVSEthernetInterface *_interface;	// 16 = 0x10
    unsigned long long _mode;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100041990
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) TVSEthernetInterface *interface; // @synthesize interface=_interface;
@property(nonatomic) __weak id <SATVNetworkConfigurationWizardDelegate> wizardDelegate; // @synthesize wizardDelegate=_wizardDelegate;
- (void)_beginWizardFlowForOption:(long long)arg1;	// IMP=0x00000001000416dc
- (void)_beginWizardFlowFromCurrentMode;	// IMP=0x0000000100041654
- (void)_wizardCanceled;	// IMP=0x000000010004160c
- (void)_wizardComplete;	// IMP=0x00000001000415c4
- (void)_didSelectMenu;	// IMP=0x00000001000415b8
- (void)_updateHeaderForMode;	// IMP=0x0000000100041328
- (void)_disableDNS;	// IMP=0x00000001000412e4
- (void)_disableDHCP;	// IMP=0x000000010004128c
- (void)_enableDHCP;	// IMP=0x0000000100041118
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100041090
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100041084
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010004107c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100041074
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100040e78
- (void)loadView;	// IMP=0x0000000100040c6c
- (id)initWithInitialMode:(unsigned long long)arg1 networkInterface:(id)arg2;	// IMP=0x0000000100040bdc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

