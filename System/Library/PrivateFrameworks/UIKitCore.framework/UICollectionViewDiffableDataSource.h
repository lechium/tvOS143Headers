/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIDiffableDataSourceIdentifying.h>
#import <UIKit/UICollectionViewDataSource.h>

@class __UIDiffableDataSource, UICollectionViewDiffableDataSourceReorderingHandlers, UICollectionViewDiffableDataSourceSectionSnapshotHandlers, NSString;

@interface UICollectionViewDiffableDataSource : NSObject <_UIDiffableDataSourceIdentifying, UICollectionViewDataSource> {

	__UIDiffableDataSource* _impl;
	/*^block*/id __didReorderItemsHandler;

}

@property (nonatomic,retain) __UIDiffableDataSource * impl;                                                                  //@synthesize impl=_impl - In the implementation block
@property (nonatomic,copy) id _didReorderItemsHandler;                                                                       //@synthesize _didReorderItemsHandler=__didReorderItemsHandler - In the implementation block
@property (nonatomic,copy) id supplementaryViewProvider; 
@property (nonatomic,copy) UICollectionViewDiffableDataSourceReorderingHandlers * reorderingHandlers; 
@property (nonatomic,copy) UICollectionViewDiffableDataSourceSectionSnapshotHandlers * sectionSnapshotHandlers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)snapshot;
-(__UIDiffableDataSource *)impl;
-(id)collectionView;
-(id)initWithCollectionView:(id)arg1 cellProvider:(/*^block*/id)arg2 ;
-(void)setSupplementaryViewProvider:(id)arg1 ;
-(id)itemIdentifierForIndexPath:(id)arg1 ;
-(void)applySnapshot:(id)arg1 animatingDifferences:(BOOL)arg2 ;
-(void)setImpl:(__UIDiffableDataSource *)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id)indexPathForItemIdentifier:(id)arg1 ;
-(void)applySnapshot:(id)arg1 animatingDifferences:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)snapshotForSection:(id)arg1 ;
-(id)supplementaryViewProvider;
-(BOOL)_isDiffableDataSource;
-(id)_diffableDataSourceImpl;
-(UICollectionViewDiffableDataSourceReorderingHandlers *)reorderingHandlers;
-(void)setReorderingHandlers:(UICollectionViewDiffableDataSourceReorderingHandlers *)arg1 ;
-(UICollectionViewDiffableDataSourceSectionSnapshotHandlers *)sectionSnapshotHandlers;
-(void)setSectionSnapshotHandlers:(UICollectionViewDiffableDataSourceSectionSnapshotHandlers *)arg1 ;
-(id)initWithCollectionView:(id)arg1 itemRenderers:(id)arg2 rendererIdentifierProvider:(/*^block*/id)arg3 ;
-(id)initWithCollectionView:(id)arg1 sectionControllers:(id)arg2 rendererIdentifierProvider:(/*^block*/id)arg3 ;
-(void)set_didReorderItemsHandler:(id)arg1 ;
-(id)_didReorderItemsHandler;
-(id)initWithViewUpdatesSink:(id)arg1 ;
-(void)_registerItemRenderers:(id)arg1 rendererIdentifierProvider:(/*^block*/id)arg2 ;
-(id)_snapshotForSection:(id)arg1 ;
-(id)initWithCollectionView:(id)arg1 itemRenderer:(id)arg2 ;
-(void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(BOOL)arg3 ;
-(void)_setDidReorderItemsHandler:(/*^block*/id)arg1 ;
-(void)_setCanReorderItemHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)_canReorderItemHandler;
-(void)_applySnapshot:(id)arg1 animatingDifferences:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_associatedSectionControllerForItemIdentifier:(id)arg1 ;
-(id)_associatedSectionControllerForSectionIdentifier:(id)arg1 ;
-(void)_applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
@end

