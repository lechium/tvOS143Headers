//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFNotifyObserverDelegate-Protocol.h"
#import "AFSettingsDelegate-Protocol.h"

@class AFNotifyObserver, AFSettingsConnection, AVSystemController, NSHashTable, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface AFSiriUserNotificationRequestCapabilityManager : NSObject <AFNotifyObserverDelegate, AFSettingsDelegate>
{
    _Bool _inWirelessSplitterSession;	// 8 = 0x8
    _Bool _inWirelessSplitterSessionStateValid;	// 9 = 0x9
    _Bool _routeAvailableForSpokenMessages;	// 10 = 0xa
    _Bool _lastKnownEligibilityState;	// 11 = 0xb
    _Bool _localVoiceAssetAvailable;	// 12 = 0xc
    AFSettingsConnection *_settingsConnection;	// 16 = 0x10
    AFNotifyObserver *_pairedInfoChangeObserver;	// 24 = 0x18
    AFNotifyObserver *_wirelessSplitterSessionObserver;	// 32 = 0x20
    AFNotifyObserver *_wirelessGuestConnectionObserver;	// 40 = 0x28
    AVSystemController *_avSystemController;	// 48 = 0x30
    AFNotifyObserver *_forcedUpdateObserver;	// 56 = 0x38
    NSHashTable *_observers;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    NSObject<OS_dispatch_group> *_group;	// 80 = 0x50
}

+ (_Bool)_isRouteAvailableForAnnouncement:(id)arg1;	// IMP=0x00000001001aeb10
+ (id)_requiredIntentIdentifiersForAnnouncementType:(long long)arg1;	// IMP=0x00000001001aea14
+ (id)_announceableIntentIdentifiersForAnnouncementType:(long long)arg1;	// IMP=0x00000001001ae910
+ (long long)announcementTypeForBundleID:(id)arg1;	// IMP=0x00000001001ae88c
+ (_Bool)applicationWithBundleID:(id)arg1 canAnnounceNotificationWithIntentIdentifiers:(id)arg2;	// IMP=0x00000001001ae664
+ (_Bool)supportedByApplicationWithBundleID:(id)arg1;	// IMP=0x00000001001ae3f4
+ (id)sharedManager;	// IMP=0x00000001001ae37c
- (void).cxx_destruct;	// IMP=0x00000001001b0d88
- (void)fetchElligibleSetupStateAndNotifyObservers:(id)arg1;	// IMP=0x00000001001b0c5c
- (void)_settingsConnectionDidDisconnect;	// IMP=0x00000001001b0b90
- (id)_settingsConnection;	// IMP=0x00000001001b0b1c
- (void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2;	// IMP=0x00000001001b08a8
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x00000001001b07a8
- (void)systemControllerDied:(id)arg1;	// IMP=0x00000001001b06c8
- (void)updateAudioRouteAvailabilityForSpokenMessages:(id)arg1;	// IMP=0x00000001001b0614
- (void)_fetchWirelessSplitterSessionInfoAndStartObservingFromSourceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b0488
- (void)_fetchPairedBluetoothDevicesFromSourceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b030c
- (void)notifyObserversOfCurrentRequestCanBeHandledState;	// IMP=0x00000001001b0160
- (void)notifyObserversOfCurrentEligibleSetupState:(_Bool)arg1;	// IMP=0x00000001001b0040
- (void)fetchLocalVoiceAssetAvailabilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b0030
- (void)updateWirelessSplitterSessionInfoAndObserve;	// IMP=0x00000001001afdcc
- (_Bool)_updateAudioRouteAvailabilityForSpokenMessagesAndBroadcast:(_Bool)arg1;	// IMP=0x00000001001afbb0
- (void)fetchWirelessSplitterSessionInfoAndStartObservingSync;	// IMP=0x00000001001afb6c
- (void)fetchInitialState;	// IMP=0x00000001001afaac
- (void)removeObserver:(id)arg1;	// IMP=0x00000001001afa9c
- (void)addObserver:(id)arg1;	// IMP=0x00000001001afa8c
- (_Bool)requestCanBeHandled;	// IMP=0x00000001001af8dc
- (void)fetchRequestCanBeHandledStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001af564
- (_Bool)hasEligibleSetup;	// IMP=0x00000001001af268
- (void)fetchEligibleSetupStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001aecb8
- (id)_init;	// IMP=0x00000001001adf34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

