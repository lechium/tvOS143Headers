//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDStoreKitServiceProtocol-Protocol.h"
#import "InAppDownloadManagerObserver-Protocol.h"
#import "StoreKitStorefrontObserver-Protocol.h"

@class AMSURLSession, NSMutableSet, NSOperationQueue, NSString, StoreKitClient;
@protocol ASDStoreKitClientProtocol;

@interface StoreKitServiceConnection : NSObject <StoreKitStorefrontObserver, InAppDownloadManagerObserver, ASDStoreKitServiceProtocol>
{
    NSMutableSet *_downloadIDs;	// 8 = 0x8
    int _pid;	// 16 = 0x10
    id <ASDStoreKitClientProtocol> _remoteObject;	// 24 = 0x18
    AMSURLSession *_urlSession;	// 32 = 0x20
    NSOperationQueue *_paymentQueue;	// 40 = 0x28
    NSOperationQueue *_productRequestQueue;	// 48 = 0x30
    NSOperationQueue *_appTerminationQueue;	// 56 = 0x38
    StoreKitClient *_client;	// 64 = 0x40
}

+ (id)octaneConnectionForBundleID:(id)arg1;	// IMP=0x00000001001f1984
+ (id)allConnections;	// IMP=0x00000001001f1924
+ (void)initialize;	// IMP=0x00000001001f18c8
- (void).cxx_destruct;	// IMP=0x00000001001fb510
@property(readonly, nonatomic) StoreKitClient *client; // @synthesize client=_client;
- (id)_offerCodeRedemptionURLForBundleID:(id)arg1 storeItemID:(long long)arg2;	// IMP=0x00000001001fb124
- (id)_storeFrontManagerForClientType:(long long)arg1;	// IMP=0x00000001001fb0d4
- (_Bool)_shouldNotifyOfStorefrontChange:(id)arg1;	// IMP=0x00000001001faeec
- (id)_processDownloadsForTransactions:(id)arg1;	// IMP=0x00000001001fabf0
- (_Bool)_isValidForReview;	// IMP=0x00000001001fabe8
- (id)_errorToASDError:(id)arg1;	// IMP=0x00000001001fa77c
- (_Bool)_allowPaymentRequestData;	// IMP=0x00000001001fa5ac
- (_Bool)_allowClientOverrideForConnection:(id)arg1;	// IMP=0x00000001001fa4ec
- (_Bool)_allowClientOverride;	// IMP=0x00000001001fa48c
- (void)downloadManager:(id)arg1 updatedStatus:(id)arg2;	// IMP=0x00000001001fa05c
- (_Bool)_hasArcadeEntitlement;	// IMP=0x00000001001f9fb0
- (void)repairArcadeApp;	// IMP=0x00000001001f9d64
- (void)arcadeSubscriptionStatusWithNonce:(unsigned long long)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001f99dc
- (void)registerArcadeAppWithRandomFromLib:(id)arg1 randomFromLibLength:(unsigned int)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f93d0
- (void)storefront:(id)arg1 changed:(id)arg2;	// IMP=0x00000001001f9210
- (void)checkForMessages;	// IMP=0x00000001001f8d6c
- (void)purchaseIntentsForClient:(id)arg1 clearOnRetrieval:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f8748
- (void)purchaseIntentAppInstallSheetOpenForBundleIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001f8610
- (void)addPurchaseIntent:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001f8280
- (void)setPromotionInfo:(id)arg1 forClient:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f7fa0
- (void)promotionInfoForProductIdentifiers:(id)arg1 client:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f7c9c
- (void)handleInvalidReceipt:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f7a08
- (void)useAppStoreDaemonWithReplyBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f78c0
- (void)storefrontWithReplyBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f7770
- (void)renewReceiptWithOptions:(id)arg1 client:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f6d64
- (void)deleteContentForProductID:(id)arg1;	// IMP=0x00000001001f6d60
- (void)resumeDownloadWithID:(id)arg1;	// IMP=0x00000001001f6bf8
- (void)pauseDownloadWithID:(id)arg1;	// IMP=0x00000001001f6b30
- (void)cancelDownloadWithID:(id)arg1;	// IMP=0x00000001001f6a68
- (void)addDownloadWithID:(id)arg1;	// IMP=0x00000001001f6864
- (void)restoreCompletedTransactionsForUsername:(id)arg1 client:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f616c
- (void)restoreCompletedTransactionsToQueue:(id)arg1 forUsername:(id)arg2 withClient:(id)arg3 replyBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001001f5e48
- (void)notifyOfRevokedProductIdentifiers:(id)arg1;	// IMP=0x00000001001f5c9c
- (void)finishPaymentWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001f5788
- (void)finishPaymentWithIdentifier:(id)arg1;	// IMP=0x00000001001f5778
- (void)_processPayment:(id)arg1 excludeReceipt:(_Bool)arg2 privacyAcknowledgementRequired:(_Bool)arg3 forClient:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000001001f4aa0
- (void)processPayment:(id)arg1 forClient:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f44e4
- (void)processPaymentWithBuyParamsString:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001f3640
- (void)addPaymentToQueue:(id)arg1 withInfo:(id)arg2 client:(id)arg3;	// IMP=0x00000001001f3428
- (void)requestProductsWithIdentifiers:(id)arg1 client:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f2cf4
- (void)requestProductReview;	// IMP=0x00000001001f2cf0
- (void)forceSandboxForBundleIdentifier:(id)arg1 untilDate:(id)arg2;	// IMP=0x00000001001f2c74
- (void)checkServerQueueForClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001f27e8
- (void)checkServerQueueForQueue:(id)arg1 withClient:(id)arg2;	// IMP=0x00000001001f2550
- (void)processPaymentResponse:(id)arg1;	// IMP=0x00000001001f2430
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000001001f2208
- (id)initWithConnection:(id)arg1 remoteObject:(id)arg2 pid:(int)arg3;	// IMP=0x00000001001f1be4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

