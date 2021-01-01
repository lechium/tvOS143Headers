//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer;

@interface APSOutgoingQueue : NSObject
{
    NSMutableArray *_queue;	// 8 = 0x8
    NSTimer *_timer;	// 16 = 0x10
    double _lastReceivedAckOrReconnect;	// 24 = 0x18
    void *_powerAssertion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100079868
- (void)_timerFired:(id)arg1;	// IMP=0x000000010007947c
- (void)_recalculatePowerAssertion;	// IMP=0x000000010007922c
- (void)_recalculateTimer;	// IMP=0x0000000100078e38
- (void)_queueChanged;	// IMP=0x0000000100078be8
- (void)handleConnectionClosedOnInterface:(long long)arg1;	// IMP=0x00000001000789e4
- (void)handleConnectionOpened;	// IMP=0x00000001000789a4
- (void)handleResponseForPendingItem:(id)arg1 error:(id)arg2 onInterface:(long long)arg3;	// IMP=0x0000000100078704
- (void)enqueueSendBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100078548
- (void)dealloc;	// IMP=0x00000001000784fc

@end

