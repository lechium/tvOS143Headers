//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface AKCAReporter : NSObject
{
    NSString *_eventName;	// 8 = 0x8
    NSMutableDictionary *_reportData;	// 16 = 0x10
    unsigned long long _initTime;	// 24 = 0x18
    struct mach_timebase_info _clock_timebase;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100020740
- (double)machAbsoluteTimeToTimeInterval:(unsigned long long)arg1;	// IMP=0x0000000100020720
- (void)sendReport;	// IMP=0x0000000100020608
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000001000205b8
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000001000205a8
- (id)initWithEvent:(id)arg1;	// IMP=0x00000001000204b4

@end
