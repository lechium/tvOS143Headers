//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SRUserUtteranceView;

@interface SRUserUtteranceContainerView : UIView
{
    _Bool _showEditingView;	// 8 = 0x8
    SRUserUtteranceView *_displayView;	// 16 = 0x10
    UIView *_tableView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010003e450
@property(nonatomic) __weak UIView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak SRUserUtteranceView *displayView; // @synthesize displayView=_displayView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010003e344
- (void)layoutSubviews;	// IMP=0x000000010003e238
- (double)baselineOffsetFromBottom;	// IMP=0x000000010003e1a4
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x000000010003e154
- (void)animateToDisplayWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003df24
- (void)animateToEditWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003dd14
- (_Bool)isFirstResponder;	// IMP=0x000000010003daa0

@end

