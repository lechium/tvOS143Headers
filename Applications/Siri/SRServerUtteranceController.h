//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIAceObjectViewController.h>

@class NSString, SRServerUtteranceView;

@interface SRServerUtteranceController : SiriUIAceObjectViewController
{
    SRServerUtteranceView *_utteranceView;	// 8 = 0x8
    NSString *_utterance;	// 16 = 0x10
    NSString *_utterancePrefix;	// 24 = 0x18
    _Bool _isTip;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100074f10
- (double)_insertionAnimatedZPosition;	// IMP=0x0000000100074efc
- (long long)_replacementAnimation;	// IMP=0x0000000100074ef4
- (long long)_insertionAnimation;	// IMP=0x0000000100074eec
- (long long)_pinAnimationType;	// IMP=0x0000000100074ee4
- (_Bool)_shouldSkipAnimationsInAlternateSpeeds;	// IMP=0x0000000100074edc
- (double)_scaledTopPadding;	// IMP=0x0000000100074e78
- (double)_extendedTopPadding;	// IMP=0x0000000100074dd0
- (double)baselineOffsetFromBottom;	// IMP=0x0000000100074db8
- (double)desiredTopPaddingBelowController:(id)arg1;	// IMP=0x0000000100074ca4
- (double)desiredHeightForWidth:(double)arg1;	// IMP=0x0000000100074c40
- (id)description;	// IMP=0x0000000100074bb8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100074ac4
- (void)loadView;	// IMP=0x00000001000747e4
- (void)_loadFromObject:(id)arg1;	// IMP=0x00000001000745a8
- (void)setAceObject:(id)arg1;	// IMP=0x0000000100074508

@end

