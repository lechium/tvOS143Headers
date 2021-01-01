//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDNetworkTaskDelegate-Protocol.h"
#import "PDScheduledActivityClient-Protocol.h"

@class NSMutableDictionary, NSString, PDDatabaseManager, PDNetworkTaskManager, PDPaymentWebServiceCoordinator, PDPushNotificationManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PDAuxiliaryCapabilityManager : NSObject <PDScheduledActivityClient, PDNetworkTaskDelegate>
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PDPaymentWebServiceCoordinator *_webServiceCoordinator;	// 16 = 0x10
    PDPushNotificationManager *_pushNotificationManager;	// 24 = 0x18
    PDNetworkTaskManager *_taskManager;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_criticalPushReliabilityTimer;	// 40 = 0x28
    NSString *_pushPendingBarcodeIdentifier;	// 48 = 0x30
    _Bool _criticalPushReliabilityEnabled;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    NSMutableDictionary *_isRegisteringAuxiliaryCapabilityForPass;	// 72 = 0x48
    NSMutableDictionary *_auxiliaryRegisterCompletionHandlersForPass;	// 80 = 0x50
    NSMutableDictionary *_isFetchingBarcodesForPass;	// 88 = 0x58
    NSMutableDictionary *_hasPendingHighPriorityFetchForPass;	// 96 = 0x60
    NSMutableDictionary *_fetchBarcodeCompletionHandlersForPass;	// 104 = 0x68
    NSMutableDictionary *_barcodeDecryptionAuthTokenForPass;	// 112 = 0x70
    NSMutableDictionary *_retrieveDecryptedBarcodeCompletionHandlersForPass;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000001001f0640
