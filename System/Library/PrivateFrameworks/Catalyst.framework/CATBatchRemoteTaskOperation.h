/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATOperation.h>

@class NSArray, NSOperationQueue;

@interface CATBatchRemoteTaskOperation : CATOperation {

	NSArray* mRemoteTasks;
	NSOperationQueue* mQueue;

}

@property (nonatomic,copy,readonly) NSArray * remoteTaskOperations; 
-(id)init;
-(void)cancel;
-(void)main;
-(BOOL)isAsynchronous;
-(id)initWithRemoteTaskOperations:(id)arg1 ;
-(void)cancelSubOperations;
-(void)remoteTaskDidFinish:(id)arg1 ;
-(id)initWithTaskClient:(id)arg1 requests:(id)arg2 ;
-(NSArray *)remoteTaskOperations;
@end

