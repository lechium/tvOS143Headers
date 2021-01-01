/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCapture/AVFCapture-Structs.h>
@class NSArray;

@interface AVCaptureResolvedPhotoSettingsInternal : NSObject {

	long long uniqueID;
	SCD_Struct_AV18 photoDimensions;
	SCD_Struct_AV18 rawPhotoDimensions;
	SCD_Struct_AV18 previewDimensions;
	SCD_Struct_AV18 embeddedThumbnailDimensions;
	BOOL livePhotoMovieEnabled;
	SCD_Struct_AV18 livePhotoMovieDimensions;
	BOOL turboModeEnabled;
	BOOL flashEnabled;
	BOOL HDREnabled;
	BOOL adjustedPhotoFiltersEnabled;
	BOOL EV0PhotoDeliveryEnabled;
	BOOL stillImageStabilizationEnabled;
	BOOL squareCropEnabled;
	SCD_Struct_AV18 deferredPhotoProxyDimensions;
	NSArray* photoManifest;

}
-(void)dealloc;
@end
