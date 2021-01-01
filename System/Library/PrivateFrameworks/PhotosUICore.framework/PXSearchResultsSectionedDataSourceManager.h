/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXSearchResultsSectionedDataSourceChangeObserver.h>

@protocol PXSearchResultsSectionedDataSourceChangeObserver, OS_dispatch_semaphore;
@class PXSearchActiveSearch, PHCachingImageManager, PXSearchResultsSectionedDataSource, NSObject, PLSearchMetadataStore, PSIDatabase, NSTimer, NSDictionary, NSString;

@interface PXSearchResultsSectionedDataSourceManager : NSObject <PXSearchResultsSectionedDataSourceChangeObserver> {

	BOOL _isIndexing;
	PXSearchActiveSearch* _activeSearch;
	PHCachingImageManager* _cachingImageManager;
	PXSearchResultsSectionedDataSource* _searchResultsDataSource;
	id<PXSearchResultsSectionedDataSourceChangeObserver> _delegate;
	NSObject*<OS_dispatch_semaphore> _searchIndexReadySemaphore;
	PLSearchMetadataStore* _searchMetadataStore;
	PSIDatabase* _searchIndex;
	NSTimer* _searchIndexStatusTimer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> searchIndexReadySemaphore;                        //@synthesize searchIndexReadySemaphore=_searchIndexReadySemaphore - In the implementation block
@property (nonatomic,retain) PHCachingImageManager * cachingImageManager;                                       //@synthesize cachingImageManager=_cachingImageManager - In the implementation block
@property (nonatomic,retain) PLSearchMetadataStore * searchMetadataStore;                                       //@synthesize searchMetadataStore=_searchMetadataStore - In the implementation block
@property (nonatomic,retain) PSIDatabase * searchIndex;                                                         //@synthesize searchIndex=_searchIndex - In the implementation block
@property (nonatomic,retain) NSTimer * searchIndexStatusTimer;                                                  //@synthesize searchIndexStatusTimer=_searchIndexStatusTimer - In the implementation block
@property (nonatomic,retain) PXSearchResultsSectionedDataSource * searchResultsDataSource;                      //@synthesize searchResultsDataSource=_searchResultsDataSource - In the implementation block
@property (assign,nonatomic) BOOL isIndexing;                                                                   //@synthesize isIndexing=_isIndexing - In the implementation block
@property (nonatomic,retain) PXSearchActiveSearch * activeSearch;                                               //@synthesize activeSearch=_activeSearch - In the implementation block
@property (nonatomic,readonly) BOOL resultsReady; 
@property (readonly) NSDictionary * debugDictionary; 
@property (assign,nonatomic,__weak) id<PXSearchResultsSectionedDataSourceChangeObserver> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<PXSearchResultsSectionedDataSourceChangeObserver>)delegate;
-(void)setDelegate:(id<PXSearchResultsSectionedDataSourceChangeObserver>)arg1 ;
-(PSIDatabase *)searchIndex;
-(void)setSearchIndex:(PSIDatabase *)arg1 ;
-(NSDictionary *)debugDictionary;
-(BOOL)isIndexing;
-(PHCachingImageManager *)cachingImageManager;
-(BOOL)resultsReady;
-(void)mergePendingChanges;
-(void)searchResultsDataSourceHasPendingChanges:(id)arg1 shouldMergePendingChanges:(BOOL)arg2 ;
-(void)searchResultsDataSource:(id)arg1 didFetchAssetsForSearchResult:(id)arg2 indexPath:(id)arg3 ;
-(void)searchResultsDataSource:(id)arg1 didChangeThumbnailAssetsForSearchResult:(id)arg2 topAssetsSectionExists:(BOOL)arg3 ;
-(void)searchResultsDataSource:(id)arg1 didChangeThumbnailAssetsForSearchResult:(id)arg2 atIndexes:(id)arg3 ;
-(id)initWithSearchSectionedDataSource:(id)arg1 ;
-(void)prepareDataSourceWithCompletion:(/*^block*/id)arg1 ;
-(void)verifySearchDataSourceDidLoad;
-(BOOL)queryHasChanged:(id)arg1 maxSuggestionCount:(long long)arg2 ;
-(void)startMonitoringSearchIndexStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)stopMonitoringSearchIndexStatus;
-(PXSearchActiveSearch *)activeSearch;
-(void)setActiveSearch:(PXSearchActiveSearch *)arg1 ;
-(void)setCachingImageManager:(PHCachingImageManager *)arg1 ;
-(PXSearchResultsSectionedDataSource *)searchResultsDataSource;
-(void)setSearchResultsDataSource:(PXSearchResultsSectionedDataSource *)arg1 ;
-(void)setIsIndexing:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)searchIndexReadySemaphore;
-(void)setSearchIndexReadySemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(PLSearchMetadataStore *)searchMetadataStore;
-(void)setSearchMetadataStore:(PLSearchMetadataStore *)arg1 ;
-(NSTimer *)searchIndexStatusTimer;
-(void)setSearchIndexStatusTimer:(NSTimer *)arg1 ;
@end

