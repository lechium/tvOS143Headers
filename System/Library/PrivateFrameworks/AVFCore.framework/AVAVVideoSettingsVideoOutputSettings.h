/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVVideoOutputSettings.h>
#import <AVFCore/AVReencodedVideoSettingsForFig.h>

@class NSDictionary;

@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings <AVReencodedVideoSettingsForFig> {

	NSDictionary* _adaptedVideoCompressionProperties;
	NSDictionary* _VTPixelAspectRatioDictionary;
	NSDictionary* _VTCleanApertureDictionary;

}

@property (nonatomic,readonly) unsigned videoCodecType; 
@property (nonatomic,readonly) NSDictionary * videoEncoderSpecification; 
@property (nonatomic,readonly) NSDictionary * videoCompressionProperties; 
+(id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)eligibleOutputSettingsDictionaryKeys;
+(BOOL)_validateVideoCompressionProperties:(id)arg1 againstSupportedPropertyDictionary:(id)arg2 forCodecType:(id)arg3 exceptionReason:(id*)arg4 ;
-(void)dealloc;
-(int)width;
-(int)height;
-(NSDictionary *)videoCompressionProperties;
-(BOOL)willYieldCompressedSamples;
-(unsigned)videoCodecType;
-(NSDictionary *)videoEncoderSpecification;
-(BOOL)canFullySpecifyOutputFormatReturningReason:(id*)arg1 ;
-(BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id*)arg1 ;
-(id)initWithTrustedAVVideoSettingsDictionary:(id)arg1 ;
-(id)pixelAspectRatioDictionary;
-(id)cleanApertureDictionary;
-(id)initWithAVVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
@end

