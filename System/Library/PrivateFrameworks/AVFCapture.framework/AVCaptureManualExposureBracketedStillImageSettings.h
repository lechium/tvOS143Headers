/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureBracketedStillImageSettings.h>

@interface AVCaptureManualExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings {

	SCD_Struct_AV0 _exposureDuration;
	float _ISO;

}

@property (readonly) SCD_Struct_AV0 exposureDuration;              //@synthesize exposureDuration=_exposureDuration - In the implementation block
@property (readonly) float ISO;                                    //@synthesize ISO=_ISO - In the implementation block
+(void)initialize;
+(id)manualExposureSettingsWithExposureDuration:(SCD_Struct_AV0)arg1 ISO:(float)arg2 ;
-(id)debugDescription;
-(id)description;
-(SCD_Struct_AV0)exposureDuration;
-(float)ISO;
-(id)_initManualExposureSettingsWithExposureDuration:(SCD_Struct_AV0)arg1 ISO:(float)arg2 ;
@end

