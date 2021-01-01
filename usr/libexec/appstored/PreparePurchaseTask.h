//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class PurchaseInfo;

@interface PreparePurchaseTask : Task
{
    PurchaseInfo *_purchaseInfo;	// 8 = 0x8
}

+ (void)_setAccountIDForApp:(id)arg1 usingPurchaseInfo:(id)arg2;	// IMP=0x000000010022c424
+ (id)_getInstalledAppUpdatePurchaseInfo:(id)arg1;	// IMP=0x000000010022bc24
- (void).cxx_destruct;	// IMP=0x000000010022cc10
@property(readonly) PurchaseInfo *purchaseInfo; // @synthesize purchaseInfo=_purchaseInfo;
- (id)_installAttributionParamStringForDictionary:(id)arg1;	// IMP=0x000000010022ba44
- (void)main;	// IMP=0x000000010022b560
- (void)completeWithError:(id)arg1;	// IMP=0x000000010022b4a0
- (id)initWithPurchaseInfo:(id)arg1;	// IMP=0x000000010022b420

@end
