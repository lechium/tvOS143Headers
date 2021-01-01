/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, MKCuratedCollectionsSyncCoordinator;
#import <MapKit/MapKit-Structs.h>
@class NSRelativeDateTimeFormatter, UIFont, UIImage, NSObject, UIColor, NSAttributedString, GEOPlaceCollection;

@interface MKPlaceCollectionViewModel : NSObject {

	NSRelativeDateTimeFormatter* _collectionDateFormatter;
	long long _context;
	UIFont* _titleFont;
	UIImage* _collectionImage;
	NSObject*<OS_dispatch_queue> _publisherLogoImageQueue;
	BOOL _isSaved;
	BOOL _shouldDisplayMetadata;
	UIColor* _backgroundColor;
	NSAttributedString* _collectionTitle;
	NSAttributedString* _secondaryCollectionTitle;
	GEOPlaceCollection* _placeCollection;
	id<MKCuratedCollectionsSyncCoordinator> _syncCoordinator;
	UIImage* _publisherLogoImage;
	CGSize _photoSize;

}

@property (nonatomic,retain) GEOPlaceCollection * placeCollection;                                 //@synthesize placeCollection=_placeCollection - In the implementation block
@property (nonatomic,retain) id<MKCuratedCollectionsSyncCoordinator> syncCoordinator;              //@synthesize syncCoordinator=_syncCoordinator - In the implementation block
@property (assign,nonatomic) CGSize photoSize;                                                     //@synthesize photoSize=_photoSize - In the implementation block
@property (retain) UIImage * publisherLogoImage;                                                   //@synthesize publisherLogoImage=_publisherLogoImage - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                            //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) NSAttributedString * collectionTitle;                                 //@synthesize collectionTitle=_collectionTitle - In the implementation block
@property (nonatomic,retain) NSAttributedString * secondaryCollectionTitle;                        //@synthesize secondaryCollectionTitle=_secondaryCollectionTitle - In the implementation block
@property (assign,nonatomic) BOOL isSaved;                                                         //@synthesize isSaved=_isSaved - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayMetadata;                                           //@synthesize shouldDisplayMetadata=_shouldDisplayMetadata - In the implementation block
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(NSAttributedString *)collectionTitle;
-(GEOPlaceCollection *)placeCollection;
-(void)setPlaceCollection:(GEOPlaceCollection *)arg1 ;
-(BOOL)isSaved;
-(void)setIsSaved:(BOOL)arg1 ;
-(id<MKCuratedCollectionsSyncCoordinator>)syncCoordinator;
-(UIImage *)publisherLogoImage;
-(void)setPublisherLogoImage:(UIImage *)arg1 ;
-(id)initWithGEOPlaceCollection:(id)arg1 usingSyncCoordinator:(id)arg2 inContext:(long long)arg3 usingTitleFont:(id)arg4 usingFormatter:(id)arg5 ;
-(NSAttributedString *)secondaryCollectionTitle;
-(BOOL)shouldDisplayMetadata;
-(void)publisherLogoImageWithCompletion:(/*^block*/id)arg1 ;
-(void)setCollectionTitle:(NSAttributedString *)arg1 ;
-(void)setSecondaryCollectionTitle:(NSAttributedString *)arg1 ;
-(void)setShouldDisplayMetadata:(BOOL)arg1 ;
-(void)setSyncCoordinator:(id<MKCuratedCollectionsSyncCoordinator>)arg1 ;
-(CGSize)photoSize;
-(void)setPhotoSize:(CGSize)arg1 ;
-(void)collectionImageForSize:(CGSize)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)cancelCollectionImageDownload;
@end

