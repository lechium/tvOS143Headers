//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PCSSyncingProtocol-Protocol.h"

@class AccountsModel, NSOperationQueue, NSUserDefaults, PCSDelayedAction, PCSKeySyncing, PCSMobileBackup, PCSUserRegistry;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface PCSSyncing : NSObject <PCSSyncingProtocol>
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    PCSUserRegistry *_registry;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_registryQueue;	// 24 = 0x18
    PCSKeySyncing *_manager;	// 32 = 0x20
    AccountsModel *_accounts;	// 40 = 0x28
    PCSDelayedAction *_triggerWatchSyncingAction;	// 48 = 0x30
    NSOperationQueue *_serialOperationQueue;	// 56 = 0x38
    NSUserDefaults *_settings;	// 64 = 0x40
    PCSMobileBackup *_mobileBackup;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_keyrollSchedulerSource;	// 80 = 0x50
    NSObject<OS_xpc_object> *_scheduledKeyrollActivity;	// 88 = 0x58
}

+ (id)defaultPCSSyncing;	// IMP=0x0000000100010cb0
- (void).cxx_destruct;	// IMP=0x00000001000167c4
@property(retain) NSObject<OS_xpc_object> *scheduledKeyrollActivity; // @synthesize scheduledKeyrollActivity=_scheduledKeyrollActivity;
@property(retain) NSObject<OS_dispatch_source> *keyrollSchedulerSource; // @synthesize keyrollSchedulerSource=_keyrollSchedulerSource;
@property(retain) PCSMobileBackup *mobileBackup; // @synthesize mobileBackup=_mobileBackup;
@property(retain) NSUserDefaults *settings; // @synthesize settings=_settings;
@property(retain) NSOperationQueue *serialOperationQueue; // @synthesize serialOperationQueue=_serialOperationQueue;
@property(retain) PCSDelayedAction *triggerWatchSyncingAction; // @synthesize triggerWatchSyncingAction=_triggerWatchSyncingAction;
@property(retain) AccountsModel *accounts; // @synthesize accounts=_accounts;
@property(retain) PCSKeySyncing *manager; // @synthesize manager=_manager;
@property(retain) NSObject<OS_dispatch_queue> *registryQueue; // @synthesize registryQueue=_registryQueue;
@property(retain) PCSUserRegistry *registry; // @synthesize registry=_registry;
@property(retain) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void)keyRollPending:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016648
- (void)manateeStatus:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100015ce0
- (void)fetchStats:(CDUnknownBlockType)arg1;	// IMP=0x0000000100015c80
- (void)userDBBackupRecordIDsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100015c6c
- (void)mobileBackupRecordIDsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100015c58
- (void)escrowRecordIDs:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100015be8
- (void)deleteThisDevice:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100015b80
- (void)triggerUserRegistryCheck:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100015b30
- (void)restoreMobileBackup:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001513c
- (void)fetchAllDeviceKeys:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100015080
- (void)checkSyncingForPeer:(id)arg1 force:(_Bool)arg2;	// IMP=0x000000010001507c
- (void)triggerDaily:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001501c
- (void)requestKeys:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100014f8c
- (void)syncKeys:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100014f74
- (void)getAllClients:(CDUnknownBlockType)arg1;	// IMP=0x0000000100014d70
- (void)queuedCheckRegistry:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100014d08
- (void)notifyEvent:(id)arg1;	// IMP=0x0000000100014c40
- (void)notifyDailyEvent;	// IMP=0x0000000100014b68
- (struct _PCSIdentitySetData *)identityCopySet;	// IMP=0x0000000100014954
- (void)createIdentity:(id)arg1 roll:(_Bool)arg2 sync:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x000000010001420c
- (void)migrateToiCDPForAccount:(id)arg1 withParameters:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014040
- (void)setupIdentitiesForAccount:(id)arg1 withParameters:(id)arg2 optional:(_Bool)arg3;	// IMP=0x0000000100013d5c
- (void)triggerSyncingWithEscrowProxy:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012f6c
- (void)triggerKeyRolling;	// IMP=0x000000010001261c
- (id)getServicesToRoll;	// IMP=0x00000001000123b0
- (void)actuallyScheduleRollAttempt;	// IMP=0x00000001000122a0
- (void)scheduleRollAttempt;	// IMP=0x0000000100012264
- (long long)attemptTimer;	// IMP=0x0000000100012194
- (_Bool)shouldRoll;	// IMP=0x00000001000120c4
- (void)checkForBackupStateChange;	// IMP=0x0000000100011b38
- (void)recordEpochForKeyroll;	// IMP=0x0000000100011ab8
- (id)getRollEpoch;	// IMP=0x0000000100011978
- (void)mobileBackupStatus:(CDUnknownBlockType)arg1;	// IMP=0x00000001000118f8
- (void)clearNextSyncNegativeCache;	// IMP=0x00000001000118b0
- (void)notifyInternalEvent:(id)arg1;	// IMP=0x000000010001153c
- (void)triggerWatchSyncing:(CDUnknownBlockType)arg1;	// IMP=0x0000000100011530
- (void)notifyKeyRegistry;	// IMP=0x000000010001152c
- (void)triggerWatchSyncing;	// IMP=0x00000001000114ec
- (void)setupMetrics;	// IMP=0x00000001000114e8
- (void)setupActivity;	// IMP=0x00000001000113dc
- (id)initWithPCSKeySyncing:(id)arg1;	// IMP=0x0000000100010edc
- (id)initForTesting;	// IMP=0x0000000100010da4

@end

