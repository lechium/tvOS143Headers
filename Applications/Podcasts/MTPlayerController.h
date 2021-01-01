//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSUserActivityDelegate-Protocol.h"

@class IMAVPlayer, MPCPlayerPath, MTCompositeManifest, MTPlaybackPositionController, MTPlayerManifest, MTUpNextManifest, NSMutableArray, NSMutableSet, NSString, NSTimer, NSURL, NSUserActivity;
@protocol MTPlayerFailureDialogProxy, OS_dispatch_queue;

@interface MTPlayerController : NSObject <NSUserActivityDelegate>
{
    _Bool _hasReportedThisEpisode;	// 8 = 0x8
    _Bool _shouldFindSomethingToPlay;	// 9 = 0x9
    _Bool _playerManifestRestored;	// 10 = 0xa
    _Bool _isManifestRestorationOngoing;	// 11 = 0xb
    id <MTPlayerFailureDialogProxy> _dialogProxy;	// 16 = 0x10
    IMAVPlayer *_player;	// 24 = 0x18
    MPCPlayerPath *_playerPath;	// 32 = 0x20
    MTCompositeManifest *_compositeManifest;	// 40 = 0x28
    MTUpNextManifest *_upNextManifest;	// 48 = 0x30
    MTPlayerManifest *_userManifest;	// 56 = 0x38
    CDUnknownBlockType _platformSyncPlayheadChangeObserverBlock;	// 64 = 0x40
    NSString *_previousPlayingEpisodeUuid;	// 72 = 0x48
    double _lastPlaybackSaveTime;	// 80 = 0x50
    long long _metricsPlayStartTime;	// 88 = 0x58
    double _metricsPlayStartPosition;	// 96 = 0x60
    MTPlaybackPositionController *_playbackPositionController;	// 104 = 0x68
    double _lastPlaybackPositionSaveTime;	// 112 = 0x70
    NSUserActivity *_currentActivity;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_restorationQueue;	// 128 = 0x80
    NSMutableArray *_restorationCompletions;	// 136 = 0x88
    NSTimer *_setPlaybackQueueRequestTimeoutTimer;	// 144 = 0x90
    NSMutableSet *_recordedPlayEventsForCurrentItem;	// 152 = 0x98
    NSURL *_lastRecordedItemURL;	// 160 = 0xa0
}

