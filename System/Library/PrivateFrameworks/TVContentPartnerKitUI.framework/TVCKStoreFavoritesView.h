/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVContentPartnerKitUI/TVCKStoreFavoriteItemCellDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol TVCKStoreFavoritesViewDelegate;
@class UIVisualEffectView, NSString, NSArray, UILabel, UICollectionView, UIPanGestureRecognizer, UITapGestureRecognizer, TVCKStoreFavoriteItemCell;

@interface TVCKStoreFavoritesView : UIView <TVCKStoreFavoriteItemCellDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {

	UIVisualEffectView* _labelVisualEffect;
	BOOL _editing;
	BOOL _batchUpdatesAllowed;
	unsigned long long _category;
	id<TVCKStoreFavoritesViewDelegate> _delegate;
	NSString* _title;
	NSArray* _contentItems;
	UILabel* _headerView;
	UICollectionView* _collectionView;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _menuButtonGestureRecognizer;
	UITapGestureRecognizer* _upArrowGestureRecognizer;
	UITapGestureRecognizer* _downArrowGestureRecognizer;
	UITapGestureRecognizer* _leftArrowGestureRecognizer;
	UITapGestureRecognizer* _rightArrowGestureRecognizer;
	TVCKStoreFavoriteItemCell* _editedCell;
	long long _panLockDirection;
	CGSize _itemSize;
	CGPoint _lastVelocity;

}

@property (nonatomic,retain) UILabel * headerView;                                              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                 //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) BOOL batchUpdatesAllowed;                                          //@synthesize batchUpdatesAllowed=_batchUpdatesAllowed - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                     //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * menuButtonGestureRecognizer;              //@synthesize menuButtonGestureRecognizer=_menuButtonGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * upArrowGestureRecognizer;                 //@synthesize upArrowGestureRecognizer=_upArrowGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * downArrowGestureRecognizer;               //@synthesize downArrowGestureRecognizer=_downArrowGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * leftArrowGestureRecognizer;               //@synthesize leftArrowGestureRecognizer=_leftArrowGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * rightArrowGestureRecognizer;              //@synthesize rightArrowGestureRecognizer=_rightArrowGestureRecognizer - In the implementation block
@property (nonatomic,retain) TVCKStoreFavoriteItemCell * editedCell;                            //@synthesize editedCell=_editedCell - In the implementation block
@property (assign,nonatomic) long long panLockDirection;                                        //@synthesize panLockDirection=_panLockDirection - In the implementation block
@property (assign,nonatomic) CGPoint lastVelocity;                                              //@synthesize lastVelocity=_lastVelocity - In the implementation block
@property (nonatomic,readonly) CGSize itemSize;                                                 //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) unsigned long long category;                                       //@synthesize category=_category - In the implementation block
@property (assign,nonatomic,__weak) id<TVCKStoreFavoritesViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title;                                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * contentItems;                                              //@synthesize contentItems=_contentItems - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                     //@synthesize editing=_editing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)listTitleTextColor;
+(id)_lightModeListTitleTextColor;
+(id)_darkModeListTitleTextColor;
-(id)initWithCoder:(id)arg1 ;
-(id<TVCKStoreFavoritesViewDelegate>)delegate;
-(void)setDelegate:(id<TVCKStoreFavoritesViewDelegate>)arg1 ;
-(unsigned long long)category;
-(void)setCategory:(unsigned long long)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEditing;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentItems:(NSArray *)arg1 ;
-(NSArray *)contentItems;
-(void)setEditing:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(void)layoutSubviews;
-(id)_itemAtIndexPath:(id)arg1 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)headerView;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(CGSize)itemSize;
-(void)setHeaderView:(UILabel *)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)_menuButtonPressed:(id)arg1 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)_panGestureRecognized:(id)arg1 ;
-(void)_leftArrowPressed:(id)arg1 ;
-(void)_rightArrowPressed:(id)arg1 ;
-(void)_upArrowPressed:(id)arg1 ;
-(void)_downArrowPressed:(id)arg1 ;
-(id)initWithItemSize:(CGSize)arg1 ;
-(id)_imageURLForItem:(id)arg1 ;
-(TVCKStoreFavoriteItemCell *)editedCell;
-(long long)panLockDirection;
-(void)setLastVelocity:(CGPoint)arg1 ;
-(CGPoint)_contentSizeClamp:(CGPoint)arg1 ;
-(void)setPanLockDirection:(long long)arg1 ;
-(CGPoint)_genericHandlePanChange;
-(void)_updateEditPosition;
-(void)_disableEditing:(BOOL)arg1 ;
-(void)_genericHandleDirectionPress:(CGPoint)arg1 ;
-(void)_configureCell:(id)arg1 withItem:(id)arg2 ;
-(BOOL)batchUpdatesAllowed;
-(void)_willBeginEditingItemAtIndex:(unsigned long long)arg1 ;
-(UITapGestureRecognizer *)menuButtonGestureRecognizer;
-(UITapGestureRecognizer *)leftArrowGestureRecognizer;
-(UITapGestureRecognizer *)rightArrowGestureRecognizer;
-(UITapGestureRecognizer *)downArrowGestureRecognizer;
-(UITapGestureRecognizer *)upArrowGestureRecognizer;
-(void)_didEndEditingItemAtIndex:(unsigned long long)arg1 ;
-(void)setEditedCell:(TVCKStoreFavoriteItemCell *)arg1 ;
-(void)setBatchUpdatesAllowed:(BOOL)arg1 ;
-(void)_didSelectItem:(id)arg1 ;
-(void)didLongPressStoreFavoriteItemCell:(id)arg1 ;
-(void)_enableEditing;
-(void)setMenuButtonGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setUpArrowGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setDownArrowGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setLeftArrowGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setRightArrowGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(CGPoint)lastVelocity;
@end

