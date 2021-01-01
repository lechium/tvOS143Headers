/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAMPMediaItem.h>

@class NSString;

@interface SAMPEpisode : SAMPMediaItem

@property (assign,nonatomic) long long episodeNumber; 
@property (assign,nonatomic) long long seasonNumber; 
@property (assign,nonatomic) long long showEpisodesCount; 
@property (nonatomic,copy) NSString * showName; 
+(id)episode;
+(id)episodeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(long long)seasonNumber;
-(void)setSeasonNumber:(long long)arg1 ;
-(long long)episodeNumber;
-(void)setEpisodeNumber:(long long)arg1 ;
-(id)encodedClassName;
-(long long)showEpisodesCount;
-(void)setShowEpisodesCount:(long long)arg1 ;
-(NSString *)showName;
-(void)setShowName:(NSString *)arg1 ;
@end

