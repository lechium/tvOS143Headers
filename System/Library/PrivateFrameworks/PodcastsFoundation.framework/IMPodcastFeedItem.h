/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate;

@interface IMPodcastFeedItem : NSObject {

	BOOL _isExplicit;
	BOOL _preferredCategoryFound;
	unsigned _trackNum;
	NSString* _author;
	unsigned long long _byteSize;
	NSString* _category;
	double _duration;
	NSString* _enclosureParameterString;
	NSString* _enclosureURL;
	NSString* _guid;
	NSString* _itemDescription;
	NSString* _itemDescriptionSourceElement;
	NSDate* _pubDate;
	NSString* _title;
	NSString* _uti;
	NSString* _itunesTitle;
	NSString* _itemSummary;
	NSString* _itemSummarySourceElement;
	long long _seasonNumber;
	long long _episodeNumber;
	NSString* _episodeType;
	NSString* _webpageURL;

}

@property (assign,nonatomic) BOOL preferredCategoryFound;                          //@synthesize preferredCategoryFound=_preferredCategoryFound - In the implementation block
@property (nonatomic,retain) NSString * author;                                    //@synthesize author=_author - In the implementation block
@property (assign,nonatomic) unsigned long long byteSize;                          //@synthesize byteSize=_byteSize - In the implementation block
@property (nonatomic,retain) NSString * category;                                  //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) double duration;                                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSString * enclosureParameterString;                  //@synthesize enclosureParameterString=_enclosureParameterString - In the implementation block
@property (nonatomic,retain) NSString * enclosureURL;                              //@synthesize enclosureURL=_enclosureURL - In the implementation block
@property (assign,nonatomic) BOOL isExplicit;                                      //@synthesize isExplicit=_isExplicit - In the implementation block
@property (nonatomic,retain) NSString * guid;                                      //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSString * itemDescription;                           //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,retain) NSString * itemDescriptionSourceElement;              //@synthesize itemDescriptionSourceElement=_itemDescriptionSourceElement - In the implementation block
@property (nonatomic,retain) NSDate * pubDate;                                     //@synthesize pubDate=_pubDate - In the implementation block
@property (nonatomic,retain) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned trackNum;                                    //@synthesize trackNum=_trackNum - In the implementation block
@property (nonatomic,retain) NSString * uti;                                       //@synthesize uti=_uti - In the implementation block
@property (nonatomic,retain) NSString * itunesTitle;                               //@synthesize itunesTitle=_itunesTitle - In the implementation block
@property (nonatomic,retain) NSString * itemSummary;                               //@synthesize itemSummary=_itemSummary - In the implementation block
@property (nonatomic,retain) NSString * itemSummarySourceElement;                  //@synthesize itemSummarySourceElement=_itemSummarySourceElement - In the implementation block
@property (assign,nonatomic) long long seasonNumber;                               //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (assign,nonatomic) long long episodeNumber;                              //@synthesize episodeNumber=_episodeNumber - In the implementation block
@property (nonatomic,retain) NSString * episodeType;                               //@synthesize episodeType=_episodeType - In the implementation block
@property (nonatomic,retain) NSString * webpageURL;                                //@synthesize webpageURL=_webpageURL - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(double)duration;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)webpageURL;
-(void)setWebpageURL:(NSString *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setByteSize:(unsigned long long)arg1 ;
-(unsigned long long)byteSize;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(NSString *)itemDescription;
-(NSString *)uti;
-(void)setUti:(NSString *)arg1 ;
-(long long)seasonNumber;
-(void)setSeasonNumber:(long long)arg1 ;
-(NSString *)episodeType;
-(long long)episodeNumber;
-(void)setEpisodeType:(NSString *)arg1 ;
-(void)setEpisodeNumber:(long long)arg1 ;
-(BOOL)isExplicit;
-(void)setIsExplicit:(BOOL)arg1 ;
-(void)setItemDescription:(NSString *)arg1 ;
-(NSString *)enclosureURL;
-(NSString *)itunesTitle;
-(unsigned)trackNum;
-(NSDate *)pubDate;
-(void)setEnclosureURL:(NSString *)arg1 ;
-(void)setItunesTitle:(NSString *)arg1 ;
-(void)setTrackNum:(unsigned)arg1 ;
-(void)setPubDate:(NSDate *)arg1 ;
-(NSString *)enclosureParameterString;
-(NSString *)itemDescriptionSourceElement;
-(NSString *)itemSummary;
-(NSString *)itemSummarySourceElement;
-(void)setEnclosureParameterString:(NSString *)arg1 ;
-(void)setItemDescriptionSourceElement:(NSString *)arg1 ;
-(void)setItemSummary:(NSString *)arg1 ;
-(void)setItemSummarySourceElement:(NSString *)arg1 ;
-(BOOL)preferredCategoryFound;
-(void)setPreferredCategoryFound:(BOOL)arg1 ;
@end

