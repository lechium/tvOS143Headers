/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaConversionService/MediaConversionService-Structs.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSProgress, NSString, NSError, PHMediaFormatConversionDestination, NSUUID, PHMediaFormatConversionSource, PFMediaCapabilities, PHMediaFormatConversionCompositeRequest, NSURL, CLLocation, NSDate, NSTimeZone;

@interface PHMediaFormatConversionRequest : NSObject <NSProgressReporting> {

	double _formatConversionExpansionFactor;
	BOOL _forceFormatConversion;
	BOOL _shouldPadOutputFileToEstimatedLength;
	BOOL _shouldStripLocation;
	BOOL _useTransferBehaviorUserPreference;
	BOOL _requiresSinglePassVideoConversion;
	BOOL _preflighted;
	long long _livePhotoPairingIdentifierBehavior;
	NSString* _livePhotoPairingIdentifier;
	long long _status;
	NSProgress* _progress;
	NSError* _error;
	NSString* _outputFilename;
	PHMediaFormatConversionDestination* _destination;
	id _userInfo;
	NSUUID* _identifier;
	PHMediaFormatConversionSource* _source;
	PFMediaCapabilities* _destinationCapabilities;
	PHMediaFormatConversionCompositeRequest* _parentRequest;
	NSURL* _directoryForTemporaryFiles;
	long long _transferBehaviorUserPreference;
	/*^block*/id _singlePassVideoConversionUpdateHandler;
	long long _locationMetadataBehavior;
	CLLocation* _location;
	long long _creationDateMetadataBehavior;
	NSDate* _creationDate;
	NSTimeZone* _creationDateTimeZone;
	long long _captionMetadataBehavior;
	NSString* _caption;
	long long _accessibilityDescriptionMetadataBehavior;
	NSString* _accessibilityDescription;
	long long _passthroughConversionAdditionalByteCount;

}

