/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FMCoreLite/FMFuture.h>

@protocol FMScheduler, OS_dispatch_queue;
@class NSObject;

@interface _FMLazyFuture : FMFuture {

	BOOL _started;
	/*^block*/id _block;
	id<FMScheduler> _scheduler;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,copy) id block;                                                //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) id<FMScheduler> scheduler;                             //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic) BOOL started;                                          //@synthesize started=_started - In the implementation block
-(id)block;
-(BOOL)started;
-(id<FMScheduler>)scheduler;
-(void)setScheduler:(id<FMScheduler>)arg1 ;
-(void)setBlock:(id)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(id)addFailureBlock:(/*^block*/id)arg1 ;
-(id)addSuccessBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(void)_runIfNecessary;
@end

