/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NEIPC, NSUUID;

@interface NEIPCWrapper : NSObject {

	NSObject*<OS_dispatch_queue> _sendQueue;
	NSObject*<OS_dispatch_queue> _ipcQueue;
	NEIPC* _ipc;
	NSUUID* _identifier;

}

@property (readonly) NSObject*<OS_dispatch_queue> sendQueue;              //@synthesize sendQueue=_sendQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> ipcQueue;               //@synthesize ipcQueue=_ipcQueue - In the implementation block
@property (readonly) NEIPC * ipc;                                         //@synthesize ipc=_ipc - In the implementation block
@property (readonly) NSUUID * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
+(void)cancelSharedWrapperForSession:(void*)arg1 ;
+(id)sharedWrapperForSession:(void*)arg1 ;
-(NSUUID *)identifier;
-(void)cancel;
-(NEIPC *)ipc;
-(NSObject*<OS_dispatch_queue>)sendQueue;
-(NSObject*<OS_dispatch_queue>)ipcQueue;
-(id)initWithSession:(void*)arg1 identifier:(id)arg2 ;
@end

