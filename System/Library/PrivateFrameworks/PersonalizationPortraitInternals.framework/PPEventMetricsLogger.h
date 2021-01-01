/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSString, NSMutableArray, NSObject;

@interface PPEventMetricsLogger : NSObject <NSSecureCoding> {

	opaque_pthread_mutex_t _lock;
	NSString* _path;
	NSMutableArray* _loggedInteractionsSummary;
	NSObject*<OS_dispatch_source> _persistenceTimerSource;
	NSObject*<OS_dispatch_queue> _interactionsWriteQueue;
	double _storeCreationDate;

}
+(BOOL)supportsSecureCoding;
+(id)defaultLogger;
+(unsigned long long)numberOfDaysBetweenDate:(id)arg1 andDate:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFileName:(id)arg1 ;
-(void)updateAndScheduleDiskWrite;
-(BOOL)resetLogs;
-(double)_storeAge;
-(void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(BOOL)storeToDisk;
-(id)_createRTCReporting;
-(void)sendRTCLogsWithCompletion:(/*^block*/id)arg1 ;
-(void)logNewInteractionSummaryWithDictionary:(id)arg1 ;
-(id)eventsAndExtraordinaryEventsDictFromDate:(id)arg1 ;
-(BOOL)_removeInteractionsSummaryLogsFromLogsAndResetStoreAge:(id)arg1 ;
-(id)logsToSend;
-(id)allowedLogFromLog:(id)arg1 ;
-(void)logEventInteractionForEventHighlight:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(BOOL)_incrementInteractionForEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(id)_interactionAttributesForEventHighlight:(id)arg1 ;
-(id)_interactionKeyForInterface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(id)_descriptionForInterface:(unsigned short)arg1 ;
-(id)_descriptionForActionType:(unsigned short)arg1 ;
-(id)_descriptionForPPRTCCategory:(unsigned short)arg1 ;
-(id)loggedInteractionsSummaryMetrics;
@end

