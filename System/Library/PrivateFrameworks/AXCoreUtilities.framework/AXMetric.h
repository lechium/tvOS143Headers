/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXCoreUtilities/AXCoreUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <AXCoreUtilities/AXMetricContainer.h>

@class NSString, NSMutableArray, AXMetricSession;

@interface AXMetric : NSObject <NSSecureCoding, AXMetricContainer> {

	NSString* _name;
	long long _dirtyMemory;
	long long _dirtyMemoryDelta;
	long long _dirtyMemoryPeak;
	long long _dirtyMemoryPeakDelta;
	long long _dirtyMemoryPeakLifetime;
	long long _cpuTime;
	long long _cpuInstructions;
	double _startTime;
	double _endTime;
	pc_sessionRef _perfCheckSession;
	NSMutableArray* _childMetrics;
	AXMetricSession* _session;

}

@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) pc_sessionRef perfCheckSession;                 //@synthesize perfCheckSession=_perfCheckSession - In the implementation block
@property (nonatomic,retain) NSMutableArray * childMetrics;                  //@synthesize childMetrics=_childMetrics - In the implementation block
@property (assign,nonatomic,__weak) AXMetricSession * session;               //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) long long dirtyMemory;                          //@synthesize dirtyMemory=_dirtyMemory - In the implementation block
@property (assign,nonatomic) long long dirtyMemoryDelta;                     //@synthesize dirtyMemoryDelta=_dirtyMemoryDelta - In the implementation block
@property (assign,nonatomic) long long dirtyMemoryPeak;                      //@synthesize dirtyMemoryPeak=_dirtyMemoryPeak - In the implementation block
@property (assign,nonatomic) long long dirtyMemoryPeakDelta;                 //@synthesize dirtyMemoryPeakDelta=_dirtyMemoryPeakDelta - In the implementation block
@property (assign,nonatomic) long long dirtyMemoryPeakLifetime;              //@synthesize dirtyMemoryPeakLifetime=_dirtyMemoryPeakLifetime - In the implementation block
@property (assign,nonatomic) long long cpuTime;                              //@synthesize cpuTime=_cpuTime - In the implementation block
@property (assign,nonatomic) long long cpuInstructions;                      //@synthesize cpuInstructions=_cpuInstructions - In the implementation block
@property (assign,nonatomic) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                                 //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) double elapsedTime; 
@property (nonatomic,readonly) BOOL measurementsEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(AXMetricSession *)session;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(void)setSession:(AXMetricSession *)arg1 ;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(double)elapsedTime;
-(id)startMeasure:(id)arg1 ;
-(void)measure:(id)arg1 execute:(/*^block*/id)arg2 ;
-(BOOL)measurementsEnabled;
-(id)measure:(id)arg1 tryExecute:(/*^block*/id)arg2 ;
-(void)setChildMetrics:(NSMutableArray *)arg1 ;
-(NSMutableArray *)childMetrics;
-(id)_initWithName:(id)arg1 session:(id)arg2 ;
-(void)_startMeasurement;
-(void)_endMeasurement;
-(void)_appendToReport:(id)arg1 withIndentation:(long long)arg2 ;
-(void)setDirtyMemory:(long long)arg1 ;
-(void)setDirtyMemoryDelta:(long long)arg1 ;
-(void)setDirtyMemoryPeak:(long long)arg1 ;
-(void)setDirtyMemoryPeakDelta:(long long)arg1 ;
-(void)setDirtyMemoryPeakLifetime:(long long)arg1 ;
-(void)setCpuTime:(long long)arg1 ;
-(void)setCpuInstructions:(long long)arg1 ;
-(long long)dirtyMemory;
-(long long)dirtyMemoryDelta;
-(long long)dirtyMemoryPeak;
-(long long)dirtyMemoryPeakDelta;
-(long long)dirtyMemoryPeakLifetime;
-(long long)cpuTime;
-(long long)cpuInstructions;
-(id)_formatKbAsMbString:(long long)arg1 ;
-(id)_formatDeltaKbAsMbString:(long long)arg1 ;
-(pc_sessionRef)perfCheckSession;
-(void)setPerfCheckSession:(pc_sessionRef)arg1 ;
@end

