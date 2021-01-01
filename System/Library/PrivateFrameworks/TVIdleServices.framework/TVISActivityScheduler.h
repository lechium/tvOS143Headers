/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface TVISActivityScheduler : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
+(id)sharedInstance;
+(long long)_performBackgroundActivityWithContext:(id)arg1 ;
+(unsigned long long)assetServiceRunContextForBackgroundActivityContext:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)start;
-(void)_registerLaunchEvents;
-(void)_checkForUpdatesWithActivityContext:(id)arg1 logContext:(id)arg2 forceScheduling:(BOOL)arg3 ;
-(void)_scheduleBackgroundActivityForced:(BOOL)arg1 ;
-(id)_anticipatedDownloadDateForInterval:(long long)arg1 ;
-(BOOL)_shouldScheduleUpdateForDate:(id)arg1 previouslyScheduledDate:(id)arg2 ;
@end

