/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/Service.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol ServiceManager, OS_dispatch_queue;
@class NSString, NSXPCListenerEndpoint, NSMutableDictionary, NSXPCListener, NSObject;

@interface BaseService : NSObject <Service, NSXPCListenerDelegate> {

	NSMutableDictionary* _clients;
	BOOL _terminating;
	NSXPCListener* _listener;
	id<ServiceManager> manager;
	NSString* _serviceID;
	NSXPCListenerEndpoint* _endpoint;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) unsigned long long clientsCount; 
@property (assign,nonatomic,__weak) id<ServiceManager> manager; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSString * serviceID;                            //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint;                //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListenerEndpoint *)endpoint;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<ServiceManager>)manager;
-(void)setManager:(id<ServiceManager>)arg1 ;
-(NSString *)serviceID;
-(void)_disconnectClient:(id)arg1 ;
-(unsigned long long)clientsCount;
@end

