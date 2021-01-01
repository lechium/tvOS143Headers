//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSError, NSMutableData, NSMutableDictionary, NSNumber, NSString, NSURL, PAMediaConversionServiceImageMetadataPolicy, PAMediaConversionServiceResourceURLCollection;

__attribute__((visibility("hidden")))
@interface PAMediaConversionServiceImageConversionJob : NSObject
{
    _Bool _applySourceOrientationTransform;	// 8 = 0x8
    _Bool _formatConversionOnly;	// 9 = 0x9
    _Bool _shouldCheckForOutputCorruption;	// 10 = 0xa
    _Bool _shouldUseEmbeddedImageAsSource;	// 11 = 0xb
    struct CGImage *_sourceImageRef;	// 16 = 0x10
    NSDictionary *_sourceImageProperties;	// 24 = 0x18
    NSMutableDictionary *_destinationImageProperties;	// 32 = 0x20
    unsigned long long _orientationTransformBehavior;	// 40 = 0x28
    long long _rasterizationDPI;	// 48 = 0x30
    NSString *_requestIdentifier;	// 56 = 0x38
    unsigned long long _status;	// 64 = 0x40
    PAMediaConversionServiceResourceURLCollection *_sourceResourceURLCollection;	// 72 = 0x48
    PAMediaConversionServiceResourceURLCollection *_destinationResourceURLCollection;	// 80 = 0x50
    NSData *_destinationData;	// 88 = 0x58
    long long _requestedMaximumPixelCount;	// 96 = 0x60
    long long _requestedMaximumLongSideLength;	// 104 = 0x68
    double _scaleFactor;	// 112 = 0x70
    long long _orientation;	// 120 = 0x78
    long long _colorspaceMode;	// 128 = 0x80
    NSDictionary *_adjustmentInformation;	// 136 = 0x88
    long long _adjustmentFinalizationBehavior;	// 144 = 0x90
    long long _adjustmentFinalizationDisposition;	// 152 = 0x98
    NSDictionary *_finalizedPhotosAdjustmentsInformation;	// 160 = 0xa0
    NSError *_error;	// 168 = 0xa8
    NSString *_inputFileType;	// 176 = 0xb0
    NSString *_outputFileType;	// 184 = 0xb8
    PAMediaConversionServiceImageMetadataPolicy *_metadataPolicy;	// 192 = 0xc0
    NSNumber *_candidacy;	// 200 = 0xc8
    struct CGImageSource *_imageSource;	// 208 = 0xd0
    NSMutableData *_imageDestinationData;	// 216 = 0xd8
    struct CGImageDestination *_imageDestination;	// 224 = 0xe0
    unsigned long long _validationState;	// 232 = 0xe8
    struct CGSize _outputImageSize;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x0000000100010d2c
@property unsigned long long validationState; // @synthesize validationState=_validationState;
@property struct CGImageDestination *imageDestination; // @synthesize imageDestination=_imageDestination;
@property(retain) NSMutableData *imageDestinationData; // @synthesize imageDestinationData=_imageDestinationData;
@property struct CGImageSource *imageSource; // @synthesize imageSource=_imageSource;
@property _Bool shouldUseEmbeddedImageAsSource; // @synthesize shouldUseEmbeddedImageAsSource=_shouldUseEmbeddedImageAsSource;
@property(retain) NSNumber *candidacy; // @synthesize candidacy=_candidacy;
@property struct CGSize outputImageSize; // @synthesize outputImageSize=_outputImageSize;
@property(retain) PAMediaConversionServiceImageMetadataPolicy *metadataPolicy; // @synthesize metadataPolicy=_metadataPolicy;
@property(retain) NSString *outputFileType; // @synthesize outputFileType=_outputFileType;
@property(retain) NSString *inputFileType; // @synthesize inputFileType=_inputFileType;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSDictionary *finalizedPhotosAdjustmentsInformation; // @synthesize finalizedPhotosAdjustmentsInformation=_finalizedPhotosAdjustmentsInformation;
@property long long adjustmentFinalizationDisposition; // @synthesize adjustmentFinalizationDisposition=_adjustmentFinalizationDisposition;
@property long long adjustmentFinalizationBehavior; // @synthesize adjustmentFinalizationBehavior=_adjustmentFinalizationBehavior;
@property(retain) NSDictionary *adjustmentInformation; // @synthesize adjustmentInformation=_adjustmentInformation;
@property _Bool shouldCheckForOutputCorruption; // @synthesize shouldCheckForOutputCorruption=_shouldCheckForOutputCorruption;
@property _Bool formatConversionOnly; // @synthesize formatConversionOnly=_formatConversionOnly;
@property long long colorspaceMode; // @synthesize colorspaceMode=_colorspaceMode;
@property long long orientation; // @synthesize orientation=_orientation;
@property _Bool applySourceOrientationTransform; // @synthesize applySourceOrientationTransform=_applySourceOrientationTransform;
@property double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property long long requestedMaximumLongSideLength; // @synthesize requestedMaximumLongSideLength=_requestedMaximumLongSideLength;
@property long long requestedMaximumPixelCount; // @synthesize requestedMaximumPixelCount=_requestedMaximumPixelCount;
@property(retain) NSData *destinationData; // @synthesize destinationData=_destinationData;
@property(retain) PAMediaConversionServiceResourceURLCollection *destinationResourceURLCollection; // @synthesize destinationResourceURLCollection=_destinationResourceURLCollection;
@property(retain) PAMediaConversionServiceResourceURLCollection *sourceResourceURLCollection; // @synthesize sourceResourceURLCollection=_sourceResourceURLCollection;
@property unsigned long long status; // @synthesize status=_status;
@property(readonly) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property long long rasterizationDPI; // @synthesize rasterizationDPI=_rasterizationDPI;
- (void)dealloc;	// IMP=0x0000000100010a60
@property(readonly) struct CGSize sourceImageSize;
@property(readonly) long long sourceOrientation;
@property(readonly) _Bool isRAWSourceUTI;
@property(readonly) NSString *sourceUTI;
@property(readonly) _Bool sourceRequiresRasterization;
@property(readonly) NSDictionary *sourceImageProperties; // @synthesize sourceImageProperties=_sourceImageProperties;
@property(readonly) NSMutableDictionary *destinationImageProperties; // @synthesize destinationImageProperties=_destinationImageProperties;
@property(readonly) _Bool canAccessSourceImageProperties;
@property(readonly) struct CGImage *sourceImageRef; // @synthesize sourceImageRef=_sourceImageRef;
@property(readonly) NSURL *mainSourceResourceURL;
@property(readonly) unsigned long long orientationTransformBehavior; // @synthesize orientationTransformBehavior=_orientationTransformBehavior;
@property(readonly) NSString *photosAdjustmentFormatVersion;
@property(readonly) NSString *photosAdjustmentFormatIdentifier;
@property(readonly) NSData *photosAdjustmentData;
@property(readonly) _Bool requiresPhotosAdjustmentsFinalization;
@property(readonly) _Bool hasLivePhotoSourceURLs;
@property(readonly) _Bool hasPhotosAdjustments;
@property(readonly) _Bool valid;
- (long long)requestedOrCalculatedMaximumLongSideLength;	// IMP=0x000000010000fef4
- (_Bool)_validateOutputSize;	// IMP=0x000000010000fd8c
- (_Bool)_validateOrientation;	// IMP=0x000000010000fc44
- (_Bool)_validateMetadata;	// IMP=0x000000010000faac
- (_Bool)_validateSource;	// IMP=0x000000010000f880
- (void)_validate;	// IMP=0x000000010000f708
- (_Bool)validateSourceAndOptions;	// IMP=0x000000010000f6c8
- (id)initWithRequestIdentifier:(id)arg1 sourceResourceURLCollection:(id)arg2 outputFileType:(id)arg3;	// IMP=0x000000010000f570

@end

