/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log, OS_dispatch_queue;
@class NSString, SDRDiagnosticReporter, NSObject;

@interface VCSymptomReporter : NSObject {

	unsigned _callID;
	NSString* _loggingDirectory;
	SDRDiagnosticReporter* _diagnosticReporter;
	NSObject*<OS_os_log> _osLogNetworkingHandle;
	NSObject*<OS_dispatch_queue> _reportingQueue;
	/*function pointer*/void* _symptomReporterCallback;
	id _symptomReporterContext;

}

@property (nonatomic,copy) NSString * loggingDirectory;              //@synthesize loggingDirectory=_loggingDirectory - In the implementation block
-(void)dealloc;
-(void)reportSymptomInternal:(unsigned)arg1 optionalDictionary:(id)arg2 ;
-(int)reportRateTargetMismatch;
-(int)reportBandwidthEstimationMismatch;
-(int)reportNoMediaBlob;
-(int)reportSignalingFailed;
-(int)reportConnectionTimeout;
-(int)reportNoRelayResponseWithOptionalDictionary:(id)arg1 ;
-(int)reportNoSNATMAPResponseWithOptionalDictionary:(id)arg1 ;
-(int)reportFailedToStartAudio;
-(int)reportFailedToStartVideo;
-(int)reportNoFirstFrameWithOptionalDictionary:(id)arg1 ;
-(int)reportNoPacketsWithOptionalDictionary:(id)arg1 ;
-(int)reportAudioStall;
-(int)reportVideoStall;
-(int)reportAudioErasures;
-(int)reportNegativeJitterBufferSize;
-(int)reportAUIOTimestampJumped;
-(int)reportIDSDataChannelEventUsageError;
-(int)reportQRATKNTokenError;
-(int)reportReceiveSessionStatsFailed;
-(int)reportCCReliableDataNotReceived;
-(int)reportSessionInfoErrorResponse;
-(int)reportKeyIndexNotReceived;
-(int)reportMediaQueuePoolEmpty;
-(int)reportTargetBitrateOvershoot;
-(int)reportUnexpectedLowTargetBitrate;
-(int)reportKeyFrameNotSpreading;
-(int)reportMediaQueueOvershoot;
-(int)reportMediaQueueFlushingTooFrequent;
-(int)reportHighConsecutiveAudioErasures;
-(int)reportHighTargetQueueSize;
-(int)reportUnexpectedHighRTT;
-(int)reportInvalidTransportType;
-(int)reportInactiveSlotsInChannelSequence;
-(int)reportOptedOutAndInToSameVideoStreamID;
-(int)reportSymptomWithType:(id)arg1 subType:(id)arg2 context:(id)arg3 actions:(id)arg4 ;
-(id)symptomNameWithDomain:(id)arg1 subtypeContext:(id)arg2 ;
-(int)reportSymptomWithDictionary:(id)arg1 ;
-(int)reportSymptomWithOptions:(id)arg1 type:(id)arg2 subType:(id)arg3 context:(id)arg4 ;
-(id)initWithCallID:(unsigned)arg1 ;
-(void)reportSymptom:(unsigned)arg1 optionalDictionary:(id)arg2 ;
-(void)VCSymptomReporterSetCallback:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(int)reportSymptomWithIDSDestination:(id)arg1 sessionID:(id)arg2 type:(id)arg3 subType:(id)arg4 context:(id)arg5 ;
-(NSString *)loggingDirectory;
-(void)setLoggingDirectory:(NSString *)arg1 ;
@end
