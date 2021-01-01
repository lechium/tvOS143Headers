/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXSearchResultsValueDelegate.h>
#import <libobjc.A.dylib/PXSearchTopAssetsResultChangeDelegate.h>

@protocol PXSearchResultsSectionedDataSourceChangeObserver, OS_dispatch_queue;
@class NSArray, PLPhotoLibrary, PLSearchIndexDateFormatter, NSDateIntervalFormatter, PLSearchProcessor, PSIDatabase, PSIQuery, NSObject, PHFetchResult, NSDictionary, NSCalendar, NSDateComponents, NSString;

@interface PXSearchResultsSectionedDataSource : NSObject <PXSearchResultsValueDelegate, PXSearchTopAssetsResultChangeDelegate> {

	BOOL _resultsReady;
	BOOL _ignorePastResults;
	AB _didMerge;
	BOOL _wordEmbeddingsRequested;
	id<PXSearchResultsSectionedDataSourceChangeObserver> _changeObserver;
	/*^block*/id _topAssetFilter;
	NSArray* _results;
	NSArray* _uncommittedResults;
	unsigned long long _sectionFetchIndex;
	unsigned long long _maxGroupedResultsCount;
	unsigned long long _queryTag;
	unsigned long long _uncommittedMaxGroupedResultsCount;
	unsigned long long _unprocessedSearchResultsCount;
	PLPhotoLibrary* _photoLibrary;
	PLSearchIndexDateFormatter* _dateFormatter;
	NSDateIntervalFormatter* _dateIntervalFormatter;
	PLSearchProcessor* _searchProcessor;
	PSIDatabase* _searchIndex;
	PSIQuery* _query;
	NSObject*<OS_dispatch_queue> _queue;
	PHFetchResult* _homePersons;
	NSArray* _suggestions;
	NSArray* _uncommittedSuggestions;
	NSDictionary* _sceneAncestryInformation;
	NSCalendar* _calendar;
	NSDateComponents* _dateRangeFormattingComponents;

}

