/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class NSObject;

@interface TLAlertContext : NSObject {

	BOOL _beingInterrupted;
	long long _playbackBackEnd;
	NSObject*<OS_dispatch_source> _timeoutTimerSource;

}

@property (assign,nonatomic) long long playbackBackEnd;                                     //@synthesize playbackBackEnd=_playbackBackEnd - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimerSource;              //@synthesize timeoutTimerSource=_timeoutTimerSource - In the implementation block
@property (assign,getter=isBeingInterrupted,nonatomic) BOOL beingInterrupted;               //@synthesize beingInterrupted=_beingInterrupted - In the implementation block
-(long long)playbackBackEnd;
-(void)setPlaybackBackEnd:(long long)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimerSource;
-(void)setTimeoutTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)isBeingInterrupted;
-(void)setBeingInterrupted:(BOOL)arg1 ;
@end
