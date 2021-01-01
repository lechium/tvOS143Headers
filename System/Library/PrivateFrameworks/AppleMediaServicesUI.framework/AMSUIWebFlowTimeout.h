/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSDate;

@interface AMSUIWebFlowTimeout : NSObject {

	/*^block*/id _enqueuedBlock;
	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _startTime;
	double _timeout;
	double _timeRemaining;

}

@property (nonatomic,copy) id enqueuedBlock;                                  //@synthesize enqueuedBlock=_enqueuedBlock - In the implementation block
@property (nonatomic,copy) id block;                                          //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) double timeRemaining;                            //@synthesize timeRemaining=_timeRemaining - In the implementation block
+(id)timeoutWithTimeout:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)setTimeout:(double)arg1 ;
-(NSDate *)startTime;
-(void)start;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)pause;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)block;
-(void)reset;
-(double)timeout;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setBlock:(id)arg1 ;
-(double)timeRemaining;
-(void)setTimeRemaining:(double)arg1 ;
-(id)initWithTimeout:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)enqueuedBlock;
-(void)setEnqueuedBlock:(id)arg1 ;
@end
