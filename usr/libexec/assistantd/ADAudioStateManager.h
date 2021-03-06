//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADAudioStateAnnouncing-Protocol.h"
#import "CSAudioSessionControllerDelegate-Protocol.h"

@class AFAudioState, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface ADAudioStateManager : NSObject <CSAudioSessionControllerDelegate, ADAudioStateAnnouncing>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableSet *_listenerProxies;	// 16 = 0x10
    AFAudioState *_currentAudioState;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x000000010025ccd4
- (void).cxx_destruct;	// IMP=0x000000010025dcac
- (void)_didChangeAudioStateFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000010025dab4
- (void)_updateAudioSessionID:(unsigned int)arg1;	// IMP=0x000000010025d964
- (unsigned int)_fetchAudioSessionID;	// IMP=0x000000010025d874
- (void)_removeListenerProxiesWithListener:(id)arg1;	// IMP=0x000000010025d6c8
- (id)_currentAudioState;	// IMP=0x000000010025d6a8
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerResetNotification:(id)arg2;	// IMP=0x000000010025d560
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerLostNotification:(id)arg2;	// IMP=0x000000010025d440
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;	// IMP=0x000000010025d2f8
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;	// IMP=0x000000010025d1d8
- (void)removeAllListeners;	// IMP=0x000000010025d16c
- (void)removeListener:(id)arg1;	// IMP=0x000000010025d094
- (void)addListener:(id)arg1;	// IMP=0x000000010025cf90
- (void)updateAudioSessionID:(unsigned int)arg1;	// IMP=0x000000010025cf1c
- (void)getAudioStateWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010025cd40
- (id)init;	// IMP=0x000000010025cb94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

