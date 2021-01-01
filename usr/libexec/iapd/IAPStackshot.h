//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRunLoop;

@interface IAPStackshot : NSObject
{
    NSRunLoop *_stackshotRunLoop;	// 8 = 0x8
    unsigned int _timerID;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001000183d8
- (void)_saveStackshot:(id)arg1;	// IMP=0x00000001000186c0
- (void)_stackshotThread;	// IMP=0x00000001000185f8
- (void)endTimer:(id)arg1;	// IMP=0x00000001000185e8
- (id)startTimer:(double)arg1 withInfo:(id)arg2;	// IMP=0x00000001000184e8
- (void)start;	// IMP=0x00000001000184e4
- (id)init;	// IMP=0x0000000100018464

@end
