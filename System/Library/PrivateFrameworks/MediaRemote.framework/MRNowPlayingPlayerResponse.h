/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MRPlayerPath, NSArray, MRPlaybackQueue, NSDate;

@interface MRNowPlayingPlayerResponse : NSObject <NSCopying> {

	unsigned _playbackState;
	MRPlayerPath* _playerPath;
	NSArray* _supportedCommands;
	MRPlaybackQueue* _playbackQueue;
	NSDate* _lastPlayingDate;

}

@property (nonatomic,copy) MRPlayerPath * playerPath;                    //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) NSArray * supportedCommands;                  //@synthesize supportedCommands=_supportedCommands - In the implementation block
@property (nonatomic,copy) MRPlaybackQueue * playbackQueue;              //@synthesize playbackQueue=_playbackQueue - In the implementation block
@property (nonatomic,copy) NSDate * lastPlayingDate;                     //@synthesize lastPlayingDate=_lastPlayingDate - In the implementation block
@property (assign,nonatomic) unsigned playbackState;                     //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayedRecently; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(MRPlayerPath *)playerPath;
-(void)setPlayerPath:(MRPlayerPath *)arg1 ;
-(void)setSupportedCommands:(NSArray *)arg1 ;
-(NSArray *)supportedCommands;
-(unsigned)playbackState;
-(MRPlaybackQueue *)playbackQueue;
-(void)setPlaybackQueue:(MRPlaybackQueue *)arg1 ;
-(void)setPlaybackState:(unsigned)arg1 ;
-(BOOL)hasPlayedRecently;
-(NSDate *)lastPlayingDate;
-(void)setLastPlayingDate:(NSDate *)arg1 ;
@end

