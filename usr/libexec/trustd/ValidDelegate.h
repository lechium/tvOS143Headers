//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSFileHandle, NSString, NSURL;
@protocol OS_dispatch_queue, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface ValidDelegate : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    _Bool _finishedDownloading;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_revDbUpdateQueue;	// 24 = 0x18
    NSObject<OS_os_transaction> *_transaction;	// 32 = 0x20
    NSString *_currentUpdateServer;	// 40 = 0x28
    NSFileHandle *_currentUpdateFile;	// 48 = 0x30
    NSURL *_currentUpdateFileURL;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010001e8c0
@property _Bool finishedDownloading; // @synthesize finishedDownloading=_finishedDownloading;
@property(retain) NSURL *currentUpdateFileURL; // @synthesize currentUpdateFileURL=_currentUpdateFileURL;
@property(retain) NSFileHandle *currentUpdateFile; // @synthesize currentUpdateFile=_currentUpdateFile;
@property(retain) NSString *currentUpdateServer; // @synthesize currentUpdateServer=_currentUpdateServer;
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain) NSObject<OS_dispatch_queue> *revDbUpdateQueue; // @synthesize revDbUpdateQueue=_revDbUpdateQueue;
@property(copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000010001e524
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x000000010001e2e4
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010001dd3c
- (long long)versionFromTask:(id)arg1;	// IMP=0x000000010001dce0
- (void)updateDb:(unsigned long long)arg1;	// IMP=0x000000010001db14
- (void)reschedule;	// IMP=0x000000010001d928

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

