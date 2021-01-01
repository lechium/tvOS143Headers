/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableArray;

@interface IMPodcastFeed : NSObject {

	BOOL _preferredCategoryFound;
	BOOL _isExplicit;
	NSString* _feedDescription;
	NSString* _author;
	NSString* _category;
	NSString* _imageURL;
	NSString* _globalImageURL;
	NSMutableArray* _items;
	NSString* _provider;
	NSString* _updatedFeedURL;
	NSString* _title;
	NSString* _showType;
	NSString* _webpageURL;

}

@property (assign,nonatomic) BOOL preferredCategoryFound;              //@synthesize preferredCategoryFound=_preferredCategoryFound - In the implementation block
@property (nonatomic,retain) NSString * feedDescription;               //@synthesize feedDescription=_feedDescription - In the implementation block
@property (nonatomic,retain) NSString * author;                        //@synthesize author=_author - In the implementation block
@property (nonatomic,retain) NSString * category;                      //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSString * imageURL;                      //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) NSString * globalImageURL;                //@synthesize globalImageURL=_globalImageURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                   //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * provider;                      //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) NSString * updatedFeedURL;                //@synthesize updatedFeedURL=_updatedFeedURL - In the implementation block
@property (nonatomic,retain) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL isExplicit;                          //@synthesize isExplicit=_isExplicit - In the implementation block
@property (nonatomic,retain) NSString * showType;                      //@synthesize showType=_showType - In the implementation block
@property (nonatomic,retain) NSString * webpageURL;                    //@synthesize webpageURL=_webpageURL - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)init;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)webpageURL;
-(void)setWebpageURL:(NSString *)arg1 ;
-(void)setProvider:(NSString *)arg1 ;
-(NSMutableArray *)items;
-(NSString *)provider;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setItems:(NSMutableArray *)arg1 ;
-(NSString *)imageURL;
-(void)setImageURL:(NSString *)arg1 ;
-(BOOL)isExplicit;
-(void)setIsExplicit:(BOOL)arg1 ;
-(BOOL)preferredCategoryFound;
-(void)setPreferredCategoryFound:(BOOL)arg1 ;
-(NSString *)feedDescription;
-(NSString *)globalImageURL;
-(NSString *)updatedFeedURL;
-(NSString *)showType;
-(void)setFeedDescription:(NSString *)arg1 ;
-(void)setGlobalImageURL:(NSString *)arg1 ;
-(void)setUpdatedFeedURL:(NSString *)arg1 ;
-(void)setShowType:(NSString *)arg1 ;
@end

