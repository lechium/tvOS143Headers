//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BKDigitizerEventSchedulerBase : NSObject
{
}

- (void)scheduleEvent:(struct __IOHIDEvent *)arg1 fromDigitizer:(struct OpaqueBKDigitizerInfo *)arg2 toClient:(unsigned int)arg3;	// IMP=0x00000001000371b0
- (void)sendEvent:(struct __IOHIDEvent *)arg1 toClient:(unsigned int)arg2;	// IMP=0x000000010003709c
- (void)digitizer:(struct OpaqueBKDigitizerInfo *)arg1 touchingPathMaskDidChange:(unsigned int)arg2;	// IMP=0x0000000100037098

@end

