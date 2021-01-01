/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentColorControlsFilter.h>

@class NSNumber;

@interface OKWidgetContentColorControlsFilter : OKWidgetBasicFilter <JSOKWidgetContentColorControlsFilter> {

	NSNumber* _inputSaturation;
	NSNumber* _inputBrightness;
	NSNumber* _inputContrast;

}

@property (nonatomic,retain) NSNumber * inputSaturation;              //@synthesize inputSaturation=_inputSaturation - In the implementation block
@property (nonatomic,retain) NSNumber * inputBrightness;              //@synthesize inputBrightness=_inputBrightness - In the implementation block
@property (nonatomic,retain) NSNumber * inputContrast;                //@synthesize inputContrast=_inputContrast - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithInputSaturation:(id)arg1 inputBrightness:(id)arg2 inputContrast:(id)arg3 ;
-(void)dealloc;
-(id)outputImage;
-(NSNumber *)inputSaturation;
-(void)setInputSaturation:(NSNumber *)arg1 ;
-(NSNumber *)inputBrightness;
-(void)setInputBrightness:(NSNumber *)arg1 ;
-(NSNumber *)inputContrast;
-(void)setInputContrast:(NSNumber *)arg1 ;
-(id)inputKeys;
-(id)settingInputSaturation;
-(void)setSettingInputSaturation:(id)arg1 ;
-(id)setttingInputBrightness;
-(void)setSettingInputBrightness:(id)arg1 ;
-(id)settingInputContrast;
-(void)setSettingInputContrast:(id)arg1 ;
@end

