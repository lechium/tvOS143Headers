//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSSet, NSString, TCCDAlertManager;

@interface TCCDService : NSObject
{
    _Bool _shouldTreatAsDeprecated;	// 8 = 0x8
    _Bool _mdm_isAuthorizationDenyOnly;	// 9 = 0x9
    _Bool _mdm_macos_allowedInPayloadDefition;	// 10 = 0xa
    _Bool _mdm_allowStandardUserToSetSystemService;	// 11 = 0xb
    _Bool _shouldUseADefaultDescriptionString;	// 12 = 0xc
    _Bool _shouldIssueSandboxExtension;	// 13 = 0xd
    _Bool _ios_useGenericSandboxExtension;	// 14 = 0xe
    _Bool _isRevocable;	// 15 = 0xf
    _Bool _shouldDisableAlert;	// 16 = 0x10
    _Bool _useExternalNotificationOfDenial;	// 17 = 0x11
    _Bool _isAccessAllowedByDefault;	// 18 = 0x12
    _Bool _isAccessDeniedByDefault;	// 19 = 0x13
    _Bool _allowPromptForPlatformBinaries;	// 20 = 0x14
    _Bool _shouldAllowUnrestrictedCheckAuditToken;	// 21 = 0x15
    _Bool _hasParanoidSecurityPolicy;	// 22 = 0x16
    _Bool _doNotStoreDefaultAllowAccess;	// 23 = 0x17
    _Bool _expireOnlyAllowedEntries;	// 24 = 0x18
    _Bool _saveExpiredEntries;	// 25 = 0x19
    _Bool _applyDevelopmentAuthoriationPolicy;	// 26 = 0x1a
    _Bool _checkAllowEntitlementOnResponsibleProcess;	// 27 = 0x1b
    _Bool _upgradeV1AuthorizationValue;	// 28 = 0x1c
    _Bool _ios_allowPromptFromAppClip;	// 29 = 0x1d
    _Bool _allowedForAvocadoWidget;	// 30 = 0x1e
    _Bool _macos_pardonMissingUsage;	// 31 = 0x1f
    _Bool _macos_isPerSystem;	// 32 = 0x20
    _Bool _macos_compositionPromoteChildAuthoriationToParent;	// 33 = 0x21
    _Bool _macos_hasIndirectObject;	// 34 = 0x22
    _Bool _macos_shouldAllowSameTeam;	// 35 = 0x23
    NSDictionary *_platformAvailability;	// 40 = 0x28
    NSSet *_validOnPlatformNames;	// 48 = 0x30
    NSString *_name;	// 56 = 0x38
    NSString *_externalName;	// 64 = 0x40
    NSString *_usageDescriptionKeyName;	// 72 = 0x48
    NSString *_secondaryUsageDescriptionKeyName;	// 80 = 0x50
    NSArray *_disallowedOnPlatformSubtypeNameList;	// 88 = 0x58
    NSString *_sandboxOperationForDelegation;	// 96 = 0x60
    NSArray *_defaultAllowedIdentifiersList;	// 104 = 0x68
    NSNumber *_expirySeconds;	// 112 = 0x70
    long long _defaultDevelopmentAuthorizationValue;	// 120 = 0x78
    TCCDAlertManager *_alertManager;	// 128 = 0x80
    unsigned long long _authorizationValueType;	// 136 = 0x88
    unsigned long long _authorizationRightsMask;	// 144 = 0x90
    unsigned long long _authorizationVersionNumber;	// 152 = 0x98
    NSString *_allowAuthorizationButtonTitleLocalizationKey;	// 160 = 0xa0
    NSString *_denyAuthorizationButtonTitleLocalizationKey;	// 168 = 0xa8
    NSString *_limitedAuthorizationButtonTitleLocalizationKey;	// 176 = 0xb0
    NSString *_subsequentRequestAllowAuthorizationButtonTitleLocalizationKey;	// 184 = 0xb8
    NSString *_subsequentRequestDenyAuthorizationButtonTitleLocalizationKey;	// 192 = 0xc0
    NSString *_subsequentRequestLimitedAuthorizationButtonTitleLocalizationKey;	// 200 = 0xc8
    NSString *_requestTitleTextLocalizationKey;	// 208 = 0xd0
    NSString *_requestTitleTextAfterV2UpgradeLocalizationKey;	// 216 = 0xd8
    NSString *_requestTitleTextForSubsequentRequestsKey;	// 224 = 0xe0
    NSString *_requestAdditionalTextLocalizationKey;	// 232 = 0xe8
    NSString *_requestAdditionalTextAfterV2UpgradeLocalizationKey;	// 240 = 0xf0
    NSString *_requestAdditionalTextForSubsequentRequestsLocalizationKey;	// 248 = 0xf8
    TCCDService *_subsequentRequestStringsRelatedService;	// 256 = 0x100
    NSNumber *_ios_watchKitUserNotificationNumber;	// 264 = 0x108
    NSNumber *_iOS_minimumSDKVersionNumber;	// 272 = 0x110
    NSNumber *_watchOS_minimumSDKVersionNumber;	// 280 = 0x118
    NSNumber *_tvOS_minimumSDKVersionNumber;	// 288 = 0x120
    NSNumber *_macos_minimumSDKVersionNumber;	// 296 = 0x128
    NSString *_macos_helpAnchor;	// 304 = 0x130
    TCCDService *_macos_compositionChildService;	// 312 = 0x138
    TCCDService *_macos_compositionParentService;	// 320 = 0x140
    NSString *_macos_hardenedRuntimeEntitlementName;	// 328 = 0x148
    long long _macos_AXControlComputerAccessType;	// 336 = 0x150
}

