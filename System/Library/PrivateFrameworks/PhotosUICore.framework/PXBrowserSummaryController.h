/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableBrowserSummaryController.h>
#import <libobjc.A.dylib/PXInfoUpdaterObserver.h>
#import <libobjc.A.dylib/PXInfoProvider.h>

@protocol PXBrowserSummaryControllerDataSource, OS_dispatch_queue, PXBrowserSelectionSnapshot;
@class NSDictionary, NSAttributedString, NSString, NSArray, PXInfoUpdater, NSObject, NSDateIntervalFormatter, NSDateFormatter, NSDateInterval, PXSelectedItemsStack;

@interface PXBrowserSummaryController : PXObservable <PXMutableBrowserSummaryController, PXInfoUpdaterObserver, PXInfoProvider> {

	struct {
		BOOL containerTitle;
		BOOL localizedContainerItemsCount;
		BOOL containerDateInterval;
		BOOL selectionSnapshot;
		BOOL filteringContainerContent;
		BOOL attributedPrimaryTitle;
		BOOL secondaryTitle;
		BOOL tertiaryTitle;
		BOOL navigationTitle;
		BOOL attributedSelectionTitle;
		BOOL stackedAssets;
	}  _needsUpdateFlags;
	SCD_Struct_PX44 _dataSourceRespondsTo;
	BOOL _shouldUseSubtitles;
	BOOL _shouldUseNavigationTitle;
	BOOL _shouldUseAbbreviatedDates;
	BOOL _shouldShowLocationNames;
	BOOL _ready;
	BOOL _filteringContainerContent;
	NSDictionary* _defaultAttributes;
	NSDictionary* _emphasizedAttributes;
	NSDictionary* _selectionAttributes;
	unsigned long long _containerDateFormatGranularity;
	id<PXBrowserSummaryControllerDataSource> _dataSource;
	NSAttributedString* _attributedPrimaryTitle;
	NSString* _secondaryTitle;
	NSString* _tertiaryTitle;
	NSString* _navigationTitle;
	NSAttributedString* _attributedSelectionTitle;
	NSArray* _stackedAssets;
	PXInfoUpdater* _visibleMetadataInfoUpdater;
	PXInfoUpdater* _selectionInfoUpdater;
	PXInfoUpdater* _titlesInfoUpdater;
	NSObject*<OS_dispatch_queue> _queue;
	NSDateIntervalFormatter* _dateIntervalFormatter;
	NSDateFormatter* _importDateFormatter;
	NSString* _localizedComponentsSeparator;
	NSString* _containerTitle;
	NSString* _localizedContainerItemsCount;
	NSDateInterval* _containerDateInterval;
	id<PXBrowserSelectionSnapshot> _selectionSnapshot;
	PXSelectedItemsStack* _selectedAssetsStack;
	NSString* _noFilteringResultsPlaceholderText;

}

