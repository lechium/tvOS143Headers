/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ProxyAnalyticsDelegate <NSObject>
@optional
-(void)proxyAnalyticsTrainAndScoreInterrupted;
-(void)proxyAnalyticsTrainAndScoreComplete:(id)arg1 error:(id)arg2;
-(void)performPersistentStoreHealthCheckComplete:(id)arg1 error:(id)arg2;
-(void)performAppPeriodicTasksComplete:(id)arg1 error:(id)arg2;
-(void)performAppTrackingPeriodicTasksComplete:(id)arg1 error:(id)arg2;
-(void)performAppExperiencePeriodicTasksComplete:(id)arg1 error:(id)arg2;

@end

