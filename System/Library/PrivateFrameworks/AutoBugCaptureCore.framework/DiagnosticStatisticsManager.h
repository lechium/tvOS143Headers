/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, AnalyticsWorkspace, DiagnosticCaseUsageAnalytics;

@interface DiagnosticStatisticsManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	AnalyticsWorkspace* _workspace;
	DiagnosticCaseUsageAnalytics* _caseUsageSpace;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(long long)_removeAllDiagnosticCaseUsageFor:(id)arg1 ;
-(void)resetDiagnosticCaseUsage;
-(void)getDiagnosticCaseUsageStatistics:(/*^block*/id)arg1 ;
-(id)_retrieveDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 onOrAfter:(id)arg5 create:(BOOL)arg6 ;
-(void)_updateCaseStatisticsWith:(id)arg1 ;
-(void)_updateDailyCaseStatisticsWith:(id)arg1 ;
-(void)_updateDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 lastSeen:(id)arg5 dampeningType:(BOOL)arg6 ;
-(id)_retrieveDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 ;
-(id)_createDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 ;
-(id)initWithWorkspace:(id)arg1 queue:(id)arg2 ;
-(void)_checkFileWritingLimits:(id)arg1 ;
-(void)updateCaseStatisticsWith:(id)arg1 ;
-(double)_calculateAverageCasesPerDayFromDailyAggregatedStatistics;
-(long long)_removeDiagnosticCaseUsageMatchingDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 ;
-(void)cleanupDiagnosticCaseUsage;
@end

