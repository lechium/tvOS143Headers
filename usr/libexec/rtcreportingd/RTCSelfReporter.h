//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, ReportingdAgent;
@protocol OS_dispatch_queue;

@interface RTCSelfReporter : NSObject
{
    NSMutableDictionary *_performanceData;	// 8 = 0x8
    NSMutableDictionary *_internalState;	// 16 = 0x10
    ReportingdAgent *_agent;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_reportQueue;	// 32 = 0x20
    int _numberOfPOSTFailures;	// 40 = 0x28
    int _numberOfStorebagDownloadFailures;	// 44 = 0x2c
    int _numberOfStorebagReadFailures;	// 48 = 0x30
    int _numberOfStorebagWriteFailures;	// 52 = 0x34
    int _numberOfStorebagValidationFailures;	// 56 = 0x38
    int _numberOfStorebagDownloadSuccess;	// 60 = 0x3c
    int _numberOfStorebagFetchSkippedForError;	// 64 = 0x40
    int _numberOfSuccessfulPOSTs;	// 68 = 0x44
    int _numberOfCoreDuetNRMWakeUps;	// 72 = 0x48
    int _numberOfCoreDuetPRTWakeUps;	// 76 = 0x4c
    int _numberOfCoreDuetARTWakeUps;	// 80 = 0x50
    int _bytesFailed;	// 84 = 0x54
    int _bytesSucceeded;	// 88 = 0x58
    int _numFailedDiskCacheWrite;	// 92 = 0x5c
    int _numSuccessfulDiskCacheWrite;	// 96 = 0x60
    int _numEventsNRM;	// 100 = 0x64
    int _numEventsPRT;	// 104 = 0x68
    int _numEventsART;	// 108 = 0x6c
    int _numLostEventsNRM;	// 112 = 0x70
    int _numLostEventsPRT;	// 116 = 0x74
    int _numLostEventsART;	// 120 = 0x78
    int _lostEventsNRM;	// 124 = 0x7c
    int _lostEventsPRT;	// 128 = 0x80
    int _lostEventsART;	// 132 = 0x84
}

- (void)reportSession:(id)arg1 type:(int)arg2;	// IMP=0x00000001000191c8
- (void)sendDupeEventFor:(id)arg1 serviceName:(id)arg2 clientType:(id)arg3 eventTime:(id)arg4 sessionID:(id)arg5;	// IMP=0x0000000100019100
- (void)sendFailureSummary:(id)arg1 forType:(int)arg2;	// IMP=0x0000000100018fa0
- (void)sendFailureSummary:(id)arg1;	// IMP=0x0000000100018f54
- (void)addFailure:(int)arg1 forPrefix:(id)arg2 withPayload:(id)arg3;	// IMP=0x0000000100018e08
- (void)sendDailySummary;	// IMP=0x0000000100018d44
- (void)resetData;	// IMP=0x0000000100018d24
- (void)updatePerformanceData;	// IMP=0x0000000100018a48
- (void)updateFromDisk;	// IMP=0x00000001000187f4
- (void)lostEventsForPrefix:(id)arg1 filepath:(id)arg2;	// IMP=0x00000001000186cc
- (void)removeEventForPrefix:(id)arg1 filepath:(id)arg2;	// IMP=0x00000001000185fc
- (void)addEventForPrefix:(id)arg1 filepath:(id)arg2;	// IMP=0x000000010001852c
- (void)successToWriteDiskCache;	// IMP=0x000000010001851c
- (void)failedToWriteDiskCache;	// IMP=0x000000010001850c
- (void)wokeupForPrefix:(id)arg1;	// IMP=0x0000000100018474
- (void)failedToWWriteStorebag;	// IMP=0x0000000100018464
- (void)failedToReadStorebag;	// IMP=0x0000000100018454
- (void)failedStorebagValidation;	// IMP=0x0000000100018444
- (void)skippedStorebagFetchForError;	// IMP=0x0000000100018434
- (void)successfulStorebagFetch;	// IMP=0x0000000100018424
- (void)failedStorebagFetch;	// IMP=0x0000000100018414
- (void)successfulPOST:(int)arg1;	// IMP=0x00000001000183f8
- (void)failedToPOST:(int)arg1;	// IMP=0x00000001000183dc
- (void)readFromDisk;	// IMP=0x0000000100018278
- (void)writeToDisk;	// IMP=0x0000000100018050
- (void)flushOverdue;	// IMP=0x0000000100017f10
- (void)dealloc;	// IMP=0x0000000100017eb4
- (id)initWithAgent:(id)arg1;	// IMP=0x0000000100017d00

@end

