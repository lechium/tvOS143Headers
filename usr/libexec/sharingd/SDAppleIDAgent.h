//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"

@class APSConnection, NSDate, NSMutableArray, NSMutableDictionary, NSString, SDAppleIDDatabaseManager, SDAppleIDIdentityRequest, SDAppleIDServerTask;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAppleIDAgent : NSObject <APSConnectionDelegate>
{
    _Bool _agentEnabled;	// 8 = 0x8
    NSMutableDictionary *_agentMetaInfo;	// 16 = 0x10
    NSString *_appleID;	// 24 = 0x18
    NSDate *_creationDate;	// 32 = 0x20
    SDAppleIDDatabaseManager *_dbManager;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
    NSMutableArray *_findPersonRequests;	// 56 = 0x38
    SDAppleIDIdentityRequest *_identityRequest;	// 64 = 0x40
    SDAppleIDServerTask *_infoRequest;	// 72 = 0x48
    _Bool _linkIdentityEnabled;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_periodicVerifyTimer;	// 88 = 0x58
    APSConnection *_pushConnection;	// 96 = 0x60
    NSString *_pushEnvironment;	// 104 = 0x68
    SDAppleIDServerTask *_task;	// 112 = 0x70
    SDAppleIDIdentityRequest *_testIdentityRequest;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_throttledRetryTimer;	// 128 = 0x80
    _Bool _updatePush;	// 136 = 0x88
    _Bool _updatePeriodicVerifyTimer;	// 137 = 0x89
}

