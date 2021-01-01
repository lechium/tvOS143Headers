//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface NDStatusMonitor : NSObject
{
    struct __CFRunLoopSource *_dynamicStoreSource;	// 8 = 0x8
    NSMutableArray *_blocksToExecuteAfterNetworkChange;	// 16 = 0x10
    unsigned long long _networkChangeEventCount;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    int _symptomToken;	// 40 = 0x28
}

+ (id)sharedMonitor;	// IMP=0x0000000100032c88
- (void).cxx_destruct;	// IMP=0x00000001000329c0
- (void)stop;	// IMP=0x0000000100032994
- (void)start;	// IMP=0x000000010003292c
- (void)stopMonitoringDynamicStore;	// IMP=0x00000001000328f8
- (void)startMonitoringDynamicStore;	// IMP=0x0000000100032600
- (void)handleBetterNetworkEvent;	// IMP=0x0000000100032400
- (void)handleDynamicStoreCallback:(struct __SCDynamicStore *)arg1 changedKeys:(struct __CFArray *)arg2;	// IMP=0x00000001000323fc
- (void)performBlockAfterNetworkChangedEvent:(CDUnknownBlockType)arg1 delay:(long long)arg2;	// IMP=0x0000000100032368
- (void)performBlockAfterNetworkChangedEvent:(CDUnknownBlockType)arg1 numberOfPreviousRetries:(unsigned long long)arg2;	// IMP=0x0000000100032320
- (void)dealloc;	// IMP=0x00000001000322a4
- (id)init;	// IMP=0x00000001000321a0

@end
