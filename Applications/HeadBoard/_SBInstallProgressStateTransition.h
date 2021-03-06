//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_HBIconProgressTransition.h"

@class CAMediaTimingFunction;

@interface _SBInstallProgressStateTransition : _HBIconProgressTransition
{
    double _totalElapsedTime;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    CAMediaTimingFunction *_timingFunction;	// 24 = 0x18
    long long _fromState;	// 32 = 0x20
    long long _toState;	// 40 = 0x28
    double _fraction;	// 48 = 0x30
}

+ (Class)_classForTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x0000000100045400
+ (id)newTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00000001000453c0
- (void).cxx_destruct;	// IMP=0x0000000100045720
- (void)_updateView:(id)arg1;	// IMP=0x000000010004569c
- (_Bool)isCompleteWithView:(id)arg1;	// IMP=0x0000000100045680
- (void)completeTransitionAndUpdateView:(id)arg1;	// IMP=0x0000000100045664
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;	// IMP=0x00000001000455b8
- (id)_initWithFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00000001000454cc

@end

