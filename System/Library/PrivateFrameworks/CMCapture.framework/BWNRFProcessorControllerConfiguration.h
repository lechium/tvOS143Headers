/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/BWStillImageProcessorConfiguration.h>
#import <libobjc.A.dylib/BWNoiseReductionAndFusionProcessorControllerConfiguration.h>

@class BWVideoFormat, NSDictionary, FigStillImageSharedProcessingResources, NSArray, NSString;

@interface BWNRFProcessorControllerConfiguration : BWStillImageProcessorConfiguration <BWNoiseReductionAndFusionProcessorControllerConfiguration> {

	BWVideoFormat* _inputFormat;
	BWVideoFormat* _outputFormat;
	BOOL _fusionEnabled;
	BOOL _lowLightFusionEnabled;
	BOOL _deepFusionEnabled;
	BOOL _deepFusionWaitForProcessingToFinish;
	BOOL _depthDataDeliveryEnabled;
	BOOL _alwaysAllowModifyingInputBuffers;
	unsigned _figThreadPriority;
	BOOL _semanticRenderingEnabled;
	BOOL _demosaicedRawEnabled;
	unsigned _demosaicedRawPixelFormat;
	NSDictionary* _rawColorCalibrationsByPortType;
	NSDictionary* _rawLensShadingCorrectionCoefficientsByPortType;
	float _gainMapMainImageDownscalingFactor;
	FigStillImageSharedProcessingResources* _sharedResources;

}

@property (nonatomic,retain) NSArray * sensorConfigurations; 
@property (assign,nonatomic) BOOL deferredProcessingEnabled; 
@property (nonatomic,retain) id<MTLCommandQueue> metalCommandQueue; 
@property (nonatomic,retain) BWVideoFormat * inputFormat;                                                //@synthesize inputFormat=_inputFormat - In the implementation block
@property (nonatomic,retain) BWVideoFormat * outputFormat;                                               //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) BOOL fusionEnabled;                                                         //@synthesize fusionEnabled=_fusionEnabled - In the implementation block
@property (assign,nonatomic) BOOL lowLightFusionEnabled;                                                 //@synthesize lowLightFusionEnabled=_lowLightFusionEnabled - In the implementation block
@property (assign,nonatomic) BOOL deepFusionEnabled;                                                     //@synthesize deepFusionEnabled=_deepFusionEnabled - In the implementation block
@property (assign,nonatomic) BOOL deepFusionWaitForProcessingToFinish;                                   //@synthesize deepFusionWaitForProcessingToFinish=_deepFusionWaitForProcessingToFinish - In the implementation block
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled;                                              //@synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL alwaysAllowModifyingInputBuffers;                                      //@synthesize alwaysAllowModifyingInputBuffers=_alwaysAllowModifyingInputBuffers - In the implementation block
@property (assign,nonatomic) unsigned figThreadPriority;                                                 //@synthesize figThreadPriority=_figThreadPriority - In the implementation block
@property (assign,nonatomic) BOOL semanticRenderingEnabled;                                              //@synthesize semanticRenderingEnabled=_semanticRenderingEnabled - In the implementation block
@property (assign,nonatomic) BOOL demosaicedRawEnabled;                                                  //@synthesize demosaicedRawEnabled=_demosaicedRawEnabled - In the implementation block
@property (assign,nonatomic) unsigned demosaicedRawPixelFormat;                                          //@synthesize demosaicedRawPixelFormat=_demosaicedRawPixelFormat - In the implementation block
@property (nonatomic,retain) NSDictionary * rawColorCalibrationsByPortType;                              //@synthesize rawColorCalibrationsByPortType=_rawColorCalibrationsByPortType - In the implementation block
@property (nonatomic,retain) NSDictionary * rawLensShadingCorrectionCoefficientsByPortType;              //@synthesize rawLensShadingCorrectionCoefficientsByPortType=_rawLensShadingCorrectionCoefficientsByPortType - In the implementation block
@property (assign,nonatomic) float gainMapMainImageDownscalingFactor;                                    //@synthesize gainMapMainImageDownscalingFactor=_gainMapMainImageDownscalingFactor - In the implementation block
@property (nonatomic,retain) FigStillImageSharedProcessingResources * sharedResources;                   //@synthesize sharedResources=_sharedResources - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BWVideoFormat *)outputFormat;
-(void)setOutputFormat:(BWVideoFormat *)arg1 ;
-(BWVideoFormat *)inputFormat;
-(FigStillImageSharedProcessingResources *)sharedResources;
-(void)setInputFormat:(BWVideoFormat *)arg1 ;
-(BOOL)depthDataDeliveryEnabled;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(unsigned)figThreadPriority;
-(void)setFigThreadPriority:(unsigned)arg1 ;
-(void)setDemosaicedRawPixelFormat:(unsigned)arg1 ;
-(void)setDemosaicedRawEnabled:(BOOL)arg1 ;
-(void)setGainMapMainImageDownscalingFactor:(float)arg1 ;
-(BOOL)fusionEnabled;
-(void)setFusionEnabled:(BOOL)arg1 ;
-(BOOL)lowLightFusionEnabled;
-(void)setLowLightFusionEnabled:(BOOL)arg1 ;
-(BOOL)deepFusionEnabled;
-(void)setDeepFusionEnabled:(BOOL)arg1 ;
-(BOOL)deepFusionWaitForProcessingToFinish;
-(void)setDeepFusionWaitForProcessingToFinish:(BOOL)arg1 ;
-(BOOL)alwaysAllowModifyingInputBuffers;
-(void)setAlwaysAllowModifyingInputBuffers:(BOOL)arg1 ;
-(BOOL)semanticRenderingEnabled;
-(void)setSemanticRenderingEnabled:(BOOL)arg1 ;
-(BOOL)demosaicedRawEnabled;
-(unsigned)demosaicedRawPixelFormat;
-(NSDictionary *)rawColorCalibrationsByPortType;
-(void)setRawColorCalibrationsByPortType:(NSDictionary *)arg1 ;
-(NSDictionary *)rawLensShadingCorrectionCoefficientsByPortType;
-(void)setRawLensShadingCorrectionCoefficientsByPortType:(NSDictionary *)arg1 ;
-(float)gainMapMainImageDownscalingFactor;
-(void)setSharedResources:(FigStillImageSharedProcessingResources *)arg1 ;
@end

