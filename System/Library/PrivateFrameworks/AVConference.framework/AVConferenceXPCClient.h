/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface AVConferenceXPCClient : NSObject {

	NSObject*<OS_xpc_object> connection;
	NSMutableDictionary* registeredBlocks;
	NSObject*<OS_dispatch_queue> replyQueue;
	NSObject*<OS_dispatch_queue> connectionQueue;
	BOOL connectionPersists;

}

@property (readonly) NSObject*<OS_xpc_object> connection; 
@property (readonly) NSMutableDictionary * registeredBlocks; 
@property (readonly) BOOL connectionPersists; 
+(id)AVConferenceXPCClientSingleton;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_xpc_object>)connection;
-(id)sendMessageSync:(char*)arg1 ;
-(void)sendMessageAsync:(char*)arg1 ;
-(void)registerBlockForService:(char*)arg1 block:(/*^block*/id)arg2 ;
-(id)sendMessageSync:(char*)arg1 arguments:(id)arg2 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)deregisterFromService:(char*)arg1 ;
-(id)sendMessageSync:(char*)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 ;
-(void)registerBlockForService:(char*)arg1 block:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)registerBlockForService:(char*)arg1 block:(/*^block*/id)arg2 queue:(id)arg3 eventLogLevel:(int)arg4 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)createConnectionToServer;
-(id)newServerDiedDictionary;
-(void)closeConnectionToServer;
-(id)newNSDictionaryFromXPCDictionary:(id)arg1 ;
-(id)newNSErrorFromNSDictionary:(id)arg1 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 reply:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 reply:(/*^block*/id)arg4 queue:(id)arg5 ;
-(id)newXPCDictionaryFromNSDictionary:(id)arg1 ;
-(BOOL)connectionPersists;
-(id)copyConnection;
-(id)newNSDictionaryFromNSError:(id)arg1 ;
-(id)newTimeoutDictionary;
-(NSMutableDictionary *)registeredBlocks;
@end

