//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "UACornerActionManagerDebugInterface-Protocol.h"

@class ActivityManagerDebuggingManager, BluetoothManager, NSArray, NSDate, NSMutableSet, NSSet, NSString, NSTimer, NSUUID, NSUserDefaults, PowerManagerIdleTracker, UADispatchScheduler, UAPingController, UASharedPasteboardClientController, UATimedPowerAssertions, UAUserActivityInfo;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface UACornerActionManager : NSObject <NSXPCListenerDelegate, UACornerActionManagerDebugInterface>
{
    _Bool _suspended;	// 8 = 0x8
    NSMutableSet *_advertisers;	// 16 = 0x10
    NSMutableSet *_receivers;	// 24 = 0x18
    NSMutableSet *_clients;	// 32 = 0x20
    NSMutableSet *_notifiers;	// 40 = 0x28
    NSMutableSet *_handlers;	// 48 = 0x30
    NSDate *_creationTime;	// 56 = 0x38
    NSArray *_itemsBeingAdvertised;	// 64 = 0x40
    int _managedSettingsChangedNotificationToken;	// 72 = 0x48
    NSObject<OS_dispatch_group> *_helpersDispatchGroup;	// 80 = 0x50
    double _systemIdlePreviousTimeSinceLastUserActivity;	// 88 = 0x58
    _Bool _isBluetoothEnabled;	// 96 = 0x60
    _Bool _advertisingSuspended;	// 97 = 0x61
    int _lastNumAdvertiseableProcesses;	// 100 = 0x64
    UAUserActivityInfo *_debugCornerItem;	// 104 = 0x68
    _Bool _backlightOn;	// 112 = 0x70
    _Bool _systemHasSuspendedAdvertisements;	// 113 = 0x71
    _Bool _systemHasSuspendedScanning;	// 114 = 0x72
    _Bool _userActive;	// 115 = 0x73
    _Bool _batterySaverModeEnabled;	// 116 = 0x74
    _Bool _receivingSuspended;	// 117 = 0x75
    _Bool _deviceUILocked;	// 118 = 0x76
    _Bool _screenDimmed;	// 119 = 0x77
    _Bool _systemIsIdle;	// 120 = 0x78
    _Bool _pingMode;	// 121 = 0x79
    int _backlightLevelToken;	// 124 = 0x7c
    unsigned int _holdPowerAssertion;	// 128 = 0x80
    int _systemPreferenceChangedToken;	// 132 = 0x84
    int _uiLockStatusToken;	// 136 = 0x88
    BluetoothManager *bluetoothManager;	// 144 = 0x90
    NSUUID *_uuid;	// 152 = 0x98
    NSSet *_activeDevicesIdentifiers;	// 160 = 0xa0
    NSUserDefaults *_userDefaults;	// 168 = 0xa8
    ActivityManagerDebuggingManager *_debugManager;	// 176 = 0xb0
    UAUserActivityInfo *_pinnedUserActivityInfoItem;	// 184 = 0xb8
    UASharedPasteboardClientController *_pasteboardController;	// 192 = 0xc0
    UAPingController *_pingController;	// 200 = 0xc8
    NSObject<OS_dispatch_queue> *_mainDispatchQ;	// 208 = 0xd0
    UADispatchScheduler *_nextUserIdleDeterminationScheduler;	// 216 = 0xd8
    UADispatchScheduler *_nextUpdateAdvertisedItemsScheduler;	// 224 = 0xe0
    UADispatchScheduler *_nextScheduleBestAppDeterminationScheduler;	// 232 = 0xe8
    UATimedPowerAssertions *_deviceUILockedPowerAssertion;	// 240 = 0xf0
    UATimedPowerAssertions *_screenDimmedPowerAssertion;	// 248 = 0xf8
    NSDate *_holdPowerAssertionUntil;	// 256 = 0x100
    NSObject<OS_dispatch_source> *_holdPowerAssertionSourceTimer;	// 264 = 0x108
    PowerManagerIdleTracker *_userIdleTracker;	// 272 = 0x110
    UATimedPowerAssertions *_userInactivePowerAssertion;	// 280 = 0x118
    NSDate *_lastTimePayloadWasRequestedForAdvertisedItem;	// 288 = 0x120
    double _avgPingTime;	// 296 = 0x128
    NSDate *_pingStart;	// 304 = 0x130
    NSObject<OS_dispatch_semaphore> *_pongSem;	// 312 = 0x138
    NSTimer *_pongTimer;	// 320 = 0x140
}

