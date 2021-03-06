//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RequestQueue.h"

@class ISOperationQueue, NSMutableArray, NSObject, SubscriptionStatusOperation;
@protocol OS_dispatch_queue;

@interface NetworkRequestQueue : RequestQueue
{
    ISOperationQueue *_managedQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_subscriptionStatusOperationAccessQueue;	// 16 = 0x10
    SubscriptionStatusOperation *_currentSubsctionStatusOperation;	// 24 = 0x18
    NSMutableArray *_pendingSubscriptionStatusOperations;	// 32 = 0x20
}

+ (void)_addSubscriptionOperationWithType:(long long)arg1 message:(id)arg2 connection:(id)arg3;	// IMP=0x00000001000dcd34
+ (void)wishlistAddItemsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000dc650
+ (void)updateMediaContentTasteWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000dc234
+ (void)serverAuthenticateWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000dbc5c
+ (void)authenticationRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000db858
+ (void)silentEnrollmentVerificationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000dae30
+ (void)silentEnrollmentWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000da470
+ (void)sdk_requestAPITokenWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d9ebc
+ (void)sdk_loadStoreFrontIdentifierWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d9a50
+ (void)restoreDemotedApplicationsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d95d0
+ (void)requestURLWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d8f3c
+ (void)repairAppWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d8690
+ (void)rentalInformationRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d8158
+ (void)refreshSubscriptionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d8104
+ (void)presentRemoteWebViewWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d7da4
+ (void)performMigrationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d7624
+ (void)lookupWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d7058
+ (void)lookupItemsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d69d4
+ (void)loadURLBagWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d64dc
+ (void)keybagSyncWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d611c
+ (void)installManagedAppWithMessage:(id)arg1 connection:(id)arg2 provideDetailedResponse:(_Bool)arg3;	// IMP=0x00000001000d5760
+ (void)installManagedAppWithMessageAndDetailedResponse:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d570c
+ (void)installManagedAppWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d56b8
+ (void)getSubscriptionEntitlements:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d5228
+ (void)sdk_getCloudServiceCapabilities:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d4cfc
+ (void)importDownloadToIPodLibraryWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d459c
+ (void)getDownloadQueueWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d3d00
+ (void)getSubscriptionStatusWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d3764
+ (void)getMatchStatusWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d336c
+ (void)enableSubscriptionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d3318
+ (void)disableSubscriptionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d32c4
+ (void)disableAutomaticDownloadKindsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d2f00
+ (void)claimAppsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000d29a4
+ (void)observeXPCServer:(id)arg1;	// IMP=0x00000001000d2604
+ (id)sharedNetworkRequestQueue;	// IMP=0x00000001000d2568
- (void).cxx_destruct;	// IMP=0x00000001000de674
- (void)_dequeueSubscriptionStatusOperation:(id)arg1;	// IMP=0x00000001000de364
- (void)_enqueueSubscriptionStatusOperation:(id)arg1 forClient:(id)arg2;	// IMP=0x00000001000de1ec
- (void)_sendUnentitledReplyForMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000de13c
- (void)_sendUnentitledMessageToClient:(id)arg1;	// IMP=0x00000001000de064
- (void)_sendMessageWithError:(id)arg1 toClient:(id)arg2;	// IMP=0x00000001000ddfa4
- (id)_newClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000ddec4
- (id)_managedQueue;	// IMP=0x00000001000dde50
- (void)_enqueueOperationsForStoreServicesURL:(id)arg1;	// IMP=0x00000001000dd4d8
- (id)_copyAuthenticationContextWithContext:(id)arg1 client:(id)arg2;	// IMP=0x00000001000dd30c
- (id)init;	// IMP=0x00000001000d24a8

@end

