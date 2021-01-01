/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/WirelessCoexManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface WRMClientInterface : NSObject {

	NSObject*<OS_xpc_object> mConnection;
	int mProcessId;
	NSObject*<OS_dispatch_queue> mQueue;
	/*^block*/id mNotificationBlock;

}
-(id)init;
-(void)dealloc;
-(void)unregisterClient;
-(void)registerClient:(int)arg1 queue:(id)arg2 notificationHandler:(/*^block*/id)arg3 ;
@end
