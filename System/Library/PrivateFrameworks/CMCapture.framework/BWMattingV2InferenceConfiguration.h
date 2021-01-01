/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/BWInferenceConfiguration.h>

@protocol MTLCommandQueue;
@class NSDictionary;

@interface BWMattingV2InferenceConfiguration : BWInferenceConfiguration {

	NSDictionary* _sensorConfigurationsByPortType;
	unsigned _enabledMattes;
	int _tuningConfiguration;
	float _mainImageDownscalingFactor;
	BOOL _depthDataDeliveryEnabled;
	BOOL _submitWithoutSynchronization;
	id<MTLCommandQueue> _metalCommandQueue;

}

@property (nonatomic,retain) NSDictionary * sensorConfigurationsByPortType;              //@synthesize sensorConfigurationsByPortType=_sensorConfigurationsByPortType - In the implementation block
@property (assign,nonatomic) unsigned enabledMattes;                                     //@synthesize enabledMattes=_enabledMattes - In the implementation block
@property (assign,nonatomic) int tuningConfiguration;                                    //@synthesize tuningConfiguration=_tuningConfiguration - In the implementation block
@property (assign,nonatomic) float mainImageDownscalingFactor;                           //@synthesize mainImageDownscalingFactor=_mainImageDownscalingFactor - In the implementation block
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled;                              //@synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL submitWithoutSynchronization;                          //@synthesize submitWithoutSynchronization=_submitWithoutSynchronization - In the implementation block
@property (assign,nonatomic) id<MTLCommandQueue> metalCommandQueue;                      //@synthesize metalCommandQueue=_metalCommandQueue - In the implementation block
-(void)dealloc;
-(BOOL)depthDataDeliveryEnabled;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(id<MTLCommandQueue>)metalCommandQueue;
-(void)setMetalCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(void)setSensorConfigurationsByPortType:(NSDictionary *)arg1 ;
-(void)setEnabledMattes:(unsigned)arg1 ;
-(void)setTuningConfiguration:(int)arg1 ;
-(void)setMainImageDownscalingFactor:(float)arg1 ;
-(void)setSubmitWithoutSynchronization:(BOOL)arg1 ;
-(float)mainImageDownscalingFactor;
-(NSDictionary *)sensorConfigurationsByPortType;
-(int)tuningConfiguration;
-(BOOL)submitWithoutSynchronization;
-(unsigned)enabledMattes;
@end

