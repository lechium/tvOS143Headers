//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVPAVFPlayback-Protocol.h"
#import "TVPPlayback-Protocol.h"

@class AVPlayer, IMAVPlayer, NSArray, NSDate, NSHashTable, NSMutableDictionary, NSNumber, NSString, TVPAudioOption, TVPChapter, TVPChapterCollection, TVPDateRange, TVPInterstitial, TVPPlaybackState, TVPPlaylist, TVPSubtitleOption, TVPTimeRange;
@protocol TVPASyncPlaybackDelegate, TVPMediaItem, TVPPlaybackDelegate;

@interface MTTVPlayback : NSObject <TVPPlayback, TVPAVFPlayback>
{
    _Bool _currentMediaItemHasDates;	// 8 = 0x8
    _Bool _currentMediaItemPreparedForLoading;	// 9 = 0x9
    _Bool _interactive;	// 10 = 0xa
    _Bool _isLive;	// 11 = 0xb
    _Bool _muted;	// 12 = 0xc
    _Bool _preventsSleepDuringVideoPlayback;	// 13 = 0xd
    _Bool _updatesMediaRemoteInfoAutomatically;	// 14 = 0xe
    _Bool _waitsAfterPreparingMediaItems;	// 15 = 0xf
    _Bool _videoViewsNeedPlayerUpdate;	// 16 = 0x10
    float _volume;	// 20 = 0x14
    id <TVPASyncPlaybackDelegate> _asyncDelegate;	// 24 = 0x18
    NSArray *_audioOptions;	// 32 = 0x20
    NSArray *_chapterCollections;	// 40 = 0x28
    TVPChapter *_currentChapter;	// 48 = 0x30
    TVPChapterCollection *_currentChapterCollection;	// 56 = 0x38
    TVPInterstitial *_currentInterstitial;	// 64 = 0x40
    NSObject<TVPMediaItem> *_currentMediaItem;	// 72 = 0x48
    NSString *_debugDescription;	// 80 = 0x50
    id <TVPPlaybackDelegate> _delegate;	// 88 = 0x58
    NSString *_description;	// 96 = 0x60
    double _elapsedTime;	// 104 = 0x68
    long long _errorBehavior;	// 112 = 0x70
    double _forwardPlaybackEndTime;	// 120 = 0x78
    double _maximumBitRate;	// 128 = 0x80
    long long _mediaItemEndAction;	// 136 = 0x88
    NSString *_name;	// 144 = 0x90
    NSDate *_playbackDate;	// 152 = 0x98
    IMAVPlayer *_player;	// 160 = 0xa0
    TVPPlaylist *_playlist;	// 168 = 0xa8
    double _rate;	// 176 = 0xb0
    double _rateUsedForPlayback;	// 184 = 0xb8
    double _reversePlaybackEndTime;	// 192 = 0xc0
    TVPDateRange *_seekableDateRange;	// 200 = 0xc8
    TVPTimeRange *_seekableTimeRange;	// 208 = 0xd0
    TVPAudioOption *_selectedAudioOption;	// 216 = 0xd8
    TVPSubtitleOption *_selectedSubtitleOption;	// 224 = 0xe0
    TVPPlaybackState *_state;	// 232 = 0xe8
    NSArray *_subtitleOptions;	// 240 = 0xf0
    NSMutableDictionary *_timeObservers;	// 248 = 0xf8
    NSNumber *_temporarySubtitleOverrideType;	// 256 = 0x100
    TVPPlaybackState *_oldPlaybackState;	// 264 = 0x108
    NSHashTable *_videoViewWeakReferences;	// 272 = 0x110
    struct CGSize _currentMediaItemPresentationSize;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x000000010008c8c4
@property(nonatomic) _Bool videoViewsNeedPlayerUpdate; // @synthesize videoViewsNeedPlayerUpdate=_videoViewsNeedPlayerUpdate;
@property(retain, nonatomic) NSHashTable *videoViewWeakReferences; // @synthesize videoViewWeakReferences=_videoViewWeakReferences;
@property(retain, nonatomic) TVPPlaybackState *oldPlaybackState; // @synthesize oldPlaybackState=_oldPlaybackState;
@property(retain, nonatomic) NSNumber *temporarySubtitleOverrideType; // @synthesize temporarySubtitleOverrideType=_temporarySubtitleOverrideType;
@property(nonatomic) _Bool waitsAfterPreparingMediaItems; // @synthesize waitsAfterPreparingMediaItems=_waitsAfterPreparingMediaItems;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool updatesMediaRemoteInfoAutomatically; // @synthesize updatesMediaRemoteInfoAutomatically=_updatesMediaRemoteInfoAutomatically;
@property(retain, nonatomic) NSMutableDictionary *timeObservers; // @synthesize timeObservers=_timeObservers;
@property(retain, nonatomic) TVPAudioOption *selectedAudioOption; // @synthesize selectedAudioOption=_selectedAudioOption;
@property(readonly, nonatomic) TVPTimeRange *seekableTimeRange; // @synthesize seekableTimeRange=_seekableTimeRange;
@property(readonly, nonatomic) TVPDateRange *seekableDateRange; // @synthesize seekableDateRange=_seekableDateRange;
@property(readonly, nonatomic) double reversePlaybackEndTime; // @synthesize reversePlaybackEndTime=_reversePlaybackEndTime;
@property(nonatomic) double rateUsedForPlayback; // @synthesize rateUsedForPlayback=_rateUsedForPlayback;
@property(nonatomic) _Bool preventsSleepDuringVideoPlayback; // @synthesize preventsSleepDuringVideoPlayback=_preventsSleepDuringVideoPlayback;
@property(retain, nonatomic) TVPPlaylist *playlist; // @synthesize playlist=_playlist;
@property(readonly, nonatomic) IMAVPlayer *player; // @synthesize player=_player;
@property(copy, nonatomic) NSDate *playbackDate; // @synthesize playbackDate=_playbackDate;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) long long mediaItemEndAction; // @synthesize mediaItemEndAction=_mediaItemEndAction;
@property(nonatomic) double maximumBitRate; // @synthesize maximumBitRate=_maximumBitRate;
@property(readonly, nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(nonatomic) _Bool interactive; // @synthesize interactive=_interactive;
@property(readonly, nonatomic) double forwardPlaybackEndTime; // @synthesize forwardPlaybackEndTime=_forwardPlaybackEndTime;
@property(nonatomic) long long errorBehavior; // @synthesize errorBehavior=_errorBehavior;
@property(readonly, copy) NSString *description; // @synthesize description=_description;
@property(nonatomic) __weak id <TVPPlaybackDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *debugDescription; // @synthesize debugDescription=_debugDescription;
@property(readonly, nonatomic) struct CGSize currentMediaItemPresentationSize; // @synthesize currentMediaItemPresentationSize=_currentMediaItemPresentationSize;
@property(readonly, nonatomic) _Bool currentMediaItemPreparedForLoading; // @synthesize currentMediaItemPreparedForLoading=_currentMediaItemPreparedForLoading;
@property(readonly, nonatomic) _Bool currentMediaItemHasDates; // @synthesize currentMediaItemHasDates=_currentMediaItemHasDates;
@property(retain, nonatomic) NSObject<TVPMediaItem> *currentMediaItem; // @synthesize currentMediaItem=_currentMediaItem;
@property(readonly, nonatomic) TVPInterstitial *currentInterstitial; // @synthesize currentInterstitial=_currentInterstitial;
@property(retain, nonatomic) TVPChapterCollection *currentChapterCollection; // @synthesize currentChapterCollection=_currentChapterCollection;
@property(readonly, nonatomic) TVPChapter *currentChapter; // @synthesize currentChapter=_currentChapter;
@property(readonly, nonatomic) NSArray *chapterCollections; // @synthesize chapterCollections=_chapterCollections;
@property(readonly, nonatomic) NSArray *audioOptions; // @synthesize audioOptions=_audioOptions;
@property(nonatomic) __weak id <TVPASyncPlaybackDelegate> asyncDelegate; // @synthesize asyncDelegate=_asyncDelegate;
- (void)continueLoadingCurrentItem;	// IMP=0x000000010008c6ac
- (void)_setSelectedSubtitleOption:(id)arg1 userOverridesSystemSubtitleSettings:(_Bool)arg2;	// IMP=0x000000010008c158
@property(retain, nonatomic) TVPSubtitleOption *selectedSubtitleOption; // @synthesize selectedSubtitleOption=_selectedSubtitleOption;
- (void)setSelectedSubtitleOption:(id)arg1 setGlobalPreference:(_Bool)arg2;	// IMP=0x000000010008c13c
- (id)fetchSubtitleOptions;	// IMP=0x000000010008bbfc
@property(readonly, nonatomic) NSArray *subtitleOptions; // @synthesize subtitleOptions=_subtitleOptions;
- (void)updateSubtitleOptionsAndSelection;	// IMP=0x000000010008bb58
- (void)updateSubtitleOptions;	// IMP=0x000000010008baec
- (void)beginLoadingSubtitleOptions;	// IMP=0x000000010008b850
- (void)postPlaybackStateChangeNotificationWithOldState:(id)arg1;	// IMP=0x000000010008b714
- (id)currentPlayingItem;	// IMP=0x000000010008b6c0
- (id)playerController;	// IMP=0x000000010008b6ac
- (id)manifest;	// IMP=0x000000010008b658
@property(readonly, nonatomic) AVPlayer *avPlayer;
@property(readonly, nonatomic) _Bool currentMediaItemHasVideoContent;
@property(readonly, nonatomic) _Bool currentMediaItemIsStreaming;
@property(readonly, nonatomic) _Bool currentMediaItemInitialLoadingComplete;
- (void)removeWeakReferenceToVideoView:(id)arg1;	// IMP=0x000000010008b538
- (void)addWeakReferenceToVideoView:(id)arg1;	// IMP=0x000000010008b520
- (void)_updateVideoViewsWithAVPlayer:(id)arg1;	// IMP=0x000000010008b2e4
- (void)setCurrentMediaItemPresentationSize:(struct CGSize)arg1;	// IMP=0x000000010008b268
- (_Bool)currentMediaItemSupportsScrubbingUsingPlayer;	// IMP=0x000000010008b260
@property(nonatomic) _Bool limitReadAhead;
@property(readonly, nonatomic) TVPTimeRange *bufferedTimeRange;
@property(readonly, nonatomic) TVPPlaybackState *state; // @synthesize state=_state;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
- (void)setElapsedTime:(double)arg1;	// IMP=0x000000010008ae54
- (void)setElapsedTime:(double)arg1 precise:(_Bool)arg2;	// IMP=0x000000010008ae48
- (void)setElapsedTime:(double)arg1 seekPrecision:(CDStruct_198678f7)arg2;	// IMP=0x000000010008ae3c
- (void)setElapsedTime:(double)arg1 seekPrecision:(CDStruct_198678f7)arg2 ignoreDelegate:(_Bool)arg3;	// IMP=0x000000010008ae30
- (void)removeElapsedTimeObserverWithToken:(id)arg1;	// IMP=0x000000010008adc4
- (void)removeBoundaryTimeObserverWithToken:(id)arg1;	// IMP=0x000000010008adc0
- (id)addBoundaryTimeObserverForTimes:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010008adb8
- (id)addBoundaryTimeObserverForDates:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010008adb0
- (id)addElapsedTimeObserver:(CDUnknownBlockType)arg1;	// IMP=0x000000010008acdc
@property(readonly, nonatomic) double rate; // @synthesize rate=_rate;
- (void)scanWithRate:(double)arg1;	// IMP=0x000000010008abc8
- (void)changeMediaInDirection:(long long)arg1;	// IMP=0x000000010008aaf8
- (void)changeMediaInDirection:(long long)arg1 reason:(id)arg2;	// IMP=0x000000010008aaec
- (void)stopWithVolumeRampDuration:(double)arg1;	// IMP=0x000000010008aae0
- (void)pauseWithVolumeRampDuration:(double)arg1;	// IMP=0x000000010008aad4
- (void)skipToNextChapterInDirection:(long long)arg1;	// IMP=0x000000010008aa6c
- (void)stop;	// IMP=0x000000010008aa2c
- (void)pauseIgnoringDelegate:(_Bool)arg1;	// IMP=0x000000010008aa20
- (void)pause;	// IMP=0x000000010008a9e0
- (void)togglePlayPause;	// IMP=0x000000010008a9a0
- (void)playIgnoringDelegate:(_Bool)arg1;	// IMP=0x000000010008a994
- (void)play;	// IMP=0x000000010008a954
- (void)_updatePlaylist;	// IMP=0x000000010008a848
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010008a7d8
- (void)_subtitleSettingsDidChange;	// IMP=0x000000010008a77c
- (void)_durationAvailable;	// IMP=0x000000010008a738
- (void)_mediaServicesDidReset;	// IMP=0x000000010008a6ac
- (void)_mediaServicesWillReset;	// IMP=0x000000010008a698
- (void)_loadedDurationDidChange;	// IMP=0x000000010008a654
- (void)_mediaItemPresentationSizeDidChange;	// IMP=0x000000010008a5d8
- (void)_rateDidChange;	// IMP=0x000000010008a5c8
- (void)_mediaItemStatusDidChange;	// IMP=0x000000010008a5bc
- (void)_readyToPlay;	// IMP=0x000000010008a554
- (void)_periodicUpdate;	// IMP=0x000000010008a384
- (void)_manifestDidChange;	// IMP=0x000000010008a378
- (void)_stateDidChange;	// IMP=0x000000010008a318
- (void)_stateWillChange;	// IMP=0x000000010008a2cc
- (void)_mediaItemDidChange;	// IMP=0x000000010008a1a4
- (void)_mediaItemWillChange;	// IMP=0x000000010008a0f8
- (void)invalidate;	// IMP=0x000000010008a0f4
- (void)dealloc;	// IMP=0x0000000100089fcc
- (id)initWithPlayer:(id)arg1;	// IMP=0x00000001000897e0
- (id)initWithName:(id)arg1;	// IMP=0x0000000100089780

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

