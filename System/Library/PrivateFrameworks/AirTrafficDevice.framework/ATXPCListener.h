/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSMutableArray, NSMapTable, NSString;

@interface ATXPCListener : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _xpcListener;
	NSMutableArray* _connections;
	NSMapTable* _proxyMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)run;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)stop;
-(id)connections;
-(id)proxyForConnection:(id)arg1 ;
@end

