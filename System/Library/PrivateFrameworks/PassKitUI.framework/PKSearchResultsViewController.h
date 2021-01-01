/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/PKAccountServiceObserver.h>
#import <libobjc.A.dylib/PKSearchServiceObserver.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/PKWorldRegionUpdaterObserver.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiterObserver.h>
#import <UIKit/UISearchResultsUpdating.h>

@protocol PKPaymentDataProvider, OS_dispatch_queue, OS_dispatch_source;
@class PKDashboardTitleHeaderView, PKSearchSuggestionCollectionViewCell, PKDashboardPaymentTransactionItemPresenter, PKTransactionGroupItemPresenter, PKTransactionGroupThumbnailPresenter, PKWorldRegionUpdater, PKSearchService, PKAccountService, PKPassLibrary, NSMutableDictionary, PKTransactionSource, NSString, NSMutableOrderedSet, PKSearchQuery, NSObject, NSArray, PKTransactionHistoryViewController, UILabel;

@interface PKSearchResultsViewController : UICollectionViewController <PKAccountServiceObserver, PKSearchServiceObserver, UICollectionViewDelegateFlowLayout, PKWorldRegionUpdaterObserver, PKForegroundActiveArbiterObserver, UISearchResultsUpdating> {

	PKDashboardTitleHeaderView* _sampleHeaderView;
	PKSearchSuggestionCollectionViewCell* _sampleSuggestionCell;
	PKDashboardPaymentTransactionItemPresenter* _transactionPresenter;
	PKTransactionGroupItemPresenter* _transactionGroupPresenter;
	PKTransactionGroupThumbnailPresenter* _thumbnailPresenter;
	PKWorldRegionUpdater* _regionUpdater;
	PKSearchService* _searchService;
	PKAccountService* _accountService;
	PKPassLibrary* _passLibrary;
	id<PKPaymentDataProvider> _paymentDataProvider;
	NSMutableDictionary* _accountsPerIdentifier;
	PKTransactionSource* _transactionSource;
	os_unfair_lock_s _lockQuery;
	NSString* _currentQueryIdentifier;
	NSMutableOrderedSet* _lastQueries;
	PKSearchQuery* _queryForCurrentResults;
	BOOL _queryInProgress;
	NSMutableDictionary* _lastResultsPerQueryIdentifier;
	NSObject*<OS_dispatch_queue> _queuePrepareResults;
	NSArray* _transactions;
	NSArray* _categories;
	NSArray* _merchants;
	NSArray* _locations;
	NSArray* _people;
	NSArray* _suggestions;
	NSMutableDictionary* _passesForResults;
	BOOL _hasReceivedResults;
	BOOL _hasLoadedRequiredData;
	unsigned long long _presentationCounter;
	unsigned long long _seeAllPresentationCounter;
	PKTransactionHistoryViewController* _seeAllHistoryVC;
	NSObject*<OS_dispatch_source> _seeAllPresentationTimer;
	BOOL _queryHasNoResults;
	BOOL _fullResultsNotAvailable;
	BOOL _hasSearchableContent;
	UILabel* _noResultsTitleLabel;
	UILabel* _noResultsBodyLabel;
	BOOL _queryIsReplay;
	BOOL _keyboardVisible;
	CGRect _keyboardFrame;
	BOOL _usingThumbnailLayout;
	BOOL _atNaturalRestingBounds;
	BOOL _isScrolling;
	SCD_Struct_PK5 _foregroundActiveState;
	/*^block*/id _pendingPreflightCompletion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)accountAdded:(id)arg1 ;
-(void)accountRemoved:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(id)_searchController;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK5)arg2 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateSearchResults;
-(void)accountChanged:(id)arg1 ;
-(void)searchDidCompleteWithError:(id)arg1 results:(id)arg2 forIdentifier:(id)arg3 ;
-(void)_updateAccounts;
-(void)keyboardWillHide:(id)arg1 ;
-(void)keyboardWillChange:(id)arg1 ;
-(void)_updateLayoutForKeyboardAction:(/*^block*/id)arg1 ;
-(void)_scrollViewStoppedScrolling;
-(id)initWithPaymentDataProvider:(id)arg1 transactionSource:(id)arg2 ;
-(void)_configureHeaderView:(id)arg1 inSection:(unsigned long long)arg2 ;
-(void)_applyMaskToCell:(id)arg1 firstInSection:(BOOL)arg2 lastInSection:(BOOL)arg3 ;
-(id)_thumbnailLayout;
-(id)_queryWithIdentifier:(id)arg1 ;
-(void)_updateUIIfPossibleWithResults:(id)arg1 query:(id)arg2 completion:(/*^block*/id)arg3 ;
-(double)_thumbnailInset;
-(double)_thumbnailSpacing;
-(long long)_numberOfItemsInSection:(long long)arg1 ;
-(void)_initiateSeeAllPresentationForQuery:(id)arg1 ;
-(void)_configureSuggestionCell:(id)arg1 withSuggestion:(id)arg2 ;
-(void)_saveResults:(id)arg1 forQuery:(id)arg2 ;
-(BOOL)_isQueryIdentifierMatchingCurrentQuery:(id)arg1 ;
-(void)_udpateOrPresentSeeAllViewControllerForQuery:(id)arg1 groups:(id)arg2 transactions:(id)arg3 ;
-(id)_resultsLayout;
-(void)_updateUIWithResults:(id)arg1 forQuery:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_updateGroup:(id)arg1 withRegion:(id)arg2 ;
-(id)_historyViewControllerForQuery:(id)arg1 groups:(id)arg2 headerGroup:(id)arg3 ;
-(void)_seeAllHeaderGroupForQuery:(id)arg1 groups:(id)arg2 transactions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)worldRegionUpdated:(id)arg1 updatedRegion:(id)arg2 ;
@end

