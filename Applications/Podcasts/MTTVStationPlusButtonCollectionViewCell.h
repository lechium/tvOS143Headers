//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MTTVStationsPlusButtonView, UILabel;

@interface MTTVStationPlusButtonCollectionViewCell : UICollectionViewCell
{
    MTTVStationsPlusButtonView *_plusButtonView;	// 8 = 0x8
    UILabel *_newStationLabel;	// 16 = 0x10
}

+ (id)reuseIdentifier;	// IMP=0x000000010012cd54
- (void).cxx_destruct;	// IMP=0x000000010012d494
@property(retain, nonatomic) UILabel *newStationLabel; // @synthesize newStationLabel=_newStationLabel;
@property(retain, nonatomic) MTTVStationsPlusButtonView *plusButtonView; // @synthesize plusButtonView=_plusButtonView;
- (id)_textColor;	// IMP=0x000000010012d2cc
- (void)_addNewStationLabel;	// IMP=0x000000010012d178
- (void)_addPlusButtonView;	// IMP=0x000000010012d0b4
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010012cfec
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010012cee8
- (void)layoutSubviews;	// IMP=0x000000010012cde4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010012cd68

@end

