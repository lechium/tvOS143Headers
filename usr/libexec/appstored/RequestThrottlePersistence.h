//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;
@protocol OS_dispatch_source;

@interface RequestThrottlePersistence : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSMutableDictionary *_records;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_timer;	// 32 = 0x20
}

+ (_Bool)_writeRecords:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000010000f9d8
+ (id)_readRecordsFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000f8f0
+ (_Bool)_deleteRecordsAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000f86c
- (void).cxx_destruct;	// IMP=0x00000001000101e8
- (void)_writeRecords;	// IMP=0x0000000100010048
- (void)_readRecords;	// IMP=0x000000010000fd58
- (void)_deleteRecords;	// IMP=0x000000010000fc14
- (void)_dirtyRecords;	// IMP=0x000000010000fa8c
- (void)filterRecordsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010000f6ac
- (id)fetchRecordForItemID:(id)arg1;	// IMP=0x000000010000f62c
- (void)deleteRecords;	// IMP=0x000000010000f5e0
- (_Bool)deleteRecordForItemID:(id)arg1;	// IMP=0x000000010000f530
- (void)addRecord:(id)arg1;	// IMP=0x000000010000f46c
- (id)initWithURL:(id)arg1;	// IMP=0x000000010000f3e0
- (id)initWithPath:(id)arg1;	// IMP=0x000000010000f380

@end

