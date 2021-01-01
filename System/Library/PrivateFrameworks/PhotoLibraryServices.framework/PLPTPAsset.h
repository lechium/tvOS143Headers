/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, PLPTPAssetHandle, NSString, NSNumber;

@interface PLPTPAsset : NSObject <NSMutableCopying, NSCopying> {

	NSData* _event;
	PLPTPAssetHandle* _assetHandle;
	NSString* _filename;
	NSString* _createdFilename;
	BOOL _deleted;
	NSString* _originalFilename;
	NSString* _fullDirectoryPath;
	BOOL _exifAvailable;
	NSNumber* _objectCompressedSize;
	NSString* _originatingAssetID;
	NSNumber* _thumbOffset;
	NSNumber* _thumbCompressedSize;
	CGSize _imagePixSize;
	CGSize _thumbPixSize;
	long long _desiredOrientation;
	NSString* _modificationDateString;
	NSString* _captureDateString;
	NSString* _durationString;
	NSString* _locationString;
	NSString* _groupUUID;
	NSString* _burstUUID;
	BOOL _burstPicked;
	BOOL _burstFavorite;
	BOOL _burstFirstPicked;
	BOOL _highFrameRateVideo;
	BOOL _timeLapseVideo;
	NSString* _relatedUUID;
	NSString* _spatialOverCaptureGroupIdentifier;
	long long _conversionGroup;

}

@property (nonatomic,copy,readonly) PLPTPAssetHandle * assetHandle;                              //@synthesize assetHandle=_assetHandle - In the implementation block
@property (nonatomic,copy,readonly) NSString * cacheKey; 
@property (nonatomic,copy,readonly) NSString * filename;                                         //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy,readonly) NSString * createdFilename;                                  //@synthesize createdFilename=_createdFilename - In the implementation block
@property (getter=isDeleted,nonatomic,readonly) BOOL deleted;                                    //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalFilename;                                 //@synthesize originalFilename=_originalFilename - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullDirectoryPath;                                //@synthesize fullDirectoryPath=_fullDirectoryPath - In the implementation block
@property (getter=isExifAvailable,nonatomic,readonly) BOOL exifAvailable;                        //@synthesize exifAvailable=_exifAvailable - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * objectCompressedSize;                             //@synthesize objectCompressedSize=_objectCompressedSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * originatingAssetID;                               //@synthesize originatingAssetID=_originatingAssetID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * thumbOffset;                                      //@synthesize thumbOffset=_thumbOffset - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * thumbCompressedSize;                              //@synthesize thumbCompressedSize=_thumbCompressedSize - In the implementation block
@property (nonatomic,readonly) CGSize imagePixSize;                                              //@synthesize imagePixSize=_imagePixSize - In the implementation block
@property (nonatomic,readonly) CGSize thumbPixSize;                                              //@synthesize thumbPixSize=_thumbPixSize - In the implementation block
@property (nonatomic,readonly) long long desiredOrientation;                                     //@synthesize desiredOrientation=_desiredOrientation - In the implementation block
@property (nonatomic,copy,readonly) NSString * modificationDateString;                           //@synthesize modificationDateString=_modificationDateString - In the implementation block
@property (nonatomic,copy,readonly) NSString * captureDateString;                                //@synthesize captureDateString=_captureDateString - In the implementation block
@property (nonatomic,copy,readonly) NSString * durationString;                                   //@synthesize durationString=_durationString - In the implementation block
@property (nonatomic,copy,readonly) NSString * locationString;                                   //@synthesize locationString=_locationString - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupUUID;                                        //@synthesize groupUUID=_groupUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * spatialOverCaptureGroupIdentifier;                //@synthesize spatialOverCaptureGroupIdentifier=_spatialOverCaptureGroupIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * burstUUID;                                        //@synthesize burstUUID=_burstUUID - In the implementation block
@property (getter=isBurstPicked,nonatomic,readonly) BOOL burstPicked;                            //@synthesize burstPicked=_burstPicked - In the implementation block
@property (getter=isBurstFavorite,nonatomic,readonly) BOOL burstFavorite;                        //@synthesize burstFavorite=_burstFavorite - In the implementation block
@property (getter=isBurstFirstPicked,nonatomic,readonly) BOOL burstFirstPicked;                  //@synthesize burstFirstPicked=_burstFirstPicked - In the implementation block
@property (getter=isHighFrameRateVideo,nonatomic,readonly) BOOL highFrameRateVideo;              //@synthesize highFrameRateVideo=_highFrameRateVideo - In the implementation block
@property (getter=isTimeLapseVideo,nonatomic,readonly) BOOL timeLapseVideo;                      //@synthesize timeLapseVideo=_timeLapseVideo - In the implementation block
@property (nonatomic,copy,readonly) NSString * relatedUUID;                                      //@synthesize relatedUUID=_relatedUUID - In the implementation block
@property (nonatomic,readonly) long long conversionGroup;                                        //@synthesize conversionGroup=_conversionGroup - In the implementation block
@property (nonatomic,copy,readonly) NSData * event;                                              //@synthesize event=_event - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)filename;
-(NSData *)event;
-(BOOL)isDeleted;
-(NSString *)cacheKey;
-(NSString *)locationString;
-(NSString *)groupUUID;
-(NSString *)originalFilename;
-(id)_pl_prettyDescriptionWithIndent:(long long)arg1 ;
-(NSString *)spatialOverCaptureGroupIdentifier;
-(PLPTPAssetHandle *)assetHandle;
-(CGSize)imagePixSize;
-(NSString *)fullDirectoryPath;
-(id)initWithPTPAsset:(id)arg1 ;
-(NSString *)createdFilename;
-(BOOL)isExifAvailable;
-(NSNumber *)objectCompressedSize;
-(NSString *)originatingAssetID;
-(NSNumber *)thumbOffset;
-(NSNumber *)thumbCompressedSize;
-(CGSize)thumbPixSize;
-(long long)desiredOrientation;
-(NSString *)modificationDateString;
-(NSString *)captureDateString;
-(NSString *)durationString;
-(NSString *)burstUUID;
-(BOOL)isBurstPicked;
-(BOOL)isBurstFavorite;
-(BOOL)isBurstFirstPicked;
-(BOOL)isHighFrameRateVideo;
-(BOOL)isTimeLapseVideo;
-(NSString *)relatedUUID;
-(long long)conversionGroup;
@end

