/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSData, NSArray, NSURL;

@interface CPLMomentShare : NSObject <NSSecureCoding, NSCopying> {

	short _mode;
	NSString* _identifier;
	NSString* _title;
	NSDate* _creationDate;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDate* _expiryDate;
	long long _assetCount;
	long long _photosCount;
	long long _videosCount;
	NSData* _thumbnailImageData;
	NSData* _previewData;
	NSArray* _participants;
	NSURL* _shareURL;
	NSString* _originatingScopeIdentifier;

}

@property (nonatomic,copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) short mode;                                       //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                              //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                                   //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSDate * expiryDate;                                //@synthesize expiryDate=_expiryDate - In the implementation block
@property (assign,nonatomic) long long assetCount;                             //@synthesize assetCount=_assetCount - In the implementation block
@property (assign,nonatomic) long long photosCount;                            //@synthesize photosCount=_photosCount - In the implementation block
@property (assign,nonatomic) long long videosCount;                            //@synthesize videosCount=_videosCount - In the implementation block
@property (nonatomic,copy) NSData * thumbnailImageData;                        //@synthesize thumbnailImageData=_thumbnailImageData - In the implementation block
@property (nonatomic,copy) NSData * previewData;                               //@synthesize previewData=_previewData - In the implementation block
@property (nonatomic,copy) NSArray * participants;                             //@synthesize participants=_participants - In the implementation block
@property (nonatomic,copy) NSURL * shareURL;                                   //@synthesize shareURL=_shareURL - In the implementation block
@property (nonatomic,copy) NSString * originatingScopeIdentifier;              //@synthesize originatingScopeIdentifier=_originatingScopeIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cplAdditionalSecureClassesForProperty:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setMode:(short)arg1 ;
-(NSDate *)creationDate;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(short)mode;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(NSDate *)expiryDate;
-(void)setPhotosCount:(long long)arg1 ;
-(long long)photosCount;
-(void)setParticipants:(NSArray *)arg1 ;
-(NSArray *)participants;
-(NSData *)thumbnailImageData;
-(void)setThumbnailImageData:(NSData *)arg1 ;
-(long long)assetCount;
-(NSURL *)shareURL;
-(NSString *)originatingScopeIdentifier;
-(void)setOriginatingScopeIdentifier:(NSString *)arg1 ;
-(id)initWithScopeChange:(id)arg1 ;
-(void)updateScopeChange:(id)arg1 ;
-(id)translateToScopeChangeWithScopeType:(long long)arg1 ;
-(void)setAssetCount:(long long)arg1 ;
-(long long)videosCount;
-(void)setVideosCount:(long long)arg1 ;
-(NSData *)previewData;
-(void)setPreviewData:(NSData *)arg1 ;
-(void)setShareURL:(NSURL *)arg1 ;
@end

