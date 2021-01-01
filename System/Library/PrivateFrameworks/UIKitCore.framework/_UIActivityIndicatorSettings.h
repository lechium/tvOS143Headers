/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PTSettings.h>

@interface _UIActivityIndicatorSettings : PTSettings {

	BOOL _customColor;
	double _fullLoopDuration;
	double _redValue;
	double _greenValue;
	double _blueValue;
	double _alphaValue;

}

@property (assign,nonatomic) double fullLoopDuration;              //@synthesize fullLoopDuration=_fullLoopDuration - In the implementation block
@property (assign,nonatomic) BOOL customColor;                     //@synthesize customColor=_customColor - In the implementation block
@property (assign,nonatomic) double redValue;                      //@synthesize redValue=_redValue - In the implementation block
@property (assign,nonatomic) double greenValue;                    //@synthesize greenValue=_greenValue - In the implementation block
@property (assign,nonatomic) double blueValue;                     //@synthesize blueValue=_blueValue - In the implementation block
@property (assign,nonatomic) double alphaValue;                    //@synthesize alphaValue=_alphaValue - In the implementation block
+(id)settingsControllerModule;
-(double)blueValue;
-(void)setBlueValue:(double)arg1 ;
-(double)greenValue;
-(void)setGreenValue:(double)arg1 ;
-(double)redValue;
-(void)setRedValue:(double)arg1 ;
-(void)setDefaultValues;
-(double)alphaValue;
-(void)setFullLoopDuration:(double)arg1 ;
-(void)setCustomColor:(BOOL)arg1 ;
-(void)setAlphaValue:(double)arg1 ;
-(double)fullLoopDuration;
-(BOOL)customColor;
@end