+ (id)subsequentRequestLimitedAuthorizationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0000000100028b78
+ (id)subsequentRequestDenyAuthorizationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0000000100028b60
+ (id)subsequentRequestAllowAuthorizationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0000000100028b48
+ (id)requestLimitedAuthorizationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0000000100028b30
+ (id)requestDenyAuthorizationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0000000100028b18
+ (id)requestAllowAuthorizationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0000000100028b00
+ (id)requestAdditionalTextForSubsequentRequestsKeyNameForServiceName:(id)arg1;	// IMP=0x0000000100028ae8
+ (id)requestAdditionalTextAfterV2UpgradeLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0000000100028ad0
+ (id)requestAdditionalTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0000000100028ab8
+ (id)requestTitleTextForSubsequentRequestsLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0000000100028aa0
+ (id)requestTitleTextAfterV2UpgradeLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0000000100028a88
+ (id)requestTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0000000100028a70
+ (id)localizationKeyName:(id)arg1 forServiceName:(id)arg2;	// IMP=0x0000000100028a08
+ (id)versionStringFromDYLDVersionNumber:(id)arg1;	// IMP=0x0000000100028990
+ (id)tccdPlatformNameForDYLDPlatformName:(id)arg1;	// IMP=0x00000001000288bc
+ (id)serviceDescriptionsForPlatformName:(id)arg1;	// IMP=0x00000001000285f0
+ (id)serviceAll;	// IMP=0x0000000100028550
+ (id)allServices;	// IMP=0x0000000100025508
- (void).cxx_destruct;	// IMP=0x000000010002a0e8
@property(nonatomic) long long macos_AXControlComputerAccessType; // @synthesize macos_AXControlComputerAccessType=_macos_AXControlComputerAccessType;
@property(retain, nonatomic) NSString *macos_hardenedRuntimeEntitlementName; // @synthesize macos_hardenedRuntimeEntitlementName=_macos_hardenedRuntimeEntitlementName;
@property(nonatomic) _Bool macos_shouldAllowSameTeam; // @synthesize macos_shouldAllowSameTeam=_macos_shouldAllowSameTeam;
@property(nonatomic) _Bool macos_hasIndirectObject; // @synthesize macos_hasIndirectObject=_macos_hasIndirectObject;
@property(nonatomic) __weak TCCDService *macos_compositionParentService; // @synthesize macos_compositionParentService=_macos_compositionParentService;
@property(nonatomic) _Bool macos_compositionPromoteChildAuthoriationToParent; // @synthesize macos_compositionPromoteChildAuthoriationToParent=_macos_compositionPromoteChildAuthoriationToParent;
@property(nonatomic) __weak TCCDService *macos_compositionChildService; // @synthesize macos_compositionChildService=_macos_compositionChildService;
@property(nonatomic) _Bool macos_isPerSystem; // @synthesize macos_isPerSystem=_macos_isPerSystem;
@property(retain, nonatomic) NSString *macos_helpAnchor; // @synthesize macos_helpAnchor=_macos_helpAnchor;
@property(nonatomic) _Bool macos_pardonMissingUsage; // @synthesize macos_pardonMissingUsage=_macos_pardonMissingUsage;
@property(retain, nonatomic) NSNumber *macos_minimumSDKVersionNumber; // @synthesize macos_minimumSDKVersionNumber=_macos_minimumSDKVersionNumber;
@property(nonatomic) _Bool allowedForAvocadoWidget; // @synthesize allowedForAvocadoWidget=_allowedForAvocadoWidget;
@property(nonatomic) _Bool ios_allowPromptFromAppClip; // @synthesize ios_allowPromptFromAppClip=_ios_allowPromptFromAppClip;
@property(retain, nonatomic) NSNumber *tvOS_minimumSDKVersionNumber; // @synthesize tvOS_minimumSDKVersionNumber=_tvOS_minimumSDKVersionNumber;
@property(retain, nonatomic) NSNumber *watchOS_minimumSDKVersionNumber; // @synthesize watchOS_minimumSDKVersionNumber=_watchOS_minimumSDKVersionNumber;
@property(retain, nonatomic) NSNumber *iOS_minimumSDKVersionNumber; // @synthesize iOS_minimumSDKVersionNumber=_iOS_minimumSDKVersionNumber;
@property(retain) NSNumber *ios_watchKitUserNotificationNumber; // @synthesize ios_watchKitUserNotificationNumber=_ios_watchKitUserNotificationNumber;
@property(nonatomic) __weak TCCDService *subsequentRequestStringsRelatedService; // @synthesize subsequentRequestStringsRelatedService=_subsequentRequestStringsRelatedService;
@property(retain, nonatomic) NSString *requestAdditionalTextForSubsequentRequestsLocalizationKey; // @synthesize requestAdditionalTextForSubsequentRequestsLocalizationKey=_requestAdditionalTextForSubsequentRequestsLocalizationKey;
@property(retain, nonatomic) NSString *requestAdditionalTextAfterV2UpgradeLocalizationKey; // @synthesize requestAdditionalTextAfterV2UpgradeLocalizationKey=_requestAdditionalTextAfterV2UpgradeLocalizationKey;
@property(retain, nonatomic) NSString *requestAdditionalTextLocalizationKey; // @synthesize requestAdditionalTextLocalizationKey=_requestAdditionalTextLocalizationKey;
@property(retain, nonatomic) NSString *requestTitleTextForSubsequentRequestsKey; // @synthesize requestTitleTextForSubsequentRequestsKey=_requestTitleTextForSubsequentRequestsKey;
@property(retain, nonatomic) NSString *requestTitleTextAfterV2UpgradeLocalizationKey; // @synthesize requestTitleTextAfterV2UpgradeLocalizationKey=_requestTitleTextAfterV2UpgradeLocalizationKey;
@property(retain, nonatomic) NSString *requestTitleTextLocalizationKey; // @synthesize requestTitleTextLocalizationKey=_requestTitleTextLocalizationKey;
@property(retain, nonatomic) NSString *subsequentRequestLimitedAuthorizationButtonTitleLocalizationKey; // @synthesize subsequentRequestLimitedAuthorizationButtonTitleLocalizationKey=_subsequentRequestLimitedAuthorizationButtonTitleLocalizationKey;
@property(retain, nonatomic) NSString *subsequentRequestDenyAuthorizationButtonTitleLocalizationKey; // @synthesize subsequentRequestDenyAuthorizationButtonTitleLocalizationKey=_subsequentRequestDenyAuthorizationButtonTitleLocalizationKey;
@property(retain, nonatomic) NSString *subsequentRequestAllowAuthorizationButtonTitleLocalizationKey; // @synthesize subsequentRequestAllowAuthorizationButtonTitleLocalizationKey=_subsequentRequestAllowAuthorizationButtonTitleLocalizationKey;
@property(retain, nonatomic) NSString *limitedAuthorizationButtonTitleLocalizationKey; // @synthesize limitedAuthorizationButtonTitleLocalizationKey=_limitedAuthorizationButtonTitleLocalizationKey;
@property(retain, nonatomic) NSString *denyAuthorizationButtonTitleLocalizationKey; // @synthesize denyAuthorizationButtonTitleLocalizationKey=_denyAuthorizationButtonTitleLocalizationKey;
@property(retain, nonatomic) NSString *allowAuthorizationButtonTitleLocalizationKey; // @synthesize allowAuthorizationButtonTitleLocalizationKey=_allowAuthorizationButtonTitleLocalizationKey;
@property(nonatomic) unsigned long long authorizationVersionNumber; // @synthesize authorizationVersionNumber=_authorizationVersionNumber;
@property(nonatomic) _Bool upgradeV1AuthorizationValue; // @synthesize upgradeV1AuthorizationValue=_upgradeV1AuthorizationValue;
@property(nonatomic) unsigned long long authorizationRightsMask; // @synthesize authorizationRightsMask=_authorizationRightsMask;
@property(nonatomic) unsigned long long authorizationValueType; // @synthesize authorizationValueType=_authorizationValueType;
@property(retain, nonatomic) TCCDAlertManager *alertManager; // @synthesize alertManager=_alertManager;
@property(nonatomic) _Bool checkAllowEntitlementOnResponsibleProcess; // @synthesize checkAllowEntitlementOnResponsibleProcess=_checkAllowEntitlementOnResponsibleProcess;
@property(nonatomic) long long defaultDevelopmentAuthorizationValue; // @synthesize defaultDevelopmentAuthorizationValue=_defaultDevelopmentAuthorizationValue;
@property(nonatomic) _Bool applyDevelopmentAuthoriationPolicy; // @synthesize applyDevelopmentAuthoriationPolicy=_applyDevelopmentAuthoriationPolicy;
@property(nonatomic) _Bool saveExpiredEntries; // @synthesize saveExpiredEntries=_saveExpiredEntries;
@property(nonatomic) _Bool expireOnlyAllowedEntries; // @synthesize expireOnlyAllowedEntries=_expireOnlyAllowedEntries;
@property(retain, nonatomic) NSNumber *expirySeconds; // @synthesize expirySeconds=_expirySeconds;
@property(nonatomic) _Bool doNotStoreDefaultAllowAccess; // @synthesize doNotStoreDefaultAllowAccess=_doNotStoreDefaultAllowAccess;
@property(retain, nonatomic) NSArray *defaultAllowedIdentifiersList; // @synthesize defaultAllowedIdentifiersList=_defaultAllowedIdentifiersList;
@property(retain, nonatomic) NSString *sandboxOperationForDelegation; // @synthesize sandboxOperationForDelegation=_sandboxOperationForDelegation;
@property(nonatomic) _Bool hasParanoidSecurityPolicy; // @synthesize hasParanoidSecurityPolicy=_hasParanoidSecurityPolicy;
@property(nonatomic) _Bool shouldAllowUnrestrictedCheckAuditToken; // @synthesize shouldAllowUnrestrictedCheckAuditToken=_shouldAllowUnrestrictedCheckAuditToken;
@property(nonatomic) _Bool allowPromptForPlatformBinaries; // @synthesize allowPromptForPlatformBinaries=_allowPromptForPlatformBinaries;
@property(nonatomic) _Bool isAccessDeniedByDefault; // @synthesize isAccessDeniedByDefault=_isAccessDeniedByDefault;
@property(nonatomic) _Bool isAccessAllowedByDefault; // @synthesize isAccessAllowedByDefault=_isAccessAllowedByDefault;
@property(nonatomic) _Bool useExternalNotificationOfDenial; // @synthesize useExternalNotificationOfDenial=_useExternalNotificationOfDenial;
@property(nonatomic) _Bool shouldDisableAlert; // @synthesize shouldDisableAlert=_shouldDisableAlert;
@property(nonatomic) _Bool isRevocable; // @synthesize isRevocable=_isRevocable;
@property(nonatomic) _Bool ios_useGenericSandboxExtension; // @synthesize ios_useGenericSandboxExtension=_ios_useGenericSandboxExtension;
@property(nonatomic) _Bool shouldIssueSandboxExtension; // @synthesize shouldIssueSandboxExtension=_shouldIssueSandboxExtension;
@property(retain, nonatomic) NSArray *disallowedOnPlatformSubtypeNameList; // @synthesize disallowedOnPlatformSubtypeNameList=_disallowedOnPlatformSubtypeNameList;
@property(nonatomic) _Bool shouldUseADefaultDescriptionString; // @synthesize shouldUseADefaultDescriptionString=_shouldUseADefaultDescriptionString;
@property(retain, nonatomic) NSString *secondaryUsageDescriptionKeyName; // @synthesize secondaryUsageDescriptionKeyName=_secondaryUsageDescriptionKeyName;
@property(retain, nonatomic) NSString *usageDescriptionKeyName; // @synthesize usageDescriptionKeyName=_usageDescriptionKeyName;
@property(nonatomic) _Bool mdm_allowStandardUserToSetSystemService; // @synthesize mdm_allowStandardUserToSetSystemService=_mdm_allowStandardUserToSetSystemService;
@property(nonatomic) _Bool mdm_macos_allowedInPayloadDefition; // @synthesize mdm_macos_allowedInPayloadDefition=_mdm_macos_allowedInPayloadDefition;
@property(nonatomic) _Bool mdm_isAuthorizationDenyOnly; // @synthesize mdm_isAuthorizationDenyOnly=_mdm_isAuthorizationDenyOnly;
@property(nonatomic) _Bool shouldTreatAsDeprecated; // @synthesize shouldTreatAsDeprecated=_shouldTreatAsDeprecated;
@property(retain, nonatomic) NSString *externalName; // @synthesize externalName=_externalName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSSet *validOnPlatformNames; // @synthesize validOnPlatformNames=_validOnPlatformNames;
@property(retain, nonatomic) NSDictionary *platformAvailability; // @synthesize platformAvailability=_platformAvailability;
- (long long)developmentAuthorizationValue;	// IMP=0x0000000100029aac
@property(readonly, nonatomic) unsigned long long authorizationPromptRightsMask;
@property(readonly, nonatomic) _Bool pardonMissingUsage;
- (id)descriptionForAuthorizationValue:(unsigned long long)arg1 reason:(unsigned long long)arg2;	// IMP=0x00000001000299c4
- (id)authorizationRightStateForValue:(unsigned long long)arg1 reason:(unsigned long long)arg2;	// IMP=0x0000000100029948
- (_Bool)isAuthorizationValue:(unsigned long long)arg1 equalToRight:(unsigned long long)arg2;	// IMP=0x0000000100029908
- (long long)compare:(id)arg1;	// IMP=0x000000010002986c
- (id)descriptionDictionary;	// IMP=0x0000000100028f9c
- (id)description;	// IMP=0x0000000100028f90
- (id)initWithName:(id)arg1 availability:(id)arg2;	// IMP=0x0000000100028b90

@end

