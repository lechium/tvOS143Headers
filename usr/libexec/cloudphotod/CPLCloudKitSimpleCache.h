//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CPLCloudKitSimpleCache : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_storage;	// 16 = 0x10
    NSMutableArray *_orderedEntries;	// 24 = 0x18
    unsigned long long _hitCount;	// 32 = 0x20
    unsigned long long _missCount;	// 40 = 0x28
    double _leewayInterval;	// 48 = 0x30
    unsigned long long _maximumCapacity;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001000dadb4
@property(readonly, nonatomic) unsigned long long maximumCapacity; // @synthesize maximumCapacity=_maximumCapacity;
@property(readonly, nonatomic) double leewayInterval; // @synthesize leewayInterval=_leewayInterval;
@property(readonly) NSString *status;
- (void)clear;	// IMP=0x00000001000dab38
- (void)setObject:(id)arg1 forKey:(id)arg2 expirationDate:(id)arg3 date:(id)arg4;	// IMP=0x00000001000da7bc
- (id)objectForKey:(id)arg1 date:(id)arg2 expirationDate:(id *)arg3;	// IMP=0x00000001000da54c
- (void)_removeFirstEntriesCount:(unsigned long long)arg1;	// IMP=0x00000001000da450
- (void)_removeExpiredEntriesLockedForNow:(id)arg1;	// IMP=0x00000001000da248
@property(readonly) unsigned long long missCount;
@property(readonly) unsigned long long hitCount;
- (unsigned long long)expiredCountWithDate:(id)arg1;	// IMP=0x00000001000da018
- (unsigned long long)_expiredCountLockedWithDate:(id)arg1;	// IMP=0x00000001000d9ee4
@property(readonly) unsigned long long count;
- (id)initWithLeewayInterval:(double)arg1 maximumCapacity:(unsigned long long)arg2;	// IMP=0x00000001000d9d34

@end

