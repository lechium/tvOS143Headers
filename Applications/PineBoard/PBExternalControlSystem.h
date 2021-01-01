//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSExternalControlSystemDelegate-Protocol.h"
#import "PBVolumeControllerDelegate-Protocol.h"

@class NSString, PBSExternalControlSystem, PBVolumeController, TVSStateMachine;

@interface PBExternalControlSystem : NSObject <PBSExternalControlSystemDelegate, PBVolumeControllerDelegate>
{
    PBSExternalControlSystem *_externalControlSystem;	// 8 = 0x8
    PBVolumeController *_volumeController;	// 16 = 0x10
    TVSStateMachine *_volumeBehaviorStateMachine;	// 24 = 0x18
}

+ (id)volumeController;	// IMP=0x000000010022ecac
+ (_Bool)isAppleIRRemotePaired;	// IMP=0x000000010022ec3c
+ (void)unpairAppleIRRemote;	// IMP=0x000000010022eb60
+ (void)pairAppleIRRemote;	// IMP=0x000000010022ea84
+ (_Bool)volumeControlNeedsConfiguring;	// IMP=0x000000010022e68c
+ (id)sharedSystem;	// IMP=0x000000010022e614
+ (id)_sharedInstance;	// IMP=0x00000001002322fc
- (void).cxx_destruct;	// IMP=0x000000010023229c
@property(retain, nonatomic) TVSStateMachine *volumeBehaviorStateMachine; // @synthesize volumeBehaviorStateMachine=_volumeBehaviorStateMachine;
@property(retain, nonatomic) PBVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(retain, nonatomic) PBSExternalControlSystem *externalControlSystem; // @synthesize externalControlSystem=_externalControlSystem;
- (void)_initializeVolumeBehaviorStateMachine;	// IMP=0x000000010023103c
- (void)_listenForNowPlayingAppNotifications;	// IMP=0x0000000100230f74
- (void)_listenForVolumeButtonOverrideUpdates;	// IMP=0x0000000100230edc
- (void)volumeSupportedChanged:(id)arg1 forOutputContext:(unsigned long long)arg2;	// IMP=0x0000000100230e40
- (void)externalControlSystemDidRequestAlternateRouteVolumeMute:(id)arg1 behavior:(long long)arg2;	// IMP=0x0000000100230b10
- (void)externalControlSystemDidRequestAlternateRouteVolumeDown:(id)arg1 behavior:(long long)arg2;	// IMP=0x00000001002307e0
- (void)externalControlSystemDidRequestAlternateRouteVolumeUp:(id)arg1 behavior:(long long)arg2;	// IMP=0x00000001002304b0
- (void)externalControlSystem:(id)arg1 didHandleRemoteControlButtonReleased:(long long)arg2;	// IMP=0x000000010023036c
- (void)externalControlSystem:(id)arg1 didHandleRemoteControlButtonPressed:(long long)arg2;	// IMP=0x0000000100230228
- (void)externalControlSystemDidUpdatePolicy:(id)arg1;	// IMP=0x000000010022fb74
- (void)externalControlSystem:(id)arg1 didReceiveRequest:(long long)arg2;	// IMP=0x000000010022f43c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010022f198
- (id)init;	// IMP=0x000000010022ef70
- (void)tvs_bindDisplayModeBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x000000010022ede0
- (id)DisplayModeBinding;	// IMP=0x000000010022ed24
- (_Bool)_shouldSuppressWakeForRemoteControlButton:(long long)arg1;	// IMP=0x0000000100232694
- (void)_handleDisplayModeDidChange;	// IMP=0x00000001002323cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

