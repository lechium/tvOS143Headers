/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VCAudioPowerLevelMonitorDelegate;
@class NSObject;

@interface VCAudioPowerLevelMonitor : NSObject {

	unsigned startDetectRemoteAudioLowPowerTime;
	float audioPowerThreshold;
	unsigned audioLowPowerTimeInterval;
	BOOL isAudioPowerBelowThreshold;
	BOOL isAudioPowerMovingAverage;
	float audioPowerMovingAverageCoefficient;
	float currentAudioAverage;
	NSObject*<VCAudioPowerLevelMonitorDelegate> delegate;

}

@property (assign,nonatomic) NSObject*<VCAudioPowerLevelMonitorDelegate> delegate; 
-(id)init;
-(NSObject*<VCAudioPowerLevelMonitorDelegate>)delegate;
-(void)setDelegate:(NSObject*<VCAudioPowerLevelMonitorDelegate>)arg1 ;
-(void)detectRemoteAveragePowerLevel:(float)arg1 timestamp:(unsigned)arg2 ;
@end

