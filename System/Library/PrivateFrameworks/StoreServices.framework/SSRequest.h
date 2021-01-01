/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SSXPCCoding.h>

@protocol SSRequestDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, SSXPCConnection, BKSProcessAssertion, NSString;

@interface SSRequest : NSObject <SSXPCCoding> {

	long long _backgroundTaskIdentifier;
	BOOL _cancelAfterTaskExpiration;
	id<SSRequestDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSXPCConnection* _requestConnection;
	SSXPCConnection* _responseConnection;
	NSObject*<OS_dispatch_source> _backgroundTaskExpirationTimer;
	long long _callState;
	/*^block*/id _completionBlock;
	BKSProcessAssertion* _taskAssertion;
	BOOL _taskAssertionTaken;
	BOOL _usesTaskCompletionAssertions;

}

@property (assign,nonatomic) BOOL shouldCancelAfterTaskExpiration; 
@property (assign,nonatomic,__weak) id<SSRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL usesTaskCompletionAssertions;                  //@synthesize usesTaskCompletionAssertions=_usesTaskCompletionAssertions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_allowMultipleCallbacks;
-(id)init;
-(void)dealloc;
-(id<SSRequestDelegate>)delegate;
-(void)setDelegate:(id<SSRequestDelegate>)arg1 ;
-(void)cancel;
-(BOOL)start;
-(void)disconnect;
-(void)_shutdownRequest;
-(void)_startWithMessageID:(long long)arg1 messageBlock:(/*^block*/id)arg2 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_initSSRequest;
-(void)_shutdownRequestWithMessageID:(long long)arg1 ;
-(void)__beginBackgroundTask;
-(void)__endBackgroundTask;
-(void)_cancelBackgroundTaskExpirationTimer;
-(void)_endBackgroundTask;
-(void)setShouldCancelAfterTaskExpiration:(BOOL)arg1 ;
-(BOOL)shouldCancelAfterTaskExpiration;
-(void)_beginBackgroundTask;
-(void)_expireBackgroundTask;
-(BOOL)usesTaskCompletionAssertions;
-(void)setUsesTaskCompletionAssertions:(BOOL)arg1 ;
@end

