/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FMNSXPCConnecting.h>

@class NSXPCConnection, FMFuture, NSString;

@interface FMNSXPCConnection : NSObject <FMNSXPCConnecting> {

	BOOL __testMockConnection;
	NSXPCConnection* _connection;
	FMFuture* _future;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) FMFuture * future;                         //@synthesize future=_future - In the implementation block
@property (assign,nonatomic) BOOL _testMockConnection;                  //@synthesize _testMockConnection=__testMockConnection - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(long long)state;
-(id)remoteObjectProxy;
-(NSXPCConnection *)connection;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(FMFuture *)future;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(void)destroyXPCConnection;
-(id)initWithConfiguration:(id)arg1 exportedObject:(id)arg2 ;
-(void)setFuture:(FMFuture *)arg1 ;
-(BOOL)_testMockConnection;
-(void)set_testMockConnection:(BOOL)arg1 ;
@end
