//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class MTTouchInsetsButton, UIColor, UIFont, UILabel;

@interface MTCountInfoButton : UIControl
{
    unsigned long long _index;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
    MTTouchInsetsButton *_button;	// 24 = 0x18
    UILabel *_label;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000e46c4
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) MTTouchInsetsButton *button; // @synthesize button=_button;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void)buttonTapped:(id)arg1;	// IMP=0x00000001000e44ac
- (struct CGSize)labelSize;	// IMP=0x00000001000e4450
- (struct CGSize)buttonSize;	// IMP=0x00000001000e43f4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000e4398
- (void)layoutSubviews;	// IMP=0x00000001000e422c
- (id)_createLabelTextForCurrentState;	// IMP=0x00000001000e4094
- (void)_updateLabelText;	// IMP=0x00000001000e3fe0
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
- (void)setIndex:(unsigned long long)arg1 forCount:(unsigned long long)arg2;	// IMP=0x00000001000e3d84
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000e3cc4

@end

