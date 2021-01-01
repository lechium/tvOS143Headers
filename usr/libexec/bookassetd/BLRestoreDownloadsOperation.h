//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BLOperation.h"

#import "BLRestoreDownloadItemsOperationDelegate-Protocol.h"

@class NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BLRestoreDownloadsOperation : BLOperation <BLRestoreDownloadItemsOperationDelegate>
{
    NSObject<OS_dispatch_queue> *_authenticationQueue;	// 80 = 0x50
    NSArray *_downloadItems;	// 88 = 0x58
    CDUnknownBlockType _responseItemBlock;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000010000f314
@property(copy, nonatomic) CDUnknownBlockType responseItemBlock; // @synthesize responseItemBlock=_responseItemBlock;
@property(copy, nonatomic) NSArray *downloadItems; // @synthesize downloadItems=_downloadItems;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *authenticationQueue; // @synthesize authenticationQueue=_authenticationQueue;
- (id)_sortedAccountIDs:(id)arg1;	// IMP=0x000000010000f05c
- (void)_sanitizeRestoreItemAccountID:(id)arg1 accountsHelper:(id)arg2 error:(id *)arg3;	// IMP=0x000000010000edb8
- (void)_applyResponses:(id)arg1;	// IMP=0x000000010000e870
- (void)restoreDownloadItemsOperation:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x000000010000e7b4
- (void)run;	// IMP=0x000000010000d7a4
- (id)initWithRestoreDownloadItems:(id)arg1 authenticationQueue:(id)arg2 responseItemBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010000d6a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

