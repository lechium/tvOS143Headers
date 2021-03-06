//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class NSArray, RequestThrottle;

@interface InstallWatchAppsTask : Task
{
    NSArray *_purchaseInfo;	// 8 = 0x8
    RequestThrottle *_requestThrottle;	// 16 = 0x10
    NSArray *_processedExternalIDs;	// 24 = 0x18
}

+ (id)_companionBundleIDForItemID:(id)arg1 requestToken:(id)arg2;	// IMP=0x00000001002c7cec
+ (id)_appAlreadyRequestedForPurchaseInfo:(id)arg1;	// IMP=0x00000001002c7a6c
+ (_Bool)_appAlreadyInstalledForPurchaseInfo:(id)arg1 hasVersionOfBundleIDInstalled:(_Bool *)arg2;	// IMP=0x00000001002c73b4
- (void).cxx_destruct;	// IMP=0x00000001002c7e14
- (void)main;	// IMP=0x00000001002c6374
@property(readonly) NSArray *processedExternalIDs; // @synthesize processedExternalIDs=_processedExternalIDs;
- (id)initWithPurchaseInfo:(id)arg1 requestThrottle:(id)arg2;	// IMP=0x00000001002c6260

@end

