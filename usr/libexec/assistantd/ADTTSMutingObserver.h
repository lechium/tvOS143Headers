//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSAudioSessionControllerDelegate-Protocol.h"

@class NSString;

@interface ADTTSMutingObserver : NSObject <CSAudioSessionControllerDelegate>
{
    struct __CFBag *_observers;	// 8 = 0x8
    long long _useDeviceSpeakerForTTSPreference;	// 16 = 0x10
    struct os_unfair_lock_s _handsFreeLock;	// 24 = 0x18
    _Bool _currentRouteIsHandsFree;	// 28 = 0x1c
}

+ (id)sharedInstance;	// IMP=0x0000000100175b3c
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerResetNotification:(id)arg2;	// IMP=0x0000000100176d4c
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerLostNotification:(id)arg2;	// IMP=0x0000000100176bf8
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;	// IMP=0x0000000100176aa4
- (void)removeHandsFreeStateObserver:(id)arg1;	// IMP=0x00000001001769a8
- (void)addHandsFreeStateObserver:(id)arg1;	// IMP=0x0000000100176808
- (void)_useDeviceSpeakerForTTSPreferenceChanged;	// IMP=0x00000001001766d0
- (void)_stopListeningForMuteStateChanges;	// IMP=0x00000001001765e0
- (void)_listenForMuteStateChanges;	// IMP=0x00000001001764a4
- (void)_stopListeningForAudioRouteChanges;	// IMP=0x00000001001763c4
- (void)_listenForAudioRouteChanges;	// IMP=0x00000001001762e4
- (void)_muteStateChanged:(id)arg1;	// IMP=0x00000001001760a8
- (void)_notifyObservers:(_Bool)arg1;	// IMP=0x000000010017605c
- (void)_updateAudioRouteOnMainThread;	// IMP=0x0000000100175d44
- (void)_cleanupAudioRouteOnMainThread;	// IMP=0x0000000100175d14
- (_Bool)_currentRouteIsHandsFree;	// IMP=0x0000000100175cdc
- (void)dealloc;	// IMP=0x0000000100175c90
- (id)init;	// IMP=0x0000000100175ba8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

