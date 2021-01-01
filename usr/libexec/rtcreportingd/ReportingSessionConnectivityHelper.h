//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionStreamDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"
#import "ReportingSessionConnectivityInterface-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSOperationQueue, NSString, NSURLSession;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ReportingSessionConnectivityHelper : NSObject <ReportingSessionConnectivityInterface, NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionStreamDelegate>
{
    NSURLSession *_privateURLSession;	// 8 = 0x8
    id _reportingdSessionDelegate;	// 16 = 0x10
    NSMutableDictionary *_tasks;	// 24 = 0x18
    NSDictionary *_userInfo;	// 32 = 0x20
    int _mode;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_stateQueue;	// 48 = 0x30
    NSOperationQueue *_NSURLDelegateQueue;	// 56 = 0x38
    _Bool _isActive;	// 64 = 0x40
    NSMutableDictionary *_requestInProgress;	// 72 = 0x48
    unsigned int _usageCount;	// 80 = 0x50
    unsigned int _totalSessionsServedCount;	// 84 = 0x54
    unsigned int _releaseTimeout;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_connectivityHelperReleaseTimer;	// 96 = 0x60
    CDUnknownBlockType _connectivityHelperReleaseTimerBlock;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_connectivityHelperReleaseTimerQueue;	// 112 = 0x70
}

+ (int)POSTRequestMode;	// IMP=0x0000000100025650
+ (int)GETRequestMode;	// IMP=0x0000000100025648
+ (_Bool)deleteContainerAtURL:(id)arg1;	// IMP=0x00000001000255f0
+ (id)composeUniqueContainerURL;	// IMP=0x0000000100025550
+ (void)cleanupStorageRootFolder;	// IMP=0x0000000100025458
+ (id)storageRootFolder;	// IMP=0x0000000100025438
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0000000100025c1c
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;	// IMP=0x0000000100025be0
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100025af0
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00000001000258e0
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x00000001000257ec
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x0000000100025658
- (void)getURLRequestWithCompletionHandler:(id)arg1 isUrgent:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100024db4
- (void)postURLRequestWithCompletionHandler:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100024b9c
- (void)createHelperForTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100024a28
- (id)privateURLSessionConfigWithMode:(int)arg1 forBundleID:(id)arg2;	// IMP=0x00000001000248d0
- (void)ownerDecrementUsageCountWithBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x00000001000245c8
- (void)ownerIncrementUsageCount;	// IMP=0x000000010002445c
- (void)incrementTotalSessionsServedCount;	// IMP=0x00000001000243a4
- (void)activate:(unsigned int)arg1 forBundleID:(id)arg2;	// IMP=0x0000000100024020
- (void)setReleaseTimeout:(unsigned int)arg1;	// IMP=0x0000000100023fb4
- (void)stopConnectivityHelperReleaseTimer;	// IMP=0x0000000100023edc
- (void)startConnectivityHelperReleaseTimerWithBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x00000001000238c0
- (void)invalidate;	// IMP=0x0000000100023730
- (void)releaseAllXPCTransactions;	// IMP=0x00000001000236c0
- (void)notifyAllPendingBlocksForURL:(id)arg1 requestData:(id)arg2 response:(id)arg3 error:(id)arg4;	// IMP=0x000000010002357c
- (void)dealloc;	// IMP=0x0000000100023394
- (id)initWithDelegate:(id)arg1 mode:(int)arg2 userInfo:(id)arg3;	// IMP=0x0000000100023250

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
