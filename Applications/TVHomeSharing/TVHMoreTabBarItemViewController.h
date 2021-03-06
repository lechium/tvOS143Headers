//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHImageDeckListViewController.h"

#import "TVHMediaLibraryTabBarItemViewController-Protocol.h"

@class NSSet, NSString, TVHCollectionViewDiffableDataSource, TVHMediaCategoriesDataSource;

@interface TVHMoreTabBarItemViewController : TVHImageDeckListViewController <TVHMediaLibraryTabBarItemViewController>
{
    unsigned long long _selectedMediaCategoryType;	// 8 = 0x8
    TVHMediaCategoriesDataSource *_dataSource;	// 16 = 0x10
    TVHCollectionViewDiffableDataSource *_diffableDataSource;	// 24 = 0x18
}

+ (id)_filteredMediaCategoryTypesWithMediaCategoryTypes:(id)arg1;	// IMP=0x000000010006088c
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0000000100060718
- (void).cxx_destruct;	// IMP=0x0000000100060c90
@property(retain, nonatomic) TVHCollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(readonly, nonatomic) TVHMediaCategoriesDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)_navigateToMediaCategoryType:(unsigned long long)arg1;	// IMP=0x0000000100060afc
- (void)_configureCell:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000100060a10
- (void)setSelectedMediaCategoryType:(unsigned long long)arg1;	// IMP=0x0000000100060814
- (id)mediaEntitiesListViewController:(id)arg1 previewFetchDescriptorForIdentifier:(id)arg2;	// IMP=0x00000001000605b4
- (id)mediaEntitiesListViewController:(id)arg1 previewFetchIdentifierForIndexPath:(id)arg2;	// IMP=0x0000000100060510
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100060468
@property(readonly, nonatomic) unsigned long long selectedMediaCategoryType; // @synthesize selectedMediaCategoryType=_selectedMediaCategoryType;
@property(readonly, copy, nonatomic) NSSet *mediaCategoryTypes;
@property(readonly, nonatomic) unsigned long long type;
- (void)viewDidLoad;	// IMP=0x00000001000601b8
- (void)updateWithMediaCategoryTypes:(id)arg1;	// IMP=0x0000000100060124
- (id)initWithMediaLibrary:(id)arg1 mediaCategoryTypes:(id)arg2;	// IMP=0x0000000100060030
- (id)initWithMediaLibrary:(id)arg1 listViewLayout:(id)arg2;	// IMP=0x000000010005ffa8
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x000000010005ff20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

