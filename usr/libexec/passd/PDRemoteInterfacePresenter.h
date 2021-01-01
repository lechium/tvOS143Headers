//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDAssertionObserver-Protocol.h"
#import "PDNotificationStreamConsumer-Protocol.h"
#import "PKFieldDetectorObserver-Protocol.h"

@class NSHashTable, NSString, PDAssertionManager, PDDatabaseManager, PDExpressPassManager, PDNotificationStreamManager, PKFieldDetector;
@protocol OS_dispatch_queue;

@interface PDRemoteInterfacePresenter : NSObject <PDAssertionObserver, PKFieldDetectorObserver, PDNotificationStreamConsumer>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    PDDatabaseManager *_databaseManager;	// 16 = 0x10
    PDExpressPassManager *_expressPassManager;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    struct os_unfair_lock_s _observersLock;	// 40 = 0x28
    _Atomic _Bool _protectedDataAvailable;	// 44 = 0x2c
    NSObject<OS_dispatch_queue> *_presenterSerialQueue;	// 48 = 0x30
    struct os_unfair_lock_s _activeInterfacesLock;	// 56 = 0x38
    _Atomic _Bool _setupAlertIsActive;	// 60 = 0x3c
    _Bool _lostModeActive;	// 61 = 0x3d
    unsigned int _powerAssertionIdentifier;	// 64 = 0x40
    PKFieldDetector *_fieldDetector;	// 72 = 0x48
    PDNotificationStreamManager *_notificationStreamManager;	// 80 = 0x50
    PDAssertionManager *_assertionManager;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010011339c
@property(readonly, nonatomic) PDAssertionManager *assertionManager; // @synthesize assertionManager=_assertionManager;
@property(readonly, nonatomic) PDNotificationStreamManager *notificationStreamManager; // @synthesize notificationStreamManager=_notificationStreamManager;
@property(readonly, nonatomic) PKFieldDetector *fieldDetector; // @synthesize fieldDetector=_fieldDetector;
@property(retain, nonatomic) PDExpressPassManager *expressPassManager;
@property(retain, nonatomic) PDDatabaseManager *databaseManager;
- (void)_releasePowerAssertion;	// IMP=0x000000010011314c
- (void)_createPowerAssertion;	// IMP=0x0000000100112f98
- (_Bool)canPresentRemoteInterfaceOfType:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000100112f90
- (void)passbookUIServiceDidLaunch;	// IMP=0x0000000100112f8c
- (void)protectedDataAvailable;	// IMP=0x0000000100112f7c
- (void)unregisterObserver:(id)arg1;	// IMP=0x0000000100112f18
- (void)registerObserver:(id)arg1;	// IMP=0x0000000100112eb4
- (_Bool)remoteInterfaceOfTypeIsActive:(unsigned long long)arg1;	// IMP=0x0000000100112eac
- (_Bool)isAnyRemoteInterfaceActive;	// IMP=0x0000000100112ea4
- (void)presentPaymentSetupRequest:(id)arg1 connection:(id)arg2 orientation:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100112e8c
- (void)_presentSetupAlertWithParameters:(id)arg1 defaultResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100112cb0
- (void)presentSetupApplePayAlert:(id)arg1;	// IMP=0x0000000100112ab4
- (void)presentPeerPaymentTermsAndConditionsWithTermsURL:(id)arg1 termsIdentifier:(id)arg2 passUniqueID:(id)arg3 orientation:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100112a9c
- (void)presentRegistrationFlowWithAccount:(id)arg1 amount:(id)arg2 state:(unsigned long long)arg3 senderAddress:(id)arg4 orientation:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100112a84
- (void)presentIdentityVerificationFlowWithResponseData:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100112a6c
- (void)presentContinuityPaymentInterfaceWithRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100112a54
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forNSXPCConnection:(id)arg2 hostApplicationName:(id)arg3 hostApplicationIdentifier:(id)arg4 hostBundleIdentifier:(id)arg5 hostIdentifier:(id)arg6 hostTeamID:(id)arg7 orientation:(id)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x0000000100112a38
- (void)presentContactlessInterfaceForPassWithUniqueIdentifier:(id)arg1 fromSource:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100112a20
- (void)contactlessPassesAvailableDidChange;	// IMP=0x0000000100112a1c
- (_Bool)allowAcquisitionOfAssertionOfType:(unsigned long long)arg1;	// IMP=0x0000000100112a14
- (_Bool)interestedInAssertionOfType:(unsigned long long)arg1;	// IMP=0x00000001001129fc
- (void)fieldDetectorDidEnterField:(id)arg1 withProperties:(id)arg2;	// IMP=0x00000001001129f8
- (void)handleNotificationWithName:(id)arg1 event:(id)arg2 forStream:(long long)arg3;	// IMP=0x00000001001129f4
- (id)createCurrentNotificationRegistrationState;	// IMP=0x0000000100112970
- (void)dealloc;	// IMP=0x00000001001128d0
- (id)initWithFieldDetector:(id)arg1 notificationStreamManager:(id)arg2 assertionManager:(id)arg3;	// IMP=0x000000010011272c
- (id)init;	// IMP=0x0000000100112714

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
