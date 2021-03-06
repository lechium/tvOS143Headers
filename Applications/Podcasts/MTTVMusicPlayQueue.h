//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVPlayback/TVPPlaylist.h>

#import "MPRequestResponseControllerDelegate-Protocol.h"
#import "MTTVMusicAirplayDetectorDelegate-Protocol.h"

@class AVPlayer, MPAVRoute, MPCPlayerPath, MPCPlayerResponse, MPCPlayerResponseItem, MPRequestResponseController, MTTVMusicAirplayDetector, NSArray, NSDictionary, NSObject, NSString;
@protocol MTTVMusicPlayQueueDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface MTTVMusicPlayQueue : TVPPlaylist <MPRequestResponseControllerDelegate, MTTVMusicAirplayDetectorDelegate>
{
    _Bool _isNewPlayQueue;	// 8 = 0x8
    _Bool _supportsShuffle;	// 9 = 0x9
    _Bool _supportsRepeat;	// 10 = 0xa
    long long _repeatMode;	// 16 = 0x10
    _Bool _shuffleEnabled;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_invalidationQueue;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_invalidationTimer;	// 40 = 0x28
    MTTVMusicAirplayDetector *_airplayDetector;	// 48 = 0x30
    _Bool _isAirplayActive;	// 56 = 0x38
    _Bool _isRadioPlayback;	// 57 = 0x39
    _Bool _isVideoPlayback;	// 58 = 0x3a
    _Bool _isUpdating;	// 59 = 0x3b
    _Bool _externalEndpointsAvailable;	// 60 = 0x3c
    _Bool _pendingElapsedTimeChange;	// 61 = 0x3d
    MPCPlayerPath *_playerPath;	// 64 = 0x40
    NSObject<MTTVMusicPlayQueueDelegate> *_delegate;	// 72 = 0x48
    MPCPlayerResponseItem *_lastPlayingItem;	// 80 = 0x50
    NSString *_radioStationName;	// 88 = 0x58
    double _pendingElapsedTime;	// 96 = 0x60
    MPRequestResponseController *_requestResponseController;	// 104 = 0x68
    MPCPlayerResponse *_playerResponse;	// 112 = 0x70
    AVPlayer *_avPlayer;	// 120 = 0x78
    NSArray *_mediaItems;	// 128 = 0x80
    NSDictionary *_mediaItemIndexes;	// 136 = 0x88
    CDStruct_fce57115 _durationSnapshot;	// 144 = 0x90
}

