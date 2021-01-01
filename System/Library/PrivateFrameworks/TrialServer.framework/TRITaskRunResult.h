/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDate;

@interface TRITaskRunResult : NSObject <NSCopying> {

	BOOL _reportResultToServer;
	int _runStatus;
	NSArray* _nextTasks;
	NSDate* _earliestRetryDate;

}

@property (nonatomic,readonly) int runStatus;                           //@synthesize runStatus=_runStatus - In the implementation block
@property (nonatomic,readonly) BOOL reportResultToServer;               //@synthesize reportResultToServer=_reportResultToServer - In the implementation block
@property (nonatomic,readonly) NSArray * nextTasks;                     //@synthesize nextTasks=_nextTasks - In the implementation block
@property (nonatomic,readonly) NSDate * earliestRetryDate;              //@synthesize earliestRetryDate=_earliestRetryDate - In the implementation block
+(id)resultWithRunStatus:(int)arg1 reportResultToServer:(BOOL)arg2 nextTasks:(id)arg3 earliestRetryDate:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(BOOL)isEqualToResult:(id)arg1 ;
-(id)initWithRunStatus:(int)arg1 reportResultToServer:(BOOL)arg2 nextTasks:(id)arg3 earliestRetryDate:(id)arg4 ;
-(int)runStatus;
-(BOOL)reportResultToServer;
-(NSArray *)nextTasks;
-(NSDate *)earliestRetryDate;
-(id)copyWithReplacementRunStatus:(int)arg1 ;
-(id)copyWithReplacementReportResultToServer:(BOOL)arg1 ;
-(id)copyWithReplacementNextTasks:(id)arg1 ;
-(id)copyWithReplacementEarliestRetryDate:(id)arg1 ;
@end

