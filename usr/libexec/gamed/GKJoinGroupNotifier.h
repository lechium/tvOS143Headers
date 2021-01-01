//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKJoinGroup, NSError, NSLock, NSMutableArray;

@interface GKJoinGroupNotifier : NSObject
{
    GKJoinGroup *_group;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
    NSMutableArray *_updateQueue;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010009bcf0
@property(retain, nonatomic) NSMutableArray *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(retain) NSLock *lock; // @synthesize lock=_lock;
@property(nonatomic) __weak GKJoinGroup *group; // @synthesize group=_group;
- (void)setResult:(CDUnknownBlockType)arg1 error:(id)arg2;	// IMP=0x000000010009bb2c
@property(retain) NSError *error; // @synthesize error=_error;
- (oneway void)release;	// IMP=0x000000010009b9f0
- (id)retain;	// IMP=0x000000010009b954
- (void)dealloc;	// IMP=0x000000010009b8f0
- (id)init;	// IMP=0x000000010009b888

@end

