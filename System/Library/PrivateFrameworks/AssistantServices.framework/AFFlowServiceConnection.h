/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface AFFlowServiceConnection : NSObject {

	NSXPCConnection* _connection;
	unsigned long long _pendingTransactionCount;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedConnection;
-(id)_init;
-(id)_connection;
-(void)_clearConnection;
-(void)invokeMethodOnRemoteWithBlock:(/*^block*/id)arg1 onError:(/*^block*/id)arg2 ;
@end
