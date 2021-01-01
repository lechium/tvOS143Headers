/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, PFLimitedConcurrencyQueueClass;

@interface PFLimitedConcurrencySlotQueue : NSObject {

	AQ _blockCount;
	NSObject*<OS_dispatch_queue> _slotQueue;
	PFLimitedConcurrencyQueueClass* _concurrentQueue;
	unsigned long long _slotIndex;

}

@property (__weak,readonly) PFLimitedConcurrencyQueueClass * concurrentQueue;              //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (readonly) unsigned long long slotIndex;                                         //@synthesize slotIndex=_slotIndex - In the implementation block
+(id)currentSlotQueue;
-(void)resume;
-(void)suspend;
-(const char*)label;
-(PFLimitedConcurrencyQueueClass *)concurrentQueue;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(void)dispatchAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithConcurrentQueue:(id)arg1 targetQueue:(id)arg2 slotIndex:(unsigned long long)arg3 ;
-(unsigned long long)incrementSlotUseCount;
-(unsigned long long)decrementSlotUseCount;
-(unsigned long long)slotUseCount;
-(unsigned long long)slotIndex;
@end

