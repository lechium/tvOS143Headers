/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CoreWiFi/CoreWiFi-Structs.h>
@class NSObject;

@interface CWFSCNetworkConfiguration : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	SCDynamicStoreRef _storeRef;
	BOOL _isMonitoringEvents;
	/*^block*/id _eventHandler;

}

@property (copy) id eventHandler;              //@synthesize eventHandler=_eventHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(id)IPv6Addresses;
-(id)IPv4Addresses;
-(void)setEventHandler:(id)arg1 ;
-(id)eventHandler;
-(void)startEventMonitoring;
-(void)stopEventMonitoring;
-(BOOL)isMonitoringEvents;
-(id)IPv4Router;
-(id)IPv6Router;
-(id)DNSDomainName;
-(id)DNSServerAddresses;
-(id)IPv4InterfaceName;
-(id)IPv6InterfaceName;
-(id)IPv4ServiceID;
-(id)IPv6ServiceID;
-(id)IPv4ServiceName;
-(id)IPv6ServiceName;
-(void)__startEventMonitoring;
-(id)__IPv4GlobalStateConfig;
-(id)__nameForServiceWithID:(id)arg1 ;
-(id)__IPv4StateConfigForServiceID:(id)arg1 ;
-(id)__IPv4SetupConfigForServiceID:(id)arg1 ;
-(id)__IPv6GlobalStateConfig;
-(id)__IPv6StateConfigForServiceID:(id)arg1 ;
-(id)__IPv6SetupConfigForServiceID:(id)arg1 ;
-(id)__DNSGlobalStateConfig;
-(id)IPv4SubnetMasks;
-(id)IPv6PrefixLengths;
-(id)DNSSearchDomains;
@end

