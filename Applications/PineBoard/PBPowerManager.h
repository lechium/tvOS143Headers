//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBInstanceDependable-Protocol.h"
#import "PBOpenAppTransitionerObserver-Protocol.h"
#import "PBPowerManagementImplementor-Protocol.h"

@class NSMutableArray, NSString;
@protocol PBPowerManagementImplementor;

@interface PBPowerManager : NSObject <PBPowerManagementImplementor, PBOpenAppTransitionerObserver, PBInstanceDependable>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <PBPowerManagementImplementor> _implementor;	// 16 = 0x10
    NSMutableArray *_observerWrappers;	// 24 = 0x18
    NSMutableArray *_liveObservers;	// 32 = 0x20
    unsigned long long _reason;	// 40 = 0x28
    long long _powerState;	// 48 = 0x30
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000422c
+ (id)sharedInstance;	// IMP=0x0000000100003f38
+ (id)dependencyDescription;	// IMP=0x0000000100003d6c
- (void).cxx_destruct;	// IMP=0x00000001000085d8
- (void)powerManagerDidWakeSystem:(id)arg1;	// IMP=0x00000001000084c4
- (void)powerManager:(id)arg1 willWakeSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008020
- (void)powerManagerDidSleepSystem:(id)arg1;	// IMP=0x0000000100007d2c
- (void)powerManager:(id)arg1 willSleepSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007918
- (void)finishInitialization;	// IMP=0x000000010000759c
- (void)_locked_changeStateWithReason:(unsigned long long)arg1;	// IMP=0x00000001000065bc
- (void)_automaticSleepDevice:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005b94
- (id)_stringFromReason:(unsigned long long)arg1;	// IMP=0x0000000100005a94
- (id)_stringFromWakeReason:(long long)arg1;	// IMP=0x0000000100005980
- (id)_stringFromSleepReason:(long long)arg1;	// IMP=0x0000000100005884
- (id)_locked_extractObserverList;	// IMP=0x0000000100005738
- (void)appTransitioner:(id)arg1 willBeginAppTransition:(id)arg2;	// IMP=0x00000001000054e4
- (void)wakeSystemWithReason:(long long)arg1;	// IMP=0x00000001000050d8
- (void)sleepSystemWithReason:(long long)arg1;	// IMP=0x0000000100004c34
- (void)__dumpObservers;	// IMP=0x000000010000485c
- (void)removeObserver:(id)arg1;	// IMP=0x0000000100004634
- (void)addObserver:(id)arg1;	// IMP=0x0000000100004344
- (long long)powerState;	// IMP=0x0000000100004328
- (id)init;	// IMP=0x00000001000042d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
