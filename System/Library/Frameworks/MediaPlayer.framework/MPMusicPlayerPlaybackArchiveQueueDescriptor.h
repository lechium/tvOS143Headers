/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMusicPlayerQueueDescriptor.h>

@class MPPlaybackArchive;

@interface MPMusicPlayerPlaybackArchiveQueueDescriptor : MPMusicPlayerQueueDescriptor {

	MPPlaybackArchive* _playbackArchive;

}

@property (nonatomic,copy,readonly) MPPlaybackArchive * playbackArchive;              //@synthesize playbackArchive=_playbackArchive - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPlaybackArchive:(id)arg1 ;
-(MPPlaybackArchive *)playbackArchive;
@end

