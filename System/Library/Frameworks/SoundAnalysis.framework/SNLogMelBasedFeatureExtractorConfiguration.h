/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SNProcessorCreating.h>

@protocol SNMLModel;
@class NSString;

@interface SNLogMelBasedFeatureExtractorConfiguration : NSObject <SNProcessorCreating> {

	id<SNMLModel> _model;
	unsigned _windowLengthFrames;
	unsigned _stepSizeFrames;
	unsigned _logMelStepSize;
	int _outputFeatureSize;
	double _sampleRate;

}

@property (readonly) id<SNMLModel> model;                           //@synthesize model=_model - In the implementation block
@property (readonly) double sampleRate;                             //@synthesize sampleRate=_sampleRate - In the implementation block
@property (readonly) unsigned windowLengthFrames;                   //@synthesize windowLengthFrames=_windowLengthFrames - In the implementation block
@property (readonly) unsigned stepSizeFrames;                       //@synthesize stepSizeFrames=_stepSizeFrames - In the implementation block
@property (readonly) unsigned logMelStepSize;                       //@synthesize logMelStepSize=_logMelStepSize - In the implementation block
@property (readonly) int outputFeatureSize;                         //@synthesize outputFeatureSize=_outputFeatureSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<SNMLModel>)model;
-(double)sampleRate;
-(unsigned)windowLengthFrames;
-(unsigned)stepSizeFrames;
-(id)initWithModel:(id)arg1 approximateOverlapFactor:(double)arg2 ;
-(BOOL)isEqualToLogMelBasedFeatureExtractorConfiguration:(id)arg1 ;
-(id)createProcessorWithError:(id*)arg1 ;
-(unsigned)logMelStepSize;
-(int)outputFeatureSize;
@end