@property (nonatomic,readonly) PXInfoUpdater * visibleMetadataInfoUpdater;                                   //@synthesize visibleMetadataInfoUpdater=_visibleMetadataInfoUpdater - In the implementation block
@property (nonatomic,readonly) PXInfoUpdater * selectionInfoUpdater;                                         //@synthesize selectionInfoUpdater=_selectionInfoUpdater - In the implementation block
@property (nonatomic,readonly) PXInfoUpdater * titlesInfoUpdater;                                            //@synthesize titlesInfoUpdater=_titlesInfoUpdater - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSDateIntervalFormatter * dateIntervalFormatter;                              //@synthesize dateIntervalFormatter=_dateIntervalFormatter - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * importDateFormatter;                                        //@synthesize importDateFormatter=_importDateFormatter - In the implementation block
@property (nonatomic,readonly) NSString * localizedComponentsSeparator;                                      //@synthesize localizedComponentsSeparator=_localizedComponentsSeparator - In the implementation block
@property (nonatomic,copy) NSString * containerTitle;                                                        //@synthesize containerTitle=_containerTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedContainerItemsCount;                                          //@synthesize localizedContainerItemsCount=_localizedContainerItemsCount - In the implementation block
@property (nonatomic,copy) NSDateInterval * containerDateInterval;                                           //@synthesize containerDateInterval=_containerDateInterval - In the implementation block
@property (nonatomic,retain) id<PXBrowserSelectionSnapshot> selectionSnapshot;                               //@synthesize selectionSnapshot=_selectionSnapshot - In the implementation block
@property (assign,getter=isFilteringContainerContent,nonatomic) BOOL filteringContainerContent;              //@synthesize filteringContainerContent=_filteringContainerContent - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedPrimaryTitle;                                      //@synthesize attributedPrimaryTitle=_attributedPrimaryTitle - In the implementation block
@property (nonatomic,copy) NSString * secondaryTitle;                                                        //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (nonatomic,copy) NSString * tertiaryTitle;                                                         //@synthesize tertiaryTitle=_tertiaryTitle - In the implementation block
@property (nonatomic,copy) NSString * navigationTitle;                                                       //@synthesize navigationTitle=_navigationTitle - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedSelectionTitle;                                    //@synthesize attributedSelectionTitle=_attributedSelectionTitle - In the implementation block
@property (nonatomic,retain) PXSelectedItemsStack * selectedAssetsStack;                                     //@synthesize selectedAssetsStack=_selectedAssetsStack - In the implementation block
@property (nonatomic,copy) NSArray * stackedAssets;                                                          //@synthesize stackedAssets=_stackedAssets - In the implementation block
@property (assign,getter=isReady,nonatomic) BOOL ready;                                                      //@synthesize ready=_ready - In the implementation block
@property (nonatomic,readonly) NSString * noFilteringResultsPlaceholderText;                                 //@synthesize noFilteringResultsPlaceholderText=_noFilteringResultsPlaceholderText - In the implementation block
@property (assign,nonatomic,__weak) id<PXBrowserSummaryControllerDataSource> dataSource;                     //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) unsigned long long containerDateFormatGranularity;                            //@synthesize containerDateFormatGranularity=_containerDateFormatGranularity - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSubtitles;                                                        //@synthesize shouldUseSubtitles=_shouldUseSubtitles - In the implementation block
@property (assign,nonatomic) BOOL shouldUseNavigationTitle;                                                  //@synthesize shouldUseNavigationTitle=_shouldUseNavigationTitle - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAbbreviatedDates;                                                 //@synthesize shouldUseAbbreviatedDates=_shouldUseAbbreviatedDates - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLocationNames;                                                   //@synthesize shouldShowLocationNames=_shouldShowLocationNames - In the implementation block
@property (nonatomic,copy) NSDictionary * defaultAttributes;                                                 //@synthesize defaultAttributes=_defaultAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * emphasizedAttributes;                                              //@synthesize emphasizedAttributes=_emphasizedAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * selectionAttributes;                                               //@synthesize selectionAttributes=_selectionAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isReady;
-(id<PXBrowserSummaryControllerDataSource>)dataSource;
-(void)setDataSource:(id<PXBrowserSummaryControllerDataSource>)arg1 ;
-(BOOL)_needsUpdate;
-(void)setContainerTitle:(NSString *)arg1 ;
-(NSString *)containerTitle;
-(NSString *)secondaryTitle;
-(void)setSecondaryTitle:(NSString *)arg1 ;
-(void)_updateIfNeeded;
-(NSDateIntervalFormatter *)dateIntervalFormatter;
-(NSString *)navigationTitle;
-(void)_setNeedsUpdate;
-(void)setReady:(BOOL)arg1 ;
-(NSDictionary *)defaultAttributes;
-(NSDictionary *)emphasizedAttributes;
-(id)mutableChangeObject;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)performBlockWhenDoneUpdating:(/*^block*/id)arg1 ;
-(long long)priorityForInfoRequestOfKind:(id)arg1 ;
-(id)requestInfoOfKind:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)infoUpdaterDidUpdate:(id)arg1 ;
-(void)invalidateContainerTitle;
-(void)invalidateLocalizedContainerItemsCount;
-(void)invalidateContainerDateInterval;
-(void)invalidateVisibleContent;
-(void)invalidateSelection;
-(void)invalidateFilteringContainerContent;
-(BOOL)shouldUseSubtitles;
-(void)setShouldUseSubtitles:(BOOL)arg1 ;
-(BOOL)shouldUseNavigationTitle;
-(void)setShouldUseNavigationTitle:(BOOL)arg1 ;
-(BOOL)shouldUseAbbreviatedDates;
-(void)setShouldUseAbbreviatedDates:(BOOL)arg1 ;
-(BOOL)shouldShowLocationNames;
-(void)setShouldShowLocationNames:(BOOL)arg1 ;
-(unsigned long long)containerDateFormatGranularity;
-(void)setContainerDateFormatGranularity:(unsigned long long)arg1 ;
-(void)setDefaultAttributes:(NSDictionary *)arg1 ;
-(void)setEmphasizedAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)selectionAttributes;
-(void)setSelectionAttributes:(NSDictionary *)arg1 ;
-(void)setLocalizedContainerItemsCount:(NSString *)arg1 ;
-(void)setContainerDateInterval:(NSDateInterval *)arg1 ;
-(void)setSelectionSnapshot:(id<PXBrowserSelectionSnapshot>)arg1 ;
-(void)setFilteringContainerContent:(BOOL)arg1 ;
-(void)setAttributedPrimaryTitle:(NSAttributedString *)arg1 ;
-(void)setTertiaryTitle:(NSString *)arg1 ;
-(void)setNavigationTitle:(NSString *)arg1 ;
-(void)setAttributedSelectionTitle:(NSAttributedString *)arg1 ;
-(void)setStackedAssets:(NSArray *)arg1 ;
-(BOOL)shouldUpdateImmediately;
-(id)_performRequestBlock:(/*^block*/id)arg1 ;
-(void)didPerformChanges;
-(void)_invalidateContainerTitle;
-(void)_updateContainerTitleIfNeeded;
-(void)_invalidateLocalizedContainerItemsCount;
-(void)_updateLocalizedContainerItemsCountIfNeeded;
-(void)_invalidateContainerDateInterval;
-(void)_updateContainerDateIntervalIfNeeded;
-(void)_invalidateSelectionSnapshot;
-(void)_updateSelectionSnapshotIfNeeded;
-(void)_invalidateFilteringContainerContent;
-(void)_updateFilteringContainerContentIfNeeded;
-(void)_invalidateTitles;
-(id)_requestTitlesInfoWithResultHandler:(/*^block*/id)arg1 ;
-(void)_invalidateAttributedSelectionTitle;
-(void)_updateAttributedSelectionTitleIfNeeded;
-(void)_invalidateStackedAssets;
-(void)_updateStackedAssetsIfNeeded;
-(NSAttributedString *)attributedPrimaryTitle;
-(NSString *)tertiaryTitle;
-(NSAttributedString *)attributedSelectionTitle;
-(NSArray *)stackedAssets;
-(PXInfoUpdater *)visibleMetadataInfoUpdater;
-(PXInfoUpdater *)selectionInfoUpdater;
-(PXInfoUpdater *)titlesInfoUpdater;
-(NSDateFormatter *)importDateFormatter;
-(NSString *)localizedComponentsSeparator;
-(NSString *)localizedContainerItemsCount;
-(NSDateInterval *)containerDateInterval;
-(id<PXBrowserSelectionSnapshot>)selectionSnapshot;
-(BOOL)isFilteringContainerContent;
-(PXSelectedItemsStack *)selectedAssetsStack;
-(void)setSelectedAssetsStack:(PXSelectedItemsStack *)arg1 ;
-(NSString *)noFilteringResultsPlaceholderText;
@end

