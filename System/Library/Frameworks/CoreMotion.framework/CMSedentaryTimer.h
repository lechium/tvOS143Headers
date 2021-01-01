/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CMSedentaryTimer_Internal;

@interface CMSedentaryTimer : NSObject {

	CMSedentaryTimer_Internal* _internal;

}

@property (nonatomic,readonly) CMSedentaryTimer_Internal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isAvailable;
-(id)init;
-(void)dealloc;
-(CMSedentaryTimer_Internal *)_internal;
-(BOOL)isActive;
-(void)startTimerWithStartTime:(id)arg1 periodInterval:(double)arg2 reminderInterval:(double)arg3 autoReschedule:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
-(void)stopTimerWithHandler:(/*^block*/id)arg1 ;
-(void)queryAlarmDataSince:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)registerForAlarmsWithHandler:(/*^block*/id)arg1 ;
@end

