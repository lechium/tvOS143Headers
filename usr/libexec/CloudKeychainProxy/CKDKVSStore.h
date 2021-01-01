//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKDStore-Protocol.h"

@class NSString, NSUbiquitousKeyValueStore, UbiqitousKVSProxy;
@protocol OS_dispatch_queue;

@interface CKDKVSStore : NSObject <CKDStore>
{
    UbiqitousKVSProxy *_proxy;	// 8 = 0x8
    NSUbiquitousKeyValueStore *_cloudStore;	// 16 = 0x10
    struct CKDKVSCounters *_perfCounters;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_perfQueue;	// 32 = 0x20
}

+ (id)kvsInterface;	// IMP=0x000000010000cc24
- (void).cxx_destruct;	// IMP=0x000000010000bdac
@property(retain) NSObject<OS_dispatch_queue> *perfQueue; // @synthesize perfQueue=_perfQueue;
@property struct CKDKVSCounters *perfCounters; // @synthesize perfCounters=_perfCounters;
@property(retain) NSUbiquitousKeyValueStore *cloudStore; // @synthesize cloudStore=_cloudStore;
@property __weak UbiqitousKVSProxy *proxy; // @synthesize proxy=_proxy;
- (void)addOneToOutGoing;	// IMP=0x000000010000bcd4
- (void)setupSamplers;	// IMP=0x000000010000bc28
- (void)perfCounters:(CDUnknownBlockType)arg1;	// IMP=0x000000010000bb74
- (_Bool)pullUpdates:(id *)arg1;	// IMP=0x000000010000b910
- (void)kvsStoreChanged:(id)arg1;	// IMP=0x000000010000b884
- (void)kvsStoreChangedAsync:(id)arg1;	// IMP=0x000000010000b6e8
- (void)pushWrites:(id)arg1 requiresForceSync:(_Bool)arg2;	// IMP=0x000000010000b374
- (void)forceSynchronizeWithKVS;	// IMP=0x000000010000b250
- (void)removeAllObjects;	// IMP=0x000000010000b164
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000010000b0f8
- (id)objectForKey:(id)arg1;	// IMP=0x000000010000b078
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000010000b018
- (id)copyAsDictionary;	// IMP=0x000000010000afc4
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010000af3c
- (void)connectToProxy:(id)arg1;	// IMP=0x000000010000aec8
- (void)dealloc;	// IMP=0x000000010000ae7c
- (id)init;	// IMP=0x000000010000ad08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

