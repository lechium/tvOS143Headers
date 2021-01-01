//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceTargetDevice.h>

#import "PKPassLibraryDataProvider-Protocol.h"
#import "PKPaymentDataProvider-Protocol.h"

@class NSString, PKOSVersionRequirement, PKPaymentWebService, PKSecureElement;
@protocol PDPaymentWebServiceTargetDeviceDataSource, PKPaymentDataProviderDelegate;

@interface PDPaymentWebServiceTargetDevice : PKPaymentWebServiceTargetDevice <PKPaymentDataProvider, PKPassLibraryDataProvider>
{
    PKSecureElement *_secureElement;	// 8 = 0x8
    id <PDPaymentWebServiceTargetDeviceDataSource> _dataSource;	// 16 = 0x10
    id <PKPaymentDataProviderDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001c95f4
@property(nonatomic) __weak id <PKPaymentDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)noteProvisioningDidEnd;	// IMP=0x00000001001c9548
- (void)noteProvisioningDidBegin;	// IMP=0x00000001001c94d0
@property(readonly, nonatomic) _Bool secureElementIsProductionSigned;
@property(readonly, nonatomic) NSString *secureElementIdentifier;
@property(readonly, nonatomic) PKPaymentWebService *paymentWebService;
@property(readonly, nonatomic) _Bool isPaymentHandoffDisabled;
@property(readonly, nonatomic) _Bool isDeviceInRestrictedMode;
@property(readonly, nonatomic) NSString *deviceName;
@property(retain, nonatomic) NSString *defaultPaymentPassIdentifier;
@property(readonly, nonatomic) _Bool canAddPaymentPass;
- (void)removePass:(id)arg1;	// IMP=0x00000001001c9148
- (id)peerPaymentPassUniqueID;	// IMP=0x00000001001c90ac
- (id)paymentPasses;	// IMP=0x00000001001c9010
- (id)passWithUniqueID:(id)arg1;	// IMP=0x00000001001c8f7c
- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;	// IMP=0x00000001001c8ec0
- (_Bool)canAddSecureElementPassWithConfiguration:(id)arg1;	// IMP=0x00000001001c8eb8
- (void)setPaymentHandoffDisabled:(_Bool)arg1;	// IMP=0x00000001001c8eb0
- (void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001c8dc4
- (id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1;	// IMP=0x00000001001c8d30
- (_Bool)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;	// IMP=0x00000001001c8d1c
@property(readonly, nonatomic) PKOSVersionRequirement *deviceVersion;
@property(readonly, nonatomic) NSString *deviceClass;
- (void)_initializeSecureElement:(CDUnknownBlockType)arg1;	// IMP=0x00000001001c8c4c
- (void)_initializeSecureElementIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001c8934
- (void)_consistencyCheck;	// IMP=0x00000001001c88d8
- (_Bool)_willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1;	// IMP=0x00000001001c8730
- (void)_performProductActionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c8690
- (void)_productsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001c8610
- (void)_passOwnershipTokenWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c8560
- (void)_storePassOwnershipToken:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00000001001c8444
- (void)_performDeviceCheckInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001c83c4
- (void)_setDefaultPaymentPassUniqueIdentifier:(id)arg1;	// IMP=0x00000001001c8344
- (void)_matchingInvitationOnDevice:(id)arg1 withTimeout:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001c8170
- (void)_subcredentialInvitationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001c80bc
- (void)_credentialWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c7ff0
- (void)_canAcceptInvitation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c7f50
- (void)_requestBackgroundRegistrationForCredentialWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c7ea4
- (void)_removeSharingInvitation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c7dc4
- (void)_declineRelatedSharingInvitationsIfNecessary:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c7d24
- (void)_addSubcredential:(id)arg1 fromSharingInvitation:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001c7c28
- (void)_removeSharingInvitationReceiptWithIdentifiers:(id)arg1 onCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001c7b54
- (void)_addSharingInvitationReceipts:(id)arg1 onCredentialWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001c7a80
- (void)_updateMetadataOnPassWithIdentifier:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001c79bc
- (void)_enforceUpgradedPasscodePolicyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001c793c
- (void)_setAccountAttestationAnonymizationSalt:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c789c
- (void)_accountAttestationAnonymizationSaltWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001c781c
- (void)_featureApplicationsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001c779c
- (void)_removePassWithUniqueID:(id)arg1 diagnosticReason:(id)arg2;	// IMP=0x00000001001c7674
- (void)_downloadAllPaymentPasses;	// IMP=0x00000001001c7618
- (void)_removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c7578
- (id)_upgradeRequestForPass:(id)arg1;	// IMP=0x00000001001c74ec
- (void)_sanitizeExpressPasses;	// IMP=0x00000001001c7490
- (void)_conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withReferenceExpressState:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001c73cc
- (void)_conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c732c
- (void)_setExpressWithPassInformation:(id)arg1 credential:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001c7268
- (void)paymentWebService:(id)arg1 requestPassUpgrade:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001c715c
- (void)_startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;	// IMP=0x00000001001c70bc
- (void)_addPass:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c6e50
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000001001c6da8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
