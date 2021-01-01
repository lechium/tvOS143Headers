//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionTaskDelegate-Protocol.h"

@class ISOperationQueue, NSMutableArray, NSString;
@protocol DirectUploadSessionDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface DirectUploadSessionController : NSObject <NSURLSessionTaskDelegate>
{
    id <DirectUploadSessionDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    ISOperationQueue *_preparationQueue;	// 24 = 0x18
    NSMutableArray *_progress;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_progressFlushTimer;	// 40 = 0x28
    NSMutableArray *_sessions;	// 48 = 0x30
    NSMutableArray *_uploadDatabaseIDs;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100059978
@property(nonatomic) __weak id <DirectUploadSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_flushProgress;	// IMP=0x0000000100059500
- (void)_failUploadWithDatabaseID:(id)arg1 error:(id)arg2;	// IMP=0x0000000100059438
- (void)_cleanupForDatabaseID:(id)arg1;	// IMP=0x0000000100059310
- (void)_asyncModifyTasksForDatabaseIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100058f40
- (void)_addUploadTaskWithRequest:(id)arg1 configuration:(id)arg2 URLRequest:(id)arg3;	// IMP=0x0000000100058a74
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000588f4
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x0000000100058508
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000100057c30
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000578f4
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00000001000577e0
- (void)pauseUploadTasksWithDatabaseIdentifiers:(id)arg1;	// IMP=0x000000010005751c
@property(readonly, nonatomic) long long numberOfTasks;
- (void)invalidURLSessions;	// IMP=0x00000001000573e4
- (void)cancelUploadTasksWithDatabaseIdentifiers:(id)arg1;	// IMP=0x0000000100057120
- (void)addUploadTasksWithRequests:(id)arg1;	// IMP=0x0000000100056884
- (void)dealloc;	// IMP=0x0000000100056800
- (id)initWithDispatchQueue:(id)arg1;	// IMP=0x0000000100056708

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
