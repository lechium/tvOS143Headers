/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSNumber, NSString, NSDate;

@interface ICStoreFinanceItemMetadata : NSObject <NSCopying> {

	NSDictionary* _metadataDictionary;
	NSNumber* _playlistID;

}

@property (nonatomic,copy,readonly) NSDictionary * metadataDictionary;              //@synthesize metadataDictionary=_metadataDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * itemAdamID; 
@property (nonatomic,copy,readonly) NSNumber * itemCloudID; 
@property (nonatomic,copy,readonly) NSString * itemName; 
@property (nonatomic,copy,readonly) NSString * itemSortName; 
@property (nonatomic,copy,readonly) NSString * artistName; 
@property (nonatomic,copy,readonly) NSString * artistSortName; 
@property (nonatomic,copy,readonly) NSNumber * artistID; 
@property (nonatomic,copy,readonly) NSString * playlistName; 
@property (nonatomic,copy,readonly) NSString * albumSortName; 
@property (nonatomic,copy,readonly) NSString * playlistArtistName; 
@property (nonatomic,copy,readonly) NSString * composerName; 
@property (nonatomic,copy,readonly) NSString * composerSortName; 
@property (nonatomic,copy,readonly) NSString * genre; 
@property (nonatomic,copy,readonly) NSNumber * genreID; 
@property (nonatomic,copy,readonly) NSNumber * playlistID;                          //@synthesize playlistID=_playlistID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * discCount; 
@property (nonatomic,copy,readonly) NSNumber * discNumber; 
@property (nonatomic,copy,readonly) NSNumber * trackCount; 
@property (nonatomic,copy,readonly) NSNumber * trackNumber; 
@property (nonatomic,copy,readonly) NSNumber * duration; 
@property (nonatomic,copy,readonly) NSNumber * isExplicit; 
@property (nonatomic,copy,readonly) NSNumber * year; 
@property (nonatomic,copy,readonly) NSNumber * bitrate; 
@property (nonatomic,copy,readonly) NSString * comments; 
@property (nonatomic,copy,readonly) NSDate * dateAdded; 
@property (nonatomic,copy,readonly) NSNumber * drmVersionNumber; 
@property (nonatomic,copy,readonly) NSString * fileExtension; 
@property (nonatomic,copy,readonly) NSNumber * isGapless; 
@property (nonatomic,copy,readonly) NSNumber * isMasteredForITunes; 
@property (nonatomic,copy,readonly) NSString * kind; 
@property (nonatomic,copy,readonly) NSNumber * sampleRate; 
@property (nonatomic,copy,readonly) NSNumber * versionRestrictions; 
@property (nonatomic,copy,readonly) NSString * xid; 
@property (nonatomic,copy,readonly) NSNumber * isCompilation; 
@property (nonatomic,copy,readonly) NSString * copyright; 
@property (nonatomic,copy,readonly) NSNumber * rank; 
@property (nonatomic,copy,readonly) NSDate * releaseDate; 
@property (nonatomic,copy,readonly) NSNumber * storefrontID; 
@property (nonatomic,copy,readonly) NSNumber * vendorID; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)year;
-(NSNumber *)duration;
-(NSString *)kind;
-(NSNumber *)rank;
-(NSNumber *)vendorID;
-(NSNumber *)sampleRate;
-(NSString *)comments;
-(NSString *)copyright;
-(NSString *)genre;
-(NSString *)fileExtension;
-(NSString *)artistName;
-(NSString *)playlistName;
-(NSDate *)releaseDate;
-(NSString *)itemName;
-(NSNumber *)isCompilation;
-(NSString *)composerName;
-(NSNumber *)itemCloudID;
-(NSNumber *)artistID;
-(NSNumber *)discNumber;
-(NSNumber *)trackNumber;
-(NSDate *)dateAdded;
-(NSNumber *)bitrate;
-(NSDictionary *)metadataDictionary;
-(id)initWithMetadataDictionary:(id)arg1 ;
-(NSNumber *)trackCount;
-(NSNumber *)itemAdamID;
-(NSString *)itemSortName;
-(NSString *)artistSortName;
-(NSString *)albumSortName;
-(NSString *)playlistArtistName;
-(NSString *)composerSortName;
-(NSNumber *)genreID;
-(id)albumID;
-(NSNumber *)discCount;
-(NSNumber *)isExplicit;
-(NSNumber *)drmVersionNumber;
-(NSNumber *)isGapless;
-(NSNumber *)isMasteredForITunes;
-(NSNumber *)versionRestrictions;
-(NSString *)xid;
-(NSNumber *)storefrontID;
-(NSNumber *)playlistID;
@end

