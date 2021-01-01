/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaConversionService/MediaConversionService-Structs.h>
#import <MediaConversionService/PHMediaFormatConversionContent.h>

@class NSString;

@interface PHMediaFormatConversionSource : PHMediaFormatConversionContent {

	BOOL _preflighted;
	BOOL _containsHEVCVideo;
	BOOL _containsHEIFImage;
	BOOL _didCheckForLivePhotoPairingIdentifier;
	NSString* _renderOriginatingSignature;
	NSString* _livePhotoPairingIdentifier;
	long long _locationMetadataStatus;
	long long _captionMetadataStatus;
	long long _accessibilityDescriptionMetadataStatus;
	id _hevcTrackFormatDescription;
	CGSize _imageDimensions;

}

@property (assign) CGSize imageDimensions;                                        //@synthesize imageDimensions=_imageDimensions - In the implementation block
@property (assign) BOOL preflighted;                                              //@synthesize preflighted=_preflighted - In the implementation block
@property (assign) BOOL containsHEVCVideo;                                        //@synthesize containsHEVCVideo=_containsHEVCVideo - In the implementation block
@property (assign) BOOL containsHEIFImage;                                        //@synthesize containsHEIFImage=_containsHEIFImage - In the implementation block
@property (nonatomic,retain) NSString * livePhotoPairingIdentifier;               //@synthesize livePhotoPairingIdentifier=_livePhotoPairingIdentifier - In the implementation block
@property (assign) BOOL didCheckForLivePhotoPairingIdentifier;                    //@synthesize didCheckForLivePhotoPairingIdentifier=_didCheckForLivePhotoPairingIdentifier - In the implementation block
@property (assign) long long locationMetadataStatus;                              //@synthesize locationMetadataStatus=_locationMetadataStatus - In the implementation block
@property (assign) long long captionMetadataStatus;                               //@synthesize captionMetadataStatus=_captionMetadataStatus - In the implementation block
@property (assign) long long accessibilityDescriptionMetadataStatus;              //@synthesize accessibilityDescriptionMetadataStatus=_accessibilityDescriptionMetadataStatus - In the implementation block
@property (retain) id hevcTrackFormatDescription;                                 //@synthesize hevcTrackFormatDescription=_hevcTrackFormatDescription - In the implementation block
@property (copy) NSString * renderOriginatingSignature;                           //@synthesize renderOriginatingSignature=_renderOriginatingSignature - In the implementation block
+(Class)requestClass;
+(id)imageSourceForFileURL:(id)arg1 dimensions:(CGSize)arg2 ;
+(id)videoSourceForFileURL:(id)arg1 ;
+(id)imageSourceForFileURL:(id)arg1 ;
+(id)sourceForFileURL:(id)arg1 mediaType:(long long)arg2 imageDimensions:(CGSize)arg3 ;
+(id)sourceForFileURL:(id)arg1 ;
-(NSString *)livePhotoPairingIdentifier;
-(CGSize)imageDimensions;
-(void)setImageDimensions:(CGSize)arg1 ;
-(void)setRenderOriginatingSignature:(NSString *)arg1 ;
-(void)markLivePhotoPairingIdentifierAsCheckedWithValue:(id)arg1 ;
-(void)setLivePhotoPairingIdentifier:(NSString *)arg1 ;
-(BOOL)preflightWithError:(id*)arg1 ;
-(BOOL)determineMediaTypeFromPathExtensionWithError:(id*)arg1 ;
-(void)checkForHEVCVideo;
-(void)checkForHEIFImage;
-(void)checkForLivePhotoPairingIdentifier;
-(BOOL)imageSourceMetadataByTraversingKeys:(id)arg1 metadataValue:(id*)arg2 ;
-(BOOL)valueExistsInDictionary:(id)arg1 byTraversingKeys:(id)arg2 value:(id*)arg3 ;
-(void)checkForLocationData;
-(long long)imageSourceLocationMetadataStatus;
-(long long)videoSourceLocationMetadataStatus;
-(void)markLocationMetadataAsCheckedWithStatus:(long long)arg1 ;
-(void)checkForCaptionData;
-(long long)imageSourceCaptionMetadataStatus;
-(long long)videoSourceCaptionMetadataStatus;
-(void)markCaptionMetadataAsCheckedWithStatus:(long long)arg1 ;
-(void)checkForAccessibilityDescriptionData;
-(long long)imageSourceAccessibilityDescriptionMetadataStatus;
-(long long)videoSourceAccessibilityDescriptionMetadataStatus;
-(void)markAccessibilityDescriptionMetadataAsCheckedWithStatus:(long long)arg1 ;
-(NSString *)renderOriginatingSignature;
-(BOOL)preflighted;
-(void)setPreflighted:(BOOL)arg1 ;
-(BOOL)containsHEVCVideo;
-(void)setContainsHEVCVideo:(BOOL)arg1 ;
-(BOOL)containsHEIFImage;
-(void)setContainsHEIFImage:(BOOL)arg1 ;
-(BOOL)didCheckForLivePhotoPairingIdentifier;
-(void)setDidCheckForLivePhotoPairingIdentifier:(BOOL)arg1 ;
-(long long)locationMetadataStatus;
-(void)setLocationMetadataStatus:(long long)arg1 ;
-(long long)captionMetadataStatus;
-(void)setCaptionMetadataStatus:(long long)arg1 ;
-(long long)accessibilityDescriptionMetadataStatus;
-(void)setAccessibilityDescriptionMetadataStatus:(long long)arg1 ;
-(id)hevcTrackFormatDescription;
-(void)setHevcTrackFormatDescription:(id)arg1 ;
@end
