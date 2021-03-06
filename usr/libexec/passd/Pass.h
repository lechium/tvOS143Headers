//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface Pass : SQLiteEntity
{
}

+ (id)_propertySettersForGroupingProfile;	// IMP=0x0000000100077c0c
+ (id)_propertySettersForUpdateContext;	// IMP=0x0000000100077938
+ (id)_propertySettersForDisplayProfile;	// IMP=0x00000001000774bc
+ (id)_propertySettersForPass;	// IMP=0x0000000100075fa0
+ (id)_propertiesForPass;	// IMP=0x0000000100075e74
+ (id)_realPassInDatabase:(id)arg1 withProperties:(id)arg2 values:(id *)arg3 pID:(long long)arg4;	// IMP=0x0000000100075a1c
+ (id)predicateForAssociatedAccountIdentifier:(id)arg1;	// IMP=0x00000001000759fc
+ (id)_predicateForIsCloudKitArchived:(_Bool)arg1;	// IMP=0x00000001000758b8
+ (id)predicateForIssuerCountryCodes:(id)arg1;	// IMP=0x0000000100075898
+ (id)_predicateForSerialNumber:(id)arg1;	// IMP=0x0000000100075878
+ (id)predicateForStyle:(long long)arg1;	// IMP=0x0000000100075804
+ (id)predicateForProvisioningCredentialHash:(id)arg1;	// IMP=0x00000001000757e4
+ (id)predicateForUniqueID:(id)arg1;	// IMP=0x00000001000757c4
+ (id)predicateForValidStyle;	// IMP=0x00000001000757a0
+ (id)predicateForGroup:(id)arg1;	// IMP=0x0000000100075714
+ (id)predicateForPassType:(id)arg1;	// IMP=0x0000000100075688
+ (id)predicateForPrimaryAccountIdentifier:(id)arg1;	// IMP=0x0000000100075668
+ (id)predicateForPaymentApplicationIdentifier:(id)arg1 withSecureElementIdentifiers:(id)arg2;	// IMP=0x0000000100075514
+ (id)predicateForPaymentApplicationIdentifier:(id)arg1 withSecureElementIdentifier:(id)arg2;	// IMP=0x00000001000753c4
+ (id)predicateForTCIs:(id)arg1;	// IMP=0x00000001000753a4
+ (id)predicateForPaymentType:(unsigned long long)arg1;	// IMP=0x0000000100075330
+ (id)predicateForPaymentApplicationAppletDataFormatPrefix:(id)arg1;	// IMP=0x0000000100075310
+ (id)predicateForPaymentApplicationNetworks:(id)arg1;	// IMP=0x00000001000752f0
+ (id)predicateForPaymentApplicationSupportsInAppPayment:(_Bool)arg1;	// IMP=0x000000010007527c
+ (id)predicateForPaymentApplicationSupportsContactlessPayment:(_Bool)arg1;	// IMP=0x0000000100075208
+ (id)predicateForPrimaryPaymentApplication:(_Bool)arg1;	// IMP=0x0000000100075190
+ (id)predicateForPaymentApplicationStates:(id)arg1;	// IMP=0x0000000100074fd4
+ (id)predicateForPaymentApplicationState:(long long)arg1;	// IMP=0x0000000100074f60
+ (id)predicateForPaymentApplicationSecureElementIdentifier:(id)arg1;	// IMP=0x0000000100074f40
+ (id)predicateForPaymentApplicationSecureElementIdentifiers:(id)arg1;	// IMP=0x0000000100074f20
+ (id)predicateForNotificationService:(id)arg1;	// IMP=0x0000000100074e94
+ (id)predicateForAssociatedPassTypeIdentifierHash:(id)arg1;	// IMP=0x0000000100074e74
+ (id)predicateForPassTypeIdentifierHash:(id)arg1;	// IMP=0x0000000100074e54
+ (id)predicateForPaymentCardType:(long long)arg1;	// IMP=0x0000000100074de0
+ (id)predicateForWebService:(id)arg1;	// IMP=0x0000000100074d54
+ (id)predicateForHasValidNFCPayload;	// IMP=0x0000000100074c1c
+ (id)predicateForHasAnyWebService;	// IMP=0x0000000100074c00
+ (id)predicateForTransactionSourceWithPID:(unsigned long long)arg1;	// IMP=0x0000000100074b8c
+ (id)predicateForPersistentID:(long long)arg1;	// IMP=0x0000000100074b18
+ (id)queryWithDatabase:(id)arg1 group:(id)arg2;	// IMP=0x00000001000745f0
+ (id)queryWithDatabase:(id)arg1 passType:(id)arg2;	// IMP=0x0000000100074564
+ (id)passesInDatabase:(id)arg1 isCloudKitArchived:(_Bool)arg2;	// IMP=0x00000001000744d4
+ (id)anyInDatabase:(id)arg1 withAssociatedAccountIdentifier:(id)arg2;	// IMP=0x0000000100074448
+ (id)anyInDatabase:(id)arg1 withPrimaryAccountIdentifier:(id)arg2;	// IMP=0x00000001000743bc
+ (id)anyInDatabase:(id)arg1 withApplicationIdentifier:(id)arg2 secureElementIdentifiers:(id)arg3;	// IMP=0x0000000100074314
+ (id)anyInDatabase:(id)arg1 withApplicationIdentifier:(id)arg2 secureElementIdentifier:(id)arg3;	// IMP=0x000000010007426c
+ (id)anyInDatabase:(id)arg1 withNotificationService:(id)arg2;	// IMP=0x00000001000741e0
+ (id)anyInDatabase:(id)arg1 withWebService:(id)arg2 serialNumber:(id)arg3;	// IMP=0x000000010007408c
+ (id)anyInDatabase:(id)arg1 withPassType:(id)arg2 serialNumber:(id)arg3;	// IMP=0x0000000100073f38
+ (id)anyInDatabase:(id)arg1 withGroup:(id)arg2;	// IMP=0x0000000100073eac
+ (id)anyInDatabase:(id)arg1 withWebService:(id)arg2;	// IMP=0x0000000100073e20
+ (id)anyInDatabase:(id)arg1 withPassType:(id)arg2;	// IMP=0x0000000100073d94
+ (id)anyInDatabase:(id)arg1 withProvisioningCredentialHash:(id)arg2;	// IMP=0x0000000100073d08
+ (id)anyInDatabase:(id)arg1 withUniqueID:(id)arg2;	// IMP=0x0000000100073c7c
+ (id)anyInDatabase:(id)arg1 withTransactionSourcePID:(unsigned long long)arg2;	// IMP=0x0000000100073bec
+ (id)anyInDatabase:(id)arg1 withPersistentID:(long long)arg2;	// IMP=0x0000000100073b5c
+ (void)enumeratePassesAndGroupingProfilesForQuery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000738f8
+ (void)enumerateOrganizationNamesForQuery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000737c8
+ (void)enumerateUpdateContextsForQuery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000735ec
+ (id)candidatePassesInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x0000000100072284
+ (id)passUniqueIDsInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x00000001000720b8
+ (id)passesInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x0000000100071ff4
+ (id)_realPassesInDatabase:(id)arg1 predicate:(id)arg2 orderedBy:(id)arg3;	// IMP=0x0000000100071a0c
+ (id)_realPassPredicateForPredicate:(id)arg1;	// IMP=0x00000001000718d8
+ (id)insertPass:(id)arg1 withPassType:(id)arg2 webService:(id)arg3 transactionService:(id)arg4 messageService:(id)arg5 inDatabase:(id)arg6;	// IMP=0x0000000100070610
+ (id)_updateDictionaryWithPass:(id)arg1;	// IMP=0x000000010006fae8
+ (id)_insertionDictionaryWithPass:(id)arg1 passType:(id)arg2;	// IMP=0x000000010006f910
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x000000010006f690
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x000000010006f5a0
+ (id)databaseTable;	// IMP=0x000000010006f594
- (_Bool)deleteFromDatabase;	// IMP=0x000000010007467c
- (id)transactionSourceIdentifier;	// IMP=0x0000000100073520
- (_Bool)auxiliaryCapabilityRegistered;	// IMP=0x00000001000734cc
- (void)getPushRegistrationStatus:(unsigned long long *)arg1 date:(id *)arg2;	// IMP=0x0000000100073268
- (id)associatedApplicationIdentifiers;	// IMP=0x0000000100073240
- (id)associatedPassTypeIdentifiers;	// IMP=0x0000000100073218
- (id)relevantDate;	// IMP=0x00000001000731c4
- (id)primaryAccountIdentifier;	// IMP=0x00000001000731b0
- (id)associatedAccountIdentifier;	// IMP=0x000000010007319c
- (_Bool)hasAssociatedPeerPaymentAccount;	// IMP=0x0000000100073148
- (id)authenticationToken;	// IMP=0x0000000100073134
- (id)serialNumber;	// IMP=0x0000000100073120
- (id)uniqueID;	// IMP=0x000000010007310c
- (_Bool)revoked;	// IMP=0x00000001000730b8
- (id)defaultPaymentApplication;	// IMP=0x0000000100072fc8
- (id)group;	// IMP=0x0000000100072ed8
- (id)passNotificationServiceForType:(unsigned long long)arg1;	// IMP=0x0000000100072e90
- (id)passMessageService;	// IMP=0x0000000100072da0
- (id)passTransactionService;	// IMP=0x0000000100072cb0
- (id)messageService;	// IMP=0x0000000100072c5c
- (id)transactionService;	// IMP=0x0000000100072c08
- (id)webService;	// IMP=0x0000000100072b18
- (unsigned long long)passFlavor;	// IMP=0x0000000100072ac4
- (id)passType;	// IMP=0x00000001000729d4
- (id)groupingProfile;	// IMP=0x000000010007289c
- (id)updateContext;	// IMP=0x0000000100072764
- (id)pass;	// IMP=0x0000000100072758
- (id)_realPass;	// IMP=0x0000000100071dc8
- (_Bool)udpateWithAuxiliaryCapabilityRegistered:(_Bool)arg1;	// IMP=0x0000000100071870
- (void)updateWithRevocationStatus:(_Bool)arg1;	// IMP=0x0000000100071814
- (void)updateWithGroup:(id)arg1;	// IMP=0x00000001000717c4
- (void)updateWithAssociatedWebDomains:(id)arg1;	// IMP=0x0000000100071700
- (void)updateWithAssociatedPassTypeIdentifiers:(id)arg1;	// IMP=0x000000010007163c
- (void)updateWithAssociatedApplicationIdentifiers:(id)arg1;	// IMP=0x0000000100071578
- (void)_updateWithPassMessageService:(id)arg1;	// IMP=0x0000000100071528
- (void)_updateWithPassTransactionService:(id)arg1;	// IMP=0x00000001000714d8
- (void)_updateWithMessageService:(id)arg1;	// IMP=0x00000001000713e8
- (void)_updateWithTransactionService:(id)arg1;	// IMP=0x00000001000712f8
- (void)updateWithAssociatedAccountIdentifier:(id)arg1;	// IMP=0x00000001000712e4
- (void)updateWithTransactionSourcePID:(long long)arg1;	// IMP=0x0000000100071288
- (void)updateWithDefaultPaymentApplication:(id)arg1;	// IMP=0x0000000100071238
- (void)updateWithPaymentApplications:(id)arg1;	// IMP=0x00000001000711b8
- (void)_updateWithWebService:(id)arg1;	// IMP=0x0000000100071168
- (void)updateWithBeacons:(id)arg1;	// IMP=0x00000001000710a4
- (void)updateWithNFCPayload:(id)arg1;	// IMP=0x0000000100070fdc
- (void)updateTallCodeValueWithPass:(id)arg1;	// IMP=0x0000000100070f40
- (void)updateBackgroundColorWithPass:(id)arg1;	// IMP=0x0000000100070e38
- (void)updateLocationsWithPass:(id)arg1;	// IMP=0x0000000100070b98
- (void)updateWithLastModifiedSource:(long long)arg1;	// IMP=0x0000000100070ad0
- (void)updateWithLastModifiedTag:(id)arg1;	// IMP=0x0000000100070abc
- (void)updateWithPushRegistrationStatus:(long long)arg1 date:(id)arg2;	// IMP=0x0000000100070990
- (void)updateWithPass:(id)arg1 webService:(id)arg2 transactionSevice:(id)arg3 messageService:(id)arg4;	// IMP=0x0000000100070704
- (id)initWithPass:(id)arg1 passType:(id)arg2 webService:(id)arg3 transactionService:(id)arg4 messageService:(id)arg5 inDatabase:(id)arg6;	// IMP=0x00000001000704b8

@end

