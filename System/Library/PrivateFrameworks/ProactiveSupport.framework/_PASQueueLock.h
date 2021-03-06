/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface _PASQueueLock : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id _guardedData;

}
-(void)runWithLockAcquired:(/*^block*/id)arg1 ;
-(id)guardedDataAssertingLockContext;
-(id)unsafeGuardedData;
-(id)initWithGuardedData:(id)arg1 serialQueue:(id)arg2 ;
-(void)runAsyncWithLockAcquired:(/*^block*/id)arg1 ;
@end

