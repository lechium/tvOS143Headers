/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator.h>

@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator <NSObject>
@property (nonatomic,__weak,readonly) id<HMDNetworkRouterFirewallRuleManagerInternal> firewallRuleManager; 
@optional
-(void)firewallRuleManagerClientsDidChange;

@required
-(id<HMDNetworkRouterFirewallRuleManagerInternal>)firewallRuleManager;
-(void)startupWithLocalDatabase:(id)arg1 completion:(/*^block*/id)arg2;
-(void)shutdownWithCompletion:(/*^block*/id)arg1;
-(void)fetchCloudChangesWithQualityOfService:(long long)arg1 ignoreLastFetchedAccessories:(BOOL)arg2 forceChangeNotifications:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)fetchRulesForAccessories:(id)arg1 qualityOfService:(long long)arg2 ignoreOverrides:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(id)fetchPairedMetadataVersionConfigurationsForAccessories:(id)arg1 qualityOfService:(long long)arg2 ignoreOverrides:(BOOL)arg3 error:(id*)arg4;
-(void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 listOnly:(BOOL)arg4 verifySignatures:(BOOL)arg5 completion:(/*^block*/id)arg6;
-(id)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 error:(id*)arg6;
-(BOOL)removeAllLocalRulesWithError:(id*)arg1;
-(id)dumpPairedMetadataForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 error:(id*)arg6;
-(BOOL)addOverrides:(id)arg1 replace:(BOOL)arg2 error:(id*)arg3;
-(BOOL)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 error:(id*)arg3;
-(BOOL)removeAllOverridesWithError:(id*)arg1;
-(id)pairedMetadataVersionConfigurationForAccessory:(id)arg1 pairedMetadata:(id)arg2;
-(id)ruleConfigurationForAccessory:(id)arg1 declarations:(id)arg2;

@end


@protocol HMDNetworkRouterFirewallRuleManagerInternal, HMDNetworkRouterFirewallRuleManagerBackingStoreMirror, HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler, OS_dispatch_queue;
@class NSNotificationCenter, NSObject, HMBLocalZone, NSString;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator : HMFObject <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate, HMFLogging, HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator> {

	id<HMDNetworkRouterFirewallRuleManagerInternal> _firewallRuleManager;
	id<HMDNetworkRouterFirewallRuleManagerBackingStoreMirror> _mirror;
	NSNotificationCenter* _notificationCenter;
	id<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler> _cloudFetchScheduler;
	NSObject*<OS_dispatch_queue> _ownerQueue;
	HMBLocalZone* _mirroredLocalZone;

}

@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                                                               //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) id<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler> cloudFetchScheduler;              //@synthesize cloudFetchScheduler=_cloudFetchScheduler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> ownerQueue;                                                                 //@synthesize ownerQueue=_ownerQueue - In the implementation block
@property (nonatomic,retain) HMBLocalZone * mirroredLocalZone;                                                                          //@synthesize mirroredLocalZone=_mirroredLocalZone - In the implementation block
@property (nonatomic,retain) id<HMDNetworkRouterFirewallRuleManagerBackingStoreMirror> mirror;                                          //@synthesize mirror=_mirror - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<HMDNetworkRouterFirewallRuleManagerInternal> firewallRuleManager;                              //@synthesize firewallRuleManager=_firewallRuleManager - In the implementation block
+(id)logCategory;
+(id)ckContainerIdentifier;
+(id)__jsonValueForCKRecordValue:(id)arg1 ;
+(id)__jsonStringFromDictionary:(id)arg1 rawOutput:(BOOL)arg2 error:(id*)arg3 ;
+(id)__networkDeclarationsFromRecord:(id)arg1 recordKey:(id)arg2 identifier:(id)arg3 ;
+(id)__pairedMetadataFromRecord:(id)arg1 recordKey:(id)arg2 identifier:(id)arg3 ;
+(id)__createProcessingOptionsWithLabel:(id)arg1 qualityOfService:(long long)arg2 ;
+(long long)ckContainerEnvironment;
+(BOOL)ckUseAnonymousAccount;
+(id)__networkDeclarationDataDictionaryFromOverrideObjectDictionary:(id)arg1 ;
+(id)__pairedMetadataDictionaryFromOverrideObjectDictionary:(id)arg1 ;
+(id)__createProcessingOptionsWithLabel:(id)arg1 ;
+(id)__jsonFromRecords:(id)arg1 rawOutput:(BOOL)arg2 error:(id*)arg3 ;
+(id)__networkDeclarationDataDictionaryFromRecordDictionary:(id)arg1 ;
+(id)__jsonFromDeclarations:(id)arg1 rawOutput:(BOOL)arg2 error:(id*)arg3 ;
+(id)__pairedMetadataDataDictionaryFromRecordDictionary:(id)arg1 ;
+(id)__jsonFromPairedMetadata:(id)arg1 rawOutput:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)isRunning;
-(NSNotificationCenter *)notificationCenter;
-(id<HMDNetworkRouterFirewallRuleManagerInternal>)firewallRuleManager;
-(void)firewallRuleManagerClientsDidChange;
-(id)initWithFirewallRuleManager:(id)arg1 notificationCenter:(id)arg2 cloudFetchInterval:(double)arg3 cloudFetchRetryInterval:(double)arg4 ownerQueue:(id)arg5 ;
-(void)startupWithLocalDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)shutdownWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchCloudChangesWithQualityOfService:(long long)arg1 ignoreLastFetchedAccessories:(BOOL)arg2 forceChangeNotifications:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchRulesForAccessories:(id)arg1 qualityOfService:(long long)arg2 ignoreOverrides:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)fetchPairedMetadataVersionConfigurationsForAccessories:(id)arg1 qualityOfService:(long long)arg2 ignoreOverrides:(BOOL)arg3 error:(id*)arg4 ;
-(void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 listOnly:(BOOL)arg4 verifySignatures:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(id)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 error:(id*)arg6 ;
-(BOOL)removeAllLocalRulesWithError:(id*)arg1 ;
-(id)dumpPairedMetadataForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 error:(id*)arg6 ;
-(BOOL)addOverrides:(id)arg1 replace:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeAllOverridesWithError:(id*)arg1 ;
-(void)cloudFetchSchedulerFired:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithFirewallRuleManager:(id)arg1 notificationCenter:(id)arg2 ownerQueue:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)ownerQueue;
-(void)__maybeStartOrStopCloudFetchScheduler;
-(void)__stopCloudFetchScheduler;
-(void)__startupWithMirroredLocalZone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HMBLocalZone *)mirroredLocalZone;
-(id<HMDNetworkRouterFirewallRuleManagerBackingStoreMirror>)mirror;
-(void)setMirroredLocalZone:(HMBLocalZone *)arg1 ;
-(void)__startupWithMirror:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMirror:(id<HMDNetworkRouterFirewallRuleManagerBackingStoreMirror>)arg1 ;
-(void)_fetchCloudChangesWithQualityOfService:(long long)arg1 ignoreLastFetchedAccessories:(BOOL)arg2 forceChangeNotifications:(BOOL)arg3 requiredRecordIDs:(id)arg4 schedulerXpcActivity:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)_fetchPairedMetadataForAccessories:(id)arg1 options:(id)arg2 ignoreOverrides:(BOOL)arg3 error:(id*)arg4 ;
-(id)pairedMetadataVersionConfigurationForAccessory:(id)arg1 pairedMetadata:(id)arg2 ;
-(id)_fetchNetworkDeclarationsForRecordIDs:(id)arg1 options:(id)arg2 ignoreOverrides:(BOOL)arg3 error:(id*)arg4 ;
-(id)ruleConfigurationForAccessory:(id)arg1 declarations:(id)arg2 ;
-(void)_fetchCloudChangesIfNeededForRecordIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_listCloudRecordsForProductGroup:(id)arg1 rawOutput:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 verifySignatures:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)_fetchAllDataForProductGroup:(id)arg1 productNumber:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)_fetchAllOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler>)cloudFetchScheduler;
-(void)__cloudFetchSchedulerFired:(/*^block*/id)arg1 ;
-(id)initWithFirewallRuleManager:(id)arg1 notificationCenter:(id)arg2 cloudFetchScheduler:(id)arg3 ownerQueue:(id)arg4 ;
@end

