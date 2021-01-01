/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface WLKPrewarming : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSXPCConnection* _connection;

}
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(id)_connection;
-(void)prewarm;
-(void)_onQueue_prewarmDevice;
-(void)prewarmDevice;
-(void)prewarmDeviceAndNetwork;
@end

