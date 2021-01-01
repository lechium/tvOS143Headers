/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaMiningKit/CLSDBCache.h>

@interface PGCurationCache : CLSDBCache
+(id)defaultCacheName;
-(id)dataModelName;
-(id)initAtURL:(id)arg1 ;
-(void)invalidateCacheForMomentIdentifier:(id)arg1 ;
-(void)invalidateCacheForMomentIdentifier:(id)arg1 precision:(unsigned long long)arg2 ;
-(void)invalidateCacheForEventIdentifiers:(id)arg1 ;
-(void)setCuratedKeyAsset:(id)arg1 forMoment:(id)arg2 options:(id)arg3 ;
-(void)setCuratedAssets:(id)arg1 forMoment:(id)arg2 options:(id)arg3 ;
-(void)setMomentInteresting:(BOOL)arg1 forMoment:(id)arg2 precision:(unsigned long long)arg3 ;
-(void)setMomentInteresting:(BOOL)arg1 withAlternateJunking:(BOOL)arg2 forMoment:(id)arg3 precision:(unsigned long long)arg4 ;
-(void)setContentScore:(double)arg1 forMoment:(id)arg2 precision:(unsigned long long)arg3 ;
-(void)setMeanContentScore:(double)arg1 forMoment:(id)arg2 precision:(unsigned long long)arg3 ;
-(id)curatedAssetIdentifiersForMoment:(id)arg1 options:(id)arg2 ;
-(BOOL)isMomentInteresting:(id)arg1 withAlternateJunking:(BOOL)arg2 precision:(unsigned long long)arg3 isCached:(BOOL*)arg4 ;
-(BOOL)isMomentInteresting:(id)arg1 precision:(unsigned long long)arg2 isCached:(BOOL*)arg3 ;
-(double)contentScoreForMoment:(id)arg1 precision:(unsigned long long)arg2 isCached:(BOOL*)arg3 ;
-(BOOL)_isMomentLocalIdentifierInteresting:(id)arg1 withAlternateJunking:(BOOL)arg2 precision:(unsigned long long)arg3 isCached:(BOOL*)arg4 ;
-(double)contentScoreForMomentLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 isCached:(BOOL*)arg3 ;
-(void)setCuratedAssets:(id)arg1 forCollectionWithIdentifier:(id)arg2 options:(id)arg3 ;
-(id)curatedAssetIdentifiersForCollectionWithIdentifier:(id)arg1 options:(id)arg2 ;
-(void)setCuratedKeyAsset:(id)arg1 forCollectionWithIdentifier:(id)arg2 options:(id)arg3 ;
-(id)curatedKeyAssetIdentifierForCollectionWithIdentifier:(id)arg1 options:(id)arg2 ;
-(id)curatedKeyAssetIdentifierForMoment:(id)arg1 options:(id)arg2 ;
-(void)invalidateCacheForCollectionWithIdentifier:(id)arg1 ;
-(id)_curatedAssetIdentifiersForEventWithIdentifier:(id)arg1 options:(id)arg2 ;
-(void)_setCuratedAssets:(id)arg1 forEventWithIdentifier:(id)arg2 options:(id)arg3 ;
-(id)_curatedKeyAssetIdentifierForEventWithIdentifier:(id)arg1 options:(id)arg2 ;
-(void)_setCuratedKeyAsset:(id)arg1 forEventWithIdentifier:(id)arg2 options:(id)arg3 ;
-(id)_fetchCurationObjectForEntityName:(id)arg1 predicate:(id)arg2 ;
-(void)_setProperties:(id)arg1 forCurationObjectWithEntityName:(id)arg2 eventIdentifier:(id)arg3 precision:(unsigned long long)arg4 predicate:(id)arg5 ;
-(void)_invalidateCacheForEventWithIdentifier:(id)arg1 ;
-(void)_invalidateCacheForEventWithIdentifier:(id)arg1 precision:(unsigned long long)arg2 ;
-(void)_invalidateCacheForEventsWithIdentifiers:(id)arg1 ;
@end

