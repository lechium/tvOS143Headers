/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CSAudioUnitMeterClipping;

@interface CSAudioPowerMeter : NSObject {

	int _averagePowerI;
	double _averagePowerF;
	BOOL _instantaneousMode;
	double _peak;
	double _maxPeak;
	double _decay;
	double _peakDecay;
	double _averagePowerPeak;
	int _peakHoldCount;
	double _sampleRate;
	int _previousBlockSize;
	double _decay1;
	double _peakDecay1;
	CSAudioUnitMeterClipping* _clipping;

}
-(void)_reset;
-(void)reset;
-(id)initWithSampleRate:(float)arg1 ;
-(void)processFloatBuffer:(const float*)arg1 stride:(int)arg2 inFrameToProcess:(int)arg3 ;
-(void)processShortBuffer:(const short*)arg1 stride:(int)arg2 inFrameToProcess:(int)arg3 ;
-(double)getPeakPowerDB;
-(double)getAveragePowerDB;
-(void)_scaleDecayConstants:(int)arg1 ;
-(void)_savePeaks:(int)arg1 averagePower:(int)arg2 maxSample:(int)arg3 ;
-(void)_zapgremlins:(double*)arg1 ;
-(double)_linearToDB:(double)arg1 ;
-(double)_ampToDB:(double)arg1 ;
@end

