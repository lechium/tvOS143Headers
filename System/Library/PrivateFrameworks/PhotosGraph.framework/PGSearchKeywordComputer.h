/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PGGraph, PGSearchComputationCache, NSDictionary;

@interface PGSearchKeywordComputer : NSObject {

	PGGraph* _graph;
	PGSearchComputationCache* _searchComputationCache;
	NSDictionary* _personLocalIdentifiersBySocialGroupUUID;

}

@property (nonatomic,readonly) NSDictionary * personLocalIdentifiersBySocialGroupUUID;              //@synthesize personLocalIdentifiersBySocialGroupUUID=_personLocalIdentifiersBySocialGroupUUID - In the implementation block
@property (nonatomic,readonly) PGSearchComputationCache * searchComputationCache;                   //@synthesize searchComputationCache=_searchComputationCache - In the implementation block
-(id)assetSearchKeywordsByMomentUUIDWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2 ;
-(id)searchableAssetUUIDsBySocialGroupWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(BOOL)arg3 ;
-(id)initWithGraph:(id)arg1 searchComputationCache:(id)arg2 ;
-(id)searchKeywordsByEventWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2 ;
-(id)eventNodeForUUID:(id)arg1 ofType:(unsigned long long)arg2 ;
-(NSDictionary *)personLocalIdentifiersBySocialGroupUUID;
-(void)_enumerateBusinessAndPublicEventKeywordsForEvent:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_personUUIDsInSocialGroupNode:(id)arg1 ;
-(PGSearchComputationCache *)searchComputationCache;
@end

