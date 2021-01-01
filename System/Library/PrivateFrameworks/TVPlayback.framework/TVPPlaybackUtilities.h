/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TVPPlaybackUtilities : NSObject
+(double)playedThresholdTimeForDuration:(double)arg1 ;
+(long long)blueDotStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(BOOL)arg3 playCount:(unsigned long long)arg4 ;
+(long long)blueDotStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(BOOL)arg3 playCount:(unsigned long long)arg4 respectPlayCount:(BOOL)arg5 ;
+(double)suggestedBookmarkTimeForElapsedTime:(double)arg1 duration:(double)arg2 ;
+(double)suggestedBookmarkTimeForElapsedTime:(double)arg1 duration:(double)arg2 playedThreshold:(id)arg3 ;
@end

