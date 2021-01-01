/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, AMSPromise;

@interface AMSTask : NSObject {

	BOOL _cancelled;
	long long _runMode;
	NSObject*<OS_dispatch_queue> _performTaskQueue;
	AMSPromise* _promise;
	NSObject*<OS_dispatch_queue> _promiseAccessQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> performTaskQueue;                //@synthesize performTaskQueue=_performTaskQueue - In the implementation block
@property (nonatomic,retain) AMSPromise * promise;                                         //@synthesize promise=_promise - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> promiseAccessQueue;              //@synthesize promiseAccessQueue=_promiseAccessQueue - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled;                          //@synthesize cancelled=_cancelled - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (assign,nonatomic) long long runMode;                                            //@synthesize runMode=_runMode - In the implementation block
+(id)taskCacheAccessQueue;
+(id)taskCache;
-(id)init;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(BOOL)isRunning;
-(AMSPromise *)promise;
-(void)setPromise:(AMSPromise *)arg1 ;
-(NSObject*<OS_dispatch_queue>)promiseAccessQueue;
-(id)performBinaryTaskWithBlock:(/*^block*/id)arg1 ;
-(id)performTaskWithBlock:(/*^block*/id)arg1 ;
-(id)performTaskWithPromiseBlock:(/*^block*/id)arg1 ;
-(void)setRunMode:(long long)arg1 ;
-(long long)runMode;
-(void)setPerformTaskQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)performTaskQueue;
-(void)setPromiseAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

