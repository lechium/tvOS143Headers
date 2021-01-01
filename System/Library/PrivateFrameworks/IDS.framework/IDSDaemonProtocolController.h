/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCConnection, IDSGroupContextNotifyingObserver;

@interface IDSDaemonProtocolController : NSObject {

	NSXPCConnection* _connection;
	IDSGroupContextNotifyingObserver* _observer;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) id<IDSGroupContextDataSourceDaemonProtocol> groupContextDataSource; 
@property (nonatomic,readonly) id<IDSGroupContextCacheMiddlewareDaemonProtocol> groupContextCacheMiddleware; 
@property (nonatomic,retain) IDSGroupContextNotifyingObserver * observer;                                                 //@synthesize observer=_observer - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setObserver:(IDSGroupContextNotifyingObserver *)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(IDSGroupContextNotifyingObserver *)observer;
-(id<IDSGroupContextDataSourceDaemonProtocol>)groupContextDataSource;
-(id<IDSGroupContextCacheMiddlewareDaemonProtocol>)groupContextCacheMiddleware;
@end