@property (readonly) NSUUID * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (retain) PHMediaFormatConversionSource * source;                                    //@synthesize source=_source - In the implementation block
@property (retain) PFMediaCapabilities * destinationCapabilities;                             //@synthesize destinationCapabilities=_destinationCapabilities - In the implementation block
@property (__weak) PHMediaFormatConversionCompositeRequest * parentRequest;                   //@synthesize parentRequest=_parentRequest - In the implementation block
@property (readonly) NSString * statusString; 
@property (readonly) BOOL requiresFormatConversion; 
@property (readonly) BOOL requiresPassthroughConversion; 
@property (readonly) BOOL requiresMetadataChanges; 
@property (readonly) BOOL isCompositeRequest; 
@property (retain) NSProgress * progress;                                                     //@synthesize progress=_progress - In the implementation block
@property (retain) NSURL * directoryForTemporaryFiles;                                        //@synthesize directoryForTemporaryFiles=_directoryForTemporaryFiles - In the implementation block
@property (assign) long long transferBehaviorUserPreference;                                  //@synthesize transferBehaviorUserPreference=_transferBehaviorUserPreference - In the implementation block
@property (copy) id singlePassVideoConversionUpdateHandler;                                   //@synthesize singlePassVideoConversionUpdateHandler=_singlePassVideoConversionUpdateHandler - In the implementation block
@property (assign) BOOL requiresSinglePassVideoConversion;                                    //@synthesize requiresSinglePassVideoConversion=_requiresSinglePassVideoConversion - In the implementation block
@property (assign,nonatomic) double formatConversionExpansionFactor; 
@property (readonly) long long locationMetadataBehavior;                                      //@synthesize locationMetadataBehavior=_locationMetadataBehavior - In the implementation block
@property (readonly) CLLocation * location;                                                   //@synthesize location=_location - In the implementation block
@property (readonly) long long creationDateMetadataBehavior;                                  //@synthesize creationDateMetadataBehavior=_creationDateMetadataBehavior - In the implementation block
@property (readonly) NSDate * creationDate;                                                   //@synthesize creationDate=_creationDate - In the implementation block
@property (readonly) NSTimeZone * creationDateTimeZone;                                       //@synthesize creationDateTimeZone=_creationDateTimeZone - In the implementation block
@property (readonly) long long captionMetadataBehavior;                                       //@synthesize captionMetadataBehavior=_captionMetadataBehavior - In the implementation block
@property (copy,readonly) NSString * caption;                                                 //@synthesize caption=_caption - In the implementation block
@property (readonly) long long accessibilityDescriptionMetadataBehavior;                      //@synthesize accessibilityDescriptionMetadataBehavior=_accessibilityDescriptionMetadataBehavior - In the implementation block
@property (copy,readonly) NSString * accessibilityDescription;                                //@synthesize accessibilityDescription=_accessibilityDescription - In the implementation block
@property (assign,nonatomic) long long passthroughConversionAdditionalByteCount;              //@synthesize passthroughConversionAdditionalByteCount=_passthroughConversionAdditionalByteCount - In the implementation block
@property (assign) long long status;                                                          //@synthesize status=_status - In the implementation block
@property (assign) BOOL preflighted;                                                          //@synthesize preflighted=_preflighted - In the implementation block
@property (retain) NSError * error;                                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) PHMediaFormatConversionDestination * destination;                //@synthesize destination=_destination - In the implementation block
@property (readonly) long long backwardsCompatibilityStatus; 
@property (readonly) unsigned long long estimatedOutputFileLength; 
@property (assign) long long livePhotoPairingIdentifierBehavior;                              //@synthesize livePhotoPairingIdentifierBehavior=_livePhotoPairingIdentifierBehavior - In the implementation block
@property (copy) NSString * livePhotoPairingIdentifier;                                       //@synthesize livePhotoPairingIdentifier=_livePhotoPairingIdentifier - In the implementation block
@property (assign) BOOL forceFormatConversion;                                                //@synthesize forceFormatConversion=_forceFormatConversion - In the implementation block
@property (assign) BOOL shouldPadOutputFileToEstimatedLength;                                 //@synthesize shouldPadOutputFileToEstimatedLength=_shouldPadOutputFileToEstimatedLength - In the implementation block
@property (assign) BOOL shouldStripLocation;                                                  //@synthesize shouldStripLocation=_shouldStripLocation - In the implementation block
@property (retain) NSString * outputFilename;                                                 //@synthesize outputFilename=_outputFilename - In the implementation block
@property (readonly) NSString * outputPathExtension; 
@property (readonly) NSString * outputFileType; 
@property (assign) BOOL useTransferBehaviorUserPreference;                                    //@synthesize useTransferBehaviorUserPreference=_useTransferBehaviorUserPreference - In the implementation block
@property (retain) id userInfo;                                                               //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id*)arg3 ;
+(double)heifToJPEGFactorWithImageDimensions:(CGSize)arg1 fileLength:(unsigned long long)arg2 ;
+(id)stringForRequestStatus:(long long)arg1 ;
+(double)bitsPerPixelWithImageDimensions:(CGSize)arg1 fileLength:(unsigned long long)arg2 ;
+(double)heifToJPEGFactorForBitsPerPixel:(double)arg1 ;
-(NSString *)description;
-(id)init;
-(id)userInfo;
-(NSUUID *)identifier;
-(NSError *)error;
-(PHMediaFormatConversionSource *)source;
-(void)setError:(NSError *)arg1 ;
-(NSDate *)creationDate;
-(void)setSource:(PHMediaFormatConversionSource *)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(NSProgress *)progress;
-(long long)status;
-(void)setDestination:(PHMediaFormatConversionDestination *)arg1 ;
-(PHMediaFormatConversionDestination *)destination;
-(NSString *)statusString;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(CLLocation *)location;
-(NSString *)caption;
-(NSString *)outputFilename;
-(void)setOutputFilename:(NSString *)arg1 ;
-(void)setShouldStripLocation:(BOOL)arg1 ;
-(BOOL)shouldStripLocation;
-(NSString *)accessibilityDescription;
-(NSString *)livePhotoPairingIdentifier;
-(void)enableSinglePassVideoEncodingWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)setUseTransferBehaviorUserPreference:(BOOL)arg1 ;
-(void)setShouldPadOutputFileToEstimatedLength:(BOOL)arg1 ;
-(unsigned long long)estimatedOutputFileLength;
-(NSString *)outputPathExtension;
-(long long)backwardsCompatibilityStatus;
-(void)setLivePhotoPairingIdentifierBehavior:(long long)arg1 ;
-(void)setLivePhotoPairingIdentifier:(NSString *)arg1 ;
-(BOOL)requiresSinglePassVideoConversion;
-(void)setForceFormatConversion:(BOOL)arg1 ;
-(void)setDirectoryForTemporaryFiles:(NSURL *)arg1 ;
-(void)setAccessibilityDescriptionMetadataBehavior:(long long)arg1 withAccessibilityDescription:(id)arg2 ;
-(void)setCaptionMetadataBehavior:(long long)arg1 withCaption:(id)arg2 ;
-(void)setCreationDateMetadataBehavior:(long long)arg1 withCreationDate:(id)arg2 inTimeZone:(id)arg3 ;
-(void)setLocationMetadataBehavior:(long long)arg1 withLocation:(id)arg2 ;
-(NSString *)outputFileType;
-(PHMediaFormatConversionCompositeRequest *)parentRequest;
-(NSURL *)directoryForTemporaryFiles;
-(void)markAsCancelled;
-(BOOL)preflighted;
-(void)setPreflighted:(BOOL)arg1 ;
-(BOOL)prepareWithError:(id*)arg1 ;
-(BOOL)isCompositeRequest;
-(void)setupProgress;
-(void)preflightWithConversionManager:(id)arg1 ;
-(BOOL)requiresPassthroughConversion;
-(BOOL)sourceSupportsPassthroughConversion;
-(BOOL)requiresMetadataChanges;
-(BOOL)requiresLivePhotoPairingIdentifierChange;
-(BOOL)requiresLocationMetadataChange;
-(BOOL)requiresCreationDateMetadataChange;
-(BOOL)requiresCaptionMetadataChange;
-(BOOL)requiresAccessibilityDescriptionMetadataChange;
-(BOOL)requiresFormatConversion;
-(BOOL)userPreferenceProhibitsFormatConversion;
-(void)setFormatConversionExpansionFactor:(double)arg1 ;
-(double)formatConversionExpansionFactor;
-(long long)passthroughConversionAdditionalByteCount;
-(void)padOutputFileToEstimatedLength;
-(void)didFinishProcessing;
-(void)updateSinglePassVideoConversionStatus:(long long)arg1 addedRange:(NSRange)arg2 error:(id)arg3 ;
-(long long)livePhotoPairingIdentifierBehavior;
-(BOOL)forceFormatConversion;
-(BOOL)shouldPadOutputFileToEstimatedLength;
-(BOOL)useTransferBehaviorUserPreference;
-(PFMediaCapabilities *)destinationCapabilities;
-(void)setDestinationCapabilities:(PFMediaCapabilities *)arg1 ;
-(void)setParentRequest:(PHMediaFormatConversionCompositeRequest *)arg1 ;
-(long long)transferBehaviorUserPreference;
-(void)setTransferBehaviorUserPreference:(long long)arg1 ;
-(id)singlePassVideoConversionUpdateHandler;
-(void)setSinglePassVideoConversionUpdateHandler:(id)arg1 ;
-(void)setRequiresSinglePassVideoConversion:(BOOL)arg1 ;
-(long long)locationMetadataBehavior;
-(long long)creationDateMetadataBehavior;
-(NSTimeZone *)creationDateTimeZone;
-(long long)captionMetadataBehavior;
-(long long)accessibilityDescriptionMetadataBehavior;
-(void)setPassthroughConversionAdditionalByteCount:(long long)arg1 ;
@end

