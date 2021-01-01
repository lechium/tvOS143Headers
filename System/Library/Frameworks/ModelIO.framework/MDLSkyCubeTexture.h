/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLTexture.h>

@interface MDLSkyCubeTexture : MDLTexture {

	float _turbidity;
	float _sunElevation;
	float _sunAzimuth;
	float _upperAtmosphereScattering;
	float _groundAlbedo;
	float _gamma;
	float _exposure;
	float _brightness;
	float _contrast;
	float _saturation;
	 _highDynamicRangeCompression;
	float _highDynamicRangeCompressionLimit;
	CGColorRef _groundColor;
	SkyDescriptor* _sky;
	float _horizonElevation;

}

@property (assign,nonatomic) float turbidity;                              //@synthesize turbidity=_turbidity - In the implementation block
@property (assign,nonatomic) float sunElevation;                           //@synthesize sunElevation=_sunElevation - In the implementation block
@property (assign,nonatomic) float sunAzimuth;                             //@synthesize sunAzimuth=_sunAzimuth - In the implementation block
@property (assign,nonatomic) float upperAtmosphereScattering;              //@synthesize upperAtmosphereScattering=_upperAtmosphereScattering - In the implementation block
@property (assign,nonatomic) float groundAlbedo;                           //@synthesize groundAlbedo=_groundAlbedo - In the implementation block
@property (assign,nonatomic) float horizonElevation;                       //@synthesize horizonElevation=_horizonElevation - In the implementation block
@property (assign,nonatomic) CGColorRef groundColor; 
@property (assign,nonatomic) float gamma;                                  //@synthesize gamma=_gamma - In the implementation block
@property (assign,nonatomic) float exposure;                               //@synthesize exposure=_exposure - In the implementation block
@property (assign,nonatomic) float brightness;                             //@synthesize brightness=_brightness - In the implementation block
@property (assign,nonatomic) float contrast;                               //@synthesize contrast=_contrast - In the implementation block
@property (assign,nonatomic) float saturation;                             //@synthesize saturation=_saturation - In the implementation block
@property (assign,nonatomic)  highDynamicRangeCompression;                 //@synthesize highDynamicRangeCompression=_highDynamicRangeCompression - In the implementation block
-(void)dealloc;
-(void)setBrightness:(float)arg1 ;
-(float)brightness;
-(void)setContrast:(float)arg1 ;
-(float)contrast;
-(float)gamma;
-(float)saturation;
-(void)setSaturation:(float)arg1 ;
-(float)exposure;
-(void)setExposure:(float)arg1 ;
-(void)updateTexture;
-(id)initWithName:(id)arg1 channelEncoding:(long long)arg2 textureDimensions:(float)arg3 turbidity:(float)arg4 sunElevation:(float)arg5 sunAzimuth:(float)arg6 upperAtmosphereScattering:(float)arg7 ;
-(void)setGroundColor:(CGColorRef)arg1 ;
-(CGColorRef)groundColor;
-(id)initWithName:(id)arg1 channelEncoding:(long long)arg2 textureDimensions:(float)arg3 turbidity:(float)arg4 sunElevation:(float)arg5 upperAtmosphereScattering:(float)arg6 ;
-(float)turbidity;
-(void)setTurbidity:(float)arg1 ;
-(float)sunElevation;
-(void)setSunElevation:(float)arg1 ;
-(float)sunAzimuth;
-(void)setSunAzimuth:(float)arg1 ;
-(float)upperAtmosphereScattering;
-(void)setUpperAtmosphereScattering:(float)arg1 ;
-(float)groundAlbedo;
-(void)setGroundAlbedo:(float)arg1 ;
-()highDynamicRangeCompression;
-(void)setHighDynamicRangeCompression:;
-(float)horizonElevation;
-(void)setHorizonElevation:(float)arg1 ;
-(void)setGamma:(float)arg1 ;
@end

