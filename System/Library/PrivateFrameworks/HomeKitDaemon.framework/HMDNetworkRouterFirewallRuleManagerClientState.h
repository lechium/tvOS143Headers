/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMDNetworkRouterFirewallRuleManagerClient;
@interface HMDNetworkRouterFirewallRuleManagerClientState : NSObject {

	id<HMDNetworkRouterFirewallRuleManagerClient> _client;
	/*^block*/id _startupCompletion;

}

@property (assign,nonatomic,__weak) id<HMDNetworkRouterFirewallRuleManagerClient> client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,copy) id startupCompletion;                                                       //@synthesize startupCompletion=_startupCompletion - In the implementation block
-(id<HMDNetworkRouterFirewallRuleManagerClient>)client;
-(void)setClient:(id<HMDNetworkRouterFirewallRuleManagerClient>)arg1 ;
-(id)startupCompletion;
-(void)setStartupCompletion:(id)arg1 ;
@end

