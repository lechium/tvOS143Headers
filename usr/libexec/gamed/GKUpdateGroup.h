//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSLock, NSMutableArray, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface GKUpdateGroup : NSObject
{
    NSObject<OS_dispatch_queue> *_targetQueue;	// 8 = 0x8
    NSMutableArray *_notifiers;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_dispatchGroup;	// 24 = 0x18
    NSLock *_lock;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
}

+ (id)updateGroupWithName:(id)arg1 taregetQueue:(id)arg2;	// IMP=0x0000000100135fcc
+ (id)updateGroupForTargetQueue:(id)arg1;	// IMP=0x0000000100135f94
+ (id)updateGroupWithName:(id)arg1;	// IMP=0x0000000100135f58
+ (id)updateGroup;	// IMP=0x0000000100135f28
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableArray *notifiers; // @synthesize notifiers=_notifiers;
@property(retain) NSLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) long long updateCount;
- (void)cancelUpdates;	// IMP=0x0000000100136610
- (void)applyUpdates;	// IMP=0x000000010013639c
- (void)wait;	// IMP=0x0000000100136390
- (void)joinAndApplyUpdates;	// IMP=0x0000000100136378
- (void)joinApplyUpdatesAndDo:(CDUnknownBlockType)arg1;	// IMP=0x00000001001362d8
- (void)join:(CDUnknownBlockType)arg1;	// IMP=0x000000010013623c
- (void)perform:(CDUnknownBlockType)arg1;	// IMP=0x0000000100136224
- (void)performOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100136130
- (void)dealloc;	// IMP=0x00000001001360c0
- (id)initWithName:(id)arg1 targetQueue:(id)arg2;	// IMP=0x0000000100136008

@end
