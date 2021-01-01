/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSArray, HMDNetworkRouterFirewallRuleWANAddressRange;

@interface HMDNetworkRouterFirewallRuleWANSubject : HMFObject {

	NSArray* _hostnames;
	NSArray* _addresses;
	HMDNetworkRouterFirewallRuleWANAddressRange* _addressRange;

}

@property (nonatomic,readonly) NSArray * hostnames;                                                     //@synthesize hostnames=_hostnames - In the implementation block
@property (nonatomic,readonly) NSArray * addresses;                                                     //@synthesize addresses=_addresses - In the implementation block
@property (nonatomic,readonly) HMDNetworkRouterFirewallRuleWANAddressRange * addressRange;              //@synthesize addressRange=_addressRange - In the implementation block
-(NSArray *)addresses;
-(NSArray *)hostnames;
-(id)attributeDescriptions;
-(id)prettyJSONDictionary;
-(HMDNetworkRouterFirewallRuleWANAddressRange *)addressRange;
-(id)initWithHostnames:(id)arg1 addresses:(id)arg2 addressRange:(id)arg3 ;
@end

