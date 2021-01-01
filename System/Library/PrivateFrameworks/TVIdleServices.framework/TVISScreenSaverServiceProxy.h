/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVIdleServices/TVISScreenSaverServiceInterface.h>

@protocol TVISScreenSaverServiceInterface, OS_dispatch_queue;
@class NSXPCConnection, NSMapTable, NSObject, NSString;

@interface TVISScreenSaverServiceProxy : NSObject <TVISScreenSaverServiceInterface> {

	/*^block*/id _interruptionHandler;
	NSXPCConnection* _connection;
	id<TVISScreenSaverServiceInterface> _remoteProxy;
	NSMapTable* _pendingReplies;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) id<TVISScreenSaverServiceInterface> remoteProxy;              //@synthesize remoteProxy=_remoteProxy - In the implementation block
@property (nonatomic,readonly) NSMapTable * pendingReplies;                                //@synthesize pendingReplies=_pendingReplies - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;                   //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                         //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)interruptionHandler;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id<TVISScreenSaverServiceInterface>)remoteProxy;
-(void)setRemoteProxy:(id<TVISScreenSaverServiceInterface>)arg1 ;
-(void)handleConnectionInterruption:(id)arg1 ;
-(NSMapTable *)pendingReplies;
-(void)fetchScreenSaverConfigurationWithReply:(/*^block*/id)arg1 ;
-(void)forceDownloadAssetsWithIDs:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)activateCategoryWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)deactivateCategoryWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_setUpScreenSaverServiceConnection;
@end

