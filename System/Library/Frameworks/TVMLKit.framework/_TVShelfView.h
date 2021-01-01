/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVCollectionView.h>

@class _TVShelfViewLayout;

@interface _TVShelfView : _TVCollectionView {

	_TVShelfViewLayout* _shelfFlowLayout;

}

@property (nonatomic,retain) _TVShelfViewLayout * shelfFlowLayout;              //@synthesize shelfFlowLayout=_shelfFlowLayout - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGSize)tv_sizeThatFits:(CGSize)arg1 withContentInset:(UIEdgeInsets)arg2 ;
-(id)initWithFrame:(CGRect)arg1 shelfViewLayout:(id)arg2 ;
-(void)_updateLayoutForFocusedView:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(_TVShelfViewLayout *)shelfFlowLayout;
-(UIEdgeInsets)_selectionMarginsForCell:(id)arg1 ;
-(CGRect)tv_augmentedSelectionFrameForFrame:(CGRect)arg1 ;
-(void)updateLayoutForFocusedView:(id)arg1 ;
-(UIEdgeInsets)selectionMarginsForCellAtIndexPath:(id)arg1 ;
-(void)setShelfFlowLayout:(_TVShelfViewLayout *)arg1 ;
@end

