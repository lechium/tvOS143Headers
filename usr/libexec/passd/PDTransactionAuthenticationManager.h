//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDAssertionObserver-Protocol.h"

@class NSMutableDictionary, NSString, PDAssertionManager, PDAuxiliaryCapabilityManager, PDDatabaseManager, PDNotificationServiceCoordinator, PDPushNotificationManager, PDUserNotificationManager, PKPaymentTransaction, PKPaymentTransactionProcessor;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PDTransactionAuthenticationManager : NSObject <PDAssertionObserver>
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PDAuxiliaryCapabilityManager *_auxiliaryCapabilityManager;	// 16 = 0x10
    PDNotificationServiceCoordinator *_notificationServiceCoordinator;	// 24 = 0x18
    PDUserNotificationManager *_userNotificationManager;	// 32 = 0x20
    PKPaymentTransactionProcessor *_paymentTransactionProcessor;	// 40 = 0x28
    PDAssertionManager *_assertionManager;	// 48 = 0x30
    PDPushNotificationManager *_pushNotificationManager;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_criticalPushReliabilityTimer;	// 64 = 0x40
    NSString *_pushPendingTransactionIdentifier;	// 72 = 0x48
    _Bool _criticalPushReliabilityEnabled;	// 80 = 0x50
    _Bool _userNotificationSuppressed;	// 81 = 0x51
    PKPaymentTransaction *_latestTransactionPendingUserNotification;	// 88 = 0x58
    _Bool _resultSubmissionInProgress;	// 96 = 0x60
    NSMutableDictionary *_signTransactionCompletionsForTransactionIdentifier;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_queue;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000001001f5ca4
- (void)_configureSigningCertificateForPass:(id)arg1 withSigningCertificate:(id)arg2;	// IMP=0x00000001001f5824
- (id)_transactionAuthenticationResultsDataFromResult:(id)arg1 outError:(id *)arg2;	// IMP=0x00000001001f5484
- (void)_submitAuthenticationResult:(id)arg1 forTransaction:(id)arg2 pass:(id)arg3 retryForInvalidCertificate:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001001f44e0
- (void)_submitAuthenticationResultForTransaction:(id)arg1 pass:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f4078
- (void)_collectTransactionSignatureIfNecessaryAndSubmitResultForTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001f3cb8
- (_Bool)_supportsTransactionAuthenticationNotifications;	// IMP=0x00000001001f3cb0
- (void)_processLatestTransactionPendingUserNotification;	// IMP=0x00000001001f3a40
- (void)assertionManager:(id)arg1 didInvalidateAssertion:(id)arg2;	// IMP=0x00000001001f39d0
- (void)assertionManager:(id)arg1 didAcquireAssertion:(id)arg2;	// IMP=0x00000001001f3968
- (_Bool)allowAcquisitionOfAssertionOfType:(unsigned long long)arg1;	// IMP=0x00000001001f3960
- (_Bool)interestedInAssertionOfType:(unsigned long long)arg1;	// IMP=0x00000001001f3954
- (void)_startPaymentInformationEventExtensionForPass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001f31d4
- (void)_performTransactionSignatureRequestForPass:(id)arg1 withTransaction:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f27d0
- (void)_collectTransactionSignatureForTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001f2344
- (void)_disableCriticalPushReliability;	// IMP=0x00000001001f22ec
- (void)_enableCriticalPushReliabilityForTransaction:(id)arg1;	// IMP=0x00000001001f217c
- (void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;	// IMP=0x00000001001f20f4
- (void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 oldTransaction:(id)arg3;	// IMP=0x00000001001f1c84
- (void)submitEncryptedPIN:(id)arg1 forTransactionIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f1998
- (void)submitUserConfirmation:(_Bool)arg1 forTransactionIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f1640
- (void)markAuthenticationCompleteForTransactionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001f1524
- (void)processedAuthenticationMechanism:(unsigned long long)arg1 forTransactionIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f13f4
- (void)dealloc;	// IMP=0x00000001001f1390
- (id)initWithDatabaseManager:(id)arg1 auxiliaryCapabilityManager:(id)arg2 notificationServiceCoordinator:(id)arg3 userNotificationManager:(id)arg4 transactionProcessor:(id)arg5 assertionManager:(id)arg6 pushNotificationManager:(id)arg7;	// IMP=0x00000001001f11a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

