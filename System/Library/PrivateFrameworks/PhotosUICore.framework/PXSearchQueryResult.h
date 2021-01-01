/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PXSearchQuery, NSArray, PHFetchResult, NSSet;

@interface PXSearchQueryResult : NSObject {

	PXSearchQuery* _searchQuery;
	NSArray* _searchResults;
	NSArray* _searchAssetResults;
	PHFetchResult* _curatedAssetsFetchResult;
	NSArray* _searchSuggestions;
	NSSet* _sceneIdentifiers;
	NSArray* _reloadItemIdentifiers;

}

@property (nonatomic,copy,readonly) PXSearchQuery * searchQuery;                           //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,copy,readonly) NSArray * searchResults;                               //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,copy,readonly) NSArray * searchAssetResults;                          //@synthesize searchAssetResults=_searchAssetResults - In the implementation block
@property (nonatomic,copy,readonly) PHFetchResult * curatedAssetsFetchResult;              //@synthesize curatedAssetsFetchResult=_curatedAssetsFetchResult - In the implementation block
@property (nonatomic,copy,readonly) NSArray * searchSuggestions;                           //@synthesize searchSuggestions=_searchSuggestions - In the implementation block
@property (nonatomic,copy,readonly) NSSet * sceneIdentifiers;                              //@synthesize sceneIdentifiers=_sceneIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * reloadItemIdentifiers;                       //@synthesize reloadItemIdentifiers=_reloadItemIdentifiers - In the implementation block
-(PXSearchQuery *)searchQuery;
-(NSArray *)searchResults;
-(NSSet *)sceneIdentifiers;
-(id)initWithSearchQuery:(id)arg1 searchResults:(id)arg2 searchAssetResults:(id)arg3 curatedAssetsFetchResult:(id)arg4 searchSuggestions:(id)arg5 sceneIdentifiers:(id)arg6 reloadItemIdentifiers:(id)arg7 ;
-(id)initEmptySearchQueryResultForQuery:(id)arg1 ;
-(NSArray *)searchAssetResults;
-(PHFetchResult *)curatedAssetsFetchResult;
-(NSArray *)searchSuggestions;
-(NSArray *)reloadItemIdentifiers;
@end
