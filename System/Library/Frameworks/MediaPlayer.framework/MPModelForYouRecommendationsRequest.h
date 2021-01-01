/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPStoreModelRequest.h>

@class NSURL;

@interface MPModelForYouRecommendationsRequest : MPStoreModelRequest {

	BOOL _withSocial;
	BOOL _withPlainEditorialNotes;
	BOOL _withRecentlyPlayed;
	long long _filteringPolicy;
	long long _requestEndpoint;
	long long _mode;
	long long _types;
	long long _displayFilterKinds;
	NSURL* _customForYouURL;

}

@property (assign,nonatomic) long long filteringPolicy;                 //@synthesize filteringPolicy=_filteringPolicy - In the implementation block
@property (assign,nonatomic) long long requestEndpoint;                 //@synthesize requestEndpoint=_requestEndpoint - In the implementation block
@property (assign,nonatomic) long long mode;                            //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) long long types;                           //@synthesize types=_types - In the implementation block
@property (assign,nonatomic) BOOL withSocial;                           //@synthesize withSocial=_withSocial - In the implementation block
@property (assign,nonatomic) BOOL withPlainEditorialNotes;              //@synthesize withPlainEditorialNotes=_withPlainEditorialNotes - In the implementation block
@property (assign,nonatomic) long long displayFilterKinds;              //@synthesize displayFilterKinds=_displayFilterKinds - In the implementation block
@property (assign,nonatomic) BOOL withRecentlyPlayed;                   //@synthesize withRecentlyPlayed=_withRecentlyPlayed - In the implementation block
@property (nonatomic,copy) NSURL * customForYouURL;                     //@synthesize customForYouURL=_customForYouURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allSupportedItemProperties;
+(id)allSupportedSectionProperties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(long long)types;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(long long)filteringPolicy;
-(void)setFilteringPolicy:(long long)arg1 ;
-(long long)requestEndpoint;
-(void)setRequestEndpoint:(long long)arg1 ;
-(void)setTypes:(long long)arg1 ;
-(BOOL)withSocial;
-(void)setWithSocial:(BOOL)arg1 ;
-(BOOL)withPlainEditorialNotes;
-(void)setWithPlainEditorialNotes:(BOOL)arg1 ;
-(long long)displayFilterKinds;
-(void)setDisplayFilterKinds:(long long)arg1 ;
-(BOOL)withRecentlyPlayed;
-(void)setWithRecentlyPlayed:(BOOL)arg1 ;
-(NSURL *)customForYouURL;
-(void)setCustomForYouURL:(NSURL *)arg1 ;
@end

