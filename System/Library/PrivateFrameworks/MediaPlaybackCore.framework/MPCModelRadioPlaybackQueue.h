/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ICRadioPlaybackHistoryStore, ICStoreRequestContext, MPModelRadioStation, _MPCModelRadioPlaybackQueueStationTracksCollection, MPCModelGenericAVItemUserIdentityPropertySet, ICRadioPlaybackHistory, MPSectionedCollection;

@interface MPCModelRadioPlaybackQueue : NSObject {

	ICRadioPlaybackHistoryStore* _playbackHistoryStore;
	ICStoreRequestContext* _storeRequestContext;
	MPModelRadioStation* _radioStation;
	_MPCModelRadioPlaybackQueueStationTracksCollection* _stationTracks;

}

@property (nonatomic,retain) MPCModelGenericAVItemUserIdentityPropertySet * identityPropertySet; 
@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,retain) MPModelRadioStation * radioStation;                                              //@synthesize radioStation=_radioStation - In the implementation block
@property (nonatomic,copy,readonly) ICRadioPlaybackHistory * playbackHistory; 
@property (nonatomic,readonly) MPSectionedCollection * trackModels; 
@property (nonatomic,readonly) MPSectionedCollection * tracks; 
-(MPSectionedCollection *)tracks;
-(long long)numberOfItems;
-(MPModelRadioStation *)radioStation;
-(void)setRadioStation:(MPModelRadioStation *)arg1 ;
-(id)initWithPlaybackContext:(id)arg1 ;
-(MPCModelGenericAVItemUserIdentityPropertySet *)identityPropertySet;
-(void)setIdentityPropertySet:(MPCModelGenericAVItemUserIdentityPropertySet *)arg1 ;
-(id)AVItemAtIndex:(long long)arg1 ;
-(BOOL)isExplicitItemAtIndex:(long long)arg1 ;
-(ICRadioPlaybackHistory *)playbackHistory;
-(long long)removeExplicitItems;
-(void)savePlaybackHistoryWithUpdates:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(MPSectionedCollection *)trackModels;
-(id)trackForItemAtIndex:(long long)arg1 ;
-(void)updateWithPersonalizedResponse:(id)arg1 ;
-(void)savePlaybackHistoryWithUpdates:(/*^block*/id)arg1 ;
-(id)tracksByApplyingTracksResponse:(id)arg1 currentIndex:(long long)arg2 ;
@end

