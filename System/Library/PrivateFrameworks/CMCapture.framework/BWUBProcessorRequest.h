/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWUBProcessorControllerDelegate;
#import <CMCapture/CMCapture-Structs.h>
@class BWUBProcessorInput, UBFusionOutput, UBDeepFusionOutput;

@interface BWUBProcessorRequest : NSObject {

	BWUBProcessorInput* _input;
	UBFusionOutput* _output;
	UBDeepFusionOutput* _deepFusionOutput;
	BOOL _processErrorRecoveryFrame;
	BOOL _processOriginalImage;
	id<BWUBProcessorControllerDelegate> _delegate;
	int _err;
	int _numberOfFramesAddedForMultiFrameProcessing;
	float _totalExposureTimesOfFramesAddedForMultiFrameProcessing;
	float _minExposureTimesOfFramesAddedForMultiFrameProcessing;
	float _maxExposureTimesOfFramesAddedForMultiFrameProcessing;
	BOOL _deliveredDeferredProxyImage;

}

@property (nonatomic,readonly) BWUBProcessorInput * input; 
@property (nonatomic,readonly) UBFusionOutput * output; 
@property (nonatomic,readonly) UBDeepFusionOutput * deepFusionOutput; 
@property (assign,nonatomic) int err;                                                                   //@synthesize err=_err - In the implementation block
@property (assign,nonatomic) int numberOfFramesAddedForMultiFrameProcessing;                            //@synthesize numberOfFramesAddedForMultiFrameProcessing=_numberOfFramesAddedForMultiFrameProcessing - In the implementation block
@property (assign,nonatomic) float totalExposureTimesOfFramesAddedForMultiFrameProcessing;              //@synthesize totalExposureTimesOfFramesAddedForMultiFrameProcessing=_totalExposureTimesOfFramesAddedForMultiFrameProcessing - In the implementation block
@property (assign,nonatomic) float minExposureTimesOfFramesAddedForMultiFrameProcessing;                //@synthesize minExposureTimesOfFramesAddedForMultiFrameProcessing=_minExposureTimesOfFramesAddedForMultiFrameProcessing - In the implementation block
@property (assign,nonatomic) float maxExposureTimesOfFramesAddedForMultiFrameProcessing;                //@synthesize maxExposureTimesOfFramesAddedForMultiFrameProcessing=_maxExposureTimesOfFramesAddedForMultiFrameProcessing - In the implementation block
@property (assign,nonatomic) BOOL deliveredDeferredProxyImage;                                          //@synthesize deliveredDeferredProxyImage=_deliveredDeferredProxyImage - In the implementation block
-(id)description;
-(void)dealloc;
-(id)delegate;
-(BWUBProcessorInput *)input;
-(UBFusionOutput *)output;
-(unsigned long long)imageType;
-(int)expectedFrameCount;
-(int)err;
-(void)setErr:(int)arg1 ;
-(unsigned)processingType;
-(BOOL)receivedAllFrames;
-(BOOL)keepFramesUntilReferenceFrameSelected;
-(id)initWithInput:(id)arg1 output:(id)arg2 deepFusionOutput:(id)arg3 processErrorRecoveryFrame:(BOOL)arg4 processOriginalImage:(BOOL)arg5 delegate:(id)arg6 ;
-(UBDeepFusionOutput *)deepFusionOutput;
-(BOOL)processErrorRecoveryFrame;
-(BOOL)processOriginalImage;
-(unsigned long long)fusionErrorRecoveryImageType;
-(BOOL)useFrameForMultiFrameProcessing:(opaqueCMSampleBufferRef)arg1 ;
-(int)numberOfFramesAddedForMultiFrameProcessing;
-(void)setNumberOfFramesAddedForMultiFrameProcessing:(int)arg1 ;
-(float)totalExposureTimesOfFramesAddedForMultiFrameProcessing;
-(void)setTotalExposureTimesOfFramesAddedForMultiFrameProcessing:(float)arg1 ;
-(float)minExposureTimesOfFramesAddedForMultiFrameProcessing;
-(void)setMinExposureTimesOfFramesAddedForMultiFrameProcessing:(float)arg1 ;
-(float)maxExposureTimesOfFramesAddedForMultiFrameProcessing;
-(void)setMaxExposureTimesOfFramesAddedForMultiFrameProcessing:(float)arg1 ;
-(BOOL)deliveredDeferredProxyImage;
-(void)setDeliveredDeferredProxyImage:(BOOL)arg1 ;
@end

