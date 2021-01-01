/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString, NSURL, NSArray;

@interface AVCapturePhotoSettingsInternal : NSObject {

	NSDictionary* format;
	NSString* processedFileType;
	unsigned rawPhotoPixelFormatType;
	NSString* rawFileType;
	long long uniqueID;
	long long flashMode;
	long long HDRMode;
	BOOL EV0PhotoDeliveryEnabled;
	BOOL highResolutionPhotoEnabled;
	BOOL depthDataDeliveryEnabled;
	BOOL embedsDepthDataInPhoto;
	BOOL depthDataFiltered;
	BOOL cameraCalibrationDataDeliveryEnabled;
	NSDictionary* metadata;
	NSURL* livePhotoMovieFileURL;
	NSURL* livePhotoMovieFileURLForOriginalPhoto;
	NSString* livePhotoVideoCodecType;
	NSArray* livePhotoMovieMetadata;
	NSArray* livePhotoMovieMetadataForOriginalPhoto;
	NSDictionary* previewPhotoFormat;
	NSDictionary* embeddedThumbnailPhotoFormat;
	BOOL squareCropEnabled;
	BOOL turboModeEnabled;
	BOOL burstQualityCaptureEnabled;
	NSArray* photoFilters;
	NSArray* adjustedPhotoFilters;
	unsigned shutterSound;
	unsigned long long userInitiatedPhotoRequestTime;
	BOOL autoDeferredProcessingEnabled;
	NSString* livePhotoContentIdentifier;
	NSString* livePhotoContentIdentifierForOriginalPhoto;

}
@end

