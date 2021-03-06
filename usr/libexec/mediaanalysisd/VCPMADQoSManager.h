//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VCPTimeMeasurement;

@interface VCPMADQoSManager : NSObject
{
    struct atomic<bool> _enabled;	// 8 = 0x8
    VCPTimeMeasurement *_timer;	// 16 = 0x10
    struct mach_timebase_info _timebase;	// 24 = 0x18
}

+ (unsigned int)_currentQoSWithTaskID:(unsigned long long)arg1;	// IMP=0x0000000100036d64
+ (id)sharedManager;	// IMP=0x0000000100036378
- (void).cxx_destruct;	// IMP=0x0000000100037390
- (void)runBlock:(CDUnknownBlockType)arg1 withTaskID:(unsigned long long)arg2;	// IMP=0x000000010003736c
- (void)disable;	// IMP=0x000000010003731c
- (void)enable;	// IMP=0x00000001000372c4
- (void)_reportDelayForQoS:(unsigned int)arg1 withTaskID:(unsigned long long)arg2;	// IMP=0x0000000100036a6c
- (void)_reportQoSChange:(unsigned int)arg1 withTaskID:(unsigned long long)arg2;	// IMP=0x00000001000366cc
- (void)_reportStartingQoS:(unsigned int)arg1 withTaskID:(unsigned long long)arg2;	// IMP=0x00000001000363e4
- (id)init;	// IMP=0x00000001000362e0

@end

