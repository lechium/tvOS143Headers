//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MIInstallable.h"

@class MIBundleContainer, MIDataContainer, MIEmbeddedWatchBundle, MIExecutableBundle, NSArray, NSMutableDictionary, NSString;

@interface MIInstallableBundle : MIInstallable
{
    _Bool _isPlaceholderInstall;	// 8 = 0x8
    _Bool _checkIncomingUpgradeEntitlement;	// 9 = 0x9
    _Bool _xpcServiceBundlesEnabled;	// 10 = 0xa
    _Bool _validatedByFreeProfile;	// 11 = 0xb
    MIBundleContainer *_existingBundleContainer;	// 16 = 0x10
    MIBundleContainer *_bundleContainer;	// 24 = 0x18
    MIDataContainer *_dataContainer;	// 32 = 0x20
    NSArray *_pluginBundles;	// 40 = 0x28
    NSArray *_pluginDataContainers;	// 48 = 0x30
    NSArray *_frameworkBundles;	// 56 = 0x38
    NSArray *_xpcServiceBundles;	// 64 = 0x40
    NSMutableDictionary *_identifiersMap;	// 72 = 0x48
    NSString *_appIdentifier;	// 80 = 0x50
    MIEmbeddedWatchBundle *_embeddedWatchApp;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000100054f1c
@property(retain, nonatomic) MIEmbeddedWatchBundle *embeddedWatchApp; // @synthesize embeddedWatchApp=_embeddedWatchApp;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(nonatomic) _Bool validatedByFreeProfile; // @synthesize validatedByFreeProfile=_validatedByFreeProfile;
@property(nonatomic) _Bool xpcServiceBundlesEnabled; // @synthesize xpcServiceBundlesEnabled=_xpcServiceBundlesEnabled;
@property(retain, nonatomic) NSMutableDictionary *identifiersMap; // @synthesize identifiersMap=_identifiersMap;
@property(nonatomic) _Bool checkIncomingUpgradeEntitlement; // @synthesize checkIncomingUpgradeEntitlement=_checkIncomingUpgradeEntitlement;
@property(retain, nonatomic) NSArray *xpcServiceBundles; // @synthesize xpcServiceBundles=_xpcServiceBundles;
@property(retain, nonatomic) NSArray *frameworkBundles; // @synthesize frameworkBundles=_frameworkBundles;
@property(retain, nonatomic) NSArray *pluginDataContainers; // @synthesize pluginDataContainers=_pluginDataContainers;
@property(retain, nonatomic) NSArray *pluginBundles; // @synthesize pluginBundles=_pluginBundles;
@property(retain, nonatomic) MIDataContainer *dataContainer; // @synthesize dataContainer=_dataContainer;
@property(retain, nonatomic) MIBundleContainer *bundleContainer; // @synthesize bundleContainer=_bundleContainer;
@property(readonly, nonatomic) MIBundleContainer *existingBundleContainer; // @synthesize existingBundleContainer=_existingBundleContainer;
@property(readonly, nonatomic) _Bool isPlaceholderInstall; // @synthesize isPlaceholderInstall=_isPlaceholderInstall;
- (id)launchServicesDictionariesWithError:(id *)arg1;	// IMP=0x0000000100054870
- (_Bool)finalizeInstallationWithError:(id *)arg1;	// IMP=0x0000000100052fdc
- (_Bool)_refreshUUIDForContainer:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100052e30
- (_Bool)postFlightInstallationWithError:(id *)arg1;	// IMP=0x0000000100052a84
- (_Bool)_postFlightPluginsWithError:(id *)arg1;	// IMP=0x0000000100052628
- (_Bool)performInstallationWithError:(id *)arg1;	// IMP=0x000000010005204c
- (_Bool)_setBundleMetadataWithError:(id *)arg1;	// IMP=0x0000000100051a88
- (_Bool)_validateSinfsWithError:(id *)arg1;	// IMP=0x00000001000517cc
- (_Bool)_captureDataFromStagingRootOrBundle:(id)arg1 toContainer:(id)arg2 withError:(id *)arg3;	// IMP=0x00000001000516d0
- (_Bool)_writeOptionsDataToBundle:(id)arg1 orContainer:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100050fc0
- (_Bool)performVerificationWithError:(id *)arg1;	// IMP=0x000000010004e874
- (_Bool)_performAppClipSpecificValidationForEntitlements:(id)arg1 isAppClip:(_Bool *)arg2 withError:(id *)arg3;	// IMP=0x000000010004e758
- (_Bool)_performWatchVerificationForSigningInfo:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010004e14c
- (_Bool)_validateApplicationIdentifierForNewBundleSigningInfo:(id)arg1 error:(id *)arg2;	// IMP=0x000000010004d970
- (id)_validateBundle:(id)arg1 validatingResources:(_Bool)arg2 performingOnlineAuthorization:(_Bool)arg3 checkingTrustCacheIfApplicable:(_Bool)arg4 allowingFreeProfileValidation:(_Bool)arg5 skippingProfileIDValidation:(_Bool)arg6 error:(id *)arg7;	// IMP=0x000000010004d6d8
- (void)_populateWatchKit1App:(id)arg1 withLocalizationsFromPlugin:(id)arg2;	// IMP=0x000000010004d33c
- (_Bool)_verifyAppExtensions:(id)arg1 inWatchKit2App:(id)arg2 checkPluginSignature:(_Bool)arg3 checkFrameworkSignature:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000010004cdd8
- (_Bool)_isValidWatchKitApp:(id)arg1 withVersion:(unsigned char)arg2 installableSigningInfo:(id)arg3 error:(id *)arg4;	// IMP=0x000000010004c680
- (_Bool)_validateCompanionAppStateInWatchKitApp:(id)arg1 withVersion:(unsigned char)arg2 error:(id *)arg3;	// IMP=0x000000010004c198
- (_Bool)_performCompanionWatchAppValidationForWatchApp:(id)arg1 withVersion:(unsigned char)arg2 companionAppSigningInfo:(id)arg3 frameworks:(id)arg4 error:(id *)arg5;	// IMP=0x000000010004be30
- (_Bool)performPreflightWithError:(id *)arg1;	// IMP=0x000000010004b014
- (_Bool)_validateITunesMetadataOptionWithError:(id *)arg1;	// IMP=0x000000010004a9f8
- (_Bool)_checkCanInstallWithError:(id *)arg1;	// IMP=0x000000010004a0e0
- (_Bool)_installEmbeddedProfilesWithError:(id *)arg1;	// IMP=0x0000000100049b04
- (_Bool)_verifyBundleMetadataWithError:(id *)arg1;	// IMP=0x0000000100049840
- (void)dealloc;	// IMP=0x0000000100049564
- (id)initWithBundle:(id)arg1 inStagingRoot:(id)arg2 packageFormat:(unsigned char)arg3 userOptions:(id)arg4 existingBundleContainer:(id)arg5 error:(id *)arg6;	// IMP=0x00000001000493cc

// Remaining properties
@property(retain, nonatomic) MIExecutableBundle *bundle; // @dynamic bundle;

@end

