//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface TVMusicBarsView : UIView
{
    NSArray *_barViews;	// 8 = 0x8
    float _repeatCount;	// 16 = 0x10
    unsigned long long _musicBarsStyle;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010007c884
- (void)_applicationDidBecomeActive:(id)arg1;	// IMP=0x000000010007c858
- (void)_addAnimationsWithRepeatCount:(float)arg1;	// IMP=0x000000010007c4d8
- (void)_removeAnimations;	// IMP=0x000000010007c394
- (void)_addAnimations;	// IMP=0x000000010007c380
- (id)_createBarViews;	// IMP=0x000000010007c1b8
- (void)_setBarHeights:(double)arg1;	// IMP=0x000000010007c044
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010007bf7c
@property(nonatomic) unsigned long long musicBarsStyle;
- (void)_updateMusicBarsStyle;	// IMP=0x000000010007bbe8
- (void)resumeAnimating;	// IMP=0x000000010007bb50
- (void)stopAnimating;	// IMP=0x000000010007bac4
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000010007ba70
- (void)layoutSubviews;	// IMP=0x000000010007b8bc
- (void)dealloc;	// IMP=0x000000010007b844
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010007b6e8

@end
