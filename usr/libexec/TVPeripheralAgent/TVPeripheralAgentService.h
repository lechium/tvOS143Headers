//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSBulletinServiceDelegate-Protocol.h"
#import "TVPABluetoothRemotePairingDelegate-Protocol.h"
#import "TVSBluetoothManagerDelegate-Protocol.h"

@class NSMutableSet, NSString, PBSBulletin, TVPABluetoothRemotePairingAgent, TVPADeviceEnforcementAgent;
@protocol PBSBulletinServiceInterface;

@interface TVPeripheralAgentService : NSObject <PBSBulletinServiceDelegate, TVPABluetoothRemotePairingDelegate, TVSBluetoothManagerDelegate>
{
    int _proximityNotifyToken;	// 8 = 0x8
    _Bool _proximityNotifyTokenIsValid;	// 12 = 0xc
    int _mfiAuthNotifyToken;	// 16 = 0x10
    _Bool _mfiAuthNotifyTokenIsValid;	// 20 = 0x14
    struct __IOHIDManager *_externalDeviceHIDManager;	// 24 = 0x18
    struct IONotificationPort *ioPort;	// 32 = 0x20
    NSMutableSet *ioNotifiers;	// 40 = 0x28
    unsigned int ioIterator;	// 48 = 0x30
    struct __CFDictionary *gcPowerSourceRegistryIDs;	// 56 = 0x38
    int _accessoryAttachToken;	// 64 = 0x40
    int _accessoryTimeRemainingToken;	// 68 = 0x44
    double startTime;	// 72 = 0x48
    id <PBSBulletinServiceInterface> _bulletinService;	// 80 = 0x50
    PBSBulletin *_bulletin;	// 88 = 0x58
    TVPABluetoothRemotePairingAgent *_bluetoothRemotePairingAgent;	// 96 = 0x60
    TVPADeviceEnforcementAgent *_deviceEnforcementAgent;	// 104 = 0x68
}

+ (id)sharedInstance;	// IMP=0x000000010000ab64
- (void).cxx_destruct;	// IMP=0x000000010000e194
@property(retain, nonatomic) TVPADeviceEnforcementAgent *deviceEnforcementAgent; // @synthesize deviceEnforcementAgent=_deviceEnforcementAgent;
@property(retain, nonatomic) TVPABluetoothRemotePairingAgent *bluetoothRemotePairingAgent; // @synthesize bluetoothRemotePairingAgent=_bluetoothRemotePairingAgent;
@property(retain) PBSBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property(retain, nonatomic) id <PBSBulletinServiceInterface> bulletinService; // @synthesize bulletinService=_bulletinService;
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x000000010000e0e0
- (void)presentPeripheralHUD:(long long)arg1 remoteTypeOverride:(long long)arg2;	// IMP=0x000000010000dbfc
- (void)presentPeripheralHUD:(long long)arg1;	// IMP=0x000000010000dbec
- (void)_setupNotificationForExternalDeviceConnectionAndBatteryLevel;	// IMP=0x000000010000d804
- (void)_enforcementAgentWillDisconnectDeviceNotification:(id)arg1;	// IMP=0x000000010000d7e4
- (void)_bluetoothRemotePowerSourceLimitedSourceNotification:(id)arg1;	// IMP=0x000000010000d74c
- (void)_checkBatteryLevelForRemote:(id)arg1;	// IMP=0x000000010000d32c
- (void)_bluetoothRemoteDidDetectUserPresenceNotification:(id)arg1;	// IMP=0x000000010000d2a8
- (void)_bluetoothRemoteDidDisconnectNotification:(id)arg1;	// IMP=0x000000010000cca4
- (void)_bluetoothRemoteDidConnectNotification:(id)arg1;	// IMP=0x000000010000c610
- (void)_dismissPairingAgent;	// IMP=0x000000010000c530
- (void)pairingAgentDidTimeout:(id)arg1;	// IMP=0x000000010000c524
- (void)pairingAgentDidPairRemote:(id)arg1;	// IMP=0x000000010000c518
- (void)bluetoothManager:(id)arg1 didCompleteDeviceDisconnection:(id)arg2 error:(id)arg3;	// IMP=0x000000010000c400
- (void)bluetoothManager:(id)arg1 didCompleteDeviceConnection:(id)arg2 error:(id)arg3;	// IMP=0x000000010000c318
- (void)start;	// IMP=0x000000010000be34
- (void)dealloc;	// IMP=0x000000010000bd10
- (_Bool)batteryNotificationDeviceValid:(struct __CFNumber *)arg1;	// IMP=0x000000010000bb44
- (void)updateBatteryState;	// IMP=0x000000010000b6fc
- (void)refreshGameControllerPowerSources;	// IMP=0x000000010000b434

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
