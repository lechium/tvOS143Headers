//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDCloudStoreContainer.h"

#import "PDAccountManagerObserver-Protocol.h"
#import "PDCloudStoreContainerDatabaseDataSource-Protocol.h"

@class NSMutableSet, NSSet, NSString, PDAccountManager, PDFamilyCircleManager, PDPaymentWebServiceCoordinator, PDSpotlightIndexer, PKPaymentTransactionProcessor, PKPeerPaymentAccount;

@interface PDApplePayCloudStoreContainer : PDCloudStoreContainer <PDAccountManagerObserver, PDCloudStoreContainerDatabaseDataSource>
{
    struct os_unfair_lock_s _fetchLock;	// 8 = 0x8
    _Bool _proactiveFetchInProgress;	// 12 = 0xc
    _Bool _ensuringZoneShareIntegrityInProgress;	// 13 = 0xd
    NSMutableSet *_fetchingTransactionsForTransactionSourceIdentifiers;	// 16 = 0x10
    PKPaymentTransactionProcessor *_transactionProcessor;	// 24 = 0x18
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 32 = 0x20
    PDFamilyCircleManager *_familyCircleManager;	// 40 = 0x28
    PDAccountManager *_accountManager;	// 48 = 0x30
    PDSpotlightIndexer *_spotlightIndexer;	// 56 = 0x38
    PKPeerPaymentAccount *_peerPaymentAccount;	// 64 = 0x40
    NSSet *_accounts;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010006f0d8
- (void)_parseAccountEventsFromRecordParser:(id)arg1 databaseIdentifier:(id)arg2 shouldUpdateLocalDatabase:(_Bool)arg3 shouldReturn:(_Bool)arg4 updateReasons:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010006eb90
- (id)_recordsByFromAccountEvent:(id)arg1 zone:(id)arg2;	// IMP=0x000000010006e9a4
- (void)_fetchMissingAccountEventsWithRecordParser:(id)arg1 request:(id)arg2 databaseIdentifier:(id)arg3 carriedOverRecordsByDatabaseIdentifier:(id)arg4 updateReasons:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010006caec
- (id)_recordTypeForAccountEventRecord:(id)arg1;	// IMP=0x000000010006caa0
- (_Bool)_isAccountEventAssociatedObjectFromRecordType:(id)arg1;	// IMP=0x000000010006c94c
- (_Bool)_isAccountEventFromRecordType:(id)arg1;	// IMP=0x000000010006c938
- (void)_saveTransactionFetchRetries:(id)arg1;	// IMP=0x000000010006c8fc
- (id)_transactionFetchRetries;	// IMP=0x000000010006c748
- (void)_fetchTransactionsAttemptForTransactionSourceIdentifier:(id)arg1;	// IMP=0x000000010006c634
- (void)_resetFetchTransactionsForTransactionSourceIdentifier:(id)arg1;	// IMP=0x000000010006c5ac
- (_Bool)_shouldFetchTransactionsForTransactionSourceIdentifier:(id)arg1;	// IMP=0x000000010006c4f4
- (id)_originDeviceIDForCloudStoreRecord:(id)arg1;	// IMP=0x000000010006c460
- (id)_transactionSourceIdentifierForTransactionCloudStoreRecord:(id)arg1 databaseIdentifier:(id)arg2;	// IMP=0x000000010006bd9c
- (id)_transactionSourceIdentifierForTransactionRecordID:(id)arg1 recordType:(id)arg2 databaseIdentifier:(id)arg3;	// IMP=0x000000010006b488
- (void)_fetchMissingTransactionRecordsWithRecordParser:(id)arg1 request:(id)arg2 databaseIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010006a714
- (void)_processShareWithRecordParser:(id)arg1 request:(id)arg2 databaseIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100068974
- (_Bool)_canFormTransactionFromCloudStoreRecord:(id)arg1;	// IMP=0x0000000100068720
- (_Bool)_canFormShareFromCloudStoreRecord:(id)arg1;	// IMP=0x00000001000686ac
- (id)_parseTransactionRecords:(id)arg1 request:(id)arg2 databaseIdentifier:(id)arg3 updateReasons:(unsigned long long)arg4;	// IMP=0x0000000100067550
- (void)containerResetCompletedWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000100066f7c
- (_Bool)_isTransactionItemFromRecordType:(id)arg1;	// IMP=0x0000000100066f08
- (id)_originDeviceID;	// IMP=0x0000000100066ef4
- (id)_cloudStoreSpecificKeysForItem:(id)arg1 paymentPass:(id)arg2;	// IMP=0x0000000100066b44
- (id)_paymentApplicationForPassUniqueIdentifier:(id)arg1;	// IMP=0x0000000100066a7c
- (long long)_numberOfActiveTransactionSources;	// IMP=0x000000010006665c
- (_Bool)_queue_isRelevantTransactionSourceIdentifier:(id)arg1;	// IMP=0x00000001000662dc
- (void)_queue_familyMembersByAppleIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100065fc4
- (void)_handleFamilyUpdateNotification:(id)arg1;	// IMP=0x0000000100065edc
- (id)_cloudStoreZonesForTransactionSourceIdentifier:(id)arg1;	// IMP=0x00000001000658e0
- (void)_createOrRemoveZoneSharesIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010006459c
- (void)_queue_ensureZoneShareIntegrity;	// IMP=0x0000000100064430
- (id)_accountZoneNamesForAccount:(id)arg1 containerDatabase:(id)arg2;	// IMP=0x0000000100064324
- (id)_accountZoneNamesForAccountSet:(id)arg1 containerDatabase:(id)arg2;	// IMP=0x0000000100064178
- (id)_peerPaymentZoneNamesForAccount:(id)arg1 containerDatabase:(id)arg2;	// IMP=0x0000000100064068
- (void)_queue_updateWithPossibleNewZonesToAdd:(id)arg1 orphanedZones:(id)arg2 containerDatabase:(id)arg3;	// IMP=0x00000001000639c8
- (void)_queue_processAccountChangeWithOldAccounts:(id)arg1 newAccounts:(id)arg2;	// IMP=0x000000010006383c
- (void)_queue_processPeerPaymentAccountChangeWithOldAccount:(id)arg1 newPeerPaymentAccount:(id)arg2;	// IMP=0x00000001000636b0
- (id)cloudStoreZonesForItemType:(unsigned long long)arg1 configuration:(id)arg2 action:(unsigned long long)arg3 inContainerDatabase:(id)arg4;	// IMP=0x0000000100062bf8
- (id)cloudStoreZonesForItem:(id)arg1 action:(unsigned long long)arg2 inContainerDatabase:(id)arg3;	// IMP=0x0000000100061f64
- (id)zoneIDForSubscription:(id)arg1 inContainerDatabase:(id)arg2;	// IMP=0x0000000100061e00
- (id)subscriptionForZone:(id)arg1 inContainerDatabase:(id)arg2;	// IMP=0x0000000100061c88
- (id)possibleDatabaseSubscriptionForContainerDatabase:(id)arg1;	// IMP=0x0000000100061b48
- (id)allPossibleZoneSubscriptionsForContainerDatabase:(id)arg1;	// IMP=0x000000010006195c
- (id)allPossibleZoneNamesForContainerDatabase:(id)arg1;	// IMP=0x0000000100061720
- (void)accountManager:(id)arg1 didUpdateAccount:(id)arg2 oldAccount:(id)arg3;	// IMP=0x00000001000614e0
- (void)accountManager:(id)arg1 didRemoveAccount:(id)arg2;	// IMP=0x00000001000612dc
- (void)accountManager:(id)arg1 didAddAccount:(id)arg2;	// IMP=0x0000000100060f88
- (void)_handlePeerPaymentAccountChanged:(id)arg1;	// IMP=0x0000000100060df8
- (void)populateEvents:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000603a0
- (void)uploadTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 includeServerData:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010005f630
- (void)generateRandomTransactionForTransactionSourceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005f484
- (void)syncTransactionsToCloudStoreOriginatedOnDevice:(unsigned long long)arg1;	// IMP=0x000000010005f43c
- (void)passDidDisappear:(id)arg1;	// IMP=0x000000010005f2d8
- (_Bool)_queue_canSyncTransactionToCloudKit:(id)arg1 forTransactionSourceIdentifier:(id)arg2;	// IMP=0x000000010005f1fc
- (void)canSyncTransactionToCloudKit:(id)arg1 forTransactionSourceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010005f0ac
- (void)canSyncTransactionFromCloudKitForTransactionSourceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005ef90
- (void)_fetchAndStoreRecordsForTransactionSourceIdentifier:(id)arg1 groupName:(id)arg2 groupNameSuffix:(id)arg3 returnRecords:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010005de88
- (void)fetchAndStoreRecordsForTransactionSourceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005dd6c
- (void)requestUpdatesForTransactionSourceIdentifier:(id)arg1;	// IMP=0x000000010005d4d0
- (void)_queue_cloudStoreZoneInvitationDataForInvitation:(id)arg1 toRecipient:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010005c9f4
- (id)_stripToFirstDash:(id)arg1;	// IMP=0x000000010005c96c
- (id)identifierFromRecord:(id)arg1;	// IMP=0x000000010005c594
- (id)recordTypesForCloudStoreItemType:(unsigned long long)arg1;	// IMP=0x000000010005c3e8
- (void)_queue_processResultWithError:(id)arg1 nextExpectedState:(unsigned long long)arg2 operationGroupNameSuffix:(id)arg3 retryCount:(unsigned long long)arg4 shouldRetry:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010005c238
- (void)processFetchedCloudStoreDataWithModifiedRecordsByDatabaseIdentifier:(id)arg1 deletedRecordsByDatabaseIdentifier:(id)arg2 carriedOverRecordsByDatabaseIdentifier:(id)arg3 request:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010005b0d0
- (void)_deleteLocalDataFromDeletedRecordsByDatabaseIdentifier:(id)arg1;	// IMP=0x000000010005aa00
- (_Bool)shouldContinueWithRequest:(id)arg1;	// IMP=0x000000010005a7f0
- (void)coalesceRequest:(id)arg1 withNewRequest:(id)arg2;	// IMP=0x000000010005a518
- (_Bool)canCoalesceRequest:(id)arg1 withNewRequest:(id)arg2;	// IMP=0x000000010005a2b4
- (void)_queue_setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010005986c
- (void)_queue_cloudStoreAccountChanged:(id)arg1;	// IMP=0x0000000100059148
- (id)cloudStoreSpecificKeysForItem:(id)arg1;	// IMP=0x0000000100058ef0
- (_Bool)_queue_canInvalidateContainer;	// IMP=0x0000000100058cc4
- (_Bool)_queue_canInitializeContainer;	// IMP=0x00000001000588b8
- (_Bool)_queue_shouldFetchAndStoreCloudDataAtStartup;	// IMP=0x0000000100058758
- (void)canOverrideChangeTokenForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005869c
- (void)invalidateCloudStoreIfPossibleWithOperationGroupNameSuffix:(id)arg1 clearCache:(_Bool)arg2;	// IMP=0x0000000100058538
- (void)dealloc;	// IMP=0x00000001000584dc
- (id)initWithDataSource:(id)arg1 transactionProcessor:(id)arg2 accountManager:(id)arg3 paymentWebServiceCoordinator:(id)arg4 familyCircleManager:(id)arg5 spotlightIndexer:(id)arg6;	// IMP=0x0000000100057f58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