+ (id)sharedAgent;	// IMP=0x00000001001551c8
- (void).cxx_destruct;	// IMP=0x0000000100155994
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0000000100155820
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0000000100155724
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x00000001001555ec
- (void)handleUILockStatusChangedNotification;	// IMP=0x0000000100155594
- (void)handleKeyBagFirstUnlockNotification;	// IMP=0x000000010015553c
- (void)handleAppleIDSignedOutNotification;	// IMP=0x00000001001554e4
- (void)handleAppleIDSignedInNotification;	// IMP=0x000000010015548c
- (void)handleAppleIDChangedNotification;	// IMP=0x0000000100155434
- (id)validationRecordInfoForAppleID:(id)arg1;	// IMP=0x00000001001552f4
- (id)statusInfo;	// IMP=0x0000000100155288
- (void)requestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100155078
- (void)prefsChanged;	// IMP=0x0000000100155020
- (void)personInfoWithEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100154f68
- (void)personInfoWithEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100154f14
- (id)myAccount;	// IMP=0x0000000100154e90
- (void)invalidate;	// IMP=0x0000000100154e38
- (id)detailedDescription;	// IMP=0x0000000100154dcc
- (void)queryVerifiedIdentityForEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100154a78
- (struct __SecIdentity *)copyIdentityForAppleID:(id)arg1;	// IMP=0x0000000100154990
- (id)verifiedIdentityForCertificateChain:(id)arg1 emailOrPhone:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100154470
- (id)verifiedIdentityForEmailOrPhone:(id)arg1;	// IMP=0x00000001001541b8
- (void)verifiedIdentityForEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100154164
- (void)verifiedIdentityForEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100153f88
- (void)activate;	// IMP=0x0000000100153f30
- (id)accountStatusForAppleID:(id)arg1;	// IMP=0x0000000100153e7c
- (id)accountForAppleID:(id)arg1;	// IMP=0x0000000100153d84
- (_Bool)_wasOldAgentIdentityQueried;	// IMP=0x0000000100153d50
- (_Bool)_wasIdentityLinkedOnce;	// IMP=0x0000000100153d1c
- (void)_verifyStateWithDelay:(double)arg1;	// IMP=0x0000000100153c40
- (void)_verifyState;	// IMP=0x0000000100152afc
- (void)_updateMyInfo;	// IMP=0x0000000100152a58
- (void)_updateAppleID;	// IMP=0x0000000100152940
- (void)_update;	// IMP=0x00000001001528cc
- (id)_statusInfo;	// IMP=0x0000000100152794
- (void)_setMetaInfoValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100152730
- (void)_setCurrentAppleIDContactInfo:(id)arg1 validationRecord:(id)arg2;	// IMP=0x00000001001526dc
- (void)_setCurrentAppleIDIdentity:(id)arg1;	// IMP=0x00000001001526c4
- (void)_requestIdentityForAppleID:(id)arg1 certificateToken:(id)arg2 privateKeyPersistentReference:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100152084
- (void)_requestInfoForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100151a88
- (void)_removeObservers;	// IMP=0x0000000100151a38
- (void)_prefsChanged;	// IMP=0x00000001001516f4
- (void)_personInfoWithEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100150ff0
- (void)_performServerTaskWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010015021c
- (void)_performOtherTaskWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010014f8c8
- (int)_performKeychainCount;	// IMP=0x000000010014f5b0
- (int)_performKeyVerificationForIdentity:(id)arg1;	// IMP=0x000000010014f238
- (id)_metaInfoValueForKey:(id)arg1;	// IMP=0x000000010014f228
- (unsigned long long)_keychainCleanupTag;	// IMP=0x000000010014f200
- (void)_handleThrottledRetryTimerFired;	// IMP=0x000000010014f178
- (void)_handlePeriodicVerifyTimerFired;	// IMP=0x000000010014f09c
- (void)_handleReceivedIdentity:(id)arg1 forAppleID:(id)arg2 identityRequest:(id)arg3 withError:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010014ed20
- (void)_handleReceivedCertificateToken:(id)arg1 privateKeyPersistentReference:(id)arg2 forAppleID:(id)arg3;	// IMP=0x000000010014ec88
- (void)_handleUntrustedAppleIDCertificateChainForIdentity:(id)arg1;	// IMP=0x000000010014eaec
- (void)_handleUILockStatusChange;	// IMP=0x000000010014e988
- (void)_handleUILockStatusChangedNotification;	// IMP=0x000000010014e910
- (void)_handleServerTaskCompletionWithError:(id)arg1;	// IMP=0x000000010014e738
- (void)_handleKeyVerificationFailure;	// IMP=0x000000010014e690
- (void)_handleKeyBagFirstUnlockNotification;	// IMP=0x000000010014e618
- (void)_handleInfoResponse:(id)arg1 forAppleID:(id)arg2 infoRequest:(id)arg3 certificateSerialNumber:(id)arg4 withError:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010014d87c
- (void)_handleFindPersonResponse:(id)arg1 forRequest:(id)arg2 emailOrPhone:(id)arg3 withError:(id)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010014d364
- (void)_handleCertificateStatusUpdate:(long long)arg1 forAppleID:(id)arg2;	// IMP=0x000000010014cfcc
- (void)_handleAppleIDSignedOutNotification;	// IMP=0x000000010014ceb4
- (void)_handleAppleIDSignedInNotification;	// IMP=0x000000010014cdc8
- (void)_handleAppleIDChangedNotification;	// IMP=0x000000010014cd4c
- (void)_handleAccountIdentifierValidationRecordMismatch;	// IMP=0x000000010014cc90
- (void)_ensureThrottledRetryTimerStopped;	// IMP=0x000000010014cc08
- (void)_ensureThrottledRetryTimerStartedWithSuggestedDelay:(unsigned long long)arg1;	// IMP=0x000000010014c8f8
- (void)_ensurePeriodicVerifyTimerStopped;	// IMP=0x000000010014c870
- (void)_ensurePeriodicVerifyTimerStarted;	// IMP=0x000000010014c6ac
- (void)_ensurePushStopped;	// IMP=0x000000010014c608
- (int)_ensureEduModeDevicesAreCleanedUp;	// IMP=0x000000010014c380
- (void)_checkIfAppleIDCertificateChainIsValidForIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010014c128
- (id)_detailedDescription;	// IMP=0x000000010014ae0c
- (void)_ensurePushStarted;	// IMP=0x000000010014abc8
- (struct __SecIdentity *)_copyIdentityForAppleID:(id)arg1;	// IMP=0x000000010014ab78
- (void)_clearAccount;	// IMP=0x000000010014aaec
- (void)_cleanUpAccount:(id)arg1;	// IMP=0x000000010014a900
- (void)_invalidate;	// IMP=0x000000010014a68c
- (void)_addObservers;	// IMP=0x000000010014a578
- (void)_activate;	// IMP=0x000000010014a4c0
- (long long)_accountState;	// IMP=0x0000000100149e84
- (id)_accountForAppleID:(id)arg1;	// IMP=0x0000000100149e74
- (_Bool)eduModeEnabled;	// IMP=0x0000000100149e6c
- (void)dealloc;	// IMP=0x0000000100149e24
- (id)init;	// IMP=0x0000000100149d54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

