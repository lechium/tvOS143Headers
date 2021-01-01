/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NetworkExtension/NetworkExtension-Structs.h>
@interface NEPathEventObserver : NSObject {

	network_config_cellular_blocked_observer_sRef _cellBlockedObserver;
	network_config_cellular_blocked_observer_sRef _cellFailedObserver;
	network_config_cellular_blocked_observer_sRef _wifiBlockedObserver;
	/*^block*/id _eventHandler;

}

@property (assign) network_config_cellular_blocked_observer_sRef cellBlockedObserver;              //@synthesize cellBlockedObserver=_cellBlockedObserver - In the implementation block
@property (assign) network_config_cellular_blocked_observer_sRef cellFailedObserver;               //@synthesize cellFailedObserver=_cellFailedObserver - In the implementation block
@property (assign) network_config_cellular_blocked_observer_sRef wifiBlockedObserver;              //@synthesize wifiBlockedObserver=_wifiBlockedObserver - In the implementation block
@property (copy) id eventHandler;                                                                  //@synthesize eventHandler=_eventHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)setEventHandler:(id)arg1 ;
-(id)eventHandler;
-(id)stringForEvent:(long long)arg1 ;
-(void)handleEvent:(long long)arg1 forPID:(id)arg2 UUID:(id)arg3 ;
-(void)setCellBlockedObserver:(network_config_cellular_blocked_observer_sRef)arg1 ;
-(void)setCellFailedObserver:(network_config_cellular_blocked_observer_sRef)arg1 ;
-(void)setWifiBlockedObserver:(network_config_cellular_blocked_observer_sRef)arg1 ;
-(network_config_cellular_blocked_observer_sRef)cellBlockedObserver;
-(network_config_cellular_blocked_observer_sRef)cellFailedObserver;
-(network_config_cellular_blocked_observer_sRef)wifiBlockedObserver;
-(id)initWithQueue:(id)arg1 eventHandler:(/*^block*/id)arg2 ;
@end
