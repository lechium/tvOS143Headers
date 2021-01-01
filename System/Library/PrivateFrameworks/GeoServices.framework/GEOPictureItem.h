/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOPictureItem.h>
@class NSString;


@protocol GEOPictureItem
@property (nonatomic,readonly) id<GEOMapItemPhoto> photo; 
@property (nonatomic,readonly) int pictureItemPhotoType; 
@property (nonatomic,readonly) NSString * primaryText; 
@property (nonatomic,readonly) NSString * secondaryText; 
@required
-(NSString *)primaryText;
-(NSString *)secondaryText;
-(id<GEOMapItemPhoto>)photo;
-(int)pictureItemPhotoType;

@end


@protocol GEOMapItemPhoto;
@class NSString;

@interface GEOPictureItem : NSObject <GEOPictureItem> {

	id<GEOMapItemPhoto> _photo;
	int _pictureItemPhotoType;
	NSString* _primaryText;
	NSString* _secondaryText;

}

@property (nonatomic,readonly) id<GEOMapItemPhoto> photo;              //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) int pictureItemPhotoType;               //@synthesize pictureItemPhotoType=_pictureItemPhotoType - In the implementation block
@property (nonatomic,readonly) NSString * primaryText;                 //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,readonly) NSString * secondaryText;               //@synthesize secondaryText=_secondaryText - In the implementation block
-(id)init;
-(id)initWithPictureItem:(id)arg1 ;
-(NSString *)primaryText;
-(NSString *)secondaryText;
-(id<GEOMapItemPhoto>)photo;
-(id)initWithPhoto:(id)arg1 pictureItemPhotoType:(int)arg2 primaryText:(id)arg3 secondaryText:(id)arg4 ;
-(int)pictureItemPhotoType;
@end

