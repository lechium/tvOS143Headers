/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPArtworkDataSource.h>
#import <libobjc.A.dylib/MPVolumeControllerDelegate.h>
#import <libobjc.A.dylib/MPMusicPlayerControllerClient.h>
#import <libobjc.A.dylib/MPMediaPlayback.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSString, MPMusicPlayerControllerNowPlaying, MPMusicPlayerControllerNowPlayingTimeSnapshot, MPMusicPlayerQueueDescriptor, MPVolumeController, NSObject, MPMediaItem;

@interface MPMusicPlayerController : NSObject <MPArtworkDataSource, MPVolumeControllerDelegate, MPMusicPlayerControllerClient, MPMediaPlayback> {

	NSXPCConnection* _connection;
	os_unfair_lock_s _lock;
	BOOL _isPreparedToPlay;
	NSString* _clientIdentifier;
	MPMusicPlayerControllerNowPlaying* _serverNowPlaying;
	MPMusicPlayerControllerNowPlayingTimeSnapshot* _serverTimeSnapshot;
	MPMusicPlayerQueueDescriptor* _serverQueueDescriptor;
	MPMusicPlayerControllerNowPlayingTimeSnapshot* _lastServerTimeSnapshot;
	MPMusicPlayerControllerNowPlaying* _lastServerNowPlaying;
	MPMusicPlayerQueueDescriptor* _targetQueueDescriptor;
	long long _notificationsCounter;
	MPVolumeController* _volumeController;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy,readonly) NSString * clientIdentifier;                                                    //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connection;                                                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) MPMusicPlayerControllerNowPlaying * serverNowPlaying;                                //@synthesize serverNowPlaying=_serverNowPlaying - In the implementation block
