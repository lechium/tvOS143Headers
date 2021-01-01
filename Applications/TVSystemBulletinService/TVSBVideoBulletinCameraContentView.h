//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HMCameraStreamControlDelegate-Protocol.h"

@class HMCameraProfile, HMCameraStreamControl, HMCameraStreamPreferences, HMCameraView, NSError, NSLayoutConstraint, NSNumber, NSString, TVSBVideoBulletinBadgeView, UIActivityIndicatorView, UIImage, UIImageView, UILabel, UIVisualEffectView;

@interface TVSBVideoBulletinCameraContentView : UIView <HMCameraStreamControlDelegate>
{
    _Bool _doorbell;	// 8 = 0x8
    _Bool _fullScreen;	// 9 = 0x9
    HMCameraProfile *_cameraProfile;	// 16 = 0x10
    HMCameraStreamPreferences *_streamPreferences;	// 24 = 0x18
    UIImage *_placeholderSnapshot;	// 32 = 0x20
    UIImage *_faceImage;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    NSNumber *_aspectRatio;	// 56 = 0x38
    HMCameraStreamControl *_streamControl;	// 64 = 0x40
    NSError *_cachedStreamError;	// 72 = 0x48
    UIVisualEffectView *_effectView;	// 80 = 0x50
    UIActivityIndicatorView *_activityIndicator;	// 88 = 0x58
    HMCameraView *_cameraView;	// 96 = 0x60
    UIImageView *_placeholderSnapshotView;	// 104 = 0x68
    UIImageView *_gradientImageView;	// 112 = 0x70
    TVSBVideoBulletinBadgeView *_liveBadgeView;	// 120 = 0x78
    UILabel *_titleLabel;	// 128 = 0x80
    UILabel *_descriptionLabel;	// 136 = 0x88
    UIImageView *_symbolImageView;	// 144 = 0x90
    UIImageView *_faceImageView;	// 152 = 0x98
    NSLayoutConstraint *_cameraViewWidthConstraint;	// 160 = 0xa0
    NSLayoutConstraint *_cameraViewHeightConstraint;	// 168 = 0xa8
    NSLayoutConstraint *_liveBadgeHeightConstraint;	// 176 = 0xb0
    NSLayoutConstraint *_liveBadgeBottomConstraint;	// 184 = 0xb8
    NSLayoutConstraint *_liveBadgeTrailingConstraint;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x000000010000ee0c
@property(retain, nonatomic) NSLayoutConstraint *liveBadgeTrailingConstraint; // @synthesize liveBadgeTrailingConstraint=_liveBadgeTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *liveBadgeBottomConstraint; // @synthesize liveBadgeBottomConstraint=_liveBadgeBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *liveBadgeHeightConstraint; // @synthesize liveBadgeHeightConstraint=_liveBadgeHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *cameraViewHeightConstraint; // @synthesize cameraViewHeightConstraint=_cameraViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *cameraViewWidthConstraint; // @synthesize cameraViewWidthConstraint=_cameraViewWidthConstraint;
@property(retain, nonatomic) UIImageView *faceImageView; // @synthesize faceImageView=_faceImageView;
@property(retain, nonatomic) UIImageView *symbolImageView; // @synthesize symbolImageView=_symbolImageView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TVSBVideoBulletinBadgeView *liveBadgeView; // @synthesize liveBadgeView=_liveBadgeView;
@property(retain, nonatomic) UIImageView *gradientImageView; // @synthesize gradientImageView=_gradientImageView;
@property(retain, nonatomic) UIImageView *placeholderSnapshotView; // @synthesize placeholderSnapshotView=_placeholderSnapshotView;
@property(retain, nonatomic) HMCameraView *cameraView; // @synthesize cameraView=_cameraView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) NSError *cachedStreamError; // @synthesize cachedStreamError=_cachedStreamError;
@property(retain, nonatomic) HMCameraStreamControl *streamControl; // @synthesize streamControl=_streamControl;
@property(nonatomic, getter=isFullScreen) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic, getter=isDoorbell) _Bool doorbell; // @synthesize doorbell=_doorbell;
@property(retain, nonatomic) NSNumber *aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *faceImage; // @synthesize faceImage=_faceImage;
@property(retain, nonatomic) UIImage *placeholderSnapshot; // @synthesize placeholderSnapshot=_placeholderSnapshot;
@property(retain, nonatomic) HMCameraStreamPreferences *streamPreferences; // @synthesize streamPreferences=_streamPreferences;
@property(retain, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
- (void)_updateEffect;	// IMP=0x000000010000ea34
- (void)_updateCameraViewConstraints;	// IMP=0x000000010000e44c
- (void)_updateAudioStream:(_Bool)arg1;	// IMP=0x000000010000e2a8
- (_Bool)_shouldDisplayErrorContent;	// IMP=0x000000010000e1b0
- (_Bool)_shouldDisplayAccessModeErrorContent;	// IMP=0x000000010000e040
- (void)_updateContentViews;	// IMP=0x000000010000dcec
- (void)_updateCameraNameLabels;	// IMP=0x000000010000d8e8
- (void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2;	// IMP=0x000000010000d74c
- (void)cameraStreamControlDidStartStream:(id)arg1;	// IMP=0x000000010000d340
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010000d274
- (void)stopStream;	// IMP=0x000000010000d234
- (void)startStreamIfNecessary;	// IMP=0x000000010000d148
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000ab18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

