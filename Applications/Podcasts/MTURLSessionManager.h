//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTSingleton.h"

#import "NSURLSessionDownloadDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSObject, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface MTURLSessionManager : MTSingleton <NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate>
{
    CDUnknownBlockType _sessionCompletionHandler;	// 8 = 0x8
    NSURLSession *_sessionForForegroundDownloads;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_startQueue;	// 24 = 0x18
    NSURLSession *_sessionForBackgroundDownloads;	// 32 = 0x20
}

+ (void)purgeExternalCookies;	// IMP=0x0000000100135f10
+ (id)originalURLForTask:(id)arg1;	// IMP=0x0000000100135e5c
+ (long long)statusCodeForTask:(id)arg1;	// IMP=0x0000000100135e0c
- (void).cxx_destruct;	// IMP=0x0000000100136248
@property(retain, nonatomic) NSURLSession *sessionForBackgroundDownloads; // @synthesize sessionForBackgroundDownloads=_sessionForBackgroundDownloads;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *startQueue; // @synthesize startQueue=_startQueue;
@property(retain, nonatomic) NSURLSession *sessionForForegroundDownloads; // @synthesize sessionForForegroundDownloads=_sessionForForegroundDownloads;
- (_Bool)_subclassImplementsInstanceMethod:(SEL)arg1;	// IMP=0x0000000100135eb4
- (_Bool)_subclassImplementsDidFailWithError;	// IMP=0x0000000100135df8
- (void)task:(id)arg1 didFailWithError:(id)arg2 orStatusCode:(long long)arg3;	// IMP=0x0000000100135df4
- (_Bool)_subclassImplementsDataDidDownload;	// IMP=0x0000000100135de0
- (void)task:(id)arg1 didCompleteWithData:(id)arg2;	// IMP=0x0000000100135ddc
- (_Bool)_subclassImplementsURLDidDownload;	// IMP=0x0000000100135dc8
- (void)task:(id)arg1 didCompleteWithDownloadedContentUrl:(id)arg2;	// IMP=0x0000000100135dc4
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;	// IMP=0x0000000100135c04
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x0000000100135a3c
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000100135618
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100134e5c
- (void)_showCredentialsActionControllerForHost:(id)arg1 signIn:(CDUnknownBlockType)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x000000010013476c
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100133db0
@property(copy, nonatomic) CDUnknownBlockType sessionCompletionHandler; // @synthesize sessionCompletionHandler=_sessionCompletionHandler;
- (void)startDownloadTaskForURL:(id)arg1 userInitiated:(_Bool)arg2 useBackgroundFetch:(_Bool)arg3 usePrivatePath:(id)arg4;	// IMP=0x0000000100133868
- (_Bool)_subclassImplementsConfigureSession;	// IMP=0x0000000100133854
- (void)configureSession:(id)arg1;	// IMP=0x0000000100133850
- (id)sessionForConfiguration:(id)arg1;	// IMP=0x0000000100133600
- (void)loadSessionsIfNeeded;	// IMP=0x00000001001333dc
- (void)_assertSubclassRequirements;	// IMP=0x000000010013327c
- (id)init;	// IMP=0x00000001001331b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

