/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol MPCPlayerResetTracklistCommand <MPCPlayerCommand>
@property (nonatomic,readonly) NSArray * specializedIntents; 
@required
-(id)clear;
-(id)replaceWithPlaybackIntent:(id)arg1 replaceIntent:(long long)arg2;
-(id)clearUpNextItems;
-(id)replaceWithPlaybackIntent:(id)arg1;
-(NSArray *)specializedIntents;

@end

