//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC6Arcade17RoundedCornerView.h"

@class MISSING_TYPE;

@interface _TtC6Arcade9VideoView : _TtC6Arcade17RoundedCornerView
{
    MISSING_TYPE *previewFrameArtwork;	// 56 = 0x38
    MISSING_TYPE *videoPlayer;	// 64 = 0x40
    MISSING_TYPE *playerViewController;	// 72 = 0x48
    MISSING_TYPE *templateMediaEvent;	// 0 = 0x0
    MISSING_TYPE *templateClickEvent;	// 0 = 0x0
    MISSING_TYPE *metricsPipeline;	// 0 = 0x0
    MISSING_TYPE *container;	// 0 = 0x0
    MISSING_TYPE *videoUrl;	// 0 = 0x0
    MISSING_TYPE *interactionState;	// 0 = 0x0
    MISSING_TYPE *playbackId;	// 0 = 0x0
    MISSING_TYPE *delegate;	// 0 = 0x0
    MISSING_TYPE *isFullScreen;	// 0 = 0x0
    MISSING_TYPE *isTransitioningToFullscreen;	// 0 = 0x0
    MISSING_TYPE *configuration;	// 0 = 0x0
    MISSING_TYPE *fullScreenVideoController;	// 0 = 0x0
    MISSING_TYPE *fullScreenTransitionManager;	// 0 = 0x0
    MISSING_TYPE *wasAudioOnPreFullScreen;	// 0 = 0x0
    MISSING_TYPE *playWorkItem;	// 0 = 0x0
    MISSING_TYPE *releaseAssetsAtNextPauseState;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000100108c30
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010010c228
- (void)willExitIdleMode;	// IMP=0x000000010010c1fc
- (void)willEnterIdleMode;	// IMP=0x000000010010c0dc
- (void)handleMediaServicesReset;	// IMP=0x000000010010c0b0
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x000000010010bddc
@property(nonatomic) double _continuousCornerRadius;
- (void)_setCornerRadius:(double)arg1;	// IMP=0x000000010010bd48
@property(nonatomic) double _cornerRadius;
- (void)updateAudioSessionCategoryWithIsAudioOn:(_Bool)arg1;	// IMP=0x000000010010b8e8
- (void)layoutSubviews;	// IMP=0x000000010010a3f8
- (void)didChangeAutoPlayVideoSetting;	// IMP=0x0000000100109eb0
- (void)dealloc;	// IMP=0x0000000100108b8c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001089b0

@end
