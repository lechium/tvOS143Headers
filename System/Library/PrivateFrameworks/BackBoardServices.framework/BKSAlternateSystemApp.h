/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BKSAlternateSystemAppClientProtocol.h>

@protocol BKSAlternateSystemAppDelegate, OS_dispatch_queue, OS_dispatch_semaphore;
@class NSString, NSXPCConnection, NSObject;

@interface BKSAlternateSystemApp : NSObject <BKSAlternateSystemAppClientProtocol> {

	BOOL _stateChangeWaiter;
	id<BKSAlternateSystemAppDelegate> _delegate;
	NSString* _bundleId;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	long long _state;
	NSObject*<OS_dispatch_semaphore> _stateChangeSemaphore;

}

@property (nonatomic,copy) NSString * bundleId;                                                  //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                       //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) long long state;                                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL stateChangeWaiter;                                             //@synthesize stateChangeWaiter=_stateChangeWaiter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> stateChangeSemaphore;              //@synthesize stateChangeSemaphore=_stateChangeSemaphore - In the implementation block
@property (assign,nonatomic,__weak) id<BKSAlternateSystemAppDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<BKSAlternateSystemAppDelegate>)delegate;
-(void)setDelegate:(id<BKSAlternateSystemAppDelegate>)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)terminate;
-(void)activate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)didBlockSystemAppForAlternateSystemApp;
-(void)didUnblockSystemAppForAlternateSystemApp;
-(void)alternateSystemAppWithBundleID:(id)arg1 failedToOpenWithResult:(id)arg2 ;
-(void)alternateSystemAppWithBundleID:(id)arg1 didExitWithContext:(id)arg2 ;
-(void)alternateSystemAppWithBundleIDDidOpen:(id)arg1 ;
-(void)alternateSystemAppWithBundleIDDidTerminate:(id)arg1 ;
-(id)initWithBundleId:(id)arg1 ;
-(void)_queue_ensureConnection;
-(void)_queue_changeState:(long long)arg1 ;
-(void)_waitForState:(long long)arg1 ;
-(void)_queue_invalidate;
-(void)_handleInterruptedConnection;
-(void)_handleInvalidatedConnection;
-(NSString *)bundleId;
-(BOOL)stateChangeWaiter;
-(void)setStateChangeWaiter:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)stateChangeSemaphore;
-(void)setStateChangeSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