@property (assign,nonatomic) BOOL ignorePastResults;                                                                  //@synthesize ignorePastResults=_ignorePastResults - In the implementation block
@property (nonatomic,retain) NSArray * results;                                                                       //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSArray * uncommittedResults;                                                            //@synthesize uncommittedResults=_uncommittedResults - In the implementation block
@property (assign,nonatomic) unsigned long long sectionFetchIndex;                                                    //@synthesize sectionFetchIndex=_sectionFetchIndex - In the implementation block
@property (assign,nonatomic) unsigned long long maxGroupedResultsCount;                                               //@synthesize maxGroupedResultsCount=_maxGroupedResultsCount - In the implementation block
@property (assign,nonatomic) unsigned long long queryTag;                                                             //@synthesize queryTag=_queryTag - In the implementation block
@property (assign,nonatomic) unsigned long long uncommittedMaxGroupedResultsCount;                                    //@synthesize uncommittedMaxGroupedResultsCount=_uncommittedMaxGroupedResultsCount - In the implementation block
@property (assign,nonatomic) unsigned long long unprocessedSearchResultsCount;                                        //@synthesize unprocessedSearchResultsCount=_unprocessedSearchResultsCount - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * photoLibrary;                                                           //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain) PLSearchIndexDateFormatter * dateFormatter;                                              //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) NSDateIntervalFormatter * dateIntervalFormatter;                                         //@synthesize dateIntervalFormatter=_dateIntervalFormatter - In the implementation block
@property (nonatomic,retain) PLSearchProcessor * searchProcessor;                                                     //@synthesize searchProcessor=_searchProcessor - In the implementation block
@property (nonatomic,retain) PSIDatabase * searchIndex;                                                               //@synthesize searchIndex=_searchIndex - In the implementation block
@property (nonatomic,retain) PSIQuery * query;                                                                        //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) AB didMerge;                                                                             //@synthesize didMerge=_didMerge - In the implementation block
@property (nonatomic,retain) PHFetchResult * homePersons;                                                             //@synthesize homePersons=_homePersons - In the implementation block
@property (nonatomic,retain) NSArray * suggestions;                                                                   //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,retain) NSArray * uncommittedSuggestions;                                                        //@synthesize uncommittedSuggestions=_uncommittedSuggestions - In the implementation block
@property (retain) NSDictionary * sceneAncestryInformation;                                                           //@synthesize sceneAncestryInformation=_sceneAncestryInformation - In the implementation block
@property (nonatomic,retain) NSCalendar * calendar;                                                                   //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSDateComponents * dateRangeFormattingComponents;                                        //@synthesize dateRangeFormattingComponents=_dateRangeFormattingComponents - In the implementation block
@property (assign,nonatomic) BOOL wordEmbeddingsRequested;                                                            //@synthesize wordEmbeddingsRequested=_wordEmbeddingsRequested - In the implementation block
@property (assign,nonatomic,__weak) id<PXSearchResultsSectionedDataSourceChangeObserver> changeObserver;              //@synthesize changeObserver=_changeObserver - In the implementation block
@property (assign,nonatomic) BOOL resultsReady;                                                                       //@synthesize resultsReady=_resultsReady - In the implementation block
@property (readonly) NSDictionary * debugDictionary; 
@property (nonatomic,copy) id topAssetFilter;                                                                         //@synthesize topAssetFilter=_topAssetFilter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)topAssetsSectionForSearchResultsValue:(id)arg1 ;
+(id)postQuerySearchResultsLog;
-(NSString *)debugDescription;
-(PSIQuery *)query;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)cancel;
-(NSArray *)results;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQuery:(PSIQuery *)arg1 ;
-(PLSearchIndexDateFormatter *)dateFormatter;
-(void)setDateFormatter:(PLSearchIndexDateFormatter *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSuggestions:(NSArray *)arg1 ;
-(NSArray *)suggestions;
-(void)setResults:(NSArray *)arg1 ;
-(PSIDatabase *)searchIndex;
-(void)setSearchIndex:(PSIDatabase *)arg1 ;
-(long long)numberOfSections;
-(BOOL)hasPendingChanges;
-(PLPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(NSDateIntervalFormatter *)dateIntervalFormatter;
-(NSDictionary *)debugDictionary;
-(id<PXSearchResultsSectionedDataSourceChangeObserver>)changeObserver;
-(void)setChangeObserver:(id<PXSearchResultsSectionedDataSourceChangeObserver>)arg1 ;
-(void)didChangeThumbnailAssetsForSearchResult:(id)arg1 ;
-(void)didChangeThumbnailAssetsForSearchResult:(id)arg1 atIndexes:(id)arg2 ;
-(BOOL)searchIsFinished:(id)arg1 ;
-(id)stringWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithSearchIndex:(id)arg1 photoLibrary:(id)arg2 ;
-(id)initForUnitTests;
-(BOOL)isSectionExpandable:(long long)arg1 ;
-(BOOL)isSectionExpanded:(long long)arg1 ;
-(void)expandSection:(long long)arg1 ;
-(void)collapseSection:(long long)arg1 ;
-(long long)numberOfVisibleSearchResultsInSection:(long long)arg1 ;
-(long long)numberOfSearchResultsInSection:(long long)arg1 ;
-(id)searchResultAtIndexPath:(id)arg1 ;
-(id)allSearchResultsForSection:(long long)arg1 ;
-(BOOL)isTopAssetsSection:(long long)arg1 ;
-(id)titleForHeaderInSection:(long long)arg1 ;
-(void)setSearchString:(id)arg1 representedObjects:(id)arg2 maxSuggestionCount:(unsigned long long)arg3 priorityAssetUUID:(id)arg4 ;
-(BOOL)resultsReady;
-(BOOL)_shouldCancel:(unsigned long long)arg1 ;
-(void)_inqBackgroundProcessAssetResults:(id)arg1 collectionResults:(id)arg2 topAssetsResult:(id)arg3 topCollectionResults:(id)arg4 withTag:(unsigned long long)arg5 searchString:(id)arg6 representedObjects:(id)arg7 maxSuggestionCount:(unsigned long long)arg8 priorityAssetUUID:(id)arg9 ;
-(id)_fetchObjectsWithEntityName:(id)arg1 uuids:(id)arg2 ;
-(void)_asyncFetchAssetsWithQueryTag:(unsigned long long)arg1 ;
-(void)mergePendingChanges;
-(void)_inqCancel;
-(id)wordEmbeddingSubstitutions;
-(id)selectedWordEmbeddingTextAtIndex:(unsigned long long)arg1 ;
-(id)_wordEmbeddingSubstitutionsWantsSubstitutedString:(BOOL)arg1 ;
-(id)tapToRadarAttachments;
-(void)_suggestionsDidFinish:(id)arg1 ;
-(void)_updateResultsWithMergeTargetPerson:(id)arg1 sourcePerson:(id)arg2 tombstonedCandidatesLocalIdentifiers:(id)arg3 ;
-(void)setResultsReady:(BOOL)arg1 ;
-(id)topAssetFilter;
-(void)setTopAssetFilter:(id)arg1 ;
-(BOOL)ignorePastResults;
-(void)setIgnorePastResults:(BOOL)arg1 ;
-(NSArray *)uncommittedResults;
-(void)setUncommittedResults:(NSArray *)arg1 ;
-(unsigned long long)sectionFetchIndex;
-(void)setSectionFetchIndex:(unsigned long long)arg1 ;
-(unsigned long long)maxGroupedResultsCount;
-(void)setMaxGroupedResultsCount:(unsigned long long)arg1 ;
-(unsigned long long)queryTag;
-(void)setQueryTag:(unsigned long long)arg1 ;
-(unsigned long long)uncommittedMaxGroupedResultsCount;
-(void)setUncommittedMaxGroupedResultsCount:(unsigned long long)arg1 ;
-(unsigned long long)unprocessedSearchResultsCount;
-(void)setUnprocessedSearchResultsCount:(unsigned long long)arg1 ;
-(void)setDateIntervalFormatter:(NSDateIntervalFormatter *)arg1 ;
-(PLSearchProcessor *)searchProcessor;
-(void)setSearchProcessor:(PLSearchProcessor *)arg1 ;
-(AB)didMerge;
-(void)setDidMerge:(AB)arg1 ;
-(PHFetchResult *)homePersons;
-(void)setHomePersons:(PHFetchResult *)arg1 ;
-(NSArray *)uncommittedSuggestions;
-(void)setUncommittedSuggestions:(NSArray *)arg1 ;
-(NSDictionary *)sceneAncestryInformation;
-(void)setSceneAncestryInformation:(NSDictionary *)arg1 ;
-(NSDateComponents *)dateRangeFormattingComponents;
-(void)setDateRangeFormattingComponents:(NSDateComponents *)arg1 ;
-(BOOL)wordEmbeddingsRequested;
-(void)setWordEmbeddingsRequested:(BOOL)arg1 ;
@end

