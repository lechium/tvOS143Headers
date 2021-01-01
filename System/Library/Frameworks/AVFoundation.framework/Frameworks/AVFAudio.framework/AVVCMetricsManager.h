/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFAudio/AVFAudio-Structs.h>
@class CAReporter, NSMutableDictionary;

@interface AVVCMetricsManager : NSObject {

	CAReporter* mMetricsReporter;
	long long mAudioIssueDetector;
	unsigned long long mAudioDataAnalysisSiriSession;
	unsigned long long _voiceTriggerStartHostTime;
	unsigned long long _callToStartRecordHostTime;
	NSMutableDictionary* _publicMetrics;
	NSMutableDictionary* _avvcProfilingInfoDictionary;

}

@property (retain) NSMutableDictionary * publicMetrics;                                 //@synthesize publicMetrics=_publicMetrics - In the implementation block
@property (retain) NSMutableDictionary * avvcProfilingInfoDictionary;                   //@synthesize avvcProfilingInfoDictionary=_avvcProfilingInfoDictionary - In the implementation block
@property (assign,nonatomic) unsigned long long voiceTriggerStartHostTime;              //@synthesize voiceTriggerStartHostTime=_voiceTriggerStartHostTime - In the implementation block
@property (assign,nonatomic) unsigned long long callToStartRecordHostTime;              //@synthesize callToStartRecordHostTime=_callToStartRecordHostTime - In the implementation block
+(id)sharedManager;
+(CAMutex*)getLock;
+(void)createSharedManager;
+(void)destroySharedManager;
-(id)init;
-(void)dealloc;
-(void)updateWithReporterID:(long long)arg1 ;
-(void)checkAndUpdateReporterID;
-(id)retrieveMetrics;
-(id)getStringDate:(id)arg1 ;
-(void)resetProfileMetrics;
-(id)retrieveProfileMetrics;
-(BOOL)measureElapseTimeForMetric:(id)arg1 block:(/*^block*/id)arg2 ;
-(int)setAudioIssueDetectorFormat:(CAStreamBasicDescription)arg1 numFrames:(unsigned)arg2 ;
-(int)audioIssueDetectorAnalyzeBuffer:(AudioBufferList*)arg1 numFrames:(unsigned)arg2 timeStamp:(const AudioTimeStamp*)arg3 shouldAnalyze:(BOOL)arg4 ;
-(int)resetAudioIssueDetector;
-(void)logSessionMetric:(id)arg1 value:(id)arg2 category:(unsigned)arg3 type:(unsigned short)arg4 ;
-(void)logSessionMetric:(id)arg1 value:(id)arg2 category:(unsigned)arg3 type:(unsigned short)arg4 context:(id)arg5 ;
-(void)logSingleMetric:(id)arg1 value:(id)arg2 category:(unsigned)arg3 type:(unsigned short)arg4 ;
-(void)logRecordAudioFormat:(CAStreamBasicDescription)arg1 ;
-(void)logRecordRoute:(id)arg1 andPlaybackRoute:(id)arg2 ;
-(void)logProfileMetrics:(id)arg1 ;
-(unsigned long long)voiceTriggerStartHostTime;
-(void)setVoiceTriggerStartHostTime:(unsigned long long)arg1 ;
-(unsigned long long)callToStartRecordHostTime;
-(void)setCallToStartRecordHostTime:(unsigned long long)arg1 ;
-(NSMutableDictionary *)publicMetrics;
-(void)setPublicMetrics:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)avvcProfilingInfoDictionary;
-(void)setAvvcProfilingInfoDictionary:(NSMutableDictionary *)arg1 ;
@end

