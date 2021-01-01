/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PodcastsKit/PodcastsKit-Structs.h>
@class NSMutableArray;

@interface MTExtensionPlaybackController : NSObject {

	NSMutableArray* _magicMomentCompletionHandlers;

}

@property (nonatomic,retain) NSMutableArray * magicMomentCompletionHandlers;              //@synthesize magicMomentCompletionHandlers=_magicMomentCompletionHandlers - In the implementation block
+(void)setQueueWithPlaybackRequestIdentifier:(id)arg1 startPlayback:(BOOL)arg2 assetInfo:(id)arg3 requesterSharedUserId:(id)arg4 sharedUserIdFromPlayableITunesAccount:(id)arg5 completion:(/*^block*/id)arg6 ;
+(void)setQueueWithPlaybackRequestIdentifier:(id)arg1 startPlayback:(BOOL)arg2 assetInfo:(id)arg3 requesterSharedUserId:(id)arg4 sharedUserIdFromPlayableITunesAccount:(id)arg5 mrCompletion:(/*^block*/id)arg6 ;
+(void)setQueueWithPlaybackRequestIdentifier:(id)arg1 assetInfo:(id)arg2 requesterSharedUserId:(id)arg3 sharedUserIdFromPlayableITunesAccount:(id)arg4 mrCompletion:(/*^block*/id)arg5 ;
+(void)_setPlaybackQueueWithIdentifier:(id)arg1 startPlayback:(BOOL)arg2 assetInfo:(id)arg3 requesterSharedUserId:(id)arg4 sharedUserIdFromPlayableITunesAccount:(id)arg5 playerID:(id)arg6 mrCompletion:(/*^block*/id)arg7 ;
+(void)getNowPlayingInfoForMagicMomentInfoCenterWithCompletion:(/*^block*/id)arg1 ;
+(MRSystemAppPlaybackQueueRef)playbackQueueForIdentifier:(id)arg1 startPlayback:(BOOL)arg2 assetInfo:(id)arg3 ;
+(void)setQueueWithPlaybackRequestIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)setQueueWithPlaybackRequestIdentifier:(id)arg1 mrCompletion:(/*^block*/id)arg2 ;
-(id)init;
-(void)_playbackQueueChangedNotification:(id)arg1 ;
-(NSMutableArray *)magicMomentCompletionHandlers;
-(void)_getNowPlayingInfoAndCallPendingCompletions;
-(void)populateMagicMomentInfoCenterWithPlaybackRequestIdentifier:(id)arg1 mrCompletion:(/*^block*/id)arg2 ;
-(void)setMagicMomentCompletionHandlers:(NSMutableArray *)arg1 ;
@end

