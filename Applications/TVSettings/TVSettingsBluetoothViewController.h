//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

#import "TVSBluetoothManagerDelegate-Protocol.h"
#import "TVSUIDigitEntryViewControllerDelegate-Protocol.h"

@class NSString, TVSettingsBluetoothFacade, UIAlertController;

@interface TVSettingsBluetoothViewController : TSKViewController <TVSBluetoothManagerDelegate, TVSUIDigitEntryViewControllerDelegate>
{
    TVSettingsBluetoothFacade *_bluetoothFacade;	// 8 = 0x8
    _Bool _startedScanning;	// 16 = 0x10
    UIAlertController *_errorAlert;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000d8fa4
@property(retain, nonatomic) UIAlertController *errorAlert; // @synthesize errorAlert=_errorAlert;
- (id)_devicePairingAction:(id)arg1;	// IMP=0x00000001000d8e30
- (void)_postAlertWithErrorCode:(long long)arg1 forDevice:(id)arg2;	// IMP=0x00000001000d851c
- (void)_connectDevice:(id)arg1;	// IMP=0x00000001000d83cc
- (void)deviceInfoDidUpdate:(id)arg1;	// IMP=0x00000001000d83c0
- (void)bluetoothManager:(id)arg1 didCompleteDeviceDisconnection:(id)arg2 error:(id)arg3;	// IMP=0x00000001000d82c4
- (void)bluetoothManager:(id)arg1 didCompleteDeviceConnection:(id)arg2 error:(id)arg3;	// IMP=0x00000001000d81c8
- (void)bluetoothManager:(id)arg1 didRejectPairingPINForDevice:(id)arg2;	// IMP=0x00000001000d8158
- (void)bluetoothManager:(id)arg1 didAcceptPairingPINForDevice:(id)arg2;	// IMP=0x00000001000d8104
- (void)bluetoothManager:(id)arg1 requestPairingPIN:(id)arg2;	// IMP=0x00000001000d7e2c
- (void)bluetoothManager:(id)arg1 presentPairingPIN:(long long)arg2 forDevice:(id)arg3;	// IMP=0x00000001000d7ac8
- (void)digitEntryViewControllerDidFinish:(id)arg1;	// IMP=0x00000001000d79a4
- (void)digitEntryViewControllerDidCancel:(id)arg1;	// IMP=0x00000001000d7918
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000d7774
- (id)loadSettingGroups;	// IMP=0x00000001000d69e0
- (void)viewDidLoad;	// IMP=0x00000001000d6904
- (void)dealloc;	// IMP=0x00000001000d6864
- (id)initWithFacade:(id)arg1;	// IMP=0x00000001000d6750

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

