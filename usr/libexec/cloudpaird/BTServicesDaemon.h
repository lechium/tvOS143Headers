//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class BTShareAudioSessionDaemon, CUBluetoothClient, CUUserNotificationSession, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener, SFDeviceDiscovery;
@protocol OS_dispatch_queue;

@interface BTServicesDaemon : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    int _prefsChangedNotifyToken;	// 16 = 0x10
    _Bool _prefShareAudioTV;	// 20 = 0x14
    SFDeviceDiscovery *_shareAudioActionScanner;	// 24 = 0x18
    NSMutableDictionary *_shareAudioActionTriggeredDevices;	// 32 = 0x20
    NSMutableDictionary *_shareAudioConnectedDeviceMap;	// 40 = 0x28
    CUBluetoothClient *_shareAudioConnectedDeviceMonitor;	// 48 = 0x30
    CUUserNotificationSession *_shareAudioActionUINoteSession;	// 56 = 0x38
    BTShareAudioSessionDaemon *_shareAudioSession;	// 64 = 0x40
    unsigned long long _stateHandle;	// 72 = 0x48
    _Bool _updatePending;	// 80 = 0x50
    NSMutableSet *_xpcConnections;	// 88 = 0x58
    NSXPCListener *_xpcListener;	// 96 = 0x60
}

+ (id)sharedBTServicesDaemon;	// IMP=0x00000001000415e0
- (void).cxx_destruct;	// IMP=0x0000000100044200
- (void)_shareAudioSessionProgressEvent:(int)arg1 info:(id)arg2;	// IMP=0x0000000100043f6c
- (void)_shareAudioSessionEnded:(id)arg1;	// IMP=0x0000000100043ec8
- (void)_shareAudioSessionStartWithDarwinDevice:(id)arg1 wxDevice:(id)arg2;	// IMP=0x0000000100043cb4
- (void)_shareAudioShowConnectBanner:(id)arg1;	// IMP=0x0000000100043704
- (void)_shareAudioConnectedDeviceLost:(id)arg1;	// IMP=0x00000001000435f0
- (void)_shareAudioConnectedDeviceFound:(id)arg1;	// IMP=0x00000001000434cc
- (void)_shareAudioConnectedMonitorEnsureStopped;	// IMP=0x0000000100043434
- (void)_shareAudioConnectedMonitorEnsureStarted;	// IMP=0x0000000100043274
- (void)_shareAudioActionScannerDeviceLost:(id)arg1;	// IMP=0x0000000100043068
- (void)_shareAudioActionScannerDeviceFound:(id)arg1;	// IMP=0x0000000100042c8c
- (void)_shareAudioActionScannerEnsureStopped;	// IMP=0x0000000100042bf4
- (void)_shareAudioActionScannerEnsureStarted;	// IMP=0x00000001000428a4
- (void)_xpcConnectionInvalidated:(id)arg1;	// IMP=0x00000001000427c0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010004246c
- (void)_update;	// IMP=0x0000000100042404
- (void)_scheduleUpdate;	// IMP=0x000000010004238c
- (void)_prefsChanged;	// IMP=0x0000000100042294
- (void)invalidate;	// IMP=0x0000000100042158
- (void)_activate;	// IMP=0x0000000100041f4c
- (void)activate;	// IMP=0x0000000100041e7c
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x00000001000416ec
- (id)init;	// IMP=0x000000010004164c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

