/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MetricKitServices.framework/MetricKitServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricKitServices/MXService.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface MXReportCrashService : MXService {

	NSMutableArray* _reportCrashDataPaths;
	NSMutableArray* _unarchivedReportCrashData;
	NSObject*<OS_os_log> _MXReportCrashServiceLogHandle;
	NSObject*<OS_dispatch_queue> _requestQueue;

}

@property (retain) NSMutableArray * reportCrashDataPaths;                            //@synthesize reportCrashDataPaths=_reportCrashDataPaths - In the implementation block
@property (retain) NSMutableArray * unarchivedReportCrashData;                       //@synthesize unarchivedReportCrashData=_unarchivedReportCrashData - In the implementation block
@property (retain) NSObject*<OS_os_log> MXReportCrashServiceLogHandle;               //@synthesize MXReportCrashServiceLogHandle=_MXReportCrashServiceLogHandle - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
+(id)sharedReportCrashService;
-(id)init;
-(BOOL)startService;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)stopService;
-(BOOL)diagnosticsSupported;
-(BOOL)diagnosticsAvailableForDate:(id)arg1 ;
-(id)getDiagnosticsForClient:(id)arg1 dateString:(id)arg2 ;
-(BOOL)_updateService;
-(void)unarchiveReportCrashDataForDateString:(id)arg1 ;
-(NSMutableArray *)reportCrashDataPaths;
-(void)setReportCrashDataPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)unarchivedReportCrashData;
-(void)setUnarchivedReportCrashData:(NSMutableArray *)arg1 ;
-(NSObject*<OS_os_log>)MXReportCrashServiceLogHandle;
-(void)setMXReportCrashServiceLogHandle:(NSObject*<OS_os_log>)arg1 ;
@end

