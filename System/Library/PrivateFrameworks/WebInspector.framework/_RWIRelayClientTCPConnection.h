/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/_RWIRelayClientConnection.h>
#import <libobjc.A.dylib/_RWITCPConnectionDelegate.h>

@class _RWITCPConnection, NSString;

@interface _RWIRelayClientTCPConnection : _RWIRelayClientConnection <_RWITCPConnectionDelegate> {

	_RWITCPConnection* _connection;

}

@property (nonatomic,retain) _RWITCPConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectionFromTCPConnection:(id)arg1 delegate:(id)arg2 ;
+(id)connectionFromLockdownCheckinWithInfo:(void*)arg1 delegate:(id)arg2 ;
-(void)sendMessage:(id)arg1 ;
-(_RWITCPConnection *)connection;
-(void)setConnection:(_RWITCPConnection *)arg1 ;
-(void)closeInternal;
-(id)initWithTCPConnection:(id)arg1 delegate:(id)arg2 ;
-(void)tcpConnection:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)tcpConnectionDidClose:(id)arg1 ;
@end

