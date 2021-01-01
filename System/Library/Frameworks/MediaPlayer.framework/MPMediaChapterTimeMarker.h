/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPTimeMarker.h>

@class NSArray;

@interface MPMediaChapterTimeMarker : MPTimeMarker {

	unsigned long long _chapterIndex;
	NSArray* _chapters;
	BOOL _hasArtworkAtPlaybackTime;

}

@property (assign,nonatomic) unsigned long long chapterIndex;              //@synthesize chapterIndex=_chapterIndex - In the implementation block
@property (nonatomic,retain) NSArray * chapters;                           //@synthesize chapters=_chapters - In the implementation block
@property (assign,nonatomic) BOOL hasArtworkAtPlaybackTime;                //@synthesize hasArtworkAtPlaybackTime=_hasArtworkAtPlaybackTime - In the implementation block
-(BOOL)hasArtworkAtPlaybackTime;
-(NSArray *)chapters;
-(unsigned long long)chapterIndex;
-(void)setChapterIndex:(unsigned long long)arg1 ;
-(void)setChapters:(NSArray *)arg1 ;
-(void)setHasArtworkAtPlaybackTime:(BOOL)arg1 ;
@end
