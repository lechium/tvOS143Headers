//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADAnalyticsEventRecordBuilder, NSString, SiriCoreSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface ADAnalyticsStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    SiriCoreSQLiteDatabase *_database;	// 16 = 0x10
    ADAnalyticsEventRecordBuilder *_eventRecordBuilder;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000fc188
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void)_countQueuedEventRecordsWithCriteria:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fc050
- (void)countQueuedEventRecordsForDeliveryStream:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fbe3c
- (void)countQueuedEventRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fbd3c
- (id)_fetchEventRecordsCreatedAfterDate:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000fb9d8
- (id)_fetchEventRecords:(unsigned long long)arg1 afterTimestamp:(unsigned long long)arg2 eventStreamUID:(id)arg3 deliveryStream:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x00000001000fb5b8
- (id)_fetchEventStreamUIDsWithError:(id *)arg1;	// IMP=0x00000001000fb2b8
- (_Bool)_purgeDeletedEventRecordsBeforeOrEqualToDate:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000fb014
- (_Bool)_deleteEventRecordsBeforeOrEqualToTimestamp:(unsigned long long)arg1 deliveryStream:(unsigned long long)arg2 eventStreamUID:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000facd0
- (_Bool)_insertEventRecords:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000fa820
- (id)_preparedDatabaseWithError:(id *)arg1;	// IMP=0x00000001000f9260
- (_Bool)_resetForReason:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000f8f4c
- (void)checkpointWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000f8c70
- (void)resetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000f8a34
- (void)purgeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000f85a8
- (void)fetchEventRecordsCreatedAfterDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f8450
- (void)purgeDeletedEventRecordsBeforeOrEqualToDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f8284
- (void)deleteEventRecordsBeforeOrEqualToTimestamp:(unsigned long long)arg1 deliveryStream:(unsigned long long)arg2 eventStreamUID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000f8124
- (void)fetchEventRecords:(unsigned long long)arg1 afterTimestamp:(unsigned long long)arg2 eventStreamUID:(id)arg3 deliveryStream:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001000f7fa0
- (void)fetchEventStreamUIDsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000f7e88
- (void)insertEventRecords:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f7c84
- (id)initWithPath:(id)arg1;	// IMP=0x00000001000f7b94
- (void)dealloc;	// IMP=0x00000001000f7b40

@end

