//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDXPCService.h>

#import "PDApplyManagerObserver-Protocol.h"
#import "PDPaymentServiceExportedInterface-Protocol.h"
#import "PDPaymentWebServiceCoordinatorDelegate-Protocol.h"
#import "PKFieldDetectorObserver-Protocol.h"

@class NSString, PDAccountManager, PDAppletSubcredentialManager, PDApplyManager, PDAuxiliaryCapabilityManager, PDCardFileManager, PDCloudStoreNotificationCoordinator, PDDatabaseManager, PDDefaultPassManager, PDDevicePasscodeManager, PDExpressPassManager, PDFamilyCircleManager, PDNotificationServiceCoordinator, PDPaymentWebServiceCoordinator, PDPeerPaymentWebServiceCoordinator, PDPushNotificationManager, PDPushProvisioningManager, PDRemoteInterfacePresenter, PDTransactionAuthenticationManager, PDTransactionReceiptFileManager, PDTransitStateManager, PDUserNotificationManager, PKEntitlementWhitelist, PKFieldDetector, PKPaymentTransactionProcessor, PKSecureElement;
@protocol PKTapToRadarDelegate;

@interface PDPaymentService : PDXPCService <PKFieldDetectorObserver, PDApplyManagerObserver, PDPaymentWebServiceCoordinatorDelegate, PDPaymentServiceExportedInterface>
{
    PKEntitlementWhitelist *_whitelist;	// 8 = 0x8
    _Bool _gatheringAllTransactions;	// 16 = 0x10
    PDNotificationServiceCoordinator *_notificationServiceCoordinator;	// 24 = 0x18
    PDCloudStoreNotificationCoordinator *_cloudStoreNotificationCoordinator;	// 32 = 0x20
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServicesCoordinator;	// 40 = 0x28
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 48 = 0x30
    PDFamilyCircleManager *_familyMemberManager;	// 56 = 0x38
    PKPaymentTransactionProcessor *_paymentTransactionProcessor;	// 64 = 0x40
    PDRemoteInterfacePresenter *_remoteInterfacePresenter;	// 72 = 0x48
    PDDatabaseManager *_databaseManager;	// 80 = 0x50
    PDExpressPassManager *_expressPassManager;	// 88 = 0x58
    PDTransitStateManager *_transitStateManager;	// 96 = 0x60
    PDUserNotificationManager *_userNotificationManager;	// 104 = 0x68
    PKFieldDetector *_fieldDetector;	// 112 = 0x70
    PKSecureElement *_secureElement;	// 120 = 0x78
    PDDefaultPassManager *_defaultPassManager;	// 128 = 0x80
    PDPushNotificationManager *_pushNotificationManager;	// 136 = 0x88
    PDDevicePasscodeManager *_devicePasscodeManager;	// 144 = 0x90
    PDApplyManager *_applyManager;	// 152 = 0x98
    PDAccountManager *_accountManager;	// 160 = 0xa0
    PDAppletSubcredentialManager *_subcredentialManager;	// 168 = 0xa8
    PDCardFileManager *_cardFileManager;	// 176 = 0xb0
    PDPushProvisioningManager *_pushProvisioningManager;	// 184 = 0xb8
    PDAuxiliaryCapabilityManager *_auxiliaryCapabilityManager;	// 192 = 0xc0
    PDTransactionAuthenticationManager *_transactionAuthenticationManager;	// 200 = 0xc8
    id <PKTapToRadarDelegate> _tapToRadarDelegate;	// 208 = 0xd0
    PDTransactionReceiptFileManager *_transactionReceiptFileManager;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x00000001001b17cc
@property(retain, nonatomic) PDTransactionReceiptFileManager *transactionReceiptFileManager; // @synthesize transactionReceiptFileManager=_transactionReceiptFileManager;
@property(nonatomic) __weak id <PKTapToRadarDelegate> tapToRadarDelegate; // @synthesize tapToRadarDelegate=_tapToRadarDelegate;
@property(retain, nonatomic) PDTransactionAuthenticationManager *transactionAuthenticationManager; // @synthesize transactionAuthenticationManager=_transactionAuthenticationManager;
@property(retain, nonatomic) PDAuxiliaryCapabilityManager *auxiliaryCapabilityManager; // @synthesize auxiliaryCapabilityManager=_auxiliaryCapabilityManager;
@property(retain, nonatomic) PDPushProvisioningManager *pushProvisioningManager; // @synthesize pushProvisioningManager=_pushProvisioningManager;
@property(retain, nonatomic) PDCardFileManager *cardFileManager; // @synthesize cardFileManager=_cardFileManager;
@property(retain, nonatomic) PDAppletSubcredentialManager *subcredentialManager; // @synthesize subcredentialManager=_subcredentialManager;
@property(retain, nonatomic) PDAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(retain, nonatomic) PDApplyManager *applyManager; // @synthesize applyManager=_applyManager;
@property(retain, nonatomic) PDDevicePasscodeManager *devicePasscodeManager; // @synthesize devicePasscodeManager=_devicePasscodeManager;
@property(retain, nonatomic) PDPushNotificationManager *pushNotificationManager; // @synthesize pushNotificationManager=_pushNotificationManager;
@property(retain, nonatomic) PDDefaultPassManager *defaultPassManager; // @synthesize defaultPassManager=_defaultPassManager;
@property(retain, nonatomic) PKSecureElement *secureElement; // @synthesize secureElement=_secureElement;
@property(retain, nonatomic) PKFieldDetector *fieldDetector; // @synthesize fieldDetector=_fieldDetector;
@property(retain, nonatomic) PDUserNotificationManager *userNotificationManager; // @synthesize userNotificationManager=_userNotificationManager;
@property(retain, nonatomic) PDTransitStateManager *transitStateManager; // @synthesize transitStateManager=_transitStateManager;
@property(retain, nonatomic) PDExpressPassManager *expressPassManager; // @synthesize expressPassManager=_expressPassManager;
@property(retain, nonatomic) PDDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(retain, nonatomic) PDRemoteInterfacePresenter *remoteInterfacePresenter; // @synthesize remoteInterfacePresenter=_remoteInterfacePresenter;
@property(retain, nonatomic) PKPaymentTransactionProcessor *paymentTransactionProcessor; // @synthesize paymentTransactionProcessor=_paymentTransactionProcessor;
@property(retain, nonatomic) PDFamilyCircleManager *familyMemberManager; // @synthesize familyMemberManager=_familyMemberManager;
@property(retain, nonatomic) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator; // @synthesize paymentWebServiceCoordinator=_paymentWebServiceCoordinator;
@property(retain, nonatomic) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServicesCoordinator; // @synthesize peerPaymentWebServicesCoordinator=_peerPaymentWebServicesCoordinator;
@property(retain, nonatomic) PDCloudStoreNotificationCoordinator *cloudStoreNotificationCoordinator; // @synthesize cloudStoreNotificationCoordinator=_cloudStoreNotificationCoordinator;
@property(retain, nonatomic) PDNotificationServiceCoordinator *notificationServiceCoordinator; // @synthesize notificationServiceCoordinator=_notificationServiceCoordinator;
- (void)sendAllPassTransactions;	// IMP=0x00000001001b107c
- (void)serviceSuspended;	// IMP=0x00000001001b1078
- (void)serviceResumed;	// IMP=0x00000001001b1074
- (void)credentialWasDeleted:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b1070
- (void)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b0f88
- (void)performProductActionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b0e9c
- (void)productsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b0dcc
- (void)sendPaymentPassWithUniqueIdentifier:(id)arg1 didUpdateCredential:(id)arg2;	// IMP=0x00000001001b0cac
- (void)sendDidRecieveCredentialInvitation:(id)arg1;	// IMP=0x00000001001b0c30
- (void)sendPaymentPassWithUniqueIdentifier:(id)arg1 didUpdateCategoryVisualizationWithStyle:(long long)arg2;	// IMP=0x00000001001b0ba4
- (void)sendPaymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitProperties:(id)arg2;	// IMP=0x00000001001b0b04
- (void)sendDidUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;	// IMP=0x00000001001b0a6c
- (void)sendPaymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(_Bool)arg2;	// IMP=0x00000001001b09cc
- (void)sendPaymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(_Bool)arg2;	// IMP=0x00000001001b092c
- (void)sendTransactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;	// IMP=0x00000001001b088c
- (void)sendTransactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;	// IMP=0x00000001001b07ec
- (void)sendPaymentPassWithUniqueIdentifier:(id)arg1 didUpdateBalanceReminder:(id)arg2 forBalanceWithIdentifier:(id)arg3;	// IMP=0x00000001001b0730
- (void)sendPaymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;	// IMP=0x00000001001b0690
- (void)sendPaymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x00000001001b05f0
- (void)sendPassWithUniqueIdentifier:(id)arg1 didReceiveValueAddedServiceTransaction:(id)arg2;	// IMP=0x00000001001b0550
- (void)photosForFamilyMembersWithDSIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b0468
- (void)familyMembersIgnoringCache:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b0394
- (void)fieldDetectorDidExitField:(id)arg1;	// IMP=0x00000001001b0324
- (void)fieldDetectorDidEnterField:(id)arg1 withProperties:(id)arg2;	// IMP=0x00000001001b02a8
- (void)submitBarcodePaymentEvent:(id)arg1 forPassUniqueIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001b0098
- (void)submitEncryptedPIN:(id)arg1 forTransactionIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001afddc
- (void)submitUserConfirmation:(_Bool)arg1 forTransactionIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001afb44
- (void)markAuthenticationCompleteForTransactionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001af96c
- (void)processedAuthenticationMechanism:(unsigned long long)arg1 forTransactionIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001af780
- (void)retrievePINEncryptionCertificateForPassUniqueIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001af5a0
- (void)retrieveDecryptedBarcodeCredentialForPassUniqueIdentifier:(id)arg1 authorization:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001af2dc
- (void)fetchBarcodesForPassUniqueIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001af058
- (void)registerAuxiliaryCapabilityForPassUniqueIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001aeddc
- (void)transactionReceiptForTransactionWithIdentifier:(id)arg1 updateIfNecessary:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001ae9ec
- (void)deleteTransactionReceiptWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ae7f8
- (void)storeTransactionReceiptData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ae4cc
- (void)transactionReceiptWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ae2b4
- (void)requiresUpgradedPasscodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ae000
- (void)enforceUpgradedPasscodePolicyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ade48
- (void)disbursementVoucherWithDisbursementSource:(unsigned long long)arg1 disbursementTarget:(unsigned long long)arg2 bundleIdentifier:(id)arg3 teamIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001001ad9d0
- (void)passOwnershipTokenWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ad840
- (void)storePassOwnershipToken:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00000001001ad6a0
- (void)setDeviceUpgradeTasksContextBuildVersion:(id)arg1 upgradeTaskVersion:(long long)arg2 retryCount:(long long)arg3;	// IMP=0x00000001001ad57c
- (void)scheduleDeviceUpgradeTasksIfNecessaryWithRandomizeStartDate:(_Bool)arg1;	// IMP=0x00000001001ad460
- (void)unscheduleDeviceUpgradeTaskActivity;	// IMP=0x00000001001ad34c
- (void)setDeviceCheckInContextBuildVersion:(id)arg1 outstandingAction:(long long)arg2 forRegion:(id)arg3;	// IMP=0x00000001001ad214
- (void)performDeviceCheckInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ad0f0
- (void)redeemProvisioningSharingIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001acfa4
- (void)redeemEncryptedProvisioningTarget:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ace54
- (void)prepareProvisioningTarget:(id)arg1 checkFamilyCircle:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001acd00
- (void)provideEncryptedPushProvisioningTarget:(id)arg1 sharingInstanceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001acba0
- (void)statusForShareableCredentials:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001aca54
- (void)pushProvisioningSharingIdentifiers:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ac930
- (void)didUpdateSharingInvitationWithIdentifier:(id)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001ac7c4
- (void)didReceiveSharingInvitationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ac668
- (void)didReceiveSharingInvitationWithIdentifier:(id)arg1 fromOriginatorIDSHandle:(id)arg2 sharingSessionIdentifier:(id)arg3 metadata:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001001ac4a0
- (void)finishedKeyExchangeForCredential:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ac348
- (void)sharingInvitationWasInvalidated:(id)arg1 withCredentialIdentifier:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001ac1a4
- (void)credentialWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ac048
- (void)canAcceptInvitation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001abec8
- (void)requestBackgroundRegistrationForCredentialWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001abd80
- (void)removeSharingInvitationWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001abc38
- (void)addSubcredential:(id)arg1 fromSharingInvitationWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001abacc
- (void)removeSharingInvitationReceiptWithIdentifiers:(id)arg1 onCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001ab960
- (void)declineRelatedSharingInvitationsIfNecessary:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ab81c
- (void)addSharingInvitationReceipts:(id)arg1 onCredentialWithIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001ab6b0
- (void)revokeCredentialsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ab558
- (void)registerCredentialsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ab160
- (void)updateMetadataOnPassWithIdentifier:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001ab000
- (void)subcredentialInvitationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001aaebc
- (void)addPlaceholderPassWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001aaaec
- (void)setAccountAttestationAnonymizationSalt:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001aa9a8
- (void)accountAttestationAnonymizationSaltWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001aa884
- (void)displayTapToRadarAlertForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001aa804
- (void)_requestUpdatesForTransactionSourceIdentifiers:(id)arg1;	// IMP=0x00000001001aa598
- (void)noteAccountDeletedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001aa390
- (void)recomputeCategoryVisualizationMangitudesForPassUniqueID:(id)arg1 style:(long long)arg2;	// IMP=0x00000001001aa274
- (void)categoryVisualizationMagnitudesForPassUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001aa110
- (void)transactionsRequiringReviewForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001aa068
- (void)submitTransactionAnswerForTransaction:(id)arg1 questionType:(unsigned long long)arg2 answer:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001a98bc
- (void)submitDeleteRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a9778
- (void)submitTermsRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a9630
- (void)submitDocumentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a94e8
- (void)submitApplyRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a93a0
- (void)featureApplicationsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a927c
- (void)featureApplicationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a9138
- (void)featureApplicationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a9018
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;	// IMP=0x00000001001a8f90
- (void)passbookUIServiceDidLaunch:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a8e68
- (void)scheduleAutomaticPresentationAvailableNotificationForPassWithUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a8b5c
- (void)removeProductsCache;	// IMP=0x00000001001a8b04
- (void)unscheduleDeviceCheckIn;	// IMP=0x00000001001a8aac
- (void)scheduleDeviceCheckInWithStartTimeOffset:(double)arg1;	// IMP=0x00000001001a8a40
- (void)scheduleSetupReminders:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a86a8
- (void)consistencyCheckWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a84f4
- (void)downloadAllPaymentPassesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a8340
- (void)simulatePaymentPushTopic:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a815c
- (void)initializeSecureElement:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a7ed8
- (void)initializeSecureElementIfNecessaryWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a7a18
- (void)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a77c0
- (void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001a7528
- (void)insertOrUpdateValueAddedServiceTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentTransaction:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001a7098
- (void)outstandingExpressTransactionState:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a7034
- (void)transitStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001a6f90
- (void)processTransitTransactionEventWithHistory:(id)arg1 transactionDate:(id)arg2 forPaymentApplication:(id)arg3 withPassUniqueIdentifier:(id)arg4 expressTransactionState:(id)arg5;	// IMP=0x00000001001a6d7c
- (void)sanitizeExpressPasses;	// IMP=0x00000001001a6d20
- (void)removeMapsDataForTransactionWithIdentifier:(id)arg1 forTransactionSourceIdentifier:(id)arg2 issueReportIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001a6aac
- (void)insertOrUpdatePaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001a66e8
- (void)insertOrUpdatePaymentTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001a640c
- (void)archiveMessageWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a6228
- (void)deleteAllMessagesForPaymentPassWithUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a6044
- (void)deleteAllTransactionsForTransactionSourceIdentifiers:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a5d54
- (void)deletePaymentTransactionWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a5b70
- (void)setCommutePlanReminder:(id)arg1 forCommutePlanIdentifier:(id)arg2 withPassUniqueIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001a5918
- (void)commutePlanReminderForCommutePlanIdentifier:(id)arg1 withPassUniqueIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001a56dc
- (void)setBalanceReminder:(id)arg1 forBalanceIdentifier:(id)arg2 withPassUniqueIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001a5160
- (void)balanceReminderThresholdForBalanceIdentifier:(id)arg1 withPassUniqueIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001a4f24
- (void)balancesForPaymentPassWithUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a4cd4
- (void)messagesForPaymentPassWithUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a4a84
- (void)valueAddedServiceTransactionWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a4888
- (void)valueAddedServiceTransactionsForPaymentTransaction:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a468c
- (void)valueAddedServiceTransactionsForPassWithUniqueIdentifier:(id)arg1 limit:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001a447c
- (void)mapsMerchantsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a4294
- (void)ambiguousTransactionWithServiceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a4080
- (void)passUniqueIdentifierForTransactionWithServiceIdentifier:(id)arg1 transactionSourceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001a3e34
- (void)ambiguousPassUniqueIdentifierForTransactionWithServiceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a3c20
- (void)passUniqueIdentifierForTransactionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a3a0c
- (void)transactionsForPredicate:(id)arg1 limit:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001a37fc
- (void)logoImageDataForTransactionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a3478
- (void)transactionsForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a327c
- (void)installmentPlanTransactionsForTransactionSourceIdentifiers:(id)arg1 accountIdentifier:(id)arg2 withRedemptionType:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001001a2fd8
- (void)installmentPlansWithTransactionReferenceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a2ddc
- (void)installmentTransactionsForInstallmentPlanIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a2be0
- (void)transactionWithReferenceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a29cc
- (void)transactionWithServiceIdentifier:(id)arg1 transactionSourceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001a2780
- (void)transactionSourceTypeForTransactionSourceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a2580
- (void)transactionWithTransactionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a236c
- (void)transactionsWithTransactionSource:(unsigned long long)arg1 withBackingData:(unsigned long long)arg2 limit:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001a2178
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001001a1fe4
- (void)pendingTransactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000001001a1d40
- (void)approvedTransactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000001001a1a9c
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionType:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000001001a1804
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withMerchantCategory:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000001001a156c
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 matchingMerchant:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001001a1304
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withPeerPaymentCounterpartHandles:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001001a109c
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 orderedByDate:(long long)arg6 limit:(long long)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000001001a0df8
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000001001a0d40
- (void)hasTransactionsForTransactionSourceIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a0a78
- (void)cashbackByPeriodForTransactionSourceIdentifiers:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 calendar:(id)arg4 calendarUnit:(unsigned long long)arg5 type:(long long)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000001001a07c8
- (void)transactionCountByPeriodForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 calendar:(id)arg4 unit:(unsigned long long)arg5 includePurchaseTotal:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000001001a055c
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010019fffc
- (void)messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010019fdd4
- (void)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010019fbac
- (void)setSharedPaymentWebServiceContext:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010019f9b8
- (void)sharedPaymentWebServiceContextWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010019f778
- (void)simulateDefaultExpressTransitPassIdentifier:(id)arg1 forExpressMode:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010019f584
- (void)isPassExpressWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010019f4cc
- (void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010019f410
- (void)removeExpressPassesWithCardType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010019f368
- (void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010019f274
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withReferenceExpressState:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010019f184
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010019f0b0
- (void)expressPassInformationForMode:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010019eff8
- (void)expressPassesInformationWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010019ef5c
- (void)expressPassesInformationWithAutomaticSelectionTechnologyType:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010019eeb8
- (void)expressPassesInformationWithCardType:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010019ee14
- (void)expressPassInformationWithPassUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010019ed5c
- (void)setDefaultExpressFelicaTransitPassIdentifier:(id)arg1 withCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010019eb54
- (void)defaultPaymentPassIngestionSpecificIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x000000010019e834
- (void)setDefaultPaymentPassUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010019e5dc
- (void)defaultPaymentPassUniqueIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x000000010019e3b8
- (void)paymentDeviceFieldPropertiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010019e178
- (void)applyManager:(id)arg1 didUpdateApplication:(id)arg2 oldApplication:(id)arg3;	// IMP=0x000000010019e0fc
- (void)applyManager:(id)arg1 didRemoveApplication:(id)arg2;	// IMP=0x000000010019e080
- (void)applyManager:(id)arg1 didAddApplication:(id)arg2;	// IMP=0x000000010019e004
- (void)paymentWebServiceCoordinator:(id)arg1 didDownloadTransactionReceipt:(id)arg2 forTransactionWithIdentifier:(id)arg3;	// IMP=0x000000010019df64
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010019de20
- (id)remoteObjectProxy;	// IMP=0x000000010019dde4
- (void)dealloc;	// IMP=0x000000010019dd88
- (id)initWithConnection:(id)arg1;	// IMP=0x000000010019dce8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

