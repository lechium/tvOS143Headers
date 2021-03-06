//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADCompanionServiceMessageHandler-Protocol.h"
#import "AFClockItemStorageDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ADRemoteTimerManager : NSObject <AFClockItemStorageDelegate, ADCompanionServiceMessageHandler>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_storagesByDeviceIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000655f8
- (void)_sendStereoPartnerAction:(id)arg1 timerID:(id)arg2 changes:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100064fe8
- (void)_invalidateStorageForDeviceWithIdentifier:(id)arg1;	// IMP=0x0000000100064f64
- (id)_storageForDeviceWithIdentifier:(id)arg1;	// IMP=0x0000000100064ec8
- (void)handleMessage:(id)arg1 messageType:(id)arg2 fromDeviceWithIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100064614
- (void)clockItemStorageDidUpdate:(id)arg1 insertedItemIDs:(id)arg2 updatedItemIDs:(id)arg3 deletedItemIDs:(id)arg4;	// IMP=0x00000001000645cc
- (void)removeTimerWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100064430
- (void)updateTimerWithID:(id)arg1 changes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100064254
- (void)accessStorageForDeviceWithIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100064120
- (void)finalizeStorageForDeviceWithIdentifier:(id)arg1;	// IMP=0x0000000100064088
- (void)prepareStorageForDeviceWithIdentifier:(id)arg1;	// IMP=0x0000000100063fdc
- (void)getSnapshotsByDeviceIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100063cac
- (void)getSnapshotForDeviceWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100063a2c
- (id)init;	// IMP=0x00000001000638d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

