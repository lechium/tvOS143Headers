/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HMHomeManager, HMFMessageDestination;

@interface HMNetworkRouterFirewallRuleManager : NSObject {

	HMHomeManager* _homeManager;
	HMFMessageDestination* _messageDestination;

}

@property (nonatomic,__weak,readonly) HMHomeManager * homeManager;                      //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,readonly) HMFMessageDestination * messageDestination;              //@synthesize messageDestination=_messageDestination - In the implementation block
-(HMHomeManager *)homeManager;
-(HMFMessageDestination *)messageDestination;
-(void)__sendMessage:(id)arg1 ;
-(void)_dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 listOnly:(BOOL)arg4 verifySignatures:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)_dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)_dumpPairedMetadataForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)_addOverrides:(id)arg1 replace:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fetchCloudChangesWithForceChangesFound:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithHomeManager:(id)arg1 ;
-(void)listCloudRecordsForProductGroup:(id)arg1 rawOutput:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 verifySignatures:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)dumpAllLocalRulesIgnoringOverrides:(BOOL)arg1 rawOutput:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dumpLocalRulesForProductGroup:(id)arg1 ignoreOverrides:(BOOL)arg2 rawOutput:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)dumpPairedMetadataForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)removeAllLocalRulesWithCompletion:(/*^block*/id)arg1 ;
-(void)setOverrides:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addOverrides:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAllOverridesWithCompletion:(/*^block*/id)arg1 ;
-(void)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchCloudChangesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchCloudChangesAndForceChangesFoundWithCompletion:(/*^block*/id)arg1 ;
@end

