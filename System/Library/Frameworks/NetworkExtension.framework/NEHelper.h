/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object, OS_dispatch_queue;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSObject, NSDictionary;

@interface NEHelper : NSObject {

	os_unfair_lock_s _lock;
	BOOL _isSynchronous;
	int _classID;
	/*^block*/id _incomingMessageHandler;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _additionalProperties;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;                       //@synthesize connection=_connection - In the implementation block
@property (retain,readonly) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) int classID;                                             //@synthesize classID=_classID - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * additionalProperties;              //@synthesize additionalProperties=_additionalProperties - In the implementation block
@property (copy) id incomingMessageHandler;                                             //@synthesize incomingMessageHandler=_incomingMessageHandler - In the implementation block
@property (assign,nonatomic) BOOL isSynchronous;                                        //@synthesize isSynchronous=_isSynchronous - In the implementation block
-(void)dealloc;
-(NSDictionary *)additionalProperties;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithDelegateClassID:(int)arg1 queue:(id)arg2 additionalProperties:(id)arg3 ;
-(void)setIsSynchronous:(BOOL)arg1 ;
-(BOOL)isSynchronous;
-(void)setIncomingMessageHandler:(id)arg1 ;
-(id)incomingMessageHandler;
-(void)sendRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(int)classID;
-(id)getConnection;
-(id)initWithDelegateClassID:(int)arg1 queue:(id)arg2 ;
@end

