//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDSharedRemoteTextInputDelegate-Protocol.h"

@class CUSystemMonitor, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSUUID, RPCompanionLinkClient, SDNotificationManager, SFDeviceDiscovery, SFService, WPNearby;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDRemoteInteractionAgent : NSObject <SDSharedRemoteTextInputDelegate>
{
    NSObject<OS_dispatch_source> *_aggressiveTimer;	// 8 = 0x8
    WPNearby *_bleWPNearby;	// 16 = 0x10
    _Bool _clientEnabled;	// 24 = 0x18
    RPCompanionLinkClient *_clinkClient;	// 32 = 0x20
    _Bool _cloudPairedOnly;	// 40 = 0x28
    SFService *_controlService;	// 48 = 0x30
    NSUUID *_currentSessionID;	// 56 = 0x38
    NSString *_currentText;	// 64 = 0x40
    SFDeviceDiscovery *_deviceDiscovery;	// 72 = 0x48
    NSMutableDictionary *_devices;	// 80 = 0x50
    _Bool _idsMonitorInstalled;	// 88 = 0x58
    NSMutableSet *_legacy_sessionDeviceIDs;	// 96 = 0x60
    SDNotificationManager *_notificationManager;	// 104 = 0x68
    long long _rssiThreshold;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_rtiTimer;	// 120 = 0x78
    _Bool _serverEnabled;	// 128 = 0x80
    NSSet *_sessionDeviceIDs;	// 136 = 0x88
    NSMutableSet *_sessions;	// 144 = 0x90
    CUSystemMonitor *_systemMonitor;	// 152 = 0x98
    _Bool _preventNotifications;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 168 = 0xa8
}

+ (id)sharedAgent;	// IMP=0x00000001000d07e0
- (void).cxx_destruct;	// IMP=0x00000001000d543c
@property(nonatomic) _Bool preventNotifications; // @synthesize preventNotifications=_preventNotifications;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)testKeyboardUpdateWithDelay;	// IMP=0x00000001000d5404
- (void)testKeyboardUpdate;	// IMP=0x00000001000d52f8
- (void)testKeyboardRemoveWithDelay;	// IMP=0x00000001000d52dc
- (void)testKeyboardRemove;	// IMP=0x00000001000d5200
- (void)testKeyboardPostWithDelay;	// IMP=0x00000001000d51e4
- (void)testKeyboardPostThenUpdate;	// IMP=0x00000001000d50ec
- (void)testKeyboardPost:(id)arg1;	// IMP=0x00000001000d4fc8
- (void)clientUserDidTapNotification:(id)arg1;	// IMP=0x00000001000d4f50
- (void)_clientUpdateCoalesceTimerForDevice:(id)arg1 identifier:(id)arg2;	// IMP=0x00000001000d4f4c
- (void)clientTextSessionDidBegin:(id)arg1 device:(id)arg2;	// IMP=0x00000001000d4efc
- (void)clientNotificationUpdateForDevice:(id)arg1 info:(id)arg2;	// IMP=0x00000001000d4d7c
- (void)clientNotificationUpdateForDevice:(id)arg1 rtiData:(id)arg2;	// IMP=0x00000001000d4bfc
- (void)clientNotificationRemoveForDevice:(id)arg1;	// IMP=0x00000001000d4aa4
- (void)clientNotificationPostIfNeededForDevice:(id)arg1;	// IMP=0x00000001000d48ec
- (_Bool)_clientShouldStart;	// IMP=0x00000001000d4760
- (void)_clientDeviceLockStatusChanged;	// IMP=0x00000001000d4658
- (void)_clientDeviceLost:(id)arg1;	// IMP=0x00000001000d4548
- (void)_clientDeviceFound:(id)arg1;	// IMP=0x00000001000d424c
- (void)_clientClinkDeviceChanged:(id)arg1;	// IMP=0x00000001000d41c8
- (void)_clientClinkDeviceLost:(id)arg1;	// IMP=0x00000001000d4144
- (void)_clientClinkDeviceFound:(id)arg1;	// IMP=0x00000001000d40c0
- (void)_clientEnsureStopped;	// IMP=0x00000001000d3fc8
- (void)_clientEnsureStarted;	// IMP=0x00000001000d354c
- (void)sessionStop:(id)arg1;	// IMP=0x00000001000d34a4
- (int)sessionStart:(id)arg1;	// IMP=0x00000001000d3138
- (void)advertisingTimerStart;	// IMP=0x00000001000d3000
- (void)advertisingTimerFired;	// IMP=0x00000001000d2f54
- (void)handleInputDidEndWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2;	// IMP=0x00000001000d2e38
- (void)handleInputDidBeginWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2;	// IMP=0x00000001000d2c44
- (void)handleEventWithData:(id)arg1;	// IMP=0x00000001000d2b84
- (void)_sendRTIPayload:(id)arg1;	// IMP=0x00000001000d2844
- (void)_serverSendTextSessionDidEnd:(id)arg1;	// IMP=0x00000001000d25c4
- (void)_serverSendTextSessionDidBegin:(id)arg1;	// IMP=0x00000001000d22c4
- (void)_legacy_serverRespondInfo:(id)arg1;	// IMP=0x00000001000d21d8
- (void)_legacy_serverHandleRequest:(id)arg1;	// IMP=0x00000001000d1f5c
- (void)_legacy_serverHandleEvent:(id)arg1;	// IMP=0x00000001000d1b10
- (void)nearby:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3;	// IMP=0x00000001000d1a54
- (void)_serverEnsureStopped;	// IMP=0x00000001000d194c
- (void)_serverEnsureStarted;	// IMP=0x00000001000d1568
- (void)_commonIDSChanged:(id)arg1;	// IMP=0x00000001000d1494
- (void)_commonEnsureStopped;	// IMP=0x00000001000d139c
- (void)_commonEnsureStarted;	// IMP=0x00000001000d1290
- (void)_update;	// IMP=0x00000001000d1204
- (void)prefsChanged;	// IMP=0x00000001000d0e14
- (void)invalidate;	// IMP=0x00000001000d0d00
- (void)activate;	// IMP=0x00000001000d0b38
- (id)description;	// IMP=0x00000001000d08b0
- (id)init;	// IMP=0x00000001000d084c

@end

