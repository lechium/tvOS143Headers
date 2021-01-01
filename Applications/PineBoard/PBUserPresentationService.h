//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBDialogManagerObserver-Protocol.h"
#import "PBSUserPresentationServiceInterface-Protocol.h"

@class NSMutableDictionary, NSString, PBSystemServiceConnection;
@protocol OS_dispatch_queue;

@interface PBUserPresentationService : NSObject <PBDialogManagerObserver, PBSUserPresentationServiceInterface>
{
    PBSystemServiceConnection *_remoteConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessQueue;	// 16 = 0x10
    NSMutableDictionary *_queueDialogContextByRequest;	// 24 = 0x18
    NSMutableDictionary *_queueDismissalCompletionByRequest;	// 32 = 0x20
    NSMutableDictionary *_queueViewControllersByRequest;	// 40 = 0x28
    NSMutableDictionary *_queuePendingMessagesByRequest;	// 48 = 0x30
    NSMutableDictionary *_queuePendingMessageRepliesByRequest;	// 56 = 0x38
}

+ (void)_getViewServiceInfoForRequest:(id)arg1 serviceName:(id *)arg2 className:(id *)arg3;	// IMP=0x0000000100171348
- (void).cxx_destruct;	// IMP=0x0000000100173424
@property(readonly, nonatomic) NSMutableDictionary *queuePendingMessageRepliesByRequest; // @synthesize queuePendingMessageRepliesByRequest=_queuePendingMessageRepliesByRequest;
@property(readonly, nonatomic) NSMutableDictionary *queuePendingMessagesByRequest; // @synthesize queuePendingMessagesByRequest=_queuePendingMessagesByRequest;
@property(readonly, nonatomic) NSMutableDictionary *queueViewControllersByRequest; // @synthesize queueViewControllersByRequest=_queueViewControllersByRequest;
@property(readonly, nonatomic) NSMutableDictionary *queueDismissalCompletionByRequest; // @synthesize queueDismissalCompletionByRequest=_queueDismissalCompletionByRequest;
@property(readonly, nonatomic) NSMutableDictionary *queueDialogContextByRequest; // @synthesize queueDialogContextByRequest=_queueDialogContextByRequest;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly, nonatomic) __weak PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (void)_queueCallHandlersForRequest:(id)arg1 withReason:(unsigned long long)arg2 result:(id)arg3 error:(id)arg4;	// IMP=0x0000000100172b7c
- (void)_queueSendPendingMessagesForRequest:(id)arg1;	// IMP=0x0000000100172188
- (void)_callMessageReply:(CDUnknownBlockType)arg1 forRequest:(id)arg2 success:(_Bool)arg3 result:(id)arg4 error:(id)arg5;	// IMP=0x0000000100171c08
- (void)_handleClientDismissalWithContext:(id)arg1 dismissalContext:(id)arg2;	// IMP=0x0000000100171784
- (void)_handleCreatedRemoteViewController:(id)arg1 forRequest:(id)arg2;	// IMP=0x000000010017151c
- (void)dialogManager:(id)arg1 didCancelDialogWithContext:(id)arg2 dismissalContext:(id)arg3;	// IMP=0x000000010017120c
- (void)dialogManager:(id)arg1 willDismissDialogWithContext:(id)arg2 dismissalContext:(id)arg3;	// IMP=0x00000001001710d0
- (void)dismissUIWithRequest:(id)arg1;	// IMP=0x0000000100170b98
- (void)messageUIWithRequest:(id)arg1 message:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100170578
- (void)presentUIWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010016f1e0
- (void)invalidate;	// IMP=0x000000010016eb90
- (void)dealloc;	// IMP=0x000000010016eafc
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x000000010016e814
- (id)init;	// IMP=0x000000010016e7dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

