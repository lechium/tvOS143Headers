//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSBluetoothManagerScanObserver-Protocol.h"

@class CUBluetoothClient, NSArray, NSMutableDictionary, NSString;

@interface TVSettingsBluetoothFacade : NSObject <TVSBluetoothManagerScanObserver>
{
    NSArray *_sortDescriptors;	// 8 = 0x8
    int _derpDidStartNotificationToken;	// 16 = 0x10
    _Bool _derpDidStartNotificationTokenIsValid;	// 20 = 0x14
    int _derpDidStopNotificationToken;	// 24 = 0x18
    _Bool _derpDidStopNotificationTokenIsValid;	// 28 = 0x1c
    _Bool _isCapsLockEnabled;	// 29 = 0x1d
    NSArray *_remotes;	// 32 = 0x20
    NSArray *_myDevices;	// 40 = 0x28
    NSArray *_otherDevices;	// 48 = 0x30
    NSArray *_connectedDevices;	// 56 = 0x38
    CUBluetoothClient *_discoveryClient;	// 64 = 0x40
    NSMutableDictionary *_pairedCUDevices;	// 72 = 0x48
}

+ (_Bool)isBTKeyboardConnected;	// IMP=0x00000001000090c8
+ (long long)numberOfConnectedDevices;	// IMP=0x000000010000904c
+ (long long)numberOfConnectedRemotes;	// IMP=0x0000000100008ec8
+ (void)unpairDevice:(id)arg1;	// IMP=0x0000000100008d08
+ (void)disconnectDevice:(id)arg1;	// IMP=0x0000000100008c98
+ (void)connectDevice:(id)arg1;	// IMP=0x0000000100008c28
+ (id)deviceStatusFormatterForDeviceType:(long long)arg1 showConnectedState:(_Bool)arg2;	// IMP=0x00000001000073c4
- (void).cxx_destruct;	// IMP=0x000000010000939c
@property(retain, nonatomic) NSMutableDictionary *pairedCUDevices; // @synthesize pairedCUDevices=_pairedCUDevices;
@property(retain, nonatomic) CUBluetoothClient *discoveryClient; // @synthesize discoveryClient=_discoveryClient;
@property(nonatomic) _Bool isCapsLockEnabled; // @synthesize isCapsLockEnabled=_isCapsLockEnabled;
@property(copy, nonatomic) NSArray *connectedDevices; // @synthesize connectedDevices=_connectedDevices;
@property(copy, nonatomic) NSArray *otherDevices; // @synthesize otherDevices=_otherDevices;
@property(copy, nonatomic) NSArray *myDevices; // @synthesize myDevices=_myDevices;
@property(copy, nonatomic) NSArray *remotes; // @synthesize remotes=_remotes;
- (id)_deviceSortDescriptors;	// IMP=0x000000010000924c
@property(nonatomic) _Bool filterDeviceScan;
- (void)stopScanning;	// IMP=0x0000000100008bd8
- (void)startScanning;	// IMP=0x0000000100008b88
- (void)_managerDidUpdate:(id)arg1;	// IMP=0x0000000100008954
- (void)_updateConnectedDevicesWithSet:(id)arg1;	// IMP=0x000000010000887c
- (void)_updateOtherDevicesWithSet:(id)arg1;	// IMP=0x00000001000087a4
- (void)_updateMyDevicesWithSet:(id)arg1;	// IMP=0x00000001000085ac
- (void)_updateRemotesWithSet:(id)arg1;	// IMP=0x00000001000083b4
- (void)_willEnterForeground:(id)arg1;	// IMP=0x00000001000083a8
- (void)_didEnterBackground:(id)arg1;	// IMP=0x000000010000839c
- (void)dealloc;	// IMP=0x00000001000082e4
- (id)init;	// IMP=0x0000000100007bfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

