//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _DASMetricRecorder : NSObject
{
}

+ (void)updateAverageForKey:(id)arg1 withNumerator:(double)arg2 withDenominator:(double)arg3;	// IMP=0x0000000100036e10
+ (void)incrementOccurrencesForKeys:(id)arg1 byCounts:(id)arg2;	// IMP=0x0000000100036b38
+ (void)incrementOccurrencesForKey:(id)arg1 byCount:(long long)arg2;	// IMP=0x000000010003693c
+ (void)recordOccurrenceForKey:(id)arg1;	// IMP=0x0000000100036794
+ (void)setValue:(int)arg1 forKey:(id)arg2;	// IMP=0x00000001000366c8
+ (id)metricQueue;	// IMP=0x0000000100036610

@end

