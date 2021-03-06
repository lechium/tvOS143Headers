//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class ICDPrivacyPromptOperation, ICMusicSubscriptionStatusResponse, ICURLBag, ICUserIdentity, ICUserIdentityProperties, ICUserIdentityStore, NSError, NSXPCConnection;

@interface ICDCloudServiceCapabilitiesRequestOperation : ICAsyncOperation
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    ICUserIdentity *_identity;	// 16 = 0x10
    ICUserIdentityStore *_identityStore;	// 24 = 0x18
    long long _privacyAcknowledgementPolicy;	// 32 = 0x20
    NSXPCConnection *_originatingClientConnection;	// 40 = 0x28
    CDUnknownBlockType _completionHandler;	// 48 = 0x30
    _Bool _hasInvokedCompletionHandler;	// 56 = 0x38
    _Bool _wasCancelled;	// 57 = 0x39
    ICDPrivacyPromptOperation *_privacyPromptOperation;	// 64 = 0x40
    ICURLBag *_bag;	// 72 = 0x48
    ICUserIdentityProperties *_identityProperties;	// 80 = 0x50
    ICMusicSubscriptionStatusResponse *_subscriptionStatusResponse;	// 88 = 0x58
    NSError *_error;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000001000e9fa8
- (void)_didCompleteAllCapabilitiesAsynchronousRequests;	// IMP=0x00000001000e9c28
- (void)_requestCapabilities;	// IMP=0x00000001000e9b2c
- (void)_updateWithSubscriptionStatusResponse:(id)arg1 error:(id)arg2;	// IMP=0x00000001000e9a58
- (void)_requestSubscriptionStatusWithAsynchronousRequestsGroup:(id)arg1;	// IMP=0x00000001000e955c
- (void)_updateWithIdentityProperties:(id)arg1 error:(id)arg2;	// IMP=0x00000001000e9488
- (void)_requestIdentityPropertiesWithAsynchronousRequestsGroup:(id)arg1;	// IMP=0x00000001000e9194
- (void)_updateWithBag:(id)arg1 error:(id)arg2;	// IMP=0x00000001000e90c0
- (void)_requestBagWithAsynchronousRequestsGroup:(id)arg1;	// IMP=0x00000001000e8bf4
- (void)_handlePrivacyAcknowledgementErrorWithMessage:(id)arg1 underlyingError:(id)arg2;	// IMP=0x00000001000e8a04
- (void)_didCompletePrivacyPromptOperation:(id)arg1 withStatus:(long long)arg2 error:(id)arg3;	// IMP=0x00000001000e88fc
- (void)_performPrivacyPromptOperation;	// IMP=0x00000001000e85e0
@property(copy) CDUnknownBlockType completionHandler;
@property(retain) NSXPCConnection *originatingClientConnection;
@property long long privacyAcknowledgementPolicy;
- (void)execute;	// IMP=0x00000001000e80ec
- (void)cancel;	// IMP=0x00000001000e7fac
- (id)initWithIdentity:(id)arg1;	// IMP=0x00000001000e7eec

@end

