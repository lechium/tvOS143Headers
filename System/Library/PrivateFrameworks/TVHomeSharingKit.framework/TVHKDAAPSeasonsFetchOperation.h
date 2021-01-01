/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKDAAPShowsBaseFetchOperation.h>

@class TVHKMediaEntityIdentifier;

@interface TVHKDAAPSeasonsFetchOperation : TVHKDAAPShowsBaseFetchOperation {

	TVHKMediaEntityIdentifier* _sourceShowIdentifier;

}

@property (nonatomic,copy) TVHKMediaEntityIdentifier * sourceShowIdentifier;              //@synthesize sourceShowIdentifier=_sourceShowIdentifier - In the implementation block
-(id)initWithRequest:(id)arg1 mediaServerIdentifier:(id)arg2 sessionState:(id)arg3 requestSession:(id)arg4 fetchCache:(id)arg5 ;
-(id)_episodesFetchRequest;
-(id)_mediaEntityCacheWithFetchCache:(id)arg1 ;
-(id)_mediaEntitiesWithFetchedEpisodes:(id)arg1 andMediaEntityCache:(id)arg2 ;
-(TVHKMediaEntityIdentifier *)sourceShowIdentifier;
-(void)setSourceShowIdentifier:(TVHKMediaEntityIdentifier *)arg1 ;
@end

