//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DirectUploadSessionDelegate-Protocol.h"
#import "MediaSocialAuthenticationDelegate-Protocol.h"
#import "MediaSocialErrorDelegate-Protocol.h"
#import "MediaSocialStatusPollingDelegate-Protocol.h"

@class DirectUploadSessionController, ISOperationQueue, MediaSocialAuthenticationCoordinator, MediaSocialErrorCoordinator, MediaSocialStatusPollingCoordinator, NSMutableArray, NSMutableDictionary, NSString, SSSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface DirectUploadController : NSObject <DirectUploadSessionDelegate, MediaSocialAuthenticationDelegate, MediaSocialErrorDelegate, MediaSocialStatusPollingDelegate>
{
    MediaSocialAuthenticationCoordinator *_authenticationCoordinator;	// 8 = 0x8
    id _backgroundTaskObserver;	// 16 = 0x10
    NSMutableArray *_clients;	// 24 = 0x18
    SSSQLiteDatabase *_database;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    MediaSocialErrorCoordinator *_errorCoordinator;	// 48 = 0x30
    MediaSocialStatusPollingCoordinator *_pollingCoordinator;	// 56 = 0x38
    ISOperationQueue *_postOperationQueue;	// 64 = 0x40
    NSMutableDictionary *_progressDictionary;	// 72 = 0x48
    DirectUploadSessionController *_sessionController;	// 80 = 0x50
}

+ (void)_setupDatabase:(id)arg1;	// IMP=0x0000000100060450
+ (void)_sendAccessDeniedErrorWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100060220
+ (id)_orderedUploadQueryWithDatabase:(id)arg1 predicate:(id)arg2;	// IMP=0x000000010006011c
+ (id)_orderedPostQueryWithDatabase:(id)arg1 predicate:(id)arg2;	// IMP=0x0000000100060018
+ (_Bool)_isConnectionEntitled:(id)arg1;	// IMP=0x000000010005ffb4
+ (id)_copyPersistentIdentifiersArrayWithXPCArray:(id)arg1;	// IMP=0x000000010005fe84
+ (void)resumeUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010005cb24
+ (void)registerObserverWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010005c9d8
+ (void)pauseUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010005c5cc
+ (void)observeXPCServer:(id)arg1;	// IMP=0x000000010005c504
+ (void)getUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010005c1ac
+ (void)cancelUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010005bcb4
+ (id)sharedController;	// IMP=0x000000010005ad00
- (void).cxx_destruct;	// IMP=0x0000000100065a84
- (id)_sessionController;	// IMP=0x0000000100065a1c
- (void)_sendRemoveUploadsMessageWithUploadIdentifiers:(id)arg1;	// IMP=0x0000000100065874
- (void)_sendChangeUploadsMessageWithUploads:(id)arg1;	// IMP=0x00000001000656cc
- (void)_retryFailedEntities;	// IMP=0x000000010006505c
- (_Bool)_resumeUploadsWithPredicate:(id)arg1 clientIdentifier:(id)arg2 resetFailureCount:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000100064954
- (void)_registerObserverWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010006446c
- (id)_postOperationQueue;	// IMP=0x00000001000643fc
- (id)_pollingCoordinator;	// IMP=0x0000000100064394
- (_Bool)_pauseUploadsWithPredicate:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100063df4
- (void)_operationDidFinishForPostIdentifier:(long long)arg1 response:(id)arg2;	// IMP=0x0000000100062fa0
- (id)_newSSVDirectUploadWithProgress:(id)arg1 state:(long long)arg2;	// IMP=0x0000000100062ecc
- (id)_newAddUploadsMessageWithDatabase:(id)arg1 hydratedUploadIDs:(id)arg2;	// IMP=0x0000000100062bd4
- (id)_errorCoordinator;	// IMP=0x0000000100062b6c
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100062974
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100062848
- (void)_finishPostWithPostIdentifier:(long long)arg1 response:(id)arg2;	// IMP=0x0000000100062288
- (void)_enumerateSSVDirectUploadsWithQuery:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001000620d0
- (void)_enqueueNextReadyMediaSocialPostOperationWithDatabase:(id)arg1;	// IMP=0x0000000100061b28
- (id)_databaseIfExists;	// IMP=0x0000000100061a6c
- (id)_database;	// IMP=0x0000000100061914
- (void)_cleanupPendingUploads:(id)arg1 database:(id)arg2;	// IMP=0x0000000100060e48
- (void)_cleanupSessionController;	// IMP=0x0000000100060de0
- (_Bool)_cancelUploadsWithPredicate:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100060584
- (id)_authenticationCoordinator;	// IMP=0x000000010006051c
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x000000010005fb0c
- (void)pollingCoordinator:(id)arg1 didPollWithResponses:(id)arg2;	// IMP=0x000000010005f6e8
- (void)mediaSocialErrorCoordinator:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x000000010005e6f8
- (void)authenticationCoordinator:(id)arg1 didFinishAuthenticationWithResponse:(id)arg2;	// IMP=0x000000010005dc60
- (void)uploadSessionController:(id)arg1 uploadProgressDidChange:(id)arg2;	// IMP=0x000000010005da2c
- (void)uploadSessionController:(id)arg1 uploadDidFinishWithDatabaseID:(long long)arg2 response:(id)arg3;	// IMP=0x000000010005d7a4
- (void)uploadSessionController:(id)arg1 uploadDidFailWithDatabaseID:(long long)arg2 error:(id)arg3;	// IMP=0x000000010005d128
- (void)uploadSessionController:(id)arg1 uploadDidBeginTransferWithDatabaseID:(long long)arg2;	// IMP=0x000000010005cf40
- (void)uploadSessionController:(id)arg1 taskDidStopWithDatabaseID:(long long)arg2;	// IMP=0x000000010005cf34
- (void)start;	// IMP=0x000000010005b8a0
- (void)addMediaSocialPostWithDescription:(id)arg1 client:(id)arg2;	// IMP=0x000000010005ad9c
- (void)dealloc;	// IMP=0x000000010005abe8
- (id)init;	// IMP=0x000000010005ab80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

