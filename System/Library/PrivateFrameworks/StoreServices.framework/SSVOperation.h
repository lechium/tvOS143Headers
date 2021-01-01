/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSOperation, NSMutableArray, NSObject, NSError;

@interface SSVOperation : NSOperation {

	NSOperation* _childOperation;
	NSMutableArray* _childRequests;
	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _success;
	NSError* _error;

}

@property (assign,nonatomic) BOOL success;               //@synthesize success=_success - In the implementation block
@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)init;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void)runChildOperation:(id)arg1 ;
-(void)addChildRequest:(id)arg1 ;
-(void)removeChildRequest:(id)arg1 ;
@end

