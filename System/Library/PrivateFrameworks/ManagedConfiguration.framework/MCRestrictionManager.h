/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSArray, NSObject, NSDictionary;

@interface MCRestrictionManager : NSObject {

	NSMutableDictionary* _memberQueueRestrictions;
	NSMutableDictionary* _memberQueueSystemClientRestrictions;
	NSMutableDictionary* _memberQueueSystemUserSettings;
	NSMutableDictionary* _memberQueueSystemNamespacedUserSettings;
	NSMutableDictionary* _memberQueueUserClientRestrictions;
	NSMutableDictionary* _memberQueueUserUserSettings;
	NSMutableDictionary* _memberQueueUserNamespacedUserSettings;
	NSMutableDictionary* _memberQueueEffectiveUserSettings;
	NSMutableDictionary* _memberQueueSettingsEvents;
	NSArray* _memberQueueEffectiveWhitelistedAppsAndOptions;
	NSObject*<OS_dispatch_queue> _memberQueue;
	NSMutableDictionary* _memberQueueSystemProfileRestrictions;
	NSMutableDictionary* _memberQueueUserProfileRestrictions;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                                          //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueRestrictions;                                     //@synthesize memberQueueRestrictions=_memberQueueRestrictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueSystemProfileRestrictions;                        //@synthesize memberQueueSystemProfileRestrictions=_memberQueueSystemProfileRestrictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueUserProfileRestrictions;                          //@synthesize memberQueueUserProfileRestrictions=_memberQueueUserProfileRestrictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueSystemClientRestrictions;                         //@synthesize memberQueueSystemClientRestrictions=_memberQueueSystemClientRestrictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueUserClientRestrictions;                           //@synthesize memberQueueUserClientRestrictions=_memberQueueUserClientRestrictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueSystemUserSettings;                               //@synthesize memberQueueSystemUserSettings=_memberQueueSystemUserSettings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueSystemNamespacedUserSettings;                     //@synthesize memberQueueSystemNamespacedUserSettings=_memberQueueSystemNamespacedUserSettings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueUserUserSettings;                                 //@synthesize memberQueueUserUserSettings=_memberQueueUserUserSettings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueUserNamespacedUserSettings;                       //@synthesize memberQueueUserNamespacedUserSettings=_memberQueueUserNamespacedUserSettings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueEffectiveUserSettings;                            //@synthesize memberQueueEffectiveUserSettings=_memberQueueEffectiveUserSettings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueSettingsEvents;                                   //@synthesize memberQueueSettingsEvents=_memberQueueSettingsEvents - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * memberQueueCombinedSystemProfileRestrictions; 
@property (nonatomic,readonly) NSMutableDictionary * memberQueueCombinedProfileRestrictions; 
@property (nonatomic,retain) NSArray * memberQueueEffectiveWhitelistedAppsAndOptions;                           //@synthesize memberQueueEffectiveWhitelistedAppsAndOptions=_memberQueueEffectiveWhitelistedAppsAndOptions - In the implementation block
@property (nonatomic,readonly) NSDictionary * currentRestrictions; 
@property (nonatomic,readonly) NSDictionary * defaultRestrictions; 
@property (nonatomic,readonly) NSDictionary * defaultSettings; 
@property (nonatomic,copy,readonly) NSDictionary * userSettings; 
@property (nonatomic,copy,readonly) NSDictionary * effectiveUserSettings; 
@property (nonatomic,copy,readonly) NSDictionary * systemUserSettings; 
@property (nonatomic,copy,readonly) NSDictionary * userUserSettings; 
@property (nonatomic,copy,readonly) NSDictionary * systemProfileRestrictions; 
@property (nonatomic,copy,readonly) NSDictionary * userProfileRestrictions; 
@property (nonatomic,copy,readonly) NSDictionary * combinedProfileRestrictions; 
+(id)sharedManager;
+(id)defaultSettings;
+(id)explicitlyRestrictedAppsBySetting;
+(id)explicitlyRestrictedEphemeralMultiUserApps;
+(BOOL)isInSingleAppModeWithSettingsDictionary:(id)arg1 ;
+(id)unionValuesForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(id)intersectedValuesForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(id)filterRestrictionDictionary:(id)arg1 toIncludeOnlyRestrictionsThatDifferFromRestrictions:(id)arg2 ;
+(int)restrictedBoolForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(id)valueForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(id)maximumValueForSetting:(id)arg1 ;
+(id)minimumValueForSetting:(id)arg1 ;
+(id)filterGrandfatheredRestrictionsIfNeededFromRestrictions:(id)arg1 ;
+(id)allowedGrandfatheredRestrictionPayloadKeysDictionary;
+(id)addRestrictionPayloadKeysDictionary:(id)arg1 toRestrictionPayloadKeysDictionary:(id)arg2 ;
+(int)boolSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(int)defaultBoolValueForSetting:(id)arg1 ;
+(id)defaultValueForSetting:(id)arg1 ;
+(id)defaultIntersectedValuesForSetting:(id)arg1 ;
+(id)defaultUnionValuesForSetting:(id)arg1 ;
+(id)defaultParametersForBoolSetting:(id)arg1 ;
+(id)defaultParametersForValueSetting:(id)arg1 ;
+(id)defaultParametersForIntersectedValuesSetting:(id)arg1 ;
+(id)defaultParametersForUnionValuesSetting:(id)arg1 ;
+(id)valueSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(id)restrictionsAfterApplyingRestrictionsDictionary:(id)arg1 toRestrictionsDictionary:(id)arg2 outChangeDetected:(BOOL*)arg3 outError:(id*)arg4 ;
+(id)objectForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(int)appWhitelistStateWithSettingsDictionary:(id)arg1 restrictionsDictionary:(id)arg2 ;
+(BOOL)isPasscodeRequiredToAccessWhitelistedAppsWithSettingsDictionary:(id)arg1 ;
+(BOOL)mayEnterPasscodeToAccessNonWhitelistedAppsWithSettingsDictionary:(id)arg1 ;
+(id)defaultRestrictionFilePath;
+(id)restrictionsWithCurrentRestrictions:(id)arg1 defaultRestrictions:(id)arg2 systemProfileRestrictions:(id)arg3 userProfileRestrictions:(id)arg4 systemClientRestrictions:(id)arg5 userClientRestrictions:(id)arg6 outRestrictionsChanged:(BOOL*)arg7 outError:(id*)arg8 ;
+(id)filterRestrictionDictionary:(id)arg1 acceptedKeysDict:(id)arg2 ;
+(id)systemMetadataValueForKey:(id)arg1 ;
+(id)grandfatheredRestrictionPayloadKeysDictionary;
+(id)filterRestrictionPayloadKeysDictionary:(id)arg1 removingPayloadKeysInRestrictionPayloadKeysDictionary:(id)arg2 ;
+(id)filterRestrictionDictionary:(id)arg1 removingPayloadKeysInRestrictionPayloadKeysDictionary:(id)arg2 ;
+(id)restrictionKeys;
+(id)_lockedDownRestrictionPayloadKeysWithPayloadKeysDictionary:(id)arg1 forRestrictionKey:(id)arg2 ;
+(id)_payloadKeysDictionaryAfterAddingFeature:(id)arg1 toRestrictionPayloadKeysDictionary:(id)arg2 forRestrictionKey:(id)arg3 ;
+(id)_filterRestrictionDictionary:(id)arg1 removingPayloadKeysInRestrictionPayloadKeysDictionary:(id)arg2 forRestrictionKey:(id)arg3 ;
+(id)_filterRestrictionPayloadKeysDictionary:(id)arg1 removingPayloadKeysInRestrictionPayloadKeysDictionary:(id)arg2 forRestrictionKey:(id)arg3 ;
+(id)_addRestrictionPayloadKeysDictionary:(id)arg1 toRestrictionPayloadKeysDictionary:(id)arg2 forRestrictionKey:(id)arg3 ;
+(id)parametersForBoolSetting:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(id)applyRestrictions:(id)arg1 forFeature:(id)arg2 toParametersForBoolSetting:(id)arg3 ;
+(id)parametersForValueSetting:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(id)parametersForIntersectedSetting:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(id)parametersForUnionSetting:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(id)intersectedValuesSettingForFeature:(id)arg1 withUserSettingDectionary:(id)arg2 ;
+(id)unionValuesSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(int)defaultBoolValueForSetting:(id)arg1 outAsk:(BOOL*)arg2 ;
+(int)boolSettingForFeature:(id)arg1 outAsk:(BOOL*)arg2 withUserSettingDictionary:(id)arg3 ;
+(id)parametersForSetting:(id)arg1 ofType:(id)arg2 withUserSettingDictionary:(id)arg3 ;
+(BOOL)isWhitelistedAppsRestrictionEnforcedWithRestrictionsDictionary:(id)arg1 ;
+(id)restrictionsWithCurrentRestrictions:(id)arg1 defaultRestrictions:(id)arg2 profileRestrictions:(id)arg3 clientRestrictions:(id)arg4 outRestrictionsChanged:(BOOL*)arg5 outError:(id*)arg6 ;
+(id)filterRestrictionDictionaryForPublicUse:(id)arg1 ;
+(id)filterUserSettingsForPublicUse:(id)arg1 ;
+(id)effectiveGrandfatheredRestrictionPayloadKeysDictionary;
+(BOOL)restrictedBool:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3 ;
+(BOOL)restrictedValue:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3 ;
+(BOOL)intersectedValuesForFeature:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3 ;
+(BOOL)unionValuesForFeature:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3 ;
+(id)newEffectiveSettingsByApplyingRestrictions:(id)arg1 toSettings:(id)arg2 ;
+(BOOL)boolSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3 ;
+(BOOL)valueSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3 ;
+(BOOL)intersectedValuesSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3 ;
+(BOOL)unionValuesSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3 ;
+(id)allowedOpenInAppBundleIDsWithOriginalAppBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 localAppBundleID:(id)arg3 localAccountIsManaged:(BOOL)arg4 mayOpenFromUnmanagedToManaged:(BOOL)arg5 mayOpenFromManagedToUnmanaged:(BOOL)arg6 isAppBundleIDExemptBlock:(/*^block*/id)arg7 isAppBundleIDAccountBasedBlock:(/*^block*/id)arg8 ;
+(id)allowedImportFromAppBundleIDsWithOriginalAppBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 localAppBundleID:(id)arg3 localAccountIsManaged:(BOOL)arg4 mayOpenFromUnmanagedToManaged:(BOOL)arg5 mayOpenFromManagedToUnmanaged:(BOOL)arg6 isAppBundleIDExemptBlock:(/*^block*/id)arg7 isAppBundleIDAccountBasedBlock:(/*^block*/id)arg8 ;
+(id)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 hostAppIsManaged:(BOOL)arg3 mayOpenFromUnmanagedToManaged:(BOOL)arg4 mayOpenFromManagedToUnmanaged:(BOOL)arg5 ;
+(BOOL)isWebContentFilterUIActiveWithRestrictionDictionary:(id)arg1 ;
-(id)description;
-(id)init;
-(NSDictionary *)defaultRestrictions;
-(NSDictionary *)defaultSettings;
-(NSDictionary *)userSettings;
-(NSDictionary *)effectiveUserSettings;
-(BOOL)isBoolSettingLockedDownByRestrictions:(id)arg1 ;
-(BOOL)isValueSettingLockedDownByRestrictions:(id)arg1 ;
-(void)invalidateRestrictions;
-(void)invalidateSettings;
-(void)clearEffectiveWhitelistedAppsAndOptionsCache;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(id)effectiveUnionValuesForSetting:(id)arg1 ;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)restrictedAppBundleIDsExcludingRemovedSystemApps:(BOOL)arg1 ;
-(int)effectiveRestrictedBoolForSetting:(id)arg1 ;
-(id)effectiveBlacklistedAppBundleIDsExcludingRemovedSystemApps:(BOOL)arg1 ;
-(id)unionValuesForFeature:(id)arg1 ;
-(id)unionValuesSettingForFeature:(id)arg1 ;
-(id)effectiveIntersectedValuesForSetting:(id)arg1 ;
-(id)intersectedValuesForFeature:(id)arg1 ;
-(id)intersectedValuesSettingForFeature:(id)arg1 ;
-(NSArray *)memberQueueEffectiveWhitelistedAppsAndOptions;
-(void)setMemberQueueEffectiveWhitelistedAppsAndOptions:(NSArray *)arg1 ;
-(BOOL)isInSingleAppMode;
-(id)effectiveWhitelistedAppsAndOptions;
-(id)restrictedAppBundleIDs;
-(id)effectiveWhitelistedAppBundleIDs;
-(id)effectiveBlacklistedAppBundleIDs;
-(id)restrictionEnforcedBlacklistedAppBundleIDs;
-(id)restrictionEnforcedBlacklistedAppBundleIDsExcludingRemovedSystemApps:(BOOL)arg1 ;
-(id)parentalControlsBlacklistedAppBundleIDs;
-(id)restrictionEnforcedWhitelistedAppBundleIDs;
-(id)parentalControlsWhitelistedAppBundleIDs;
-(id)singleAppModeBundleID;
-(BOOL)allowedToRunAppWithBundleID:(id)arg1 ;
-(int)appWhitelistState;
-(id)effectiveValueForSetting:(id)arg1 ;
-(int)restrictedBoolForFeature:(id)arg1 ;
-(id)valueForFeature:(id)arg1 ;
-(NSDictionary *)currentRestrictions;
-(id)objectForFeature:(id)arg1 ;
-(id)systemClientRestrictions;
-(id)allClientUUIDsForClientType:(id)arg1 ;
-(id)clientRestrictionsForClientUUID:(id)arg1 ;
-(id)userInfoForClientUUID:(id)arg1 ;
-(NSDictionary *)systemUserSettings;
-(NSDictionary *)userUserSettings;
-(id)effectiveParametersForBoolSetting:(id)arg1 configurationUUID:(id)arg2 ;
-(id)effectiveParametersForIntersectedSetting:(id)arg1 ;
-(id)effectiveParametersForUnionSetting:(id)arg1 ;
-(id)effectiveParametersForValueSetting:(id)arg1 ;
-(id)effectiveParametersForBoolSetting:(id)arg1 ;
-(BOOL)isSettingLockedDownByRestrictions:(id)arg1 ;
-(id)profileIdentifiersRestrictingSettings:(id)arg1 ;
-(id)exchangeUUIDsRestrictingSettings:(id)arg1 ;
-(BOOL)isIntersectionSettingLockedDownByRestrictions:(id)arg1 ;
-(BOOL)isUnionSettingLockedDownByRestrictions:(id)arg1 ;
-(int)boolSettingForFeature:(id)arg1 ;
-(id)valueSettingForFeature:(id)arg1 ;
-(NSDictionary *)systemProfileRestrictions;
-(NSDictionary *)combinedProfileRestrictions;
-(void)setMemberQueueRestrictions:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueSystemProfileRestrictions:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueUserProfileRestrictions:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueSystemClientRestrictions:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueUserClientRestrictions:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueSystemUserSettings:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueSystemNamespacedUserSettings:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueUserUserSettings:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueUserNamespacedUserSettings:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueEffectiveUserSettings:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)memberQueueRestrictions;
-(NSMutableDictionary *)memberQueueSystemProfileRestrictions;
-(NSMutableDictionary *)memberQueueUserProfileRestrictions;
-(NSMutableDictionary *)memberQueueCombinedProfileRestrictions;
-(NSMutableDictionary *)memberQueueSystemClientRestrictions;
-(NSMutableDictionary *)memberQueueUserClientRestrictions;
-(id)memberQueueClientRestrictionsDictionaryForClientUUID:(id)arg1 ;
-(id)memberQueueClientRestrictionsForClientUUID:(id)arg1 ;
-(id)memberQueueUserInfoForClientUUID:(id)arg1 ;
-(id)memberQueueAppsAndOptionsForClientUUID:(id)arg1 ;
-(BOOL)_isBoolSettingLockedDown:(id)arg1 ;
-(BOOL)_isValueSettingLockedDown:(id)arg1 effectiveSetting:(id)arg2 ;
-(id)_effectiveIntersectedValuesForSetting:(id)arg1 effectiveUserSettings:(id)arg2 ;
-(id)_effectiveUnionValuesForSetting:(id)arg1 effectiveUserSettings:(id)arg2 ;
-(id)userClientRestrictions;
-(id)_updatedDomainSettingsEvents:(id)arg1 fromPreviousSettings:(id)arg2 toNewSettings:(id)arg3 sender:(id)arg4 ;
-(id)_settingsEventFromProcess:(id)arg1 withTag:(id)arg2 ;
-(NSMutableDictionary *)memberQueueSystemUserSettings;
-(NSMutableDictionary *)memberQueueUserUserSettings;
-(NSMutableDictionary *)memberQueueEffectiveUserSettings;
-(NSMutableDictionary *)memberQueueUserNamespacedUserSettings;
-(NSMutableDictionary *)memberQueueSystemNamespacedUserSettings;
-(int)effectiveRestrictedBoolForSetting:(id)arg1 configurationUUID:(id)arg2 ;
-(NSDictionary *)userProfileRestrictions;
-(NSMutableDictionary *)memberQueueCombinedSystemProfileRestrictions;
-(id)potentialRestrictionsAfterApplyingRestrictionsDictionary:(id)arg1 outChangeDetected:(BOOL*)arg2 outError:(id*)arg3 ;
-(id)memberQueueClientTypeForClientUUID:(id)arg1 ;
-(id)appsAndOptionsForClientUUID:(id)arg1 ;
-(NSMutableDictionary *)memberQueueSettingsEvents;
-(BOOL)applyConfiguration:(id)arg1 toDomain:(unsigned long long)arg2 inNamespace:(id)arg3 fromSender:(id)arg4 ;
-(void)setMemberQueueSettingsEvents:(NSMutableDictionary *)arg1 ;
@end

