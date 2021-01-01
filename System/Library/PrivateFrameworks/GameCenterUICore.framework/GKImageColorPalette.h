/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUICore/GameCenterUICore-Structs.h>
#import <GameCenterUICore/GKColorPalette.h>

@interface GKImageColorPalette : GKColorPalette {

	unsigned _hueSpread;
	unsigned _saturationSpread;
	unsigned _brightnessSpread;
	unsigned _grayscaleSpread;
	HSVColor* _imageHSVMap;
	CGSize _imageSize;
	double _borderPercentageForBorderDetection;
	unsigned _hueHistogram[360];
	unsigned _saturationHistogram[256];
	unsigned _brightnessHistogram[256];

}
-(void)reset;
-(id)initWithImage:(id)arg1 ;
-(void)clearMainHistograms;
-(void)clearSaturationAndBrightnessHistograms;
-(void)iterateOverPixelsWithBlock:(/*^block*/id)arg1 forHue:(unsigned)arg2 ;
-(unsigned)weightHistogram:(unsigned*)arg1 size:(unsigned)arg2 spread:(unsigned)arg3 ;
-(void)generateHSVMapWithContext:(CGContextRef)arg1 ;
-(void)findBrightColors;
-(BOOL)analyzeImage:(CGImageRef)arg1 ;
-(void)printHistogram:(unsigned*)arg1 ofSize:(unsigned)arg2 ;
@end

