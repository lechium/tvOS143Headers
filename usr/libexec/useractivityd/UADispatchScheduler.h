//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface UADispatchScheduler : NSObject
{
    double _frequency;	// 8 = 0x8
    unsigned long long _runCount;	// 16 = 0x10
    unsigned long long _nextTime;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_source;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_executingGroup;	// 48 = 0x30
    NSString *_name;	// 56 = 0x38
    CDUnknownBlockType _block;	// 64 = 0x40
}

+ (id)dispatchScheduler:(id)arg1 frequency:(double)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000010002c090
- (void).cxx_destruct;	// IMP=0x000000010002cff0
@property(readonly, retain) CDUnknownBlockType block; // @synthesize block=_block;
@property double frequency; // @synthesize frequency=_frequency;
@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly, retain) NSObject<OS_dispatch_group> *executingGroup; // @synthesize executingGroup=_executingGroup;
@property(readonly, retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, retain) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property(readonly) unsigned long long nextTime; // @synthesize nextTime=_nextTime;
@property(readonly) unsigned long long runCount; // @synthesize runCount=_runCount;
- (id)nextRunTimeString;	// IMP=0x000000010002cf68
- (void)waitUntilComplete;	// IMP=0x000000010002cef4
- (void)suspend;	// IMP=0x000000010002ce8c
- (void)resume;	// IMP=0x000000010002ce54
- (void)reset;	// IMP=0x000000010002cc78
- (void)updateFrequency:(double)arg1;	// IMP=0x000000010002ca80
- (void)_doIt;	// IMP=0x000000010002c7a8
- (void)doIt;	// IMP=0x000000010002c71c
- (_Bool)scheduleAt:(id)arg1;	// IMP=0x000000010002c6a0
- (_Bool)scheduleNext:(double)arg1;	// IMP=0x000000010002c158
- (id)init:(id)arg1 frequency:(double)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000010002bd5c

@end

