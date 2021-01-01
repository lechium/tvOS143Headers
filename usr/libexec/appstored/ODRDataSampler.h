//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer;

@interface ODRDataSampler : NSObject
{
    NSTimer *_timer;	// 8 = 0x8
    NSMutableArray *_samples;	// 16 = 0x10
    _Bool _isRunning;	// 24 = 0x18
    double _samplingInterval;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100135688
@property(readonly) double samplingInterval; // @synthesize samplingInterval=_samplingInterval;
- (id)currentStatsString;	// IMP=0x00000001001355b0
- (id)max;	// IMP=0x000000010013553c
- (id)min;	// IMP=0x00000001001354c8
- (id)average;	// IMP=0x0000000100135454
- (id)takeSample;	// IMP=0x000000010013544c
- (void)_recordSample;	// IMP=0x0000000100135354
- (void)stop;	// IMP=0x0000000100135318
- (void)start;	// IMP=0x00000001001352b0
- (id)initWithSamplingRate:(double)arg1;	// IMP=0x0000000100135238

@end
