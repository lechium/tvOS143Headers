/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSUUID, NSString, NSObject, NSMutableArray;

@interface TestProbe : NSObject {

	BOOL _running;
	unsigned _status;
	NSUUID* _uuid;
	NSString* _diagSessionUUID;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _periodicTimer;
	NSMutableArray* _probeOutputFilePaths;

}

@property (nonatomic,retain) NSUUID * uuid;                                            //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * diagSessionUUID;                               //@synthesize diagSessionUUID=_diagSessionUUID - In the implementation block
@property (assign,nonatomic) unsigned status;                                          //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                            //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> periodicTimer;              //@synthesize periodicTimer=_periodicTimer - In the implementation block
@property (nonatomic,readonly) NSMutableArray * probeOutputFilePaths;                  //@synthesize probeOutputFilePaths=_probeOutputFilePaths - In the implementation block
+(id)testProbeStatusString:(unsigned)arg1 ;
+(void)autoBugCapturePath:(id*)arg1 autoBugCaptureUID:(id*)arg2 autoBugCaptureGID:(id*)arg3 ;
+(void*)loadCoreUtils;
-(BOOL)isEqual:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isRunning;
-(unsigned)status;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUUID *)uuid;
-(id)initWithQueue:(id)arg1 ;
-(void)setStatus:(unsigned)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(void)stopTest;
-(void)removeProbeOutputFiles;
-(NSMutableArray *)probeOutputFilePaths;
-(void)cancelTest:(/*^block*/id)arg1 ;
-(BOOL)startPeriodicTimerAt:(unsigned long long)arg1 repeatInterval:(unsigned long long)arg2 ;
-(void)stopPeriodicTimer;
-(void)periodicTimerFired:(id)arg1 ;
-(void)setDiagSessionUUID:(NSString *)arg1 ;
-(NSString *)diagSessionUUID;
-(void)setPeriodicTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)periodicTimer;
-(BOOL)startPeriodicTimer;
@end

