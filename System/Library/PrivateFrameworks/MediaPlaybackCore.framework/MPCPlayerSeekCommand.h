/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol MPCPlayerSeekCommand <MPCPlayerCommand>
@property (nonatomic,copy,readonly) NSArray * preferredBackwardJumpIntervals; 
@property (nonatomic,copy,readonly) NSArray * preferredForwardJumpIntervals; 
@required
-(id)endSeek;
-(id)beginSeekWithDirection:(long long)arg1;
-(NSArray *)preferredBackwardJumpIntervals;
-(id)jumpByInterval:(double)arg1;
-(id)changePositionToElapsedInterval:(double)arg1;
-(NSArray *)preferredForwardJumpIntervals;

@end
