//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDAppController.h"

@class ASDJobManager, ASDSoftwareUpdatesStore, FBSDisplayLayoutMonitor, NSArray, NSMutableDictionary, NSString;

@interface DMDiphoneOSAppController : DMDAppController
{
    NSString *_singleAppModeBundleIndentifier;	// 8 = 0x8
    NSMutableDictionary *_bundleIDsToAssertions;	// 16 = 0x10
    FBSDisplayLayoutMonitor *_layoutMonitor;	// 24 = 0x18
    NSArray *__foregroundBundleIdentifiers;	// 32 = 0x20
}

+ (id)metadataPath;	// IMP=0x000000010001b738
+ (id)changeTypeAsString:(long long)arg1;	// IMP=0x000000010001b3fc
- (void).cxx_destruct;	// IMP=0x000000010001d0e0
@property(retain, nonatomic) NSArray *_foregroundBundleIdentifiers; // @synthesize _foregroundBundleIdentifiers=__foregroundBundleIdentifiers;
@property(retain, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor; // @synthesize layoutMonitor=_layoutMonitor;
@property(retain, nonatomic) NSMutableDictionary *bundleIDsToAssertions; // @synthesize bundleIDsToAssertions=_bundleIDsToAssertions;
@property(copy, nonatomic) NSString *singleAppModeBundleIndentifier; // @synthesize singleAppModeBundleIndentifier=_singleAppModeBundleIndentifier;
- (void)_updateForegroundBundleIdentifiers;	// IMP=0x000000010001cdac
- (void)_getMetadataForBundleIdentifier:(id)arg1 storeItemIdentifier:(id)arg2 accountIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010001c7a0
- (void)_applyStoreDictionary:(id)arg1 toAppMetadata:(id)arg2;	// IMP=0x000000010001c5d0
- (id)_managedDefaultsForBundleIdentifier:(id)arg1;	// IMP=0x000000010001c570
- (_Bool)setFeedback:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000010001c2a0
- (id)feedbackForBundleIdentifier:(id)arg1;	// IMP=0x000000010001c004
- (void)_withSandboxExtensionForApp:(id)arg1 do:(CDUnknownBlockType)arg2;	// IMP=0x000000010001bddc
- (_Bool)setConfiguration:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000010001bc10
- (id)configurationForBundleIdentifier:(id)arg1;	// IMP=0x000000010001bbb4
- (void)getMetadataForNonEnterpriseAppRequest:(id)arg1 accountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001b8b0
- (void)getBundleIdentifierForStoreItemIdentifier:(id)arg1 accountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001b74c
- (_Bool)writeManagementInformationToDiskWithError:(id *)arg1;	// IMP=0x000000010001b6b8
- (void)installSystemAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b46c
- (void)sendAppRequestWithBundleIdentifier:(id)arg1 storeItemIdentifier:(id)arg2 accountIdentifier:(id)arg3 type:(long long)arg4 skipDownloads:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010001afc8
- (void)promptUserToSignInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001adac
@property(readonly, nonatomic) _Bool userIsSignedIn;
- (void)removeTerminationAssertionForBundleIdentifier:(id)arg1;	// IMP=0x000000010001abf0
- (void)addTerminationAssertion:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000010001aa84
@property(readonly, copy, nonatomic) ASDSoftwareUpdatesStore *updatesStore;
@property(readonly, copy, nonatomic) ASDJobManager *jobManager;
- (id)foregroundBundleIdentifiers;	// IMP=0x000000010001a960
- (id)initPrivate;	// IMP=0x000000010001a7ec
- (id)_allPropertyKeys;	// IMP=0x00000001000196a4
- (void)handleFetchRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001871c
- (void)_downloadAppForRequest:(id)arg1 type:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001a598
- (void)_installUserAppForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001a334
- (void)_installDeviceLicensedAppForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001a23c
- (void)resumeAppInstallationWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019d08
- (void)startInstallingNonEnterpriseAppForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019aec
- (void)startInstallingEnterpriseAppWithManifestURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000198a8
- (void)startRedeemingAppWithCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001d17c
- (void)_uninstallAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001dcc8
- (void)startUninstallingAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001da28
- (void)cancelAppInstallationWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001d578
- (void)_updateEndedForLifeCycle:(id)arg1;	// IMP=0x000000010001e4e0
- (void)_startUpdatingAppForRequest:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001e164
- (void)didFinishUpdatingForLifeCycle:(id)arg1;	// IMP=0x000000010001e0ec
- (void)didFailUpdatingForLifeCycle:(id)arg1;	// IMP=0x000000010001e074
- (void)didCancelUpdatingForLifeCycle:(id)arg1;	// IMP=0x000000010001dffc
- (void)resumeAppUpdateWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001dfac
- (void)cancelAppUpdateWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001df5c
- (void)startUpdatingAppForRequest:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001dd14

@end

