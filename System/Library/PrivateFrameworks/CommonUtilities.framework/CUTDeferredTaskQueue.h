/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSNumber;

@interface CUTDeferredTaskQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _originalBlock;
	NSMutableArray* _pendingDispatchBlocks;
	NSNumber* _capacity;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id originalBlock;                                    //@synthesize originalBlock=_originalBlock - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingDispatchBlocks;              //@synthesize pendingDispatchBlocks=_pendingDispatchBlocks - In the implementation block
@property (nonatomic,readonly) NSNumber * capacity;                                 //@synthesize capacity=_capacity - In the implementation block
-(NSNumber *)capacity;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithNumberCapacity:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(NSMutableArray *)pendingDispatchBlocks;
-(id)originalBlock;
-(id)initWithCapacity:(long long)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)enqueueExecutionWithTarget:(id)arg1 afterDelay:(double)arg2 ;
-(void)cancelPendingExecutions;
@end
