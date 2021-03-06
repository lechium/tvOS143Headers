//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayoutInvalidationContext.h>

@interface HBTopShelfLabeledContentLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext
{
    _Bool _animatingFocusUpdate;	// 8 = 0x8
    unsigned long long _focusAnimationOptions;	// 16 = 0x10
    double _focusingAnimationDuration;	// 24 = 0x18
    double _unfocusingAnimationDuration;	// 32 = 0x20
}

@property(nonatomic) double unfocusingAnimationDuration; // @synthesize unfocusingAnimationDuration=_unfocusingAnimationDuration;
@property(nonatomic) double focusingAnimationDuration; // @synthesize focusingAnimationDuration=_focusingAnimationDuration;
@property(nonatomic) unsigned long long focusAnimationOptions; // @synthesize focusAnimationOptions=_focusAnimationOptions;
@property(nonatomic, getter=isAnimatingFocusUpdate) _Bool animatingFocusUpdate; // @synthesize animatingFocusUpdate=_animatingFocusUpdate;

@end

