/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VUILibraryDataSourceDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/VUICollectionViewDelegate.h>

@protocol VUIFamilyMembersViewControllerDelegate;
@class VUILibraryFamilyMembersDataSource, UICollectionViewDiffableDataSource, VUIViewControllerContentPresenter, VUICollectionView, VUIFamilyMemberCell, NSDictionary, NSString;

@interface VUIFamilyMembersViewController : UIViewController <VUILibraryDataSourceDelegate, UICollectionViewDelegate, VUICollectionViewDelegate> {

	BOOL _requiresRelayout;
	id<VUIFamilyMembersViewControllerDelegate> _delegate;
	VUILibraryFamilyMembersDataSource* _dataSource;
	UICollectionViewDiffableDataSource* _diffableDataSource;
	VUIViewControllerContentPresenter* _contentPresenter;
	VUICollectionView* _collectionView;
	VUIFamilyMemberCell* _sizingCell;
	NSDictionary* _familyMemberHashToFamilyMemberDictionary;
	long long _gridType;
	long long _gridStyle;
	double _tvCellWidth;

}

@property (nonatomic,retain) VUILibraryFamilyMembersDataSource * dataSource;                          //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * diffableDataSource;                 //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (nonatomic,retain) VUIViewControllerContentPresenter * contentPresenter;                    //@synthesize contentPresenter=_contentPresenter - In the implementation block
@property (nonatomic,retain) VUICollectionView * collectionView;                                      //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) VUIFamilyMemberCell * sizingCell;                                        //@synthesize sizingCell=_sizingCell - In the implementation block
@property (nonatomic,retain) NSDictionary * familyMemberHashToFamilyMemberDictionary;                 //@synthesize familyMemberHashToFamilyMemberDictionary=_familyMemberHashToFamilyMemberDictionary - In the implementation block
@property (assign,nonatomic) long long gridType;                                                      //@synthesize gridType=_gridType - In the implementation block
@property (assign,nonatomic) long long gridStyle;                                                     //@synthesize gridStyle=_gridStyle - In the implementation block
@property (assign,nonatomic) BOOL requiresRelayout;                                                   //@synthesize requiresRelayout=_requiresRelayout - In the implementation block
@property (assign,nonatomic) double tvCellWidth;                                                      //@synthesize tvCellWidth=_tvCellWidth - In the implementation block
@property (assign,nonatomic,__weak) id<VUIFamilyMembersViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<VUIFamilyMembersViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VUIFamilyMembersViewControllerDelegate>)arg1 ;
-(VUILibraryFamilyMembersDataSource *)dataSource;
-(id)initWithDataSource:(id)arg1 ;
-(void)setDataSource:(VUILibraryFamilyMembersDataSource *)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(VUICollectionView *)collectionView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(VUICollectionView *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(VUIViewControllerContentPresenter *)contentPresenter;
-(void)setGridType:(long long)arg1 ;
-(void)setGridStyle:(long long)arg1 ;
-(void)dataSourceDidFinishFetching:(id)arg1 ;
-(void)setContentPresenter:(VUIViewControllerContentPresenter *)arg1 ;
-(long long)gridStyle;
-(id)_createDiffableDataSourceSnapshot;
-(VUIFamilyMemberCell *)sizingCell;
-(void)setSizingCell:(VUIFamilyMemberCell *)arg1 ;
-(long long)gridType;
-(void)_updateCurrentViewIfNeeded;
-(id)_createCollectionView;
-(id)_createDiffableDataSource;
-(void)_updateLayoutForSize:(CGSize)arg1 ;
-(BOOL)requiresRelayout;
-(void)setRequiresRelayout:(BOOL)arg1 ;
-(void)_clearCollectionViewSelections:(BOOL)arg1 ;
-(id)_generateFamilyMemberHashToFamilyMemberDictionaryForFamilyMembers:(id)arg1 ;
-(void)setFamilyMemberHashToFamilyMemberDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)familyMemberHashToFamilyMemberDictionary;
-(id)_getFamilyMemberIdentifiersFromFamilyMembers;
-(double)tvCellWidth;
-(void)setTvCellWidth:(double)arg1 ;
@end

