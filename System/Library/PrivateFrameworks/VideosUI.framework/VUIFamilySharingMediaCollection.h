/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUIMediaCollection.h>

@class NSString, NSArray, VUIFamilySharingEntity;

@interface VUIFamilySharingMediaCollection : VUIMediaCollection {

	NSString* _artworkURL;
	NSString* _amsShowIdentifier;
	NSString* _amsSeasonIdentifier;
	NSArray* _seasonNumbers;
	VUIFamilySharingEntity* _entity;

}

@property (nonatomic,retain) VUIFamilySharingEntity * entity;              //@synthesize entity=_entity - In the implementation block
@property (nonatomic,retain) NSString * artworkURL;                        //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,retain) NSString * amsShowIdentifier;                 //@synthesize amsShowIdentifier=_amsShowIdentifier - In the implementation block
@property (nonatomic,retain) NSString * amsSeasonIdentifier;               //@synthesize amsSeasonIdentifier=_amsSeasonIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * seasonNumbers;                      //@synthesize seasonNumbers=_seasonNumbers - In the implementation block
-(id)duration;
-(id)title;
-(VUIFamilySharingEntity *)entity;
-(void)setEntity:(VUIFamilySharingEntity *)arg1 ;
-(NSString *)artworkURL;
-(void)setArtworkURL:(NSString *)arg1 ;
-(id)contentDescription;
-(id)contentRating;
-(id)showTitle;
-(id)releaseDate;
-(id)seasonNumber;
-(id)releaseYear;
-(id)genreTitle;
-(NSArray *)seasonNumbers;
-(id)seasonCount;
-(void)setSeasonNumbers:(NSArray *)arg1 ;
-(id)initWithAMSEntity:(id)arg1 requestedProperties:(id)arg2 mediaEntityType:(id)arg3 ;
-(NSString *)amsSeasonIdentifier;
-(NSString *)amsShowIdentifier;
-(void)setAmsShowIdentifier:(NSString *)arg1 ;
-(void)setAmsSeasonIdentifier:(NSString *)arg1 ;
@end

