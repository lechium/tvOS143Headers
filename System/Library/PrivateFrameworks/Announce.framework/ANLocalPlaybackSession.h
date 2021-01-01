/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ANLocalPlaybackSessionServiceInterfaceDelegate.h>

@protocol ANLocalPlaybackSessionDelegate;
@class NSXPCConnection, NSDictionary, NSString;

@interface ANLocalPlaybackSession : NSObject <ANLocalPlaybackSessionServiceInterfaceDelegate> {

	id<ANLocalPlaybackSessionDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSDictionary * lastPlayedAnnouncementInfo; 
@property (nonatomic,readonly) unsigned long long playbackState; 
@property (assign,nonatomic,__weak) id<ANLocalPlaybackSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<ANLocalPlaybackSessionDelegate>)delegate;
-(void)setDelegate:(id<ANLocalPlaybackSessionDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(unsigned long long)playbackState;
-(void)lastPlayedAnnouncementInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)announcementsWillStartPlaying:(unsigned long long)arg1 ;
-(void)announcementsStateUpdate:(unsigned long long)arg1 ;
-(void)playAnnouncementsWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)playAnnouncementsWithOptions:(unsigned long long)arg1 startingAt:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)playAnnouncementsWithIDs:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)stopPlayingAnnouncementsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)nextAnnouncementWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)previousAnnouncementWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)playAnnouncements;
-(void)stopPlayingAnnouncements;
-(NSDictionary *)lastPlayedAnnouncementInfo;
@end

