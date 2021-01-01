/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWSinkNode.h>

@protocol BWImageQueueSinkNodePreviewTapDelegate, OS_os_transaction, OS_dispatch_queue;
@class NSObject, NSMutableArray, CAContext;

@interface BWImageQueueSinkNode : BWSinkNode {

	unsigned _imageQueueCapacity;
	unsigned _imageQueueWidth;
	unsigned _imageQueueHeight;
	unsigned _imageQueueRequiredFreeSlots;
	CAImageQueueRef _imageQueue;
	unsigned _imageQueueSlot;
	unsigned long long _imageQueueCurrentFreeSlots;
	int _syncStrategy;
	BOOL _resetPreviewSynchronizerOnNextFrame;
	OpaqueBWPreviewSynchronizerRef _previewSynchronizer;
	double _lastDisplaySamplingTime;
	double _lastDisplayVSyncInterval;
	double _lastHarmonicFractionalVSyncInterval;
	double _lastFramePTS;
	double _lastDisplayTime;
	double _lateFrameIntervalStartPTS;
	double _previousFrameDuration;
	unsigned long long _framesSinceLastHarmonicCompensation;
	BOOL _CAVSyncIntervalWorkaroundEnabled;
	BOOL _highLatencyJitterHandlingEnabled;
	BOOL _fasterLatencyRecoveryEnabled;
	BOOL _driftCompensationTimestampFilteringEnabled;
	id<BWImageQueueSinkNodePreviewTapDelegate> _previewTapDelegate;
	unsigned long long _numFramesReceived;
	NSObject*<OS_os_transaction> _holdingBuffersForClientAssertion;
	NSMutableArray* _sharedSurfaces;
	unsigned long long* _sharedBufferIDs;
	unsigned long long _sharedSurfaceCount;
	BOOL _useGlobalIOSurfaces;
	OpaqueFigSimpleMutexRef _surfaceRegistrationMutex;
	NSMutableArray* _bufferIDsInQueue;
	EnqueuedBufferContext* _enqueuedBufferContexts;
	unsigned long long _enqueuedBufferContextCount;
	NSMutableArray* _previewPTSHistory;
	OpaqueFigSimpleMutexRef _previewPTSHistoryMutex;
	NSObject*<OS_dispatch_queue> _previewPTSHistoryQueue;
	SCD_Struct_BW7 _firstFramePTS;
	long long _firstFrameHostTime;
	BOOL _didCallFirstFrameAtHostTimeCallback;
	BOOL _didCallFirstFrameCallback;
	BOOL _fenceSupportEnabled;
	BOOL _fencePortGenerationIDWillChange;
	int _framesSinceLastFenceIDWillChange;
	int _framesSinceLastFence;
	long long _lastFencedGenerationID;
	int _savedSyncStrategy;
	CAContext* _imageQueueContext;

}

@property (nonatomic,readonly) CAImageQueueRef imageQueue; 
@property (nonatomic,readonly) unsigned imageQueueSlot; 
@property (assign,nonatomic) id<BWImageQueueSinkNodePreviewTapDelegate> previewTapDelegate;              //@synthesize previewTapDelegate=_previewTapDelegate - In the implementation block
+(void)initialize;
-(void)dealloc;
-(unsigned)imageQueueSlot;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)_updateInputRequirements;
-(void)makeCurrentConfigurationLive;
-(BOOL)hasNonLiveConfigurationChanges;
-(id)initWithHFRSupport:(BOOL)arg1 ispJitterCompensationEnabled:(BOOL)arg2 sinkID:(id)arg3 ;
-(void)setPreviewTapDelegate:(id<BWImageQueueSinkNodePreviewTapDelegate>)arg1 ;
-(void)registerSurfacesFromSourcePool:(id)arg1 ;
-(SCD_Struct_BW7)previewPTSDisplayedAtHostTime:(unsigned long long)arg1 allowingExtrapolation:(BOOL)arg2 ;
-(void)inputConnectionWillBeEnabled;
-(void)fencePortGenerationIDWillChange;
-(CAImageQueueRef)imageQueue;
-(void)setFenceSupportEnabled:(BOOL)arg1 ;
-(void)setSyncStrategy:(int)arg1 ;
-(void)_cleanupIOSurfaces;
-(void)_cleanupImageQueueContext;
-(void)_ensureImageQueue;
-(unsigned long long)_bufferIDForSurface:(IOSurfaceRef)arg1 ;
-(void)_collectUnconsumedBuffersWithReason:(id)arg1 ;
-(void)_processReleasedContexts;
-(double)_displayTimeSyncedWithFramePTS:(double)arg1 ;
-(EnqueuedBufferContext*)_createContextForBuffer:(opaqueCMSampleBufferRef)arg1 bufferId:(unsigned long long)arg2 framePTS:(SCD_Struct_BW7)arg3 ;
-(void)_processBufferContext:(EnqueuedBufferContext*)arg1 ;
-(void)_storePreviewPTS:(SCD_Struct_BW7)arg1 withHostTime:(unsigned long long)arg2 ;
-(void)_removeBufferFromInternalQueues:(opaqueCMSampleBufferRef)arg1 bufferId:(unsigned long long)arg2 ;
-(int)syncStrategy;
-(BOOL)fenceSupportEnabled;
-(SCD_Struct_BW7)previewPTSAtHostTime:(unsigned long long)arg1 ;
-(id<BWImageQueueSinkNodePreviewTapDelegate>)previewTapDelegate;
@end

