/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FigCaptureStillImageSettings, BWStillImageCaptureSettings, BWStillImageProcessingSettings;

@interface BWStillImageSettings : NSObject {

	FigCaptureStillImageSettings* _requestedSettings;
	BWStillImageCaptureSettings* _captureSettings;
	BWStillImageProcessingSettings* _processingSettings;

}

@property (nonatomic,readonly) FigCaptureStillImageSettings * requestedSettings;                 //@synthesize requestedSettings=_requestedSettings - In the implementation block
@property (nonatomic,readonly) BWStillImageCaptureSettings * captureSettings;                    //@synthesize captureSettings=_captureSettings - In the implementation block
@property (nonatomic,readonly) BWStillImageProcessingSettings * processingSettings;              //@synthesize processingSettings=_processingSettings - In the implementation block
-(void)dealloc;
-(BWStillImageCaptureSettings *)captureSettings;
-(FigCaptureStillImageSettings *)requestedSettings;
-(BWStillImageProcessingSettings *)processingSettings;
-(id)initWithRequestedSettings:(id)arg1 captureSettings:(id)arg2 processingSettings:(id)arg3 ;
@end

