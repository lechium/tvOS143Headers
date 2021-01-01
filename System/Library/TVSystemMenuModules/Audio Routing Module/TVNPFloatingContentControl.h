//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIView, _UIFloatingContentView;

@interface TVNPFloatingContentControl : UIControl
{
    _UIFloatingContentView *_floatingContentView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000018e8c
@property(readonly, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
- (unsigned long long)_currentControlState;	// IMP=0x0000000000018e34
- (_Bool)_canHandlePresses:(id)arg1;	// IMP=0x0000000000018da0
- (void)_setupConstraints;	// IMP=0x0000000000018910
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000018850
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000187a4
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000186f8
- (_Bool)canBecomeFocused;	// IMP=0x00000000000186f0
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000001867c
- (void)setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000018664
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001864c
@property(readonly, nonatomic) UIView *contentView;
- (id)init;	// IMP=0x000000000001851c

@end