+ (id)sharedActivityManagerServer;	// IMP=0x000000010001e4f0
+ (id)cornerActionManager;	// IMP=0x000000010001e4d4
- (void).cxx_destruct;	// IMP=0x000000010002aa4c
@property(retain) NSTimer *pongTimer; // @synthesize pongTimer=_pongTimer;
@property(retain) NSObject<OS_dispatch_semaphore> *pongSem; // @synthesize pongSem=_pongSem;
@property(retain) NSDate *pingStart; // @synthesize pingStart=_pingStart;
@property double avgPingTime; // @synthesize avgPingTime=_avgPingTime;
@property _Bool pingMode; // @synthesize pingMode=_pingMode;
@property int uiLockStatusToken; // @synthesize uiLockStatusToken=_uiLockStatusToken;
@property int systemPreferenceChangedToken; // @synthesize systemPreferenceChangedToken=_systemPreferenceChangedToken;
@property(copy) NSDate *lastTimePayloadWasRequestedForAdvertisedItem; // @synthesize lastTimePayloadWasRequestedForAdvertisedItem=_lastTimePayloadWasRequestedForAdvertisedItem;
@property _Bool systemIsIdle; // @synthesize systemIsIdle=_systemIsIdle;
@property(retain) UATimedPowerAssertions *userInactivePowerAssertion; // @synthesize userInactivePowerAssertion=_userInactivePowerAssertion;
@property(retain) PowerManagerIdleTracker *userIdleTracker; // @synthesize userIdleTracker=_userIdleTracker;
@property unsigned int holdPowerAssertion; // @synthesize holdPowerAssertion=_holdPowerAssertion;
@property(retain) NSObject<OS_dispatch_source> *holdPowerAssertionSourceTimer; // @synthesize holdPowerAssertionSourceTimer=_holdPowerAssertionSourceTimer;
@property(retain) NSDate *holdPowerAssertionUntil; // @synthesize holdPowerAssertionUntil=_holdPowerAssertionUntil;
@property int backlightLevelToken; // @synthesize backlightLevelToken=_backlightLevelToken;
@property(retain) UATimedPowerAssertions *screenDimmedPowerAssertion; // @synthesize screenDimmedPowerAssertion=_screenDimmedPowerAssertion;
@property _Bool screenDimmed; // @synthesize screenDimmed=_screenDimmed;
@property(retain) UATimedPowerAssertions *deviceUILockedPowerAssertion; // @synthesize deviceUILockedPowerAssertion=_deviceUILockedPowerAssertion;
@property _Bool deviceUILocked; // @synthesize deviceUILocked=_deviceUILocked;
@property(readonly, retain) UADispatchScheduler *nextScheduleBestAppDeterminationScheduler; // @synthesize nextScheduleBestAppDeterminationScheduler=_nextScheduleBestAppDeterminationScheduler;
@property(readonly, retain) UADispatchScheduler *nextUpdateAdvertisedItemsScheduler; // @synthesize nextUpdateAdvertisedItemsScheduler=_nextUpdateAdvertisedItemsScheduler;
@property(readonly, retain) UADispatchScheduler *nextUserIdleDeterminationScheduler; // @synthesize nextUserIdleDeterminationScheduler=_nextUserIdleDeterminationScheduler;
@property(retain) NSObject<OS_dispatch_queue> *mainDispatchQ; // @synthesize mainDispatchQ=_mainDispatchQ;
@property(retain) UAPingController *pingController; // @synthesize pingController=_pingController;
@property(retain) UASharedPasteboardClientController *pasteboardController; // @synthesize pasteboardController=_pasteboardController;
@property _Bool receivingSuspended; // @synthesize receivingSuspended=_receivingSuspended;
@property(retain) UAUserActivityInfo *pinnedUserActivityInfoItem; // @synthesize pinnedUserActivityInfoItem=_pinnedUserActivityInfoItem;
@property(readonly, retain) ActivityManagerDebuggingManager *debugManager; // @synthesize debugManager=_debugManager;
@property(readonly, getter=isBatterySaverModeEnabled) _Bool batterySaverModeEnabled; // @synthesize batterySaverModeEnabled=_batterySaverModeEnabled;
@property(readonly, retain) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly) NSSet *activeDevicesIdentifiers; // @synthesize activeDevicesIdentifiers=_activeDevicesIdentifiers;
@property(readonly, copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain) BluetoothManager *bluetoothManager; // @synthesize bluetoothManager;
@property(getter=isBacklightOn) _Bool backlightOn; // @synthesize backlightOn=_backlightOn;
@property(readonly, copy) NSSet *allHandlers;
- (void)removeHandler:(id)arg1;	// IMP=0x000000010002a650
- (void)addHandler:(id)arg1;	// IMP=0x000000010002a59c
@property(readonly, copy) NSSet *handlers;
- (void)removeActivityNotifier:(id)arg1;	// IMP=0x000000010002a48c
- (void)addActivityNotifier:(id)arg1;	// IMP=0x000000010002a3c8
@property(readonly, copy) NSSet *notifiers;
- (void)removeClient:(id)arg1;	// IMP=0x000000010002a2a0
- (void)addClient:(id)arg1;	// IMP=0x000000010002a1c4
@property(readonly, copy) NSSet *clients;
- (void)removeReceiver:(id)arg1;	// IMP=0x000000010002a0c4
- (void)addReceiver:(id)arg1;	// IMP=0x0000000100029fe8
@property(readonly, copy) NSSet *receivers;
- (void)removeAdvertiser:(id)arg1;	// IMP=0x0000000100029e28
- (void)addAdvertiser:(id)arg1;	// IMP=0x0000000100029c98
@property(readonly, copy) NSSet *advertisers;
- (id)statusString;	// IMP=0x0000000100027978
- (id)shortStatusString;	// IMP=0x0000000100027048
- (id)dynamicUserActivitiesString;	// IMP=0x0000000100026f64
- (id)debuggingInfo;	// IMP=0x0000000100026d98
- (id)dictionaryForCornerActionItem:(id)arg1;	// IMP=0x0000000100026d90
- (id)dictionaryForAdvertisableItem:(id)arg1;	// IMP=0x0000000100026d88
- (void)updateUIDeviceLockedState:(_Bool)arg1;	// IMP=0x00000001000267ec
- (void)updateScreenDimStateState:(_Bool)arg1;	// IMP=0x0000000100026254
- (void)updateUserActiveState:(_Bool)arg1;	// IMP=0x000000010002595c
@property _Bool userActive; // @synthesize userActive=_userActive;
- (void)terminate;	// IMP=0x00000001000258d8
- (void)resume;	// IMP=0x0000000100024940
- (void)suspend;	// IMP=0x000000010002409c
@property _Bool suspended;
- (void)resumeListeningForBluetooth;	// IMP=0x0000000100023da4
- (void)suspendListeningForBluetooth;	// IMP=0x0000000100023cbc
- (void)bluetoothAvailabilityChange:(id)arg1;	// IMP=0x0000000100023b20
- (void)triggerAll;	// IMP=0x0000000100023ac4
- (void)processWasRemoved;	// IMP=0x0000000100023984
- (_Bool)fetchMoreAppSuggestions;	// IMP=0x00000001000237dc
- (_Bool)haveBestAppChangeNotificationClients;	// IMP=0x0000000100023764
- (void)_checkIfBestApplicationChangedThread;	// IMP=0x0000000100023460
- (_Bool)scheduleBestAppDetermination:(double)arg1;	// IMP=0x00000001000233ec
- (_Bool)scheduleBestAppDetermination;	// IMP=0x00000001000233dc
- (void)checkIfBestCornerItemChanged:(double)arg1;	// IMP=0x0000000100023348
@property(retain, nonatomic) UAUserActivityInfo *debugCornerItem;
- (id)bestCornerItem:(id)arg1;	// IMP=0x00000001000232b8
- (id)bestCornerItem;	// IMP=0x000000010002324c
- (id)cornerActionItemForUUID:(id)arg1;	// IMP=0x0000000100023078
- (id)cornerActionItems;	// IMP=0x0000000100022d18
@property _Bool systemHasSuspendedScanning; // @synthesize systemHasSuspendedScanning=_systemHasSuspendedScanning;
@property _Bool systemHasSuspendedAdvertisements; // @synthesize systemHasSuspendedAdvertisements=_systemHasSuspendedAdvertisements;
- (void)_determineWhenSystemGoesIdleThread;	// IMP=0x0000000100021b78
@property _Bool advertisingSuspended;
- (void)triggerUserIdleDetermination:(double)arg1;	// IMP=0x0000000100021934
- (void)triggerUserIdleDetermination;	// IMP=0x0000000100021924
- (_Bool)isBluetoothEnabled;	// IMP=0x000000010002182c
@property(readonly) _Bool activityReceivingAllowed;
@property(readonly) _Bool activityAdvertisingAllowed;
- (void)updateScreenSaverActive:(_Bool)arg1;	// IMP=0x00000001000216d0
- (void)_determineItemToAdvertiseForHandoffThread;	// IMP=0x000000010001ffcc
@property(readonly, copy) NSArray *itemsBeingAdvertised; // @synthesize itemsBeingAdvertised=_itemsBeingAdvertised;
- (_Bool)weAreAdvertisingAtLeastOneItem;	// IMP=0x000000010001fd98
- (void)userActivityItemsChanged;	// IMP=0x000000010001fcb0
- (id)uaAdvertisableItemsInOrder:(_Bool)arg1;	// IMP=0x000000010001f730
- (id)uaAdvertisableItemsInOrder;	// IMP=0x000000010001f720
- (id)activeAdvertiseableItemsUUIDs;	// IMP=0x000000010001f528
- (void)scheduleUpdatingAdvertisableItems:(double)arg1;	// IMP=0x000000010001f4c0
- (void)scheduleUpdatingAdvertisableItems;	// IMP=0x000000010001f4ac
- (_Bool)shouldItemBeAdvertised:(id)arg1;	// IMP=0x000000010001f16c
- (id)advertiseableItems;	// IMP=0x000000010001ef58
- (_Bool)weAreAdvertisingAnItem;	// IMP=0x000000010001ede4
- (void)dealloc;	// IMP=0x000000010001edb0
- (id)init;	// IMP=0x000000010001e55c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

