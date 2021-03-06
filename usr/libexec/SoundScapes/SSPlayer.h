//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPNowPlayingPlaybackQueueDataSource-Protocol.h"
#import "SSPlaybackStateChanged-Protocol.h"
#import "SoundScapesProtocol-Protocol.h"

@class NSMutableArray, NSString, SSPlaybackEngine, SSRemoteSetQueueManager, SoundScapesXPCListener;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface SSPlayer : NSObject <SoundScapesProtocol, MPNowPlayingPlaybackQueueDataSource, SSPlaybackStateChanged>
{
    SSPlaybackEngine *_audioSoundscapesPlayer;	// 8 = 0x8
    SoundScapesXPCListener *_xpcListener;	// 16 = 0x10
    NSObject<OS_os_transaction> *_transaction;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_MRQueue;	// 32 = 0x20
    _Bool _enablePreviousTrackSupport;	// 40 = 0x28
    _Bool _didReturnToStart;	// 41 = 0x29
    NSString *_startedSSWithTrack;	// 48 = 0x30
    NSMutableArray *_userDislikedTracks;	// 56 = 0x38
    void *_commandHandlerIdentifier;	// 64 = 0x40
    SSRemoteSetQueueManager *_remoteSetQueueManager;	// 72 = 0x48
}

+ (id)dataFromCustomPlaybackQueue:(id)arg1;	// IMP=0x000000010000b150
+ (id)sharedInstance;	// IMP=0x0000000100009dec
- (void).cxx_destruct;	// IMP=0x000000010000e548
- (void)_cleanupAudioObjects;	// IMP=0x000000010000e508
- (void)nowPlayingApplicationChanged:(_Bool)arg1;	// IMP=0x000000010000e474
- (void)playbackStateChanged:(unsigned long long)arg1;	// IMP=0x000000010000e36c
- (id)nowPlayingInfoCenter:(id)arg1 artworkForContentItem:(id)arg2 size:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000dfe8
- (id)nowPlayingInfoCenter:(id)arg1 contentItemIDForOffset:(long long)arg2;	// IMP=0x000000010000dd84
- (id)nowPlayingInfoCenter:(id)arg1 contentItemForID:(id)arg2;	// IMP=0x000000010000dd18
- (id)populateNowPlayingMediaItem:(id)arg1;	// IMP=0x000000010000d8e0
- (void)_handleMediaServicesRestarted:(id)arg1;	// IMP=0x000000010000d850
- (void)_handleMediaServicesDied:(id)arg1;	// IMP=0x000000010000d7d0
- (void)_handleAudioSessionInterruption:(id)arg1;	// IMP=0x000000010000d5d4
- (void)updateMediaAffinity:(id)arg1 withAffinity:(_Bool)arg2;	// IMP=0x000000010000d3f4
- (void)enableSynthDelay:(_Bool)arg1;	// IMP=0x000000010000d2c0
- (void)setBinIntensityPlayInterval:(unsigned long long)arg1;	// IMP=0x000000010000d1a4
- (void)queryDeviceAssetStatus:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000ced0
- (void)sendPlaybackQueueWithMediaItem:(id)arg1 forIntentID:(id)arg2 toDestination:(id)arg3 withSpeakerUserID:(id)arg4;	// IMP=0x000000010000ca88
- (void)playSoundScapesIntent:(id)arg1;	// IMP=0x000000010000c8fc
- (void)stopPlayback;	// IMP=0x000000010000c8f0
- (void)playAsset:(id)arg1;	// IMP=0x000000010000c77c
- (void)playSynth;	// IMP=0x000000010000c6e4
- (void)playSample;	// IMP=0x000000010000c64c
- (void)enableMRSupportForPreviousTrack:(_Bool)arg1;	// IMP=0x000000010000c4f0
- (long long)previousTrack;	// IMP=0x000000010000c2f4
- (void)_handleTogglePlayPauseCommand;	// IMP=0x000000010000c1d0
- (void)_handleNextTrackCommand;	// IMP=0x000000010000bfd8
- (void)stop;	// IMP=0x000000010000bfcc
- (void)_pause;	// IMP=0x000000010000bf18
- (void)pause;	// IMP=0x000000010000be98
- (void)play;	// IMP=0x000000010000bcd8
- (void)_setUpBeforePlay:(id)arg1;	// IMP=0x000000010000bc5c
- (id)getBundle;	// IMP=0x000000010000bc28
- (id)getPreviousTrack:(id)arg1;	// IMP=0x000000010000bb38
- (id)getNextTrack:(id)arg1;	// IMP=0x000000010000b9c8
- (id)getUpdatedPlaySequence;	// IMP=0x000000010000b850
- (void)clearUserDislikedTracks;	// IMP=0x000000010000b790
- (void)setLastPlaybackAssetName:(id)arg1;	// IMP=0x000000010000b714
- (id)getLastPlaybackAssetName;	// IMP=0x000000010000b61c
- (void)initializeSoundScapesPlayerAndPlay;	// IMP=0x000000010000b378
- (void)_updateNowPlayingInfo:(id)arg1;	// IMP=0x000000010000b2a8
- (void)dealloc;	// IMP=0x000000010000b188
- (void)_handleSetPlaybackQueueCommand:(id)arg1;	// IMP=0x000000010000af9c
- (void)_configureMediaRemoteCommands;	// IMP=0x000000010000a6c8
- (void)_setupNotificationHandlers;	// IMP=0x000000010000a360
- (id)init;	// IMP=0x0000000100009e88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

