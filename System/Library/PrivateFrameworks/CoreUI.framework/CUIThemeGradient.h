/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/CUIThemeGradientDrawing.h>

@interface CUIThemeGradient : NSObject <CUIThemeGradientDrawing> {

	id gradientEvaluator;
	CGFunctionRef colorShader;
	CGColorSpaceRef colorSpace;
	CGImageRef _gradientImage;

}
-(void)dealloc;
-(id)fillColor;
-(BOOL)isDithered;
-(int)blendMode;
-(id)colorStops;
-(id)opacityStops;
-(double)smoothingCoefficient;
-(id)gradientByApplyingEffects:(id)arg1 ;
-(void)drawInRect:(CGRect)arg1 angle:(double)arg2 withContext:(CGContextRef)arg3 ;
-(void)drawRadialGradientInRect:(CGRect)arg1 relativeCenterPosition:(CGPoint)arg2 withContext:(CGContextRef)arg3 ;
-(void)drawAngleGradientInRect:(CGRect)arg1 relativeCenterPosition:(CGPoint)arg2 withContext:(CGContextRef)arg3 ;
-(id)initWithColors:(id)arg1 colorlocations:(id)arg2 colorMidpoints:(id)arg3 opacities:(id)arg4 opacityLocations:(id)arg5 opacityMidpoints:(id)arg6 smoothingCoefficient:(double)arg7 fillColor:(id)arg8 colorSpace:(CGColorSpaceRef)arg9 dither:(BOOL)arg10 ;
-(id)_initWithGradientEvaluator:(id)arg1 colorSpace:(CGColorSpaceRef)arg2 ;
-(void)drawInRect:(CGRect)arg1 angle:(double)arg2 options:(unsigned long long)arg3 withContext:(CGContextRef)arg4 ;
-(void)drawFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 options:(unsigned long long)arg3 withContext:(CGContextRef)arg4 ;
-(CGImageRef)_createRadialGradientImageWithWidth:(double)arg1 height:(double)arg2 ;
-(id)interpolatedColorAtLocation:(double)arg1 ;
-(void)drawInRect:(CGRect)arg1 angle:(double)arg2 ;
-(id)initWithColors:(id)arg1 colorlocations:(id)arg2 colorMidpoints:(id)arg3 opacities:(id)arg4 opacityLocations:(id)arg5 opacityMidpoints:(id)arg6 smoothingCoefficient:(double)arg7 fillColor:(id)arg8 colorSpace:(CGColorSpaceRef)arg9 ;
-(id)colorLocations;
-(id)opacityLocations;
@end

