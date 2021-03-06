//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSPurchaseResponseProtocol-Protocol.h"
#import "PurchaseManagerInterface-Protocol.h"
#import "PushMessageConsumer-Protocol.h"

@class AMSPurchaseQueue, NSHashTable, NSString, TaskQueue;
@protocol OS_dispatch_queue;

@interface PurchaseManager : NSObject <AMSPurchaseResponseProtocol, PushMessageConsumer, PurchaseManagerInterface>
{
    NSHashTable *_activeBatches;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    TaskQueue *_taskQueue;	// 24 = 0x18
    AMSPurchaseQueue *_purchaseQueue;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x000000010023a47c
- (void).cxx_destruct;	// IMP=0x000000010023e278
@property(retain, nonatomic) AMSPurchaseQueue *purchaseQueue; // @synthesize purchaseQueue=_purchaseQueue;
- (void)_processItemResponse:(id)arg1 inPurchaseBatch:(id)arg2 usingPurchaseInfo:(id)arg3;	// IMP=0x000000010023d884
- (void)_processPurchaseBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010023d554
- (void)_processResultsForPurchaseBatch:(id)arg1 withTaskError:(id)arg2;	// IMP=0x000000010023d1f8
- (void)_processPurchaseInfos:(id)arg1 requestToken:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010023ccdc
- (void)_processPurchases:(id)arg1 requestToken:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010023c820
- (void)_processPurchase:(id)arg1 requestToken:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010023bdc0
- (void)_processPurchaseInfo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010023b938
- (void)_preparePurchaseInfo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010023b508
- (void)_macProcessPurchaseInfos:(id)arg1 requestToken:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010023b25c
- (void)_failPurchaseWithError:(id)arg1 usingPurchaseInfo:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010023b13c
- (void)_checkStoreQueue:(long long)arg1 withReason:(long long)arg2 usingPurchaseInfo:(id)arg3 purchaseBatch:(id)arg4;	// IMP=0x000000010023b094
- (void)_cancelDownloadForStoreItem:(id)arg1 usingPurchaseInfo:(id)arg2;	// IMP=0x000000010023ae30
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x000000010023ad10
- (void)processPurchases:(id)arg1 requestToken:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010023ab7c
- (void)processPurchaseInfos:(id)arg1 requestToken:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010023aa68
- (void)processPurchaseInfo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010023a98c
- (_Bool)isPurchaseInFlightForBundleID:(id)arg1;	// IMP=0x000000010023a698
- (id)prepareAndGroupPurchaseInfos:(id)arg1;	// IMP=0x000000010023a684
- (void)checkStoreQueue:(long long)arg1;	// IMP=0x000000010023a60c
- (id)init;	// IMP=0x000000010023a4e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

