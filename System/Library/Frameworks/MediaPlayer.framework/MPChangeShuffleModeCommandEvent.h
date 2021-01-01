/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPChangeShuffleModeCommandEvent : MPRemoteCommandEvent {

	BOOL _preservesShuffleMode;
	long long _shuffleType;

}

@property (nonatomic,readonly) long long shuffleType;                  //@synthesize shuffleType=_shuffleType - In the implementation block
@property (nonatomic,readonly) BOOL preservesShuffleMode;              //@synthesize preservesShuffleMode=_preservesShuffleMode - In the implementation block
-(BOOL)preservesShuffleMode;
-(long long)shuffleType;
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
@end