+ (CDStruct_912cb5d2)_tracklistRangeForRadioPlayback:(_Bool)arg1;	// IMP=0x00000001000a68cc
+ (_Bool)_isTracklist:(id)arg1 equalToTrackList:(id)arg2;	// IMP=0x00000001000a65c4
- (void).cxx_destruct;	// IMP=0x00000001000a6c68
@property(retain, nonatomic) NSDictionary *mediaItemIndexes; // @synthesize mediaItemIndexes=_mediaItemIndexes;
@property(retain, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(retain, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) MPCPlayerResponse *playerResponse; // @synthesize playerResponse=_playerResponse;
@property(retain, nonatomic) MPRequestResponseController *requestResponseController; // @synthesize requestResponseController=_requestResponseController;
@property(nonatomic, getter=isPendingElapsedTimeChange) _Bool pendingElapsedTimeChange; // @synthesize pendingElapsedTimeChange=_pendingElapsedTimeChange;
@property(nonatomic) double pendingElapsedTime; // @synthesize pendingElapsedTime=_pendingElapsedTime;
@property _Bool externalEndpointsAvailable; // @synthesize externalEndpointsAvailable=_externalEndpointsAvailable;
@property(nonatomic) _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
@property(nonatomic) _Bool isVideoPlayback; // @synthesize isVideoPlayback=_isVideoPlayback;
@property(nonatomic) _Bool isRadioPlayback; // @synthesize isRadioPlayback=_isRadioPlayback;
@property(retain, nonatomic) NSString *radioStationName; // @synthesize radioStationName=_radioStationName;
@property(nonatomic) CDStruct_fce57115 durationSnapshot; // @synthesize durationSnapshot=_durationSnapshot;
@property(retain, nonatomic) MPCPlayerResponseItem *lastPlayingItem; // @synthesize lastPlayingItem=_lastPlayingItem;
@property(nonatomic) __weak NSObject<MTTVMusicPlayQueueDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MPCPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(nonatomic) _Bool supportsRepeat; // @synthesize supportsRepeat=_supportsRepeat;
@property(nonatomic) _Bool supportsShuffle; // @synthesize supportsShuffle=_supportsShuffle;
- (void)_activeSystemRouteDidChange:(id)arg1;	// IMP=0x00000001000a69b4
- (void)_repeatModeSettingDidChange:(id)arg1;	// IMP=0x00000001000a68f0
- (void)_applicationDidBecomeActive:(id)arg1;	// IMP=0x00000001000a68e4
- (_Bool)_isUserSubscribed;	// IMP=0x00000001000a65bc
- (void)_updatePlayQueue;	// IMP=0x00000001000a51e0
- (long long)_repeatModeFromRepeatType:(long long)arg1;	// IMP=0x00000001000a51c8
- (long long)_tracklistRepeatMode;	// IMP=0x00000001000a5144
- (id)_playEventFromGenericObject:(id)arg1;	// IMP=0x00000001000a4ec4
- (id)_mediaItemForMPCPlayerResponseItem:(id)arg1 section:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001000a4c10
- (void)_updateMediaItemsWithTrackList:(id)arg1;	// IMP=0x00000001000a4854
- (void)_performPlayerCommandRequest:(id)arg1 name:(id)arg2;	// IMP=0x00000001000a45c4
- (void)_performPlayerCommand:(long long)arg1 name:(id)arg2;	// IMP=0x00000001000a4484
- (void)_performInternalPlayerCommand:(long long)arg1;	// IMP=0x00000001000a4460
- (id)_podcastsPlayerPathWithRoute:(id)arg1;	// IMP=0x00000001000a4434
- (id)_createGlobalPlayerPathWithRoute:(id)arg1;	// IMP=0x00000001000a4398
- (void)_updatePlayerPathWithRoute:(id)arg1;	// IMP=0x00000001000a41c4
- (void)airplayDetectorAirplayEnded:(id)arg1;	// IMP=0x00000001000a3fb4
- (void)airplayDetectorAirplayStarted:(id)arg1;	// IMP=0x00000001000a3da0
- (_Bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;	// IMP=0x00000001000a3a88
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a38e8
- (void)_mediaServicesDidReset;	// IMP=0x00000001000a3780
- (_Bool)isMusicAppQueue;	// IMP=0x00000001000a370c
@property(readonly, nonatomic) _Bool isLocalDeviceQueue;
- (void)addToPlayQueueWithPlaybackIntent:(id)arg1 playNext:(_Bool)arg2;	// IMP=0x00000001000a32d8
- (_Bool)canAddToPlayQueueAtEndWithPlaybackIntent:(id)arg1;	// IMP=0x00000001000a3200
- (_Bool)canAddToPlayQueueNextWithPlaybackIntent:(id)arg1;	// IMP=0x00000001000a3128
- (void)clearPlayQueueWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a2e0c
- (long long)repeatMode;	// IMP=0x00000001000a2dfc
- (void)_setRepeatMode:(long long)arg1;	// IMP=0x00000001000a2cf8
- (void)_setRepeatType:(long long)arg1;	// IMP=0x00000001000a2a60
- (void)setRepeatMode:(long long)arg1;	// IMP=0x00000001000a29c0
- (_Bool)shuffleEnabled;	// IMP=0x00000001000a29b0
- (void)_setShuffleEnabled:(_Bool)arg1;	// IMP=0x00000001000a28b0
- (void)setShuffleEnabled:(_Bool)arg1 preserveCurrentItem:(_Bool)arg2;	// IMP=0x00000001000a2668
- (id)lastAVPlayer;	// IMP=0x00000001000a265c
@property(readonly, nonatomic) MPCPlayerResponse *lastPlayerResponse;
@property(readonly, nonatomic) double currentPlayingDuration;
@property(readonly, nonatomic) double currentPlayingElapsedTime;
- (void)setElapsedTime:(double)arg1;	// IMP=0x00000001000a2304
- (void)changeToItemAtIndex:(long long)arg1;	// IMP=0x00000001000a1fc0
- (void)changeToPreviousItem;	// IMP=0x00000001000a1f24
- (void)changeToNextItem;	// IMP=0x00000001000a1e88
- (void)rewind;	// IMP=0x00000001000a1de0
- (void)fastForward;	// IMP=0x00000001000a1d38
- (void)stop;	// IMP=0x00000001000a1d20
- (void)pause;	// IMP=0x00000001000a1d08
- (void)play;	// IMP=0x00000001000a1c04
- (id)responseTrackList;	// IMP=0x00000001000a1b8c
@property(readonly, nonatomic) long long playerState;
@property(readonly, nonatomic) MPCPlayerResponseItem *currentPlayingItem;
- (void)stopUpdating;	// IMP=0x00000001000a1958
- (void)startUpdating;	// IMP=0x00000001000a18e0
- (void)updatePlayerPath;	// IMP=0x00000001000a1868
- (void)moveItemAtIndexToPlayNext:(long long)arg1;	// IMP=0x00000001000a15a0
- (_Bool)canMoveItemAtIndexToPlayNext:(long long)arg1;	// IMP=0x00000001000a1430
@property(retain, nonatomic) MPAVRoute *audioRoute;
@property(readonly, nonatomic) NSString *audioRouteName;
- (_Bool)isMediaItem:(id)arg1 matchingResponseItem:(id)arg2;	// IMP=0x00000001000a11e4
- (id)currentMediaItem;	// IMP=0x00000001000a10b8
- (unsigned long long)activeListIndex;	// IMP=0x00000001000a0fd0
- (unsigned long long)count;	// IMP=0x00000001000a0f84
- (id)trackList;	// IMP=0x00000001000a0f78
- (id)activeList;	// IMP=0x00000001000a0f6c
- (void)dealloc;	// IMP=0x00000001000a0ef4
- (id)initWithMediaItems:(id)arg1 index:(long long)arg2 isCollection:(_Bool)arg3;	// IMP=0x00000001000a0360

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

