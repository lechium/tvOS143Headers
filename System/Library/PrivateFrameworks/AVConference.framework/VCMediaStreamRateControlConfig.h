/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@class AVCStatisticsCollector, AVCBasebandCongestionDetector, AVCRateControlFeedbackController, VCRateControlMediaController;

@interface VCMediaStreamRateControlConfig : NSObject {

	AVCStatisticsCollector* _statisticsCollector;
	AVCBasebandCongestionDetector* _basebandCongestionDetector;
	AVCRateControlFeedbackController* _feedbackController;
	VCRateControlMediaController* _mediaController;
	BOOL _shouldCreateMediaControlInfoGenerator;
	BOOL _shouldRegisterMediaControlInfoGeneratorCallbacks;
	void* _mediaControlInfoGenerator;
	unsigned _mediaControlInfoGeneratorType;
	tagHANDLE* _mediaQueue;
	tagVCMediaQueueRef _vcMediaQueue;
	unsigned char _mediaControlInfoVersion;
	unsigned _mediaControlInfoGeneratorOptions;
	double _mediaQueueThrottlingInterval;

}

@property (nonatomic,retain) AVCStatisticsCollector * statisticsCollector;                            //@synthesize statisticsCollector=_statisticsCollector - In the implementation block
@property (nonatomic,retain) AVCBasebandCongestionDetector * basebandCongestionDetector;              //@synthesize basebandCongestionDetector=_basebandCongestionDetector - In the implementation block
@property (nonatomic,retain) AVCRateControlFeedbackController * feedbackController;                   //@synthesize feedbackController=_feedbackController - In the implementation block
@property (assign,nonatomic) BOOL shouldCreateMediaControlInfoGenerator;                              //@synthesize shouldCreateMediaControlInfoGenerator=_shouldCreateMediaControlInfoGenerator - In the implementation block
@property (assign,nonatomic) BOOL shouldRegisterMediaControlInfoGeneratorCallbacks;                   //@synthesize shouldRegisterMediaControlInfoGeneratorCallbacks=_shouldRegisterMediaControlInfoGeneratorCallbacks - In the implementation block
@property (assign,nonatomic) unsigned char mediaControlInfoVersion;                                   //@synthesize mediaControlInfoVersion=_mediaControlInfoVersion - In the implementation block
@property (assign,nonatomic) unsigned mediaControlInfoGeneratorType;                                  //@synthesize mediaControlInfoGeneratorType=_mediaControlInfoGeneratorType - In the implementation block
@property (assign,nonatomic) void* mediaControlInfoGenerator;                                         //@synthesize mediaControlInfoGenerator=_mediaControlInfoGenerator - In the implementation block
@property (assign,nonatomic) unsigned mediaControlInfoGeneratorOptions;                               //@synthesize mediaControlInfoGeneratorOptions=_mediaControlInfoGeneratorOptions - In the implementation block
@property (nonatomic,retain) VCRateControlMediaController * mediaController;                          //@synthesize mediaController=_mediaController - In the implementation block
@property (assign,nonatomic) tagHANDLE* mediaQueue;                                                   //@synthesize mediaQueue=_mediaQueue - In the implementation block
@property (assign,nonatomic) double mediaQueueThrottlingInterval;                                     //@synthesize mediaQueueThrottlingInterval=_mediaQueueThrottlingInterval - In the implementation block
@property (assign,nonatomic) tagVCMediaQueueRef vcMediaQueue;                                         //@synthesize vcMediaQueue=_vcMediaQueue - In the implementation block
-(id)init;
-(void)dealloc;
-(VCRateControlMediaController *)mediaController;
-(AVCRateControlFeedbackController *)feedbackController;
-(void)setFeedbackController:(AVCRateControlFeedbackController *)arg1 ;
-(void)setStatisticsCollector:(AVCStatisticsCollector *)arg1 ;
-(void)setMediaController:(VCRateControlMediaController *)arg1 ;
-(AVCBasebandCongestionDetector *)basebandCongestionDetector;
-(void)setBasebandCongestionDetector:(AVCBasebandCongestionDetector *)arg1 ;
-(AVCStatisticsCollector *)statisticsCollector;
-(void*)mediaControlInfoGenerator;
-(tagHANDLE*)mediaQueue;
-(void)setMediaQueue:(tagHANDLE*)arg1 ;
-(void)setMediaControlInfoVersion:(unsigned char)arg1 ;
-(unsigned char)mediaControlInfoVersion;
-(void)setVcMediaQueue:(tagVCMediaQueueRef)arg1 ;
-(tagVCMediaQueueRef)vcMediaQueue;
-(void)setMediaControlInfoGenerator:(void*)arg1 ;
-(double)mediaQueueThrottlingInterval;
-(unsigned)mediaControlInfoGeneratorType;
-(BOOL)shouldCreateMediaControlInfoGenerator;
-(BOOL)shouldRegisterMediaControlInfoGeneratorCallbacks;
-(unsigned)mediaControlInfoGeneratorOptions;
-(void)setShouldCreateMediaControlInfoGenerator:(BOOL)arg1 ;
-(void)setShouldRegisterMediaControlInfoGeneratorCallbacks:(BOOL)arg1 ;
-(void)setMediaControlInfoGeneratorType:(unsigned)arg1 ;
-(void)setMediaQueueThrottlingInterval:(double)arg1 ;
-(void)setMediaControlInfoGeneratorOptions:(unsigned)arg1 ;
@end

