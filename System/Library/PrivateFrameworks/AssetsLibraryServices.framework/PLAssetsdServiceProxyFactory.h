/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLXPCProxyCreating.h>
#import <libobjc.A.dylib/PLXPCAsyncProxyCreating.h>

@protocol PLXPCProxyCreating, OS_dispatch_queue;
@class NSObject, NSString;

@interface PLAssetsdServiceProxyFactory : NSObject <PLXPCProxyCreating, PLXPCAsyncProxyCreating> {

	SEL _proxyGetterSelector;
	id<PLXPCProxyCreating> _serviceProxy;
	id<PLXPCProxyCreating> _proxyCreating;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_unboostingRemoteObjectProxy;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)addBarrierBlock:(/*^block*/id)arg1 ;
-(id)serviceProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3 ;
-(id)_inq_createServiceProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_inq_createServiceProxyWithCallStackSymbols:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_logReplyError:(id)arg1 withCallStackSymbols:(id)arg2 ;
@end

