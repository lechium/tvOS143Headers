/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MPSectionedCollection;

@interface MPCModelRadioGetTracksResponse : NSObject {

	long long _tracklistAction;
	MPSectionedCollection* _tracks;

}

@property (nonatomic,readonly) long long tracklistAction;                        //@synthesize tracklistAction=_tracklistAction - In the implementation block
@property (nonatomic,copy,readonly) MPSectionedCollection * tracks;              //@synthesize tracks=_tracks - In the implementation block
-(MPSectionedCollection *)tracks;
-(id)initWithTracks:(id)arg1 tracklistAction:(long long)arg2 ;
-(long long)tracklistAction;
@end
