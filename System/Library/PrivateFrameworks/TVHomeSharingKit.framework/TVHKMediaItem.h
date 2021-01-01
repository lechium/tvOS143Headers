/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKMediaEntity.h>

@class NSString, TVHKMediaEntityIdentifier, NSNumber, _TVContentRating, NSValue, TVHKGaplessConfiguration, NSDate, TVHKMediaItemCredits;

@interface TVHKMediaItem : TVHKMediaEntity

@property (nonatomic,copy,readonly) NSString * artistTitle; 
@property (nonatomic,copy,readonly) NSString * sortArtistTitle; 
@property (nonatomic,copy,readonly) NSString * albumArtistTitle; 
@property (nonatomic,copy,readonly) NSString * sortAlbumArtistTitle; 
@property (nonatomic,copy,readonly) TVHKMediaEntityIdentifier * albumArtistIdentifier; 
@property (nonatomic,copy,readonly) NSString * composerTitle; 
@property (nonatomic,copy,readonly) NSString * sortComposerTitle; 
@property (nonatomic,copy,readonly) NSString * showTitle; 
@property (nonatomic,copy,readonly) NSString * sortShowTitle; 
@property (nonatomic,copy,readonly) TVHKMediaEntityIdentifier * showIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * episodeNumber; 
@property (nonatomic,copy,readonly) NSNumber * discNumber; 
@property (nonatomic,copy,readonly) NSNumber * trackNumber; 
@property (nonatomic,copy,readonly) NSNumber * videoQuality; 
@property (nonatomic,readonly) _TVContentRating * contentRating; 
@property (nonatomic,copy,readonly) NSString * format; 
@property (nonatomic,copy,readonly) NSValue * dimensions; 
@property (nonatomic,copy,readonly) NSNumber * storeID; 
@property (nonatomic,copy,readonly) NSNumber * storefrontID; 
@property (nonatomic,copy,readonly) NSNumber * startTime; 
@property (nonatomic,copy,readonly) NSNumber * stopTime; 
@property (nonatomic,copy,readonly) NSNumber * volumeNormalization; 
@property (nonatomic,readonly) TVHKGaplessConfiguration * gaplessConfiguration; 
@property (nonatomic,copy,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) NSDate * modifiedDate; 
@property (nonatomic,copy,readonly) NSDate * lastPlayedDate; 
@property (nonatomic,readonly) BOOL supportsBookmark; 
@property (nonatomic,copy,readonly) NSNumber * DRMKeyID; 
@property (nonatomic,copy,readonly) NSNumber * DRMUserID; 
@property (nonatomic,copy,readonly) NSString * studio; 
@property (nonatomic,readonly) TVHKMediaItemCredits * credits; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSDate * rentalPlaybackStartDate; 
@property (nonatomic,copy) NSNumber * bookmark; 
@property (nonatomic,copy) NSNumber * hasBeenPlayed; 
@property (nonatomic,copy) NSNumber * playCount; 
@property (nonatomic,copy) NSNumber * skipCount; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)keyPathsForValuesAffectingPlayedState;
-(NSNumber *)startTime;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(NSDate *)creationDate;
-(NSString *)format;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSNumber *)storeID;
-(NSNumber *)stopTime;
-(void)setPlayCount:(NSNumber *)arg1 ;
-(NSNumber *)playCount;
-(_TVContentRating *)contentRating;
-(NSValue *)dimensions;
-(NSString *)showTitle;
-(id)releaseDate;
-(NSNumber *)episodeNumber;
-(NSNumber *)discNumber;
-(NSNumber *)trackNumber;
-(NSString *)studio;
-(NSDate *)lastPlayedDate;
-(NSNumber *)bookmark;
-(void)setBookmark:(NSNumber *)arg1 ;
-(NSNumber *)videoQuality;
-(NSNumber *)skipCount;
-(void)setSkipCount:(NSNumber *)arg1 ;
-(NSNumber *)storefrontID;
-(NSDate *)rentalPlaybackStartDate;
-(void)setRentalPlaybackStartDate:(NSDate *)arg1 ;
-(NSNumber *)volumeNormalization;
-(NSNumber *)hasBeenPlayed;
-(void)setHasBeenPlayed:(NSNumber *)arg1 ;
-(NSDate *)modifiedDate;
-(TVHKMediaItemCredits *)credits;
-(NSNumber *)DRMKeyID;
-(NSNumber *)DRMUserID;
-(TVHKMediaEntityIdentifier *)albumArtistIdentifier;
-(NSString *)sortShowTitle;
-(TVHKMediaEntityIdentifier *)showIdentifier;
-(TVHKGaplessConfiguration *)gaplessConfiguration;
-(BOOL)supportsBookmark;
-(unsigned long long)playedState;
-(void)setPlayedState:(unsigned long long)arg1 ;
-(NSString *)artistTitle;
-(NSString *)sortArtistTitle;
-(NSString *)albumArtistTitle;
-(NSString *)composerTitle;
-(NSString *)sortAlbumArtistTitle;
-(NSString *)sortComposerTitle;
@end