- (id)_signData:(id)arg1 withDeviceAccountIdentifier:(id)arg2 outError:(id *)arg3;	// IMP=0x00000001001f0544
- (void)_performDeviceSignatureWithData:(id)arg1 forPass:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f00b4
- (id)_decryptEncryptedDataObject:(id)arg1 keyData:(id)arg2 authorization:(id)arg3 outError:(id *)arg4;	// IMP=0x00000001001efe90
- (id)_publicKeyHashForCertificateType:(long long)arg1 deviceAccountIdentifier:(id)arg2;	// IMP=0x00000001001efdec
- (id)_keychainItemIdentifierForKeyDataWithCertificateType:(long long)arg1 deviceAccountIdentifier:(id)arg2;	// IMP=0x00000001001efd5c
- (id)_keychainItemIdentifierForCertificateType:(long long)arg1 withDeviceAccountIdentifier:(id)arg2;	// IMP=0x00000001001efccc
- (id)_wrapperWithIdentifier:(id)arg1;	// IMP=0x00000001001efc38
- (void)_removeKeysAndCertificatesForDeviceAccountIdentifier:(id)arg1 withCertificateType:(long long)arg2 reason:(unsigned long long)arg3;	// IMP=0x00000001001efaf8
- (void)_removeAllKeysAndCertificatesForPass:(id)arg1;	// IMP=0x00000001001efa4c
- (id)_fetchKeyDataForDeviceAccountIdentifier:(id)arg1 withCertificateType:(long long)arg2;	// IMP=0x00000001001ef9ac
- (id)_fetchCertificatesForDeviceAccountIdentifier:(id)arg1 withCertificateType:(long long)arg2;	// IMP=0x00000001001ef778
- (id)_storeCertificates:(id)arg1 withCertificateType:(long long)arg2 forDeviceAccountIdentifier:(id)arg3;	// IMP=0x00000001001ef570
- (id)_validateAndStoreCertificateChain:(id)arg1 withCertificateType:(long long)arg2 forPass:(id)arg3;	// IMP=0x00000001001ef248
- (id)_createKeyAndSEAttestationForCertificateType:(long long)arg1 withDeviceAccountIdentifier:(id)arg2 outError:(id *)arg3;	// IMP=0x00000001001ef0ac
- (void)task:(id)arg1 encounteredWarnings:(id)arg2;	// IMP=0x00000001001eefbc
- (void)task:(id)arg1 encounteredError:(id)arg2;	// IMP=0x00000001001ee978
- (void)taskFailed:(id)arg1;	// IMP=0x00000001001ee8b4
- (void)taskSucceeded:(id)arg1;	// IMP=0x00000001001ee7f0
- (void)task:(id)arg1 willRetryAfterMinimumDelay:(double)arg2;	// IMP=0x00000001001ee714
- (void)task:(id)arg1 gotResult:(id)arg2;	// IMP=0x00000001001ee608
- (void)_updateBackgroundFetchScheduledActivityIfNecessary;	// IMP=0x00000001001ee480
- (void)_unscheduleBackgroundFetchForPassUniqueID:(id)arg1;	// IMP=0x00000001001ee38c
- (void)_scheduleBackgroundFetchForPassUniqueID:(id)arg1 withBackgroundFetchType:(long long)arg2;	// IMP=0x00000001001ee1a8
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x00000001001eddfc
- (void)_submitBarcodePaymentEvent:(id)arg1 forPass:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001ed910
- (void)_disableCriticalPushReliability;	// IMP=0x00000001001ed8b8
- (void)_enableCriticalPushReliabilityForBarcodeCredential:(id)arg1;	// IMP=0x00000001001ed748
- (unsigned long long)_estimatedNumberOfBarcodesRequiredPerDayForPass:(id)arg1;	// IMP=0x00000001001ed558
- (unsigned long long)_barcodeCountLowWatermarkForPass:(id)arg1;	// IMP=0x00000001001ed52c
- (unsigned long long)_numberOfBarcodesToFetchForPass:(id)arg1 fetchReason:(long long)arg2;	// IMP=0x00000001001ed43c
- (id)_decryptBarcodeCredential:(id)arg1 forPass:(id)arg2 authorization:(id)arg3 outError:(id *)arg4;	// IMP=0x00000001001ed1d8
- (id)_handleFetchBarcodeResponse:(id)arg1 forPass:(id)arg2 outStoredBarcodeCount:(unsigned long long *)arg3;	// IMP=0x00000001001ecd34
- (void)_retrieveDecryptedBarcodeCredentialForPass:(id)arg1 authorization:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001ec0d0
- (void)_fetchBarcodesForPass:(id)arg1 fetchReason:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001eae50
- (id)_handleAuxiliaryCapabilityRegistrationResponse:(id)arg1 forPass:(id)arg2;	// IMP=0x00000001001eac44
- (id)_createAuxiliaryCapabilityRegisterRequestForPass:(id)arg1 outError:(id *)arg2;	// IMP=0x00000001001ea5f8
- (void)_registerAuxiliaryCapabilityForPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001e9e48
- (void)_forceReregisterAuxiliaryCapabilityForPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001e9dbc
- (void)fetchBarcodesForPassUniqueIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001e9c74
- (void)registerAuxiliaryCapabilityForPassUniqueIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001e9b30
- (void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 oldTransaction:(id)arg3;	// IMP=0x00000001001e9a20
- (void)nukeTasks;	// IMP=0x00000001001e9a10
- (void)passWillBeRemoved:(id)arg1;	// IMP=0x00000001001e9858
- (void)passAddedOrUpdated:(id)arg1;	// IMP=0x00000001001e93c4
- (void)submitBarcodePaymentEvent:(id)arg1 forPassUniqueIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001e9248
- (void)performDeviceSignatureWithData:(id)arg1 forPassUniqueIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001e90d0
- (void)invalidateCertificateOfType:(long long)arg1 forPassUniqueIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001e8f40
- (void)retrievePINEncryptionCertificateForPassUniqueIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001e87cc
- (void)retrieveDecryptedBarcodeCredentialForPassUniqueIdentifier:(id)arg1 authorization:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001e8604
- (id)initWithDatabaseManager:(id)arg1 paymentWebServiceCoordinator:(id)arg2 pushNotificationManager:(id)arg3;	// IMP=0x00000001001e8420

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
