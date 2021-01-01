/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <NanoRegistry/NanoRegistry-Structs.h>
@class NSMutableArray, NSObject;

@interface NRReadWriteConcurrentQueue : NSObject {

	NSMutableArray* _readerQueues;
	NSObject*<OS_dispatch_queue> _writerQueue;
	long long _nextReader;
	BOOL _suspended;
	NSMutableArray* _suspendedReadRequests;
	NSMutableArray* _suspendedWriteRequests;
	os_unfair_lock_s _lock;

}
-(void)invalidate;
-(void)resume;
-(void)suspend;
-(void)enqueueReadWithBlock:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 async:(BOOL)arg3 ;
-(id)initWithNumberOfReaders:(unsigned long long)arg1 ;
-(void)enqueueReadWithBlock:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 ;
-(void)enqueueReadWithBlockAsync:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 ;
-(void)enqueueWriteWithBlockAsync:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 ;
@end

