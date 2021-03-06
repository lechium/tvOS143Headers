//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, _UIFloatingContentView;

@interface PBPIPControlButton : UIControl
{
    _Bool _isFocused;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    _UIFloatingContentView *_floatingContentView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000ebbbc
@property(readonly, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000eb904
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000eb7e0
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000eb6f0
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000eb604
- (void)_setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000eb53c
- (_Bool)_canHandlePresses:(id)arg1;	// IMP=0x00000001000eb420
- (unsigned long long)_currentControlState;	// IMP=0x00000001000eb3a8
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000001000eb358
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000001000eb2f4
- (id)initWithFrame:(struct CGRect)arg1 imageSymbolWeight:(long long)arg2;	// IMP=0x00000001000ea468
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000ea3d8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000ea320

@end

