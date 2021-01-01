//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BuyMicroPaymentOperationDelegate-Protocol.h"

@class LoadCompletedMicroPaymentsOperation, LoadMicroPaymentQueuesOperation, NSArray, NSManagedObjectID, NSMutableSet, NSString, StoreKitClientIdentity, XPCClient;
@protocol OS_dispatch_queue;

@interface StoreKitClient : NSObject <BuyMicroPaymentOperationDelegate>
{
    XPCClient *_client;	// 8 = 0x8
    StoreKitClientIdentity *_clientIdentity;	// 16 = 0x10
    NSManagedObjectID *_databaseClientObjectID;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_externalQueue;	// 40 = 0x28
    long long _lastRefreshReason;	// 48 = 0x30
    LoadMicroPaymentQueuesOperation *_loadQueueOperation;	// 56 = 0x38
    LoadCompletedMicroPaymentsOperation *_restoreOperation;	// 64 = 0x40
    long long _state;	// 72 = 0x48
    NSMutableSet *_transientFailedIDs;	// 80 = 0x50
}

- (_Bool)buyMicroPaymentOperation:(id)arg1 shouldContinueWithNewStorefront:(id)arg2;	// IMP=0x0000000100147440
- (void)_showPaymentsRestrictedAlert;	// IMP=0x0000000100147288
- (void)_setClientState:(long long)arg1;	// IMP=0x00000001001471d0
- (void)_sendRestoreCompletedWithError:(id)arg1;	// IMP=0x000000010014713c
- (void)_sendPaymentsUpdated:(id)arg1;	// IMP=0x0000000100147128
- (void)_sendPaymentsRemoved:(id)arg1;	// IMP=0x0000000100147070
- (void)_sendPaymentsAdded:(id)arg1;	// IMP=0x000000010014705c
- (void)_sendMessage:(long long)arg1 forPayments:(id)arg2;	// IMP=0x0000000100146e24
- (void)_sendMergeResults:(id)arg1;	// IMP=0x0000000100146d88
- (void)_sendFinishRequestForPayment:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100146bf8
- (void)_sendDownloadChangesets:(id)arg1;	// IMP=0x0000000100146b40
- (void)_sendBuyRequestForPayment:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001001467a4
- (void)_showPrivacyPromptForPayment:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100146288
- (void)_reloadClientProperties;	// IMP=0x0000000100145f74
- (void)_refreshFromServerWithReason:(long long)arg1 accountIdentifier:(id)arg2;	// IMP=0x00000001001458c8
- (void)_mergeBatchResponse:(id)arg1 forRestoreOperation:(id)arg2;	// IMP=0x0000000100145658
- (id)_lastQueueCheckDate;	// IMP=0x00000001001455e4
- (_Bool)_isPaymentRestricted;	// IMP=0x0000000100145530
- (void)_finishRestoreOperation:(id)arg1;	// IMP=0x000000010014515c
- (void)_finishLoadQueueOperation:(id)arg1;	// IMP=0x0000000100144b58
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100144a8c
- (id)_copyDownloadsForDownloadIDs:(id)arg1 properties:(id)arg2 context:(id)arg3;	// IMP=0x000000010014483c
- (void)_completeFinishRequest:(id)arg1 forPaymentID:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001001444b0
- (void)_completeBuyRequest:(id)arg1 forPaymentID:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100143ee0
- (id)_copyAccountIDsForRefreshReason:(long long)arg1;	// IMP=0x0000000100143bfc
- (id)_clientIdentity;	// IMP=0x0000000100143bc4
- (id)_clientIdentifier;	// IMP=0x0000000100143ba0
- (void)_cancelDownloadsForPayments:(id)arg1;	// IMP=0x000000010014399c
- (void)_cancelDownloadsForDownloadIDs:(id)arg1;	// IMP=0x0000000100143788
- (void)_networkTypeChangedNotification:(id)arg1;	// IMP=0x0000000100143714
- (_Bool)finishPaymentWithMessage:(id)arg1;	// IMP=0x0000000100142f84
@property(retain) XPCClient *XPCClient;
- (void)sendPurchaseIntents:(id)arg1 forApp:(id)arg2;	// IMP=0x0000000100142794
- (void)updatePaymentWithObjectID:(id)arg1 purchaseResponse:(id)arg2;	// IMP=0x0000000100142640
- (void)startPaymentWithObjectID:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100142278
- (void)startDownloadsWithIDs:(id)arg1;	// IMP=0x0000000100141998
- (void)setPaymentQueueClient:(id)arg1;	// IMP=0x000000010014174c
- (void)sendPaymentsUpdatedWithObjectIDs:(id)arg1;	// IMP=0x0000000100141550
- (void)sendDownloadChangesets:(id)arg1;	// IMP=0x00000001001414e4
- (void)resumeDownloadsWithIDs:(id)arg1;	// IMP=0x0000000100140fe8
- (void)restoreCompletedTransactionsWithApplicationUsername:(id)arg1;	// IMP=0x00000001001409d8
- (_Bool)removePaymentWithObjectID:(id)arg1;	// IMP=0x0000000100140864
- (void)refreshFromServerWithReason:(long long)arg1 accountIdentifier:(id)arg2;	// IMP=0x00000001001407f0
- (void)refreshFromServerWithReason:(long long)arg1;	// IMP=0x00000001001407e0
- (void)pauseDownloadsWithIDs:(id)arg1;	// IMP=0x00000001001402e4
@property(readonly) NSArray *openTransactions;
@property(readonly) NSManagedObjectID *microPaymentClientID;
@property(readonly, getter=isSandboxed) _Bool sandboxed;
- (_Bool)isEqualToXPCConnection:(id)arg1 paymentQueueClient:(id)arg2;	// IMP=0x000000010013fa14
@property(readonly) NSManagedObjectID *firstReadyPaymentID;
- (void)createMicroPaymentClientIfNecessary;	// IMP=0x000000010013f32c
@property(readonly) long long clientState;
@property(readonly) NSString *clientIdentifier;
- (void)cancelDownloadsWithIDs:(id)arg1;	// IMP=0x000000010013ed10
- (_Bool)addPaymentTransaction:(id)arg1 withOptions:(id)arg2;	// IMP=0x000000010013e29c
- (void)dealloc;	// IMP=0x000000010013e1a4
- (id)initWithXPCClient:(id)arg1;	// IMP=0x000000010013e164
- (id)initWithMicroPaymentClientID:(id)arg1;	// IMP=0x000000010013e124
- (id)init;	// IMP=0x000000010013e118
- (id)_initStoreKitClient;	// IMP=0x000000010013e034

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
