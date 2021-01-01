//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BaseListener.h"

#import "ASDSoftwareUpdateProtocol-Protocol.h"

@class NSString;

@interface SoftwareUpdateListener : BaseListener <ASDSoftwareUpdateProtocol>
{
}

- (void)_initializeConnection:(id)arg1;	// IMP=0x000000010021bac8
- (void)_handleDisconnect:(id)arg1;	// IMP=0x000000010021b9f4
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010021b830
- (void)updateAllWithOrder:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010021b4c0
- (void)updateAllWithJobResults:(CDUnknownBlockType)arg1;	// IMP=0x000000010021b16c
- (void)reloadManagedUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010021af58
- (void)reloadFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010021ad10
- (void)reloadFromServerInBackgroundWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010021a970
- (void)removeUpdateBulletins;	// IMP=0x000000010021a834
- (void)showApplicationBadgeForPendingUpdates;	// IMP=0x000000010021a6c4
- (void)showApplicationUpdatesBulletin;	// IMP=0x000000010021a588
- (void)refreshUpdatesWithCompletionBlock:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010021a418
- (void)refreshUpdateCountWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010021a0f0
- (void)migrateUpdatesStoreWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010021a03c
- (void)hideApplicationBadgeForPendingUpdates;	// IMP=0x0000000100219ecc
- (void)getManagedUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100219cb8
- (void)getUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100219ab8
- (void)getUpdatesMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010021982c
- (void)getUpdatesIncludingMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100219618
- (void)clearExpiredUpdateHistoryWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001002194a8
- (id)init;	// IMP=0x0000000100219474

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

