//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface SCATModernMenuContentViewContainer : UIView
{
    UIView *_contentView;	// 8 = 0x8
    NSArray *_contentViewConstraints;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100090adc
@property(retain, nonatomic) NSArray *contentViewConstraints; // @synthesize contentViewConstraints=_contentViewConstraints;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000100090a2c
- (id)collectionView;	// IMP=0x00000001000908c8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100090508

@end

