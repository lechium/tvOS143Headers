//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIContentUnavailableView.h>

@class MISSING_TYPE;

@interface _TtC8AppStore22ContentUnavailableView : _UIContentUnavailableView
{
    MISSING_TYPE *backgroundEffectView;	// 8 = 0x8
    MISSING_TYPE *appliesBackgroundEffect;	// 16 = 0x10
    MISSING_TYPE *_canBecomeFocused;	// 17 = 0x11
}

- (void).cxx_destruct;	// IMP=0x00000001000e7fdc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000e8044
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3 includeBackdrop:(_Bool)arg4;	// IMP=0x00000001000e8018
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3;	// IMP=0x00000001000e7fec
- (id)_buttonBackgroundImageForStyle:(unsigned long long)arg1 controlState:(unsigned long long)arg2;	// IMP=0x00000001000e7fa0
- (id)_flatTextColor;	// IMP=0x00000001000e7efc
- (double)_buttonVerticalSpacing;	// IMP=0x00000001000e7ef0
- (double)_labelVerticalSpacing;	// IMP=0x00000001000e7ee4
- (struct CGSize)_buttonSize;	// IMP=0x00000001000e7ed0
- (double)_buttonAlpha;	// IMP=0x00000001000e7ec8
- (double)_labelAlpha;	// IMP=0x00000001000e7ec0
- (id)_buttonFont;	// IMP=0x00000001000e837c
- (id)_titleFont;	// IMP=0x00000001000e7e84
@property(nonatomic) _Bool canBecomeFocused;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000e7cfc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000e7cd4

@end

