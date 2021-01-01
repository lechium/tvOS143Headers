//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class TVNPNowPlayingProgressView, UIImage, UIImageView, UILabel, UIView;

@interface TVNPNowPlayingSliderView : UIControl
{
    double _maxBarWidth;	// 8 = 0x8
    _Bool _continuous;	// 16 = 0x10
    float _value;	// 20 = 0x14
    float _minimumValue;	// 24 = 0x18
    float _maximumValue;	// 28 = 0x1c
    UIImage *_minimumValueImage;	// 32 = 0x20
    UIImage *_maximumValueImage;	// 40 = 0x28
    TVNPNowPlayingProgressView *_progressBarView;	// 48 = 0x30
    UIImageView *_minValueIconView;	// 56 = 0x38
    UIImageView *_maxValueIconView;	// 64 = 0x40
    UIView *_thumbView;	// 72 = 0x48
    UILabel *_valueLabel;	// 80 = 0x50
    struct CGPoint _lastThumbLocation;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010002ad88
@property(readonly, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) struct CGPoint lastThumbLocation; // @synthesize lastThumbLocation=_lastThumbLocation;
@property(readonly, nonatomic) UIView *thumbView; // @synthesize thumbView=_thumbView;
@property(readonly, nonatomic) UIImageView *maxValueIconView; // @synthesize maxValueIconView=_maxValueIconView;
@property(readonly, nonatomic) UIImageView *minValueIconView; // @synthesize minValueIconView=_minValueIconView;
@property(nonatomic, getter=isContinuous) _Bool continuous; // @synthesize continuous=_continuous;
@property(readonly, nonatomic) TVNPNowPlayingProgressView *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(retain, nonatomic) UIImage *maximumValueImage; // @synthesize maximumValueImage=_maximumValueImage;
@property(retain, nonatomic) UIImage *minimumValueImage; // @synthesize minimumValueImage=_minimumValueImage;
@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) float value; // @synthesize value=_value;
- (id)_unfocusedProgressColor;	// IMP=0x000000010002abe8
- (id)_focusedProgressColor;	// IMP=0x000000010002ab64
- (void)_panUpdated:(id)arg1;	// IMP=0x000000010002a924
- (void)_menuPressed;	// IMP=0x000000010002a920
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010002a91c
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010002a914
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010002a90c
- (_Bool)shouldTrack;	// IMP=0x000000010002a904
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010002a7b4
- (double)maxBarWidth;	// IMP=0x000000010002a7a4
- (void)setMaxBarWidth:(double)arg1;	// IMP=0x000000010002a77c
- (void)setValue:(float)arg1 animated:(_Bool)arg2;	// IMP=0x000000010002a544
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010002a51c
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010002a508
- (void)layoutSubviews;	// IMP=0x000000010002a1bc
- (_Bool)canBecomeFocused;	// IMP=0x000000010002a1b4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100029c58

@end
