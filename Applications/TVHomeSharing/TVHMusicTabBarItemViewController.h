//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHImageDeckListViewController.h"

#import "TVHMediaLibraryTabBarItemViewController-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"

@class NSSet, NSString;

@interface TVHMusicTabBarItemViewController : TVHImageDeckListViewController <UICollectionViewDataSource, TVHMediaLibraryTabBarItemViewController>
{
}

+ (id)_listItems;	// IMP=0x000000010000c1bc
+ (id)_localizedTitleForTableItem:(unsigned long long)arg1;	// IMP=0x000000010000bed8
- (id)_browseViewControllerForIndex:(long long)arg1;	// IMP=0x000000010000c214
- (unsigned long long)_listItemForIndex:(long long)arg1;	// IMP=0x000000010000c13c
- (id)mediaEntitiesListViewController:(id)arg1 previewFetchDescriptorForIdentifier:(id)arg2;	// IMP=0x000000010000be04
- (id)mediaEntitiesListViewController:(id)arg1 previewFetchIdentifierForIndexPath:(id)arg2;	// IMP=0x000000010000bdf8
@property(readonly, nonatomic) unsigned long long selectedMediaCategoryType;
@property(readonly, copy, nonatomic) NSSet *mediaCategoryTypes;
@property(readonly, nonatomic) unsigned long long type;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010000bd24
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010000bb34
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010000bae4
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000010000badc
- (void)viewDidLoad;	// IMP=0x000000010000ba40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

