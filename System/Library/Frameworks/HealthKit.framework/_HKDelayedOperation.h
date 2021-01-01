/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;
@class NSObject, NSString;

@interface _HKDelayedOperation : NSObject {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	long long _mode;
	long long _clock;
	NSObject*<OS_dispatch_source> _timerSource;
	double _delay;
	double _lastExecution;
	double _nextScheduledExecution;
	NSString* _loggingName;
	NSObject*<OS_os_log> _loggingCategory;

}
-(void)invalidate;
-(void)execute;
-(id)initWithMode:(long long)arg1 queue:(id)arg2 delay:(double)arg3 block:(/*^block*/id)arg4 ;
-(id)initWithMode:(long long)arg1 clock:(long long)arg2 queue:(id)arg3 delay:(double)arg4 block:(/*^block*/id)arg5 ;
-(void)_queue_executeBlockIfScheduled;
-(void)executeWithDelay:(double)arg1 ;
-(id)initWithQueue:(id)arg1 delay:(double)arg2 block:(/*^block*/id)arg3 ;
-(void)enableLoggingWithName:(id)arg1 category:(id)arg2 ;
-(void)disableLogging;
@end

