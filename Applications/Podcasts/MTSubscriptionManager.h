//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTBaseFeedManager.h"

@class NSMutableDictionary;

@interface MTSubscriptionManager : MTBaseFeedManager
{
    unsigned long long _maxSubscribeDownloadForSerialWithSeasons;	// 8 = 0x8
    NSMutableDictionary *_feedUrlsToParams;	// 16 = 0x10
}

+ (_Bool)isSubscribing;	// IMP=0x00000001000ec510
- (void).cxx_destruct;	// IMP=0x00000001000ec538
@property(readonly, nonatomic) NSMutableDictionary *feedUrlsToParams; // @synthesize feedUrlsToParams=_feedUrlsToParams;
@property(readonly, nonatomic) unsigned long long maxSubscribeDownloadForSerialWithSeasons; // @synthesize maxSubscribeDownloadForSerialWithSeasons=_maxSubscribeDownloadForSerialWithSeasons;
- (void)showSubscriptionFailureDialog:(id)arg1;	// IMP=0x00000001000ec2b8
- (void)removeSubscribeParamsForFeedUrl:(id)arg1;	// IMP=0x00000001000ec208
- (void)addSubscribeParams:(id)arg1 forFeedUrl:(id)arg2;	// IMP=0x00000001000ec134
- (id)subscribeParamsForFeedUrl:(id)arg1;	// IMP=0x00000001000ec070
- (void)subscribeToPodcastWithParams:(id)arg1;	// IMP=0x00000001000ebd68
- (void)task:(id)arg1 didFailWithError:(id)arg2 orStatusCode:(long long)arg3;	// IMP=0x00000001000ebac8
- (_Bool)_addEpisode:(id)arg1 toMyEpisodesInPodcast:(id)arg2 persist:(_Bool)arg3;	// IMP=0x00000001000eb890
- (_Bool)_addNewestEpisodeToPodcast:(id)arg1;	// IMP=0x00000001000eb6d8
- (_Bool)_addLatestSeasonForSerialWithNoSeasonsPodcast:(id)arg1;	// IMP=0x00000001000eb370
- (_Bool)_addLatestSeasonForSerialWithSeasonsPodcast:(id)arg1;	// IMP=0x00000001000eb18c
- (_Bool)_addLatestSeasonToPodcast:(id)arg1;	// IMP=0x00000001000eafb8
- (_Bool)processFeedWithData:(id)arg1 requestUrl:(id)arg2 useBackgroundFetch:(_Bool)arg3;	// IMP=0x00000001000ea4b0
- (id)init;	// IMP=0x00000001000ea434

@end

