/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVLatency.framework/TVLatency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface TVLNetworkInterface : NSObject {

	unsigned long long _interfaceType;
	NSString* _interfaceName;
	NSString* _ipv4;
	NSString* _ipv6;

}

@property (nonatomic,readonly) unsigned long long interfaceType;              //@synthesize interfaceType=_interfaceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * interfaceName;                 //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * ipv4;                          //@synthesize ipv4=_ipv4 - In the implementation block
@property (nonatomic,copy,readonly) NSString * ipv6;                          //@synthesize ipv6=_ipv6 - In the implementation block
-(NSString *)interfaceName;
-(unsigned long long)interfaceType;
-(NSString *)ipv6;
-(NSString *)ipv4;
-(id)initWithInterfaceType:(unsigned long long)arg1 interfaceName:(id)arg2 ;
@end

