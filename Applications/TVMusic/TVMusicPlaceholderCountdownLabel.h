//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVMusicLyricsLineLabel.h"

@class NSArray;

@interface TVMusicPlaceholderCountdownLabel : TVMusicLyricsLineLabel
{
    NSArray *_labels;	// 8 = 0x8
    _Bool _rightToLeft;	// 16 = 0x10
    double _progress;	// 24 = 0x18
    double _progressAlpha;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000d5a4c
@property(nonatomic) _Bool rightToLeft; // @synthesize rightToLeft=_rightToLeft;
@property(nonatomic) double progressAlpha; // @synthesize progressAlpha=_progressAlpha;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)layoutSubviews;	// IMP=0x00000001000d585c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000d56d8
- (void)setTextColor:(id)arg1;	// IMP=0x00000001000d5588
- (void)_setProgress:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000d5288
- (id)init;	// IMP=0x00000001000d4f24

@end

