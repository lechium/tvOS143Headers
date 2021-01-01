/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, AWSampleLogger;

@interface AWAttentionSampler : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _nextDeadline;
	BOOL _lastFaceMetadataValid;
	BOOL _unitTestSampling;
	int _currentState;
	AWSampleLogger* _sampleLogger;
	/*^block*/id _stateChangedCallback;
	unsigned long long _samplingSuppressedMask;
	unsigned long long _lastTriggerTime;
	unsigned long long _lastPositiveDetectTime;
	unsigned long long _lastPollTimeoutTime;
	double _lastPitch;
	double _lastYaw;
	double _lastRoll;
	unsigned long long _lastOrientation;

}

@property (nonatomic,retain) AWSampleLogger * sampleLogger;                          //@synthesize sampleLogger=_sampleLogger - In the implementation block
@property (copy) id stateChangedCallback;                                            //@synthesize stateChangedCallback=_stateChangedCallback - In the implementation block
@property (assign,nonatomic) int currentState;                                       //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) unsigned long long samplingSuppressedMask;              //@synthesize samplingSuppressedMask=_samplingSuppressedMask - In the implementation block
@property (assign,nonatomic) unsigned long long lastTriggerTime;                     //@synthesize lastTriggerTime=_lastTriggerTime - In the implementation block
@property (assign,nonatomic) unsigned long long lastPositiveDetectTime;              //@synthesize lastPositiveDetectTime=_lastPositiveDetectTime - In the implementation block
@property (assign,nonatomic) unsigned long long lastPollTimeoutTime;                 //@synthesize lastPollTimeoutTime=_lastPollTimeoutTime - In the implementation block
@property (assign,nonatomic) BOOL lastFaceMetadataValid;                             //@synthesize lastFaceMetadataValid=_lastFaceMetadataValid - In the implementation block
@property (assign,nonatomic) double lastPitch;                                       //@synthesize lastPitch=_lastPitch - In the implementation block
@property (assign,nonatomic) double lastYaw;                                         //@synthesize lastYaw=_lastYaw - In the implementation block
@property (assign,nonatomic) double lastRoll;                                        //@synthesize lastRoll=_lastRoll - In the implementation block
@property (assign,nonatomic) unsigned long long lastOrientation;                     //@synthesize lastOrientation=_lastOrientation - In the implementation block
@property (nonatomic,readonly) BOOL unitTestSampling;                                //@synthesize unitTestSampling=_unitTestSampling - In the implementation block
-(id)description;
-(id)init;
-(int)currentState;
-(void)setCurrentState:(int)arg1 ;
-(unsigned long long)lastOrientation;
-(void)setStateChangedCallback:(id)arg1 ;
-(id)stateChangedCallback;
-(void)setSmartCoverClosed:(BOOL)arg1 ;
-(void)setUnitTestMode;
-(void)startDeadlineComputation;
-(void)updateSamplingDeadline:(unsigned long long)arg1 forClient:(id)arg2 ;
-(void)finishDeadlineComputation;
-(unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)arg1 ;
-(unsigned long long)minimumAttentionSamplerErrorRetryTime;
-(void)shouldSample:(BOOL)arg1 withDeadline:(unsigned long long)arg2 ;
-(id)initWithMask:(unsigned long long)arg1 ;
-(AWSampleLogger *)sampleLogger;
-(void)setSampleLogger:(AWSampleLogger *)arg1 ;
-(unsigned long long)samplingSuppressedMask;
-(void)setSamplingSuppressedMask:(unsigned long long)arg1 ;
-(unsigned long long)lastTriggerTime;
-(void)setLastTriggerTime:(unsigned long long)arg1 ;
-(unsigned long long)lastPositiveDetectTime;
-(void)setLastPositiveDetectTime:(unsigned long long)arg1 ;
-(unsigned long long)lastPollTimeoutTime;
-(void)setLastPollTimeoutTime:(unsigned long long)arg1 ;
-(BOOL)lastFaceMetadataValid;
-(void)setLastFaceMetadataValid:(BOOL)arg1 ;
-(double)lastPitch;
-(void)setLastPitch:(double)arg1 ;
-(double)lastYaw;
-(void)setLastYaw:(double)arg1 ;
-(double)lastRoll;
-(void)setLastRoll:(double)arg1 ;
-(void)setLastOrientation:(unsigned long long)arg1 ;
-(BOOL)unitTestSampling;
@end

