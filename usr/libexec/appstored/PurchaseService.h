//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDPurchaseServiceProtocol-Protocol.h"

@protocol AdoptionManagerInterface, OS_dispatch_queue, PurchaseManagerInterface;

@interface PurchaseService : NSObject <ASDPurchaseServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    id <AdoptionManagerInterface> _adoptionInterface;	// 16 = 0x10
    id <PurchaseManagerInterface> _legacyPurchaseInterface;	// 24 = 0x18
    id <PurchaseManagerInterface> _purchaseInterface;	// 32 = 0x20
}

+ (id)defaultService;	// IMP=0x0000000100298a54
- (void).cxx_destruct;	// IMP=0x000000010029b064
@property(retain) id <PurchaseManagerInterface> purchaseInterface; // @synthesize purchaseInterface=_purchaseInterface;
@property(retain) id <PurchaseManagerInterface> legacyPurchaseInterface; // @synthesize legacyPurchaseInterface=_legacyPurchaseInterface;
@property(retain) id <AdoptionManagerInterface> adoptionInterface; // @synthesize adoptionInterface=_adoptionInterface;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)startPurchase:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010029a6a0
- (void)processPurchase:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100299dac
- (void)notifyAutenticationDialogCompleteForPurchaseID:(id)arg1 result:(long long)arg2 checkboxChecked:(_Bool)arg3 withResultHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100299814
- (void)notifyDialogCompleteForPurchaseID:(id)arg1 result:(_Bool)arg2 selectedButton:(long long)arg3 withResultHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010029920c
- (void)checkStoreQueue:(long long)arg1;	// IMP=0x0000000100298f2c
- (void)adoptableBundleIdentifiersWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100298d6c
- (void)adopt:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100298b74
- (id)init;	// IMP=0x0000000100298ac0

@end

