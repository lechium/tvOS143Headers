/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FigCaptureSourceConfiguration, FigVideoCaptureConnectionConfiguration, NSArray, FigDepthDataCaptureConnectionConfiguration, FigPointCloudDataCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedCameraSourceConfiguration : NSObject {

	FigCaptureSourceConfiguration* _cameraConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoPreviewSinkConnectionConfiguration;
	NSArray* _previewDerivedConnectionConfigurations;
	NSArray* _videoCaptureConnectionConfigurations;
	NSArray* _videoDataConnectionConfigurations;
	FigVideoCaptureConnectionConfiguration* _stillImageConnectionConfiguration;
	FigDepthDataCaptureConnectionConfiguration* _depthDataConnectionConfiguration;
	NSArray* _visionDataConnectionConfigurations;
	NSArray* _metadataObjectConnectionConfigurations;
	NSArray* _movieFileDetectedObjectMetadataConnectionConfigurations;
	FigPointCloudDataCaptureConnectionConfiguration* _pointCloudDataConnectionConfiguration;
	NSArray* _cameraCalibrationDataConnectionConfigurations;

}

@property (nonatomic,readonly) FigCaptureSourceConfiguration * cameraConfiguration;                                                  //@synthesize cameraConfiguration=_cameraConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * videoPreviewSinkConnectionConfiguration;                     //@synthesize videoPreviewSinkConnectionConfiguration=_videoPreviewSinkConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * previewDerivedConnectionConfigurations;                                                     //@synthesize previewDerivedConnectionConfigurations=_previewDerivedConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * videoCaptureConnectionConfigurations;                                                       //@synthesize videoCaptureConnectionConfigurations=_videoCaptureConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * videoDataConnectionConfigurations;                                                          //@synthesize videoDataConnectionConfigurations=_videoDataConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * stillImageConnectionConfiguration;                           //@synthesize stillImageConnectionConfiguration=_stillImageConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigDepthDataCaptureConnectionConfiguration * depthDataConnectionConfiguration;                        //@synthesize depthDataConnectionConfiguration=_depthDataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * visionDataConnectionConfigurations;                                                         //@synthesize visionDataConnectionConfigurations=_visionDataConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * metadataObjectConnectionConfigurations;                                                     //@synthesize metadataObjectConnectionConfigurations=_metadataObjectConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * movieFileDetectedObjectMetadataConnectionConfigurations;                                    //@synthesize movieFileDetectedObjectMetadataConnectionConfigurations=_movieFileDetectedObjectMetadataConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) FigPointCloudDataCaptureConnectionConfiguration * pointCloudDataConnectionConfiguration;              //@synthesize pointCloudDataConnectionConfiguration=_pointCloudDataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * cameraCalibrationDataConnectionConfigurations;                                              //@synthesize cameraCalibrationDataConnectionConfigurations=_cameraCalibrationDataConnectionConfigurations - In the implementation block
-(void)dealloc;
-(FigCaptureSourceConfiguration *)cameraConfiguration;
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(id)initWithConnectionConfigurations:(id)arg1 clientSetsUserInitiatedCaptureRequestTime:(BOOL)arg2 sceneClassifierConnectionConfigurationOut:(id*)arg3 ;
-(FigVideoCaptureConnectionConfiguration *)videoPreviewSinkConnectionConfiguration;
-(NSArray *)previewDerivedConnectionConfigurations;
-(NSArray *)videoCaptureConnectionConfigurations;
-(NSArray *)videoDataConnectionConfigurations;
-(FigDepthDataCaptureConnectionConfiguration *)depthDataConnectionConfiguration;
-(NSArray *)visionDataConnectionConfigurations;
-(NSArray *)metadataObjectConnectionConfigurations;
-(NSArray *)movieFileDetectedObjectMetadataConnectionConfigurations;
-(FigPointCloudDataCaptureConnectionConfiguration *)pointCloudDataConnectionConfiguration;
-(NSArray *)cameraCalibrationDataConnectionConfigurations;
@end

