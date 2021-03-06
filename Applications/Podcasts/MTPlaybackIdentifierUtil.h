//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTSingleton.h"

#import "MTPlaybackIdentifierComposing-Protocol.h"

@interface MTPlaybackIdentifierUtil : MTSingleton <MTPlaybackIdentifierComposing>
{
}

+ (id)__queryStringToQueryDictionary:(id)arg1;	// IMP=0x00000001000b2274
+ (id)__stringByRemovingPercentEscapes:(id)arg1;	// IMP=0x00000001000b2234
+ (id)__stringWithPercentEscape:(id)arg1;	// IMP=0x00000001000b21f0
- (long long)_episodeContextSortFromString:(id)arg1;	// IMP=0x00000001000b219c
- (long long)_episodeContextFromString:(id)arg1;	// IMP=0x00000001000b2148
- (unsigned long long)_playReasonFromString:(id)arg1;	// IMP=0x00000001000b20f4
- (long long)_episodeOrderFromString:(id)arg1;	// IMP=0x00000001000b2078
- (id)_playbackRequestIdentifierWithHost:(id)arg1 queryComponents:(id)arg2;	// IMP=0x00000001000b1e08
- (id)_playbackRequestIdentifierWithHost:(id)arg1 queryKey:(id)arg2 value:(id)arg3;	// IMP=0x00000001000b1cf4
- (unsigned long long)_playQueueTypeForRequestURL:(id)arg1;	// IMP=0x00000001000b1b4c
- (id)requestIdentifierForPlayerItem:(id)arg1;	// IMP=0x00000001000b1630
- (void)fetchPlayerItemsForPlaybackQueueRequestIdentifiers:(id)arg1 initiatedByAnotherUser:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b075c
- (void)fetchPlayerItemsForPlaybackQueueRequestIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b0708
- (struct _MRSystemAppPlaybackQueue *)playbackQueueWithAccountInfoForPlayerItems:(id)arg1;	// IMP=0x00000001000b053c
- (id)requestIdentifiersForManifest:(id)arg1 queueStatus:(out unsigned long long *)arg2;	// IMP=0x00000001000aff08
- (struct _MRSystemAppPlaybackQueue *)playbackQueueWithAccountInfoForManifest:(id)arg1 queueStatus:(out unsigned long long *)arg2;	// IMP=0x00000001000afeb0
- (struct _MRSystemAppPlaybackQueue *)playbackQueueWithDsid:(id)arg1 forIdentifiers:(id)arg2;	// IMP=0x00000001000afe00
- (struct _MRSystemAppPlaybackQueue *)playbackQueueWithAccountInfoForIdentifiers:(id)arg1;	// IMP=0x00000001000afd58
- (id)podcastUuidForSetPlaybackQueueRequestIdentifier:(id)arg1;	// IMP=0x00000001000af88c
- (id)episodeUuidForSetPlaybackQueueRequestIdentifier:(id)arg1;	// IMP=0x00000001000af54c
- (id)universalPlaybackQueueRequestIdentifierForEpisode:(id)arg1;	// IMP=0x00000001000af124
- (id)universalPlaybackQueueIdentifiersForStationUuid:(id)arg1 limit:(long long)arg2 queueStatus:(out unsigned long long *)arg3;	// IMP=0x00000001000aed10
- (id)universalPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeUuid:(id)arg2 episodeGuid:(id)arg3 episodeStoreId:(long long)arg4 podcastFeedUrl:(id)arg5;	// IMP=0x00000001000aeaec
- (id)universalPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeGuid:(id)arg2 episodeStoreId:(long long)arg3 podcastFeedUrl:(id)arg4;	// IMP=0x00000001000aea58
- (id)localPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeUuid:(id)arg2;	// IMP=0x00000001000ae9e8
- (id)localPlaybackQueueIdentifierForStationUuid:(id)arg1;	// IMP=0x00000001000ae9d8
- (id)playbackQueueIdentifierForSubscribeToPodcastFeedUrl:(id)arg1;	// IMP=0x00000001000ae940
- (id)playbackQueueIdentifierForSubscribeToPodcast:(id)arg1;	// IMP=0x00000001000ae920
- (id)playbackQueueIdentifierForPodcastAdamId:(id)arg1 sampPlaybackOrder:(id)arg2;	// IMP=0x00000001000ae800
- (id)_universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(long long)arg6 context:(long long)arg7 contextSortType:(long long)arg8 sampPlaybackOrder:(id)arg9;	// IMP=0x00000001000ae284
- (id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(long long)arg6 context:(long long)arg7 contextSortType:(long long)arg8;	// IMP=0x00000001000ae1a0
- (id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(long long)arg6 sampPlaybackOrder:(id)arg7;	// IMP=0x00000001000ae0bc
- (id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 sampPlaybackOrder:(id)arg4;	// IMP=0x00000001000ae018
- (id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3;	// IMP=0x00000001000adf88
- (id)universalPlaybackQueueIdentifierForPodcastFeedUrl:(id)arg1 podcastStoreId:(long long)arg2 episodeGuid:(id)arg3 episodeStoreId:(long long)arg4 sampPlaybackOrder:(id)arg5;	// IMP=0x00000001000adee0
- (id)localPlaybackQueueIdentifierForPodcastUuid:(id)arg1 episodeUuid:(id)arg2 sampPlaybackOrder:(id)arg3;	// IMP=0x00000001000addfc
- (id)localPlaybackQueueIdentifierForPodcastUuid:(id)arg1 sampPlaybackOrder:(id)arg2;	// IMP=0x00000001000add94
- (id)playbackQueueIdentifierForEpisodeAdamId:(id)arg1;	// IMP=0x00000001000add74
- (id)playbackQueueIdentifierForPlayMyPodcastsWithPlaybackOrder:(id)arg1;	// IMP=0x00000001000adce4
- (_Bool)isUniversalPlaybackIdentifierURLString:(id)arg1;	// IMP=0x00000001000adc60
- (_Bool)isSubscribeCommandURLString:(id)arg1;	// IMP=0x00000001000adbdc
- (_Bool)isLocalSetPlaybackQueueURLString:(id)arg1;	// IMP=0x00000001000ada78
- (id)playbackRequestURLWithDSID:(id)arg1 baseRequestURLString:(id)arg2;	// IMP=0x00000001000ad78c
- (id)playbackRequestURLWithPlayReason:(unsigned long long)arg1 baseRequestURLString:(id)arg2;	// IMP=0x00000001000ad4e8

@end

