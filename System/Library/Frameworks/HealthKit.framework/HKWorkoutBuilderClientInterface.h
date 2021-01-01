/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HKWorkoutBuilderClientInterface <NSObject>
@required
-(void)clientRemote_didUpdateStatistics:(id)arg1;
-(void)clientRemote_didUpdateMetadata:(id)arg1;
-(void)clientRemote_didUpdateEvents:(id)arg1;
-(void)clientRemote_didChangeElapsedTimeBasisWithStartDate:(id)arg1 endDate:(id)arg2;
-(void)clientRemote_didRecoverSeriesBuilders:(id)arg1;
-(void)clientRemote_didFinishRecovery;
-(void)clientRemote_synchronizeWithCompletion:(/*^block*/id)arg1;
-(void)clientRemote_stateDidChange:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
-(void)clientRemote_finishedWorkout:(id)arg1;
-(void)clientRemote_didFailWithError:(id)arg1;

@end

