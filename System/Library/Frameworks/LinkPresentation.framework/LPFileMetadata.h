/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPSpecializationMetadata.h>
#import <libobjc.A.dylib/LPLinkMetadataPresentationTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataPreviewTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataBackwardCompatibility.h>
#import <libobjc.A.dylib/LPMultipleMetadataPresentationTransformer.h>

@class NSString, LPImage, NSDate;

@interface LPFileMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPMultipleMetadataPresentationTransformer> {

	NSString* _name;
	NSString* _type;
	unsigned long long _size;
	LPImage* _thumbnail;
	LPImage* _icon;
	NSDate* _creationDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long size;               //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) LPImage * thumbnail;                   //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) LPImage * icon;                        //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                 //@synthesize creationDate=_creationDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)size;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(void)setName:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(void)setSize:(unsigned long long)arg1 ;
-(LPImage *)icon;
-(void)setIcon:(LPImage *)arg1 ;
-(LPImage *)thumbnail;
-(void)setThumbnail:(LPImage *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(BOOL)_isImage;
-(id)previewSummaryForTransformer:(id)arg1 ;
-(id)previewImageForTransformer:(id)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg1 ;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg1 ;
-(long long)summaryTypeForTransformer:(id)arg1 ;
-(id)_fileTypeStringForTransformer:(id)arg1 ;
-(id)_fileDetailStringForTransformer:(id)arg1 ;
-(BOOL)_isWatchFace;
-(id)_nameForTransformer:(id)arg1 ;
-(id)_bottomCaptionStringForTransformer:(id)arg1 ;
-(BOOL)_shouldUseSquareIcon;
-(BOOL)_shouldUseCircularIcon;
-(BOOL)_shouldUseBackground;
-(id)_singleLineDescriptionForRemoteFileWithTransformer:(id)arg1 ;
-(BOOL)_isPlainText;
@end

