/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ClientConnection, NSMutableDictionary;

@interface CADOperationProxy : NSObject {

	ClientConnection* _conn;
	NSMutableDictionary* _operationGroups;

}
+(id)allOperationGroupClasses;
+(Class)_operationGroupClassFromSelector:(SEL)arg1 ;
+(Class)operationProxyClassForClientWithConnection:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)initWithClientConnection:(id)arg1 ;
-(id)_operationGroupForClass:(Class)arg1 ;
-(void)_emptyMethod;
-(id)_copyReplyBlockFromInvocation:(id)arg1 ;
-(void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withError:(int)arg3 ;
@end

