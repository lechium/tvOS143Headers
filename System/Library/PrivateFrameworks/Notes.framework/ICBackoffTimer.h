/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSTimer;

@interface ICBackoffTimer : NSObject {

	id _userInfo;
	double _initialTimeInterval;
	id _target;
	SEL _selector;
	unsigned long long _backoffCount;
	double _maxTimeInterval;
	NSTimer* _timer;

}

@property (assign,nonatomic) double initialTimeInterval;                   //@synthesize initialTimeInterval=_initialTimeInterval - In the implementation block
@property (assign,nonatomic,__weak) id target;                             //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                                 //@synthesize selector=_selector - In the implementation block
@property (nonatomic,retain) id userInfo;                                  //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) unsigned long long backoffCount;              //@synthesize backoffCount=_backoffCount - In the implementation block
@property (assign,nonatomic) double maxTimeInterval;                       //@synthesize maxTimeInterval=_maxTimeInterval - In the implementation block
@property (retain) NSTimer * timer;                                        //@synthesize timer=_timer - In the implementation block
-(id)init;
-(void)dealloc;
-(SEL)selector;
-(id)userInfo;
-(void)invalidate;
-(void)fire;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setSelector:(SEL)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(void)fire:(id)arg1 ;
-(BOOL)isScheduled;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)setInitialTimeInterval:(double)arg1 ;
-(void)setMaxTimeInterval:(double)arg1 ;
-(void)setBackoffCount:(unsigned long long)arg1 ;
-(double)initialTimeInterval;
-(unsigned long long)backoffCount;
-(double)maxTimeInterval;
-(double)nextTimeInterval;
-(id)initWithInitialInterval:(double)arg1 maxInterval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 ;
-(void)scheduleToFire;
@end
