/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <AVFCore/AVFCore-Structs.h>
@class NSObject, AVWeakReference;

@interface AVTimebaseObserver : NSObject {

	NSObject*<OS_dispatch_queue> _timerQueue;
	AVWeakReference* _weakReference;
	NSObject*<OS_dispatch_source> _timerSource;
	OpaqueCMTimebaseRef _timebase;
	BOOL _isObservingTimebase;
	double _lastRate;
	double _currentRate;
	BOOL _invalid;

}

@property (getter=_weakReference,nonatomic,readonly) AVWeakReference * weakReference;              //@synthesize weakReference=_weakReference - In the implementation block
@property (readonly) OpaqueCMTimebaseRef timebase; 
@property (nonatomic,readonly) BOOL invalidated; 
-(void)dealloc;
-(void)invalidate;
-(id)_weakReference;
-(OpaqueCMTimebaseRef)timebase;
-(BOOL)invalidated;
-(void)_reallyInvalidate;
-(void)_removeTimebaseFromTimerSource;
-(void)_stopObservingTimebaseNotifications;
-(void)_attachTimerSourceToTimebase;
-(void)_startObservingTimebaseNotifications;
-(void)_effectiveRateChanged;
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 queue:(id)arg2 ;
-(void)_resetNextFireTime;
-(void)_handleTimeDiscontinuity;
-(void)_finishInitializationWithTimerEventHandler:(/*^block*/id)arg1 ;
@end

