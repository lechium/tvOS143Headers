/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PRBeaconListenerDelegate.h>

@protocol OS_os_log;
@class NSObject, NSMutableArray, PRBeaconListener, NSString;

@interface PRContactWhitelist : NSObject <PRBeaconListenerDelegate> {

	NSObject*<OS_os_log> _logger;
	NSMutableArray* _whitelist;
	PRBeaconListener* _nearbyDaemonSession;
	BOOL _needToRestart;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)clear:(/*^block*/id)arg1 ;
-(void)beaconListener:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)beaconListener:(id)arg1 didFailWithError:(id)arg2 ;
-(void)addTrustedContact:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeTrustedContact:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

