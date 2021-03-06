//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRContentItem, MRDNowPlayingPlayerClientPlaybackState, MRNowPlayingState, MROSTransaction, MRPlaybackQueue, MRPlaybackQueueSubscriptionController, MRPlayer, MRPlayerPath, NSArray, NSData, NSDate, NSMutableDictionary;
@protocol MRDNowPlayingPlayerClientDelegate, OS_dispatch_queue;

@interface MRDNowPlayingPlayerClient : NSObject
{
    MRPlayerPath *_playerPath;	// 8 = 0x8
    NSArray *_supportedRemoteControlCommands;	// 16 = 0x10
    NSData *_supportedRemoteControlCommandsData;	// 24 = 0x18
    MRPlaybackQueue *_playbackQueue;	// 32 = 0x20
    unsigned long long _playbackQueueCapabilities;	// 40 = 0x28
    MRDNowPlayingPlayerClientPlaybackState *_playerPlaybackState;	// 48 = 0x30
    MRDNowPlayingPlayerClientPlaybackState *_inferredPlayerPlaybackState;	// 56 = 0x38
    NSMutableDictionary *_playbackStateHistory;	// 64 = 0x40
    NSMutableDictionary *_inFlightArtworkRequests;	// 72 = 0x48
    _Bool _scheduledSaveNowPlayingArtworkFileURL;	// 80 = 0x50
    _Bool _pictureInPictureEnabled;	// 81 = 0x51
    MROSTransaction *_hasNowPlayingDataTransaction;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_serialQueue;	// 96 = 0x60
    _Bool _pushStateIsPlaying;	// 104 = 0x68
    _Bool _pushStateHasNowPlayingData;	// 105 = 0x69
    _Bool _pushStatePictureInPictureEnabled;	// 106 = 0x6a
    NSDate *_lastPlayingDate;	// 112 = 0x70
    MRPlaybackQueueSubscriptionController *_subscriptionController;	// 120 = 0x78
    id <MRDNowPlayingPlayerClientDelegate> _delegate;	// 128 = 0x80
    MRDNowPlayingPlayerClientPlaybackState *_pushStatePlaybackState;	// 136 = 0x88
    MRPlayer *_pushStatePlayer;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000010001b644
@property(nonatomic) _Bool pushStatePictureInPictureEnabled; // @synthesize pushStatePictureInPictureEnabled=_pushStatePictureInPictureEnabled;
@property(nonatomic) _Bool pushStateHasNowPlayingData; // @synthesize pushStateHasNowPlayingData=_pushStateHasNowPlayingData;
@property(retain, nonatomic) MRPlayer *pushStatePlayer; // @synthesize pushStatePlayer=_pushStatePlayer;
@property(retain, nonatomic) MRDNowPlayingPlayerClientPlaybackState *pushStatePlaybackState; // @synthesize pushStatePlaybackState=_pushStatePlaybackState;
@property(nonatomic) _Bool pushStateIsPlaying; // @synthesize pushStateIsPlaying=_pushStateIsPlaying;
@property(nonatomic) __weak id <MRDNowPlayingPlayerClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MRPlaybackQueueSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
@property(readonly, nonatomic) NSDate *lastPlayingDate; // @synthesize lastPlayingDate=_lastPlayingDate;
- (void)_registerCallbacksForPlayerPath:(id)arg1;	// IMP=0x000000010001a928
- (void)_onQueue_requestArtworkForContentItems:(id)arg1;	// IMP=0x0000000100019d0c
- (void)requestArtworkForContentItems:(id)arg1;	// IMP=0x00000001000196b4
- (void)_onQueue_popState;	// IMP=0x0000000100018edc
- (void)_onQueue_pushState;	// IMP=0x0000000100018dc0
- (void)_onQueue_playbackQueueContentItemsArtworkDidChange:(id)arg1;	// IMP=0x0000000100018d58
- (void)_onQueue_playbackQueueContentItemsDidChange:(id)arg1;	// IMP=0x0000000100018cf0
- (void)_onQueue_playbackQueueCapabilitiesDidChange:(unsigned long long)arg1;	// IMP=0x0000000100018c9c
- (void)_onQueue_playbackQueueDidChange:(id)arg1;	// IMP=0x0000000100018c18
- (void)_onQueue_supportedCommandsDidChange:(id)arg1;	// IMP=0x0000000100018b90
- (void)_onQueue_playbackStateDidChanged:(id)arg1;	// IMP=0x0000000100018a84
- (void)_onQueue_pictureInPictureEnabledDidChanged:(_Bool)arg1;	// IMP=0x0000000100018a30
- (void)_onQueue_isPlayingDidChange:(_Bool)arg1;	// IMP=0x00000001000189ac
- (void)_onQueue_saveNowPlayingItemArtworkURL;	// IMP=0x00000001000183d0
- (void)saveNowPlayingArtworkFileURL;	// IMP=0x0000000100018160
- (id)_sortSnapshots:(id)arg1;	// IMP=0x00000001000180fc
@property(readonly, nonatomic) NSArray *snapshots;
- (id)snapshotForIsPlaying:(_Bool)arg1;	// IMP=0x0000000100017f78
- (id)snapshotsForIsPlaying:(_Bool)arg1;	// IMP=0x0000000100017d60
- (id)snapshotForPlaybackState:(unsigned int)arg1;	// IMP=0x0000000100017c20
- (void)artworkUpdatedForContentItems:(id)arg1;	// IMP=0x000000010001791c
- (void)_onQueue_updatePlaybackQueueWithItem:(id)arg1 notifyObservers:(_Bool)arg2;	// IMP=0x000000010001781c
- (void)_onQueue_updatePlaybackQueue:(id)arg1 notifyObservers:(_Bool)arg2;	// IMP=0x0000000100017150
- (void)updatePlaybackQueue:(id)arg1 notifyObservers:(_Bool)arg2;	// IMP=0x00000001000170a8
- (void)updatePlaybackQueue:(id)arg1;	// IMP=0x0000000100017098
- (void)updatePlayer:(id)arg1;	// IMP=0x0000000100016fa8
- (void)updateClient:(id)arg1;	// IMP=0x0000000100016edc
@property(nonatomic, getter=isPictureInPictureEnabled) _Bool pictureInPictureEnabled;
@property(retain, nonatomic) MRPlayerPath *playerPath;
- (id)_onQueue_lastPlayingDate;	// IMP=0x0000000100016cc8
@property(readonly, nonatomic) double timeSincePlaying;
@property(readonly, nonatomic) MRNowPlayingState *nowPlayingState;
@property(readonly, nonatomic) _Bool hasNowPlayingData;
- (_Bool)_onQueue_isPlaying;	// IMP=0x000000010001671c
@property(readonly, nonatomic) _Bool isPlaying;
@property(nonatomic) unsigned long long playbackQueueCapabilities;
- (id)_onQueue_playbackState;	// IMP=0x0000000100016170
@property(readonly, nonatomic) unsigned int playbackState;
- (void)updateLastPlayingDate:(id)arg1;	// IMP=0x0000000100015f94
- (void)updatePlaybackState:(unsigned int)arg1 date:(id)arg2;	// IMP=0x0000000100015ce8
@property(nonatomic) unsigned int inferredPlaybackState;
@property(readonly, nonatomic) MRContentItem *nowPlayingContentItem;
@property(copy, nonatomic) MRPlaybackQueue *playbackQueue;
@property(copy, nonatomic) NSData *supportedRemoteControlCommandsData;
@property(retain, nonatomic) NSArray *supportedRemoteControlCommands;
@property(readonly, nonatomic) MRPlayer *player;
- (id)description;	// IMP=0x0000000100014880
- (id)initWithPlayerPath:(id)arg1;	// IMP=0x000000010001462c

@end

