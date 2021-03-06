//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDPassLibraryInAppExportedInterface-Protocol.h"

@class CLLocation, NSArray, NSNumber, NSSet, NSString, PKContact, PKDisplayProfile, PKDisplayTraitCollection, PKFieldProperties, PKPaymentSetupConfiguration, PKPaymentSetupRequest;

@protocol PDPassLibraryExtendedExportedInterface <PDPassLibraryInAppExportedInterface>
- (void)paymentPassWithAssociatedAccountIdentifier:(NSString *)arg1 completion:(void (^)(PKPaymentPass *))arg2;
- (void)presentPaymentSetupRequest:(PKPaymentSetupRequest *)arg1 orientation:(NSNumber *)arg2 completion:(void (^)(_Bool))arg3;
- (void)paymentSetupFeaturesForConfiguration:(PKPaymentSetupConfiguration *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)getDataForBundleResources:(NSSet *)arg1 objectUniqueIdentifier:(NSString *)arg2 handler:(void (^)(NSDictionary *))arg3;
- (void)spotlightStatusWithCompletion:(void (^)(NSString *))arg1;
- (void)spotlightReindexContentWithIdentifiers:(NSArray *)arg1 acknowledgement:(void (^)(void))arg2;
- (void)spotlightResetWithCompletion:(void (^)(void))arg1;
- (void)spotlightReindexAllContentWithAcknowledgement:(void (^)(void))arg1;
- (void)isPassbookVisibleWithHandler:(void (^)(_Bool))arg1;
- (void)isRemovingPassesOfType:(unsigned long long)arg1 handler:(void (^)(_Bool))arg2;
- (void)enabledValueAddedServicePassesWithHandler:(void (^)(NSArray *))arg1;
- (void)getDiffForPassUpdateUserNotificationWithIdentifier:(NSString *)arg1 handler:(void (^)(PKDiff *))arg2;
- (void)getRouteRelevantPassesForLocation:(CLLocation *)arg1 handler:(void (^)(NSArray *, NSDictionary *))arg2;
- (void)fetchCurrentRelevantPassInfo:(void (^)(NSArray *))arg1;
- (void)fetchHasCandidatePasses:(void (^)(_Bool))arg1;
- (void)recomputeRelevantPassesWithSearchMode:(long long)arg1;
- (void)pendingUserNotificationsWithCompletion:(void (^)(NSArray *))arg1;
- (void)issueWalletUserNotificationWithTitle:(NSString *)arg1 message:(NSString *)arg2 forPassUniqueIdentifier:(NSString *)arg3 customActionRoute:(NSString *)arg4;
- (void)shuffleGroups:(int)arg1;
- (void)forceImmediateRevocationCheck;
- (void)introduceDatabaseIntegrityProblem;
- (void)removeAllScheduledActivities;
- (void)noteAccountDeletedWithHandler:(void (^)(void))arg1;
- (void)noteAccountChangedWithHandler:(void (^)(void))arg1;
- (void)notifyPassUsedWithIdentifier:(NSString *)arg1 fromSource:(long long)arg2;
- (void)noteObjectSharedWithUniqueID:(NSString *)arg1;
- (void)personalizePassWithUniqueIdentifier:(NSString *)arg1 contact:(PKContact *)arg2 personalizationToken:(NSString *)arg3 requiredPersonalizationFields:(unsigned long long)arg4 personalizationSource:(unsigned long long)arg5 handler:(void (^)(_Bool))arg6;
- (void)updateObjectWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(_Bool))arg2;
- (void)rescheduleCommutePlanRenewalReminderForPassWithUniqueID:(NSString *)arg1;
- (void)updateSettings:(unsigned long long)arg1 forObjectWithUniqueID:(NSString *)arg2;
- (void)pushProvisioningNoncesWithCredentialCount:(unsigned long long)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)resetApplePayWithDiagnosticReason:(NSString *)arg1 handler:(void (^)(_Bool))arg2;
- (void)removePassesOfType:(unsigned long long)arg1 withDiagnosticReason:(NSString *)arg2 handler:(void (^)(void))arg3;
- (void)usingSynchronousProxy:(_Bool)arg1 getImageSetContainerForUniqueID:(NSString *)arg2 type:(long long)arg3 withDisplayProfile:(PKDisplayProfile *)arg4 suffix:(NSString *)arg5 handler:(void (^)(PKImageSetXPCContainer *))arg6;
- (void)usingSynchronousProxy:(_Bool)arg1 getCachedImageSetContainerForUniqueID:(NSString *)arg2 type:(long long)arg3 withDisplayProfile:(PKDisplayProfile *)arg4 displayTraits:(PKDisplayTraitCollection *)arg5 handler:(void (^)(PKImageSetXPCContainer *))arg6;
- (void)usingSynchronousProxy:(_Bool)arg1 getContentForUniqueID:(NSString *)arg2 withHandler:(void (^)(PKContent *))arg3;
- (void)usingSynchronousProxy:(_Bool)arg1 getPassesAndCatalogOfPassTypes:(unsigned long long)arg2 limitResults:(_Bool)arg3 withHandler:(void (^)(NSSet *, PKCatalog *))arg4;
- (void)usingSynchronousProxy:(_Bool)arg1 getPaymentPassesPendingActivationWithHandler:(void (^)(NSSet *))arg2;
- (void)getMetadataForFieldWithProperties:(PKFieldProperties *)arg1 handler:(void (^)(PKFieldMetadata *))arg2;
- (void)getPassesWithUniqueIdentifiers:(NSArray *)arg1 handler:(void (^)(NSArray *))arg2;
- (void)presentContactlessInterfaceForPassWithUniqueIdentifier:(NSString *)arg1 fromSource:(long long)arg2 handler:(void (^)(_Bool))arg3;
- (void)presentContactlessInterfaceForDefaultPassFromSource:(long long)arg1 handler:(void (^)(_Bool))arg2;
- (void)openWalletUIWithRelevantPass:(NSString *)arg1;
- (void)openDigitalIssuanceUIForIdentifier:(NSString *)arg1 withCompletion:(void (^)(_Bool))arg2;
- (void)openPaymentUIWithCompletion:(void (^)(_Bool))arg1;
- (void)usingSynchronousProxy:(_Bool)arg1 getPassForProvisioningCredentialHash:(NSString *)arg2 handler:(void (^)(PKPass *))arg3;
- (void)usingSynchronousProxy:(_Bool)arg1 getPassesOfStyles:(unsigned long long)arg2 handler:(void (^)(NSSet *))arg3;
@end

