/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object, BSXPCConnectionListenerHandler, OS_dispatch_queue;
@class NSObject, NSString;

@interface BSXPCConnectionListener : NSObject {

	NSObject*<OS_xpc_object> _connection;
	id<BSXPCConnectionListenerHandler> _handler;
	NSString* _service;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)description;
-(void)dealloc;
@end

