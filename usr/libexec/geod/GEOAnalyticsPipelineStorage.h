//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, geo_isolater;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GEOAnalyticsPipelineStorage : NSObject
{
    NSMutableArray *_batchQueue;	// 8 = 0x8
    unsigned long long _batchQueueMaxSize;	// 16 = 0x10
    unsigned long long _batchQueueFlushTime;	// 24 = 0x18
    geo_isolater *_batchQueueLock;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_batchQueueSpoolTimer;	// 40 = 0x28
    id _batchQueueSpoolTransaction;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_storageQueue;	// 56 = 0x38
}

+ (id)sharedStorage;	// IMP=0x000000010000b1d0
- (void).cxx_destruct;	// IMP=0x000000010000d960
- (void)_writeLogMsgQueueElems:(id)arg1;	// IMP=0x000000010000d228
- (void)_spoolQueueToDB;	// IMP=0x000000010000d054
- (void)_clearQueueFlushTransaction;	// IMP=0x000000010000d01c
- (void)_setQueueFlushTransaction;	// IMP=0x000000010000cf84
- (void)_terminationRequested:(id)arg1;	// IMP=0x000000010000ce7c
- (void)_storeQueueElem:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010000cc84
- (void)storeDailySettingsStates:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010000cb30
- (void)storeCuratedCollectionActionType:(unsigned long long)arg1 collectionId:(unsigned long long)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010000c97c
- (void)storeDailyUsageActionType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000010000c1f4
- (void)storeMapKitCount:(int)arg1 appId:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010000bfc8
- (void)storeLogMsg:(id)arg1 ofType:(int)arg2 handlingPolicyId:(int)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000010000b520
- (id)init;	// IMP=0x000000010000b23c

@end