+ (void)setSharedInstance:(id)arg1;	// IMP=0x000000010013b30c
+ (id)sharedInstance;	// IMP=0x000000010013b300
+ (_Bool)hasSharedInstance;	// IMP=0x000000010013b2ec
- (void).cxx_destruct;	// IMP=0x00000001001447fc
@property(retain, nonatomic) NSURL *lastRecordedItemURL; // @synthesize lastRecordedItemURL=_lastRecordedItemURL;
@property(retain, nonatomic) NSMutableSet *recordedPlayEventsForCurrentItem; // @synthesize recordedPlayEventsForCurrentItem=_recordedPlayEventsForCurrentItem;
@property(retain, nonatomic) NSTimer *setPlaybackQueueRequestTimeoutTimer; // @synthesize setPlaybackQueueRequestTimeoutTimer=_setPlaybackQueueRequestTimeoutTimer;
@property(nonatomic) _Bool isManifestRestorationOngoing; // @synthesize isManifestRestorationOngoing=_isManifestRestorationOngoing;
@property(retain, nonatomic) NSMutableArray *restorationCompletions; // @synthesize restorationCompletions=_restorationCompletions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *restorationQueue; // @synthesize restorationQueue=_restorationQueue;
@property(nonatomic, getter=isPlayerManifestRestored) _Bool playerManifestRestored; // @synthesize playerManifestRestored=_playerManifestRestored;
@property(nonatomic) _Bool shouldFindSomethingToPlay; // @synthesize shouldFindSomethingToPlay=_shouldFindSomethingToPlay;
@property(retain, nonatomic) NSUserActivity *currentActivity; // @synthesize currentActivity=_currentActivity;
@property(nonatomic) double lastPlaybackPositionSaveTime; // @synthesize lastPlaybackPositionSaveTime=_lastPlaybackPositionSaveTime;
@property(retain, nonatomic) MTPlaybackPositionController *playbackPositionController; // @synthesize playbackPositionController=_playbackPositionController;
@property(nonatomic) double metricsPlayStartPosition; // @synthesize metricsPlayStartPosition=_metricsPlayStartPosition;
@property(nonatomic) long long metricsPlayStartTime; // @synthesize metricsPlayStartTime=_metricsPlayStartTime;
@property(nonatomic) double lastPlaybackSaveTime; // @synthesize lastPlaybackSaveTime=_lastPlaybackSaveTime;
@property(nonatomic) _Bool hasReportedThisEpisode; // @synthesize hasReportedThisEpisode=_hasReportedThisEpisode;
@property(retain, nonatomic) NSString *previousPlayingEpisodeUuid; // @synthesize previousPlayingEpisodeUuid=_previousPlayingEpisodeUuid;
@property(copy, nonatomic) CDUnknownBlockType platformSyncPlayheadChangeObserverBlock; // @synthesize platformSyncPlayheadChangeObserverBlock=_platformSyncPlayheadChangeObserverBlock;
@property(retain, nonatomic) MTPlayerManifest *userManifest; // @synthesize userManifest=_userManifest;
@property(retain, nonatomic) MTUpNextManifest *upNextManifest; // @synthesize upNextManifest=_upNextManifest;
@property(retain, nonatomic) MTCompositeManifest *compositeManifest; // @synthesize compositeManifest=_compositeManifest;
@property(retain, nonatomic) MPCPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(retain, nonatomic) IMAVPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <MTPlayerFailureDialogProxy> dialogProxy; // @synthesize dialogProxy=_dialogProxy;
- (void)updateUPPEpisodeUuid:(id)arg1 bookmarkTime:(double)arg2;	// IMP=0x0000000100144574
- (void)userActivity:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3;	// IMP=0x00000001001444fc
- (void)userActivityWillSave:(id)arg1;	// IMP=0x00000001001444f8
- (void)userActivityWasContinued:(id)arg1;	// IMP=0x00000001001444f4
- (void)recordMetricsEventForErrorLog:(id)arg1 withEpisode:(id)arg2;	// IMP=0x00000001001441a8
- (void)recordMetricsEventForAccessLog:(id)arg1 playerItem:(id)arg2 episode:(id)arg3;	// IMP=0x0000000100143fec
- (void)recordMetricsForCurrentItem;	// IMP=0x0000000100143b08
- (void)recordMTPlayerMetricsForCurrentItem;	// IMP=0x0000000100143620
- (void)_sendMediaRemoteCommand:(unsigned int)arg1 toPlayer:(void *)arg2;	// IMP=0x000000010014351c
- (void)_performMediaRemoteCommand:(unsigned int)arg1;	// IMP=0x0000000100143388
- (void *)_localPlayerPath;	// IMP=0x0000000100143308
- (id)_activityRestorationPath;	// IMP=0x00000001001432a4
- (id)_loadActivityForRestoration;	// IMP=0x0000000100142ebc
- (void)_saveActivityForRestoration;	// IMP=0x0000000100142b74
- (void)_currentActivityResignCurrent;	// IMP=0x0000000100142ac4
- (void)_currentActivityBecomeCurrent;	// IMP=0x00000001001429e4
- (void)_updateCurrentActivityForPlayState;	// IMP=0x0000000100142928
- (void)restoreFromUserActivity:(id)arg1 withManifest:(id)arg2 startPlayback:(_Bool)arg3 reason:(unsigned long long)arg4 interactive:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010014249c
- (void)restoreFromUserActivity:(id)arg1 startPlayback:(_Bool)arg2 reason:(unsigned long long)arg3 interactive:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100142258
- (void)_restoreManifestIfNeededWithCompletion:(CDUnknownBlockType)arg1 useEmptyManifest:(_Bool)arg2;	// IMP=0x00000001001420e4
- (void)_restoreDefaultManifestIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001420d4
- (void)_restoreEmptyManifestIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001420c4
- (void)_invokeRestorationCompletions;	// IMP=0x0000000100141d6c
- (void)_onQueueRestorePlayerManifestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001417a0
- (void)restorePlayerManifestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001416d8
- (void)clearPlayerManifestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001415b4
- (id)_alertControllerForClearingOrKeepingUpNextWithRequest:(id)arg1;	// IMP=0x00000001001410cc
- (void)_showGenericPromptToClearUpNextWithRequest:(id)arg1;	// IMP=0x0000000100140e34
- (_Bool)_promptToClearUpNextIfNeededForRequest:(id)arg1;	// IMP=0x0000000100140a4c
- (_Bool)_shouldOpenExternalItemForEpisode:(id)arg1;	// IMP=0x0000000100140910
- (_Bool)_openExternalItemIfNeededForManifest:(id)arg1;	// IMP=0x0000000100140898
- (long long)_validatePlaybackRequest:(id)arg1;	// IMP=0x0000000100140268
- (id)_currentEpisodeForManifest:(id)arg1;	// IMP=0x0000000100140010
- (void)_setLocalPlaybackQueue:(id)arg1;	// IMP=0x000000010013f7f4
- (void)_setPlaybackQueue:(id)arg1;	// IMP=0x000000010013f650
- (void)playManifest:(id)arg1 reason:(unsigned long long)arg2;	// IMP=0x000000010013f5bc
- (void)playManifest:(id)arg1 reason:(unsigned long long)arg2 interactive:(_Bool)arg3 presentationType:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010013f4dc
- (void)setManifest:(id)arg1 startPlayback:(_Bool)arg2 forceLocal:(_Bool)arg3 reason:(unsigned long long)arg4 interactive:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010013f400
- (void)playManifest:(id)arg1 reason:(unsigned long long)arg2 interactive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010013f390
- (void)setManifest:(id)arg1 startPlayback:(_Bool)arg2 reason:(unsigned long long)arg3 interactive:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010013f31c
- (void)setManifest:(id)arg1 reason:(unsigned long long)arg2 interactive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010013f2ac
- (void)setPlaybackQueue:(id)arg1;	// IMP=0x000000010013f0e8
- (void)setManifest:(id)arg1 startPlayback:(_Bool)arg2 destination:(unsigned long long)arg3 context:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010013efd4
- (void)setManifestAsDryRun:(id)arg1 reason:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010013eeb4
- (void)setManifest:(id)arg1 startPlayback:(_Bool)arg2 forceLocal:(_Bool)arg3 context:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010013eda0
- (void)setManifest:(id)arg1 startPlayback:(_Bool)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010013ed20
- (void)setManifest:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010013ecb0
- (void)playManifest:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010013ec40
- (void)dismissNowPlayingAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010013ec3c
- (void)dismissNowPlayingAnimated:(_Bool)arg1;	// IMP=0x000000010013ec2c
- (void)presentNowPlayingAnimated:(_Bool)arg1;	// IMP=0x000000010013eb94
- (_Bool)isPlayingEpisodeUuid:(id)arg1;	// IMP=0x000000010013eb18
- (id)playingEpisodeUuid;	// IMP=0x000000010013eac4
- (id)currentItem;	// IMP=0x000000010013ea70
- (_Bool)isPlayerTargetLocal;	// IMP=0x000000010013e9ec
- (void)setPlayerRoute:(id)arg1;	// IMP=0x000000010013e9e8
- (void)resolveActivePlayerPathWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010013e7e8
- (_Bool)isSeekingOrScrubbing;	// IMP=0x000000010013e79c
@property(nonatomic) double currentTime;
- (_Bool)isTargetPlaying;	// IMP=0x000000010013e6ec
- (_Bool)isPlayingLocally;	// IMP=0x000000010013e6a0
- (void)playPlayerTarget;	// IMP=0x000000010013e64c
- (void)playLocalPlayer;	// IMP=0x000000010013e60c
- (void)pausePlayerTarget;	// IMP=0x000000010013e5b8
- (void)pauseLocalPlayer;	// IMP=0x000000010013e578
- (void)playItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000010013e530
- (void)_performAfterPlay:(id)arg1 playbackStarted:(_Bool)arg2;	// IMP=0x000000010013e2a8
- (void)playWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010013e150
- (_Bool)playWithContext:(id)arg1;	// IMP=0x000000010013e0c4
- (_Bool)playWithReason:(unsigned long long)arg1 interruptEvent:(_Bool)arg2;	// IMP=0x000000010013e034
- (_Bool)playWithReason:(unsigned long long)arg1;	// IMP=0x000000010013e024
- (void)openExternalEpisode:(id)arg1;	// IMP=0x000000010013ded8
- (_Bool)shouldPresentNowPlayingForItem:(id)arg1 presentationType:(unsigned long long)arg2;	// IMP=0x000000010013dea8
- (void)playbackStateDidChange;	// IMP=0x000000010013da00
- (void)updateEpisodeForPlayerUpdateForceSave:(_Bool)arg1;	// IMP=0x000000010013d45c
- (void)playerPeriodicUpdate;	// IMP=0x000000010013d3d0
- (void)playerHeadWillChange:(id)arg1;	// IMP=0x000000010013d218
- (void)currentItemDidChange;	// IMP=0x000000010013cda4
- (_Bool)updateEpisode:(id)arg1 andPlayerItem:(id)arg2 withElapsedTime:(double)arg3 andDuration:(double)arg4 onMediaItemWillChange:(_Bool)arg5;	// IMP=0x000000010013c5c8
- (void)currentItemWillChange:(id)arg1;	// IMP=0x000000010013bf58
- (void)playerFailure:(id)arg1 shouldShowDialog:(_Bool)arg2;	// IMP=0x000000010013bb58
- (void)playerFailedToPlayToEndTime:(id)arg1;	// IMP=0x000000010013baa4
- (void)playerErrorDidOccur:(id)arg1;	// IMP=0x000000010013ba94
- (void)tearDownPlayerNotifications;	// IMP=0x000000010013ba44
- (void)setupPlayerNotifications;	// IMP=0x000000010013b7ac
- (void)dealloc;	// IMP=0x000000010013b724
- (id)init;	// IMP=0x000000010013b3c4
- (id)copy;	// IMP=0x000000010013b39c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

