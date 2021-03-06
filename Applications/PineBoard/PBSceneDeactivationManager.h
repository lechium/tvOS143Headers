//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplicationSceneDeactivationManager.h>

@class BSEventQueue, BSMutableIntegerMap;

@interface PBSceneDeactivationManager : UIApplicationSceneDeactivationManager
{
    BSEventQueue *_eventQueue;	// 8 = 0x8
    BSMutableIntegerMap *_layoutLevelAssertions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001176d8
@property(retain, nonatomic) BSMutableIntegerMap *layoutLevelAssertions; // @synthesize layoutLevelAssertions=_layoutLevelAssertions;
@property(readonly, nonatomic) BSEventQueue *eventQueue; // @synthesize eventQueue=_eventQueue;
- (void)_removeAndRelinquishDeactivationAssertionsAtLevel:(long long)arg1;	// IMP=0x00000001001175d8
- (void)_addAndAcquireDeactivationAssertionsWithContext:(id)arg1;	// IMP=0x000000010011732c
- (void)_relinquishDeactivationAssertionsAtLevel:(long long)arg1;	// IMP=0x0000000100117090
- (void)_acquireDeactivationAssertionsAtLevel:(long long)arg1;	// IMP=0x0000000100116c7c
- (id)acquireQueueLockWithReason:(id)arg1;	// IMP=0x0000000100116be8
- (void)removeAndRelinquishDeactivationAssertionsAtLevel:(long long)arg1;	// IMP=0x00000001001169b0
- (void)addAndAcquireDeactivationAssertionsWithContext:(id)arg1;	// IMP=0x0000000100116728
- (void)relinquishDeactivationAssertionsAtLevel:(long long)arg1;	// IMP=0x00000001001164f0
- (void)acquireDeactivationAssertionsAtLevel:(long long)arg1;	// IMP=0x00000001001162b8
- (id)init;	// IMP=0x0000000100116154

@end

