//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKAccelerometerClient.h"

@interface BKAccelerometerClientBKSAccelerometer : BKAccelerometerClient
{
}

- (void)handleOrientationEvent:(long long)arg1 orientationLocked:(_Bool)arg2;	// IMP=0x000000010002f338
- (void)handleAccelerometerEventWithTimestamp:(double)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4 samplingInterval:(double)arg5;	// IMP=0x000000010002f204
- (void)_queue_invalidate;	// IMP=0x000000010002f1d0
- (_Bool)_deathBySendRight;	// IMP=0x000000010002f1c8
- (_Bool)_deathByPid;	// IMP=0x000000010002f1c0

@end

