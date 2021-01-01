//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCXPCProtocol-Protocol.h"

@class NSString, NSXPCConnection;

@interface MCProfileServicer : NSObject <MCXPCProtocol>
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100055e54
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)debugRescheduleBackgroundActivity:(long long)arg1 startDate:(id)arg2 gracePeriod:(id)arg3 repeatingInterval:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100055d54
- (void)managingOrganizationInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100055c7c
- (void)createMDMUnlockTokenIfNeededWithPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100055b8c
- (void)mayShareToAirDropForOriginatingAppBundleID:(id)arg1 originatingAccountIsManaged:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000559bc
- (void)mayShareToMessagesForOriginatingAppBundleID:(id)arg1 originatingAccountIsManaged:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000557ec
- (id)prefixedFeaturePromptIdentifierForIdentifier:(id)arg1;	// IMP=0x00000001000557b0
- (void)cancelFeaturePromptWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000554e0
- (void)showFeaturePromptForSetting:(id)arg1 configurationUUID:(id)arg2 promptOptions:(id)arg3 promptIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100054f78
- (void)shutDownWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100054de4
- (void)recomputeProfileRestrictionsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100054d18
- (void)validateAppBundleIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100054bac
- (void)setupAssistantDidFinishCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000547b4
- (void)hasMailAccountsWithFilteringEnabled:(_Bool)arg1 sourceAccountManagement:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100054604
- (void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 hostAppBundleID:(id)arg2 accountIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100054410
- (void)setUserBookmarks:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000542b4
- (void)storeActivationRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000541c4
- (void)createActivationLockBypassCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000540ec
- (void)cloudConfigurationStoreDetails:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100053ffc
- (void)cloudConfigurationMachineInfoDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100053f24
- (void)rereadManagedAppAttributesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100053e50
- (void)markStoredProfileForPurposeAsInstalled:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100053d74
- (void)profileDataStoredForPurpose:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100053c94
- (void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100053b8c
- (void)removeExpiredProfilesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100053ab8
- (void)managedAppIDsWithFlags:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000539d8
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100053898
- (void)resetAllSettingsToDefaultsIsUserInitiated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100053788
- (void)recomputePerClientUserComplianceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000536bc
- (void)recomputeUserComplianceWarningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000535f0
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100053508
- (void)notifyStartComplianceTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100053420
- (void)removeProvisioningProfileWithUUID:(id)arg1 managingProfileIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100053308
- (void)installProvisioningProfileData:(id)arg1 managingProfileIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000531f4
- (void)storeCertificateData:(id)arg1 forIPCUIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000530e0
- (void)openSensitiveURL:(id)arg1 unlock:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100052f8c
- (void)removeValueSetting:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100052e68
- (void)removeBoolSetting:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100052d44
- (void)setParametersForSettingsByType:(id)arg1 configurationUUID:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4 passcode:(id)arg5 credentialSet:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000001000526b0
- (void)migrateCleanupMigratorWithContext:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000525dc
- (void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000524f8
- (void)managedWiFiNetworkNamesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100052420
- (void)managedSystemConfigurationServiceIDsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100052348
- (void)removeOrphanedClientRestrictionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100052274
- (void)resetPasscodeMetadataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000521a0
- (void)isPasscodeCompliantWithNamedPolicy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000520ac
- (void)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100051f98
- (void)changePasscode:(id)arg1 oldPasscode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100051e54
- (void)applyRestrictionDictionary:(id)arg1 appsAndOptions:(id)arg2 clientType:(id)arg3 clientUUID:(id)arg4 localizedClientDescription:(id)arg5 localizedWarningMessage:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000100051c90
- (_Bool)remoteProcessCanRemoveProfilesOutError:(id *)arg1;	// IMP=0x0000000100051c28
- (_Bool)isCloudLockedProfileWithIdentifier:(id)arg1;	// IMP=0x0000000100051b64
- (void)removeProtectedProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100051948
- (void)removeUninstalledProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100051768
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100051558
- (void)updateProfileIdentifier:(id)arg1 interactive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000513b8
- (void)popProvisioningProfileFromHeadOfInstallationQueueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000512e0
- (void)peekProfileDataFromPurgatoryForDeviceType:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100051170
- (void)popProfileDataFromHeadOfInstallationQueueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100051098
- (void)queueProfileDataForInstallation:(id)arg1 originalFileName:(id)arg2 originatingBundleID:(id)arg3 transitionToUI:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100050f2c
- (void)installProfileData:(id)arg1 interactive:(_Bool)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100050b60
- (void)isProfileInstalledWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000509fc
- (_Bool)remoteProcessHasEntitlementArray:(id)arg1 containingString:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100050914
- (_Bool)remoteProcessHasBooleanEntitlement:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100050854
- (id)lacksArrayEntitlementError:(id)arg1 withMemberString:(id)arg2;	// IMP=0x00000001000507a0
- (id)lacksBooleanEntitlementError:(id)arg1;	// IMP=0x0000000100050708
- (id)remoteProcessBundleID;	// IMP=0x0000000100050694
- (_Bool)remoteProcessHasEntitlementArray:(id)arg1 containingString:(id)arg2;	// IMP=0x00000001000504fc
- (id)remoteProcessEntitlementStringArrayForKey:(id)arg1;	// IMP=0x0000000100050324
- (_Bool)remoteProcessHasBooleanEntitlement:(id)arg1;	// IMP=0x0000000100050204
- (void)setAllowedURLStrings:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005010c
- (void)setSpellCheckAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100050028
- (void)setKeyboardShortcutsAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004ff44
- (void)setContinuousPathKeyboardAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004fe60
- (void)setPredictiveKeyboardAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004fd7c
- (void)setSmartPunctuationAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004fc98
- (void)setAutoCorrectionAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004fbb4
- (void)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004fb04
- (void)allowedImportFromAppBundleIDs:(id)arg1 importingAppBundleID:(id)arg2 importingIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010004fa4c
- (void)allowedOpenInAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010004f994
- (void)notifyDeviceUnlockedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004f924
- (void)notifyDeviceUnlockedAndPasscodeRequiredWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004f8b4
- (void)waitForMigrationIncludingPostRestoreMigration:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004f83c
- (void)checkCarrierProfileAndForceReinstallation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004f7c4
- (void)checkInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004f754

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
