/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IDSXPCConnectionProtocol, OS_xpc_object;
@class NSObject;

@interface _IDSXPCCheckInInfo : NSObject {

	BOOL _finishedTransaction;
	id<IDSXPCConnectionProtocol> _connection;
	NSObject*<OS_xpc_object> _tempObject;

}

@property (nonatomic,retain) id<IDSXPCConnectionProtocol> connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> tempObject;                  //@synthesize tempObject=_tempObject - In the implementation block
@property (assign,nonatomic) BOOL finishedTransaction;                             //@synthesize finishedTransaction=_finishedTransaction - In the implementation block
-(id<IDSXPCConnectionProtocol>)connection;
-(void)setConnection:(id<IDSXPCConnectionProtocol>)arg1 ;
-(NSObject*<OS_xpc_object>)tempObject;
-(void)setTempObject:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)finishedTransaction;
-(void)setFinishedTransaction:(BOOL)arg1 ;
@end

