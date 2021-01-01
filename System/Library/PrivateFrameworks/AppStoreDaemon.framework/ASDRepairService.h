/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ASDServiceBroker;

@interface ASDRepairService : NSObject {

	ASDServiceBroker* _serviceBroker;

}
+(id)interface;
+(id)defaultService;
-(id)initWithServiceBroker:(id)arg1 ;
-(id)_asynchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)repairAppWithOptions:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)refreshKeybagWithReplyHandler:(/*^block*/id)arg1 ;
-(void)_callRepairServiceWithOptions:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
@end
