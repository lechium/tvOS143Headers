/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSString;

@interface MPPlaybackSessionCommandEvent : MPRemoteCommandEvent {

	NSString* _identifier;
	NSString* _revision;
	long long _priority;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * revision;                //@synthesize revision=_revision - In the implementation block
@property (nonatomic,readonly) long long priority;                 //@synthesize priority=_priority - In the implementation block
-(NSString *)identifier;
-(long long)priority;
-(NSString *)revision;
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
@end

