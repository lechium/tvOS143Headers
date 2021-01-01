/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PPFeedbackAccepting.h>
#import <libobjc.A.dylib/PPClientStore.h>

@class PPRecordMonitoringHelper, PPClientFeedbackHelper, NSString;

@interface PPEventStore : NSObject <PPFeedbackAccepting, PPClientStore> {

	PPRecordMonitoringHelper* _monitoringHelper;
	PPClientFeedbackHelper* _clientFeedbackHelper;

}

@property (nonatomic,retain) NSString * clientIdentifier; 
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(BOOL)sendRTCLogsWithError:(id*)arg1 ;
-(/*^block*/id)_recordGenerator;
-(BOOL)iterEventNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(void)_sendChangesToDelegates:(id)arg1 ;
-(void)_loadEventNameRecordsWithDelegate:(id)arg1 ;
-(BOOL)loadEventNameRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id*)arg2 ;
-(BOOL)iterEventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3 error:(id*)arg4 block:(/*^block*/id)arg5 ;
-(BOOL)iterDailyEventHighlightsWithOptions:(int)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)iterWeeklyEventHighlightsWithOptions:(int)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)iterEventHighlightsFrom:(id)arg1 to:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(BOOL)iterDailyEventHighlightsError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)iterWeeklyEventHighlightsError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)iterScoredEventsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)interactionSummaryMetricsError:(id*)arg1 block:(/*^block*/id)arg2 ;
@end
