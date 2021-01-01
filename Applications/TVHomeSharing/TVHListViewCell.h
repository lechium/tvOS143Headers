//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class _UIFloatingContentView;
@protocol TVHListViewCellDelegate;

@interface TVHListViewCell : UICollectionViewCell
{
    _Bool _disabled;	// 8 = 0x8
    _Bool _shouldAppearSelected;	// 9 = 0x9
    _UIFloatingContentView *_floatingContentView;	// 16 = 0x10
    id <TVHListViewCellDelegate> _delegate;	// 24 = 0x18
}

+ (void)_configureFloatingContentViewAppearance;	// IMP=0x000000010005f298
- (void).cxx_destruct;	// IMP=0x000000010005f57c
@property(nonatomic) _Bool shouldAppearSelected; // @synthesize shouldAppearSelected=_shouldAppearSelected;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <TVHListViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
- (void)_updateFloatingContentViewControlState;	// IMP=0x000000010005f478
- (void)_setShouldAppearSelected:(_Bool)arg1 andUpdateFloatingContentViewControlState:(_Bool)arg2;	// IMP=0x000000010005f44c
- (unsigned long long)_floatingContentViewControlState;	// IMP=0x000000010005f3cc
- (_Bool)_canHandlePresses:(id)arg1;	// IMP=0x000000010005f1c8
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010005f130
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010005f098
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010005eff0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010005eed4
- (void)prepareForReuse;	// IMP=0x000000010005ee20
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000010005ed68
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000010005ed64
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x000000010005eca4
- (_Bool)canBecomeFocused;	// IMP=0x000000010005ec84
- (void)layoutSubviews;	// IMP=0x000000010005ebe0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010005ea40

@end
