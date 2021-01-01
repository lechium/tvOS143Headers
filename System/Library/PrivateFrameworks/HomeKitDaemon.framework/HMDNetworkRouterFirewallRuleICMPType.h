/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSDictionary;

@interface HMDNetworkRouterFirewallRuleICMPType : NSObject {

	unsigned char _protocol;
	NSNumber* _typeValue;
	NSDictionary* _jsonDictionary;

}

@property (nonatomic,readonly) unsigned char protocol;                           //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,readonly) NSNumber * typeValue;                             //@synthesize typeValue=_typeValue - In the implementation block
@property (nonatomic,readonly) NSDictionary * prettyJSONDictionary; 
@property (nonatomic,readonly) NSDictionary * jsonDictionary;                    //@synthesize jsonDictionary=_jsonDictionary - In the implementation block
+(id)createWithJSONDictionary:(id)arg1 ;
+(id)createListWithJSONDictionary:(id)arg1 key:(id)arg2 ;
-(id)description;
-(unsigned char)protocol;
-(NSNumber *)typeValue;
-(NSDictionary *)jsonDictionary;
-(NSDictionary *)prettyJSONDictionary;
-(id)initWithJSONDictionary:(id)arg1 protocol:(unsigned char)arg2 typeValue:(id)arg3 ;
@end
