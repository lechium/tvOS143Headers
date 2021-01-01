//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PDXPCEventStreamsManager : NSObject
{
    unsigned long long _pauseCounter;	// 8 = 0x8
    NSMutableDictionary *_streamToStreamManagerMap;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_stateQueue;	// 24 = 0x18
}

+ (id)eventStreamManager;	// IMP=0x000000010002f49c
- (void).cxx_destruct;	// IMP=0x000000010002fe7c
- (id)_managerForEventStream:(id)arg1;	// IMP=0x000000010002fdd8
- (void)unregisterObserver:(id)arg1 forEventStream:(id)arg2;	// IMP=0x000000010002fc58
- (void)registerObserver:(id)arg1 forEventStream:(id)arg2 withReplyQueue:(id)arg3;	// IMP=0x000000010002fa30
- (void)registerObserver:(id)arg1 forEventStream:(id)arg2;	// IMP=0x000000010002f9dc
- (void)beginEventDelivery;	// IMP=0x000000010002f7a0
- (void)pauseEventDelivery;	// IMP=0x000000010002f678
- (void)registerForLaunchEvents;	// IMP=0x000000010002f5b8
- (id)_init;	// IMP=0x000000010002f52c
- (id)init;	// IMP=0x000000010002f514

@end