@property (nonatomic,readonly) MPMusicPlayerControllerNowPlayingTimeSnapshot * serverTimeSnapshot;                  //@synthesize serverTimeSnapshot=_serverTimeSnapshot - In the implementation block
@property (nonatomic,readonly) MPMusicPlayerQueueDescriptor * serverQueueDescriptor;                                //@synthesize serverQueueDescriptor=_serverQueueDescriptor - In the implementation block
@property (nonatomic,readonly) MPMusicPlayerControllerNowPlayingTimeSnapshot * lastServerTimeSnapshot;              //@synthesize lastServerTimeSnapshot=_lastServerTimeSnapshot - In the implementation block
@property (nonatomic,readonly) MPMusicPlayerControllerNowPlaying * lastServerNowPlaying;                            //@synthesize lastServerNowPlaying=_lastServerNowPlaying - In the implementation block
@property (nonatomic,readonly) MPMusicPlayerQueueDescriptor * targetQueueDescriptor;                                //@synthesize targetQueueDescriptor=_targetQueueDescriptor - In the implementation block
@property (nonatomic,readonly) long long notificationsCounter;                                                      //@synthesize notificationsCounter=_notificationsCounter - In the implementation block
@property (nonatomic,readonly) MPVolumeController * volumeController;                                               //@synthesize volumeController=_volumeController - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                                  //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) long long playbackSpeed; 
@property (nonatomic,readonly) BOOL isNowPlayingItemFromGeniusMix; 
@property (assign,nonatomic) unsigned long long currentChapterIndex; 
@property (nonatomic,readonly) long long playbackState; 
@property (assign,nonatomic) long long repeatMode; 
@property (assign,nonatomic) long long shuffleMode; 
@property (assign,nonatomic) float volume; 
@property (nonatomic,copy) MPMediaItem * nowPlayingItem; 
@property (nonatomic,readonly) unsigned long long indexOfNowPlayingItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isPreparedToPlay;                                                               //@synthesize isPreparedToPlay=_isPreparedToPlay - In the implementation block
@property (assign,nonatomic) double currentPlaybackTime; 
@property (assign,nonatomic) float currentPlaybackRate; 
+(id)alloc;
+(id)systemMusicPlayer;
+(id)applicationQueuePlayer;
+(id)applicationMusicPlayer;
+(id)iPodMusicPlayer;
+(void)setRunLoopForNotifications:(id)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(void)stop;
-(void)pause;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSXPCConnection *)connection;
-(NSString *)clientIdentifier;
-(id)_snapshot;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)prepareToPlay;
-(void)play;
-(unsigned long long)numberOfItems;
-(void)shuffle;
-(id)initWithClientIdentifier:(id)arg1 ;
-(long long)playbackSpeed;
-(void)setPlaybackSpeed:(long long)arg1 ;
-(void)_clearConnection;
-(long long)playbackState;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(long long)shuffleMode;
-(void)setShuffleMode:(long long)arg1 ;
-(void)setNowPlayingItem:(MPMediaItem *)arg1 ;
-(MPMediaItem *)nowPlayingItem;
-(void)skipToPreviousItem;
-(void)skipToNextItem;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(void)volumeController:(id)arg1 mutedStateDidChange:(BOOL)arg2 ;
-(MPVolumeController *)volumeController;
-(id)_queueDescriptor;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(BOOL)isPreparedToPlay;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(float)currentPlaybackRate;
-(void)setCurrentPlaybackRate:(float)arg1 ;
-(void)setServerQueueDescriptor:(MPMusicPlayerQueueDescriptor *)arg1 ;
-(void)setServerNowPlaying:(MPMusicPlayerControllerNowPlaying *)arg1 ;
-(void)setServerTimeSnapshot:(MPMusicPlayerControllerNowPlayingTimeSnapshot *)arg1 ;
-(void)serverPlaybackModeDidChangeAffectingQueue:(BOOL)arg1 ;
-(void)serverItemDidEnd;
-(void)serverQueueDidEnd;
-(id)initWithClientIdentifier:(id)arg1 queue:(id)arg2 ;
-(unsigned long long)indexOfNowPlayingItem;
-(void)setQueueWithQuery:(id)arg1 ;
-(void)setQueueWithItemCollection:(id)arg1 ;
-(void)setQueueWithStoreIDs:(id)arg1 ;
-(void)setQueueWithDescriptor:(id)arg1 ;
-(void)prependQueueDescriptor:(id)arg1 ;
-(void)appendQueueDescriptor:(id)arg1 ;
-(void)prepareToPlayWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)skipToBeginning;
-(void)beginGeneratingPlaybackNotifications;
-(void)endGeneratingPlaybackNotifications;
-(void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2 ;
-(id)queueAsQuery;
-(id)nowPlayingAtIndex:(long long)arg1 ;
-(id)nowPlayingItemAtIndex:(unsigned long long)arg1 ;
-(void)pauseWithFadeoutDuration:(double)arg1 ;
-(void)skipToBeginningOrPreviousItem;
-(void)prepareQueueForPlayback;
-(BOOL)userQueueModificationsDisabled;
-(void)setUserQueueModificationsDisabled:(BOOL)arg1 ;
-(void)setVolumePrivate:(float)arg1 ;
-(BOOL)isNowPlayingItemFromGeniusMix;
-(unsigned long long)currentChapterIndex;
-(void)setCurrentChapterIndex:(unsigned long long)arg1 ;
-(BOOL)isGeniusAvailable;
-(BOOL)isGeniusAvailableForSeedItems:(id)arg1 ;
-(BOOL)setQueueWithSeedItems:(id)arg1 ;
-(void)setQueueWithGeniusMixPlaylist:(id)arg1 ;
-(void)adjustLoadedQueueRangeToReverseCount:(long long)arg1 forwardCount:(long long)arg2 ;
-(void)_establishConnectionIfNeeded;
-(void)onServer:(/*^block*/id)arg1 ;
-(void)onServerAsync:(/*^block*/id)arg1 ;
-(id)_nowPlaying;
-(id)_mediaItemFromNowPlaying:(id)arg1 ;
-(MPMusicPlayerControllerNowPlaying *)serverNowPlaying;
-(MPMusicPlayerControllerNowPlayingTimeSnapshot *)serverTimeSnapshot;
-(MPMusicPlayerQueueDescriptor *)serverQueueDescriptor;
-(MPMusicPlayerControllerNowPlayingTimeSnapshot *)lastServerTimeSnapshot;
-(MPMusicPlayerControllerNowPlaying *)lastServerNowPlaying;
-(MPMusicPlayerQueueDescriptor *)targetQueueDescriptor;
-(long long)notificationsCounter;
@end

