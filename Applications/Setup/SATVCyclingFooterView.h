//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SATVPulsingAnimationDelegate-Protocol.h"
#import "TVSKCyclingView-Protocol.h"

@class NSArray, NSObject, NSString, SATVFooterView, SATVPulsingFooterView;
@protocol OS_dispatch_source;

@interface SATVCyclingFooterView : UIView <SATVPulsingAnimationDelegate, TVSKCyclingView>
{
    NSObject<OS_dispatch_source> *_autoAdvanceTimer;	// 8 = 0x8
    double _autoAdvanceInterval;	// 16 = 0x10
    _Bool _manualMode;	// 24 = 0x18
    NSArray *_contentStrings;	// 32 = 0x20
    NSArray *_languageCodes;	// 40 = 0x28
    SATVPulsingFooterView *_firstPulsingFooterView;	// 48 = 0x30
    SATVPulsingFooterView *_secondPulsingFooterView;	// 56 = 0x38
    SATVFooterView *_manualFooterView;	// 64 = 0x40
    unsigned long long _currentStringIndex;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100019d78
@property(nonatomic) _Bool manualMode; // @synthesize manualMode=_manualMode;
@property(nonatomic) unsigned long long currentStringIndex; // @synthesize currentStringIndex=_currentStringIndex;
@property(retain, nonatomic) SATVFooterView *manualFooterView; // @synthesize manualFooterView=_manualFooterView;
@property(retain, nonatomic) SATVPulsingFooterView *secondPulsingFooterView; // @synthesize secondPulsingFooterView=_secondPulsingFooterView;
@property(retain, nonatomic) SATVPulsingFooterView *firstPulsingFooterView; // @synthesize firstPulsingFooterView=_firstPulsingFooterView;
@property(retain, nonatomic) NSArray *languageCodes; // @synthesize languageCodes=_languageCodes;
@property(retain, nonatomic) NSArray *contentStrings; // @synthesize contentStrings=_contentStrings;
- (void)didFinishAnimationPulsingAnimation:(id)arg1;	// IMP=0x0000000100019ad8
- (void)setManualAttributedString:(id)arg1;	// IMP=0x00000001000199a8
- (unsigned long long)_nextUniqueStringIndex;	// IMP=0x0000000100019844
- (_Bool)_supportsCycling;	// IMP=0x00000001000197f4
- (void)_stopAutoAdvanceTimer;	// IMP=0x00000001000197b0
- (void)_startAutoAdvanceTimer;	// IMP=0x0000000100019634
- (void)_cycleAtBeginTime:(double)arg1;	// IMP=0x000000010001949c
- (void)cycleAtBeginTime:(double)arg1;	// IMP=0x0000000100019458
- (void)cycleWithInterval:(double)arg1;	// IMP=0x0000000100019440
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000193d8
- (void)layoutSubviews;	// IMP=0x0000000100019330
- (void)dealloc;	// IMP=0x00000001000192dc
- (id)initWithStrings:(id)arg1 languageCodes:(id)arg2;	// IMP=0x0000000100018f3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

