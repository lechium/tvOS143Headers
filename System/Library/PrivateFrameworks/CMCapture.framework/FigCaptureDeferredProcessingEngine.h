/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BWGraphStatusDelegate.h>

@protocol OS_dispatch_queue, OS_os_transaction;
@class NSObject, NSString, BWGraph, BWDeferredProcessingSourceNode, FigCaptureDeferredProcessingJob, NSSet, NSDictionary;

@interface FigCaptureDeferredProcessingEngine : NSObject <BWGraphStatusDelegate> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_os_transaction> _graphTransaction;
	NSString* _currentPortType;
	BOOL _currentIntelligentDistortionCorrectionEnabled;
	BOOL _currentGeomtetricDistortionCorrectionEnabled;
	BOOL _currentDemosaicedRawEnabled;
	BWGraph* _graph;
	BOOL _graphRunning;
	BWDeferredProcessingSourceNode* _sourceNode;
	FigCaptureDeferredProcessingJob* _job;
	BOOL _interactiveQoS;
	long long _graphPrepareDurationNS;
	NSSet* _allSensorIDStrings;
	NSDictionary* _defaultSensorIDsByPortType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedProcessingEngine;
-(id)init;
-(void)dealloc;
-(void)releaseResources;
-(void)_runJob;
-(void)_handleJobCompletion:(int)arg1 ;
-(BOOL)_reuseCurrentGraphForJob:(id)arg1 ;
-(void)_releaseGraph;
-(void)_createGraphAndRunJobWhenStarted;
-(void)_reportCoreAnalyticsDataWithError:(int)arg1 container:(id)arg2 ;
-(void)_cleanupFromJob;
-(void)graphDidPrepareNodes:(id)arg1 ;
-(void)graph:(id)arg1 didFinishStartingWithError:(int)arg2 ;
-(void)executeJob:(id)arg1 ;
@end

