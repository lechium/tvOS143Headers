//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class TSKSettingItem, TVSettingsDiagnosticsController, UIAlertController, UIGestureRecognizer, UIViewController;
@protocol TSKSettingItemEditingController;

@interface TVSettingsAboutViewController : TSKViewController
{
    _Bool _showPartNumberAndFirmwareVersion;	// 8 = 0x8
    TSKSettingItem *_wifiSignalStrengthItem;	// 16 = 0x10
    unsigned long long _currentMoreInfoItemType;	// 24 = 0x18
    UIGestureRecognizer *_downButtonRecognizer;	// 32 = 0x20
    UIGestureRecognizer *_playPauseButtonRecognizer;	// 40 = 0x28
    UIAlertController *_diagnosticsTicketController;	// 48 = 0x30
    TVSettingsDiagnosticsController *_diagnostics;	// 56 = 0x38
    UIViewController<TSKSettingItemEditingController> *_nameViewController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100052e54
@property(nonatomic) __weak UIViewController<TSKSettingItemEditingController> *nameViewController; // @synthesize nameViewController=_nameViewController;
@property(retain, nonatomic) TVSettingsDiagnosticsController *diagnostics; // @synthesize diagnostics=_diagnostics;
@property(retain, nonatomic) UIAlertController *diagnosticsTicketController; // @synthesize diagnosticsTicketController=_diagnosticsTicketController;
@property(retain, nonatomic) UIGestureRecognizer *playPauseButtonRecognizer; // @synthesize playPauseButtonRecognizer=_playPauseButtonRecognizer;
@property(retain, nonatomic) UIGestureRecognizer *downButtonRecognizer; // @synthesize downButtonRecognizer=_downButtonRecognizer;
@property(nonatomic) unsigned long long currentMoreInfoItemType; // @synthesize currentMoreInfoItemType=_currentMoreInfoItemType;
@property(retain, nonatomic) TSKSettingItem *wifiSignalStrengthItem; // @synthesize wifiSignalStrengthItem=_wifiSignalStrengthItem;
@property(nonatomic) _Bool showPartNumberAndFirmwareVersion; // @synthesize showPartNumberAndFirmwareVersion=_showPartNumberAndFirmwareVersion;
- (void)_presentSetAccessoryNameFailedViewControllerWithError:(id)arg1;	// IMP=0x0000000100052ba4
- (void)_setDeviceName:(id)arg1;	// IMP=0x00000001000526f4
- (id)_nameViewControllerForItem:(id)arg1;	// IMP=0x0000000100052544
- (void)_advanceMoreInfoItem;	// IMP=0x00000001000524a4
- (_Bool)_hasTiltID;	// IMP=0x0000000100052440
- (_Bool)_showWiFiSettings;	// IMP=0x00000001000523ec
- (void)_updateDiagnosticsItem:(id)arg1;	// IMP=0x000000010005225c
- (void)_handlePlayPauseGesture:(id)arg1;	// IMP=0x0000000100051b3c
- (void)_handleUpGesture:(id)arg1;	// IMP=0x0000000100051b08
- (void)_handleDownGesture:(id)arg1;	// IMP=0x0000000100051ac0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100051a08
- (void)networkUpdated:(id)arg1;	// IMP=0x00000001000519fc
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000001000517c0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000515d8
- (_Bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;	// IMP=0x0000000100051578
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x00000001000513a0
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x00000001000512c0
- (id)loadSettingGroups;	// IMP=0x000000010004f2f0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010004f280
- (void)viewDidLoad;	// IMP=0x000000010004f028
- (void)dealloc;	// IMP=0x000000010004ef3c
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010004edfc

@end
