/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TVCollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/TVLHeaderWithCountAndButtonsViewDelegate.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class TVCollectionView, NSDictionary, UIView, NSString;

@interface TVLMediaBrowserViewController : UIViewController <TVCollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, TVLHeaderWithCountAndButtonsViewDelegate, ATVUpdatable> {

	TVCollectionView* _gridView;
	NSDictionary* _preferredAssetElementsForIndexPath;
	long long _numberOfColumns;
	double _maxItemWidth;
	double _itemHeight;
	UIView* _headerView;

}

@property (nonatomic,retain) TVCollectionView * gridView;                                    //@synthesize gridView=_gridView - In the implementation block
@property (nonatomic,retain) NSDictionary * preferredAssetElementsForIndexPath;              //@synthesize preferredAssetElementsForIndexPath=_preferredAssetElementsForIndexPath - In the implementation block
@property (assign,nonatomic) long long numberOfColumns;                                      //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) double maxItemWidth;                                            //@synthesize maxItemWidth=_maxItemWidth - In the implementation block
@property (assign,nonatomic) double itemHeight;                                              //@synthesize itemHeight=_itemHeight - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                            //@synthesize headerView=_headerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNumberOfColumns:(long long)arg1 ;
-(long long)numberOfColumns;
-(void)loadView;
-(UIView *)headerView;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(TVCollectionView *)gridView;
-(void)setGridView:(TVCollectionView *)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setHeaderView:(UIView *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(double)itemHeight;
-(void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2 ;
-(id)initWithFeedElement:(id)arg1 ;
-(void)setCurrentFeedElement:(id)arg1 ;
-(void)didUpdateFeedElementRequiringUserInterfaceUpdate:(BOOL)arg1 previousElement:(id)arg2 ;
-(void)headerView:(id)arg1 didSelectButtonAtIndex:(long long)arg2 ;
-(void)setItemHeight:(double)arg1 ;
-(double)_maxItemWidth;
-(id)_assetElementForElement:(id)arg1 closestToHeight:(double)arg2 ;
-(void)_evaluateJavascriptEvent:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(NSDictionary *)preferredAssetElementsForIndexPath;
-(void)setPreferredAssetElementsForIndexPath:(NSDictionary *)arg1 ;
-(double)maxItemWidth;
-(void)setMaxItemWidth:(double)arg1 ;
@end

