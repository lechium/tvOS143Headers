/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class VUIShelfLayoutHelper, NSArray;

@interface VUIShelfViewLayout : UICollectionViewLayout {

	BOOL _shouldSnapContent;
	double _minimumInteritemSpacing;
	double _minimumLineSpacing;
	long long _rowCount;
	long long _prominentSectionIndex;
	double _headerSelectionMargin;
	double _headerBottomMargin;
	VUIShelfLayoutHelper* _layoutHelper;
	NSArray* _shelfLayoutSections;
	CGSize _itemSize;
	CGSize _headerReferenceSize;
	UIEdgeInsets _sectionInset;

}

@property (nonatomic,retain) VUIShelfLayoutHelper * layoutHelper;              //@synthesize layoutHelper=_layoutHelper - In the implementation block
@property (nonatomic,retain) NSArray * shelfLayoutSections;                    //@synthesize shelfLayoutSections=_shelfLayoutSections - In the implementation block
@property (assign,nonatomic) BOOL shouldSnapContent;                           //@synthesize shouldSnapContent=_shouldSnapContent - In the implementation block
@property (assign,nonatomic) double minimumInteritemSpacing;                   //@synthesize minimumInteritemSpacing=_minimumInteritemSpacing - In the implementation block
@property (assign,nonatomic) double minimumLineSpacing;                        //@synthesize minimumLineSpacing=_minimumLineSpacing - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                  //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) long long rowCount;                               //@synthesize rowCount=_rowCount - In the implementation block
@property (assign,nonatomic) long long prominentSectionIndex;                  //@synthesize prominentSectionIndex=_prominentSectionIndex - In the implementation block
@property (assign,nonatomic) CGSize headerReferenceSize;                       //@synthesize headerReferenceSize=_headerReferenceSize - In the implementation block
@property (assign,nonatomic) double headerSelectionMargin;                     //@synthesize headerSelectionMargin=_headerSelectionMargin - In the implementation block
@property (assign,nonatomic) double headerBottomMargin;                        //@synthesize headerBottomMargin=_headerBottomMargin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInset;                        //@synthesize sectionInset=_sectionInset - In the implementation block
+(double)defaultHeaderSelectionMargin;
-(id)init;
-(long long)rowCount;
-(void)setRowCount:(long long)arg1 ;
-(void)setItemSize:(CGSize)arg1 ;
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(void)setMinimumInteritemSpacing:(double)arg1 ;
-(void)setMinimumLineSpacing:(double)arg1 ;
-(double)minimumInteritemSpacing;
-(UIEdgeInsets)sectionInset;
-(double)minimumLineSpacing;
-(CGSize)itemSize;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)setHeaderReferenceSize:(CGSize)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(VUIShelfLayoutHelper *)layoutHelper;
-(void)setLayoutHelper:(VUIShelfLayoutHelper *)arg1 ;
-(CGSize)headerReferenceSize;
-(double)computedContentHeight;
-(CGRect)boundingSelectionFrameForFrame:(CGRect)arg1 ;
-(void)snapContent;
-(NSArray *)shelfLayoutSections;
-(void)setShelfLayoutSections:(NSArray *)arg1 ;
-(BOOL)_bumpHeaderForLayoutSection:(id)arg1 forIndexPath:(id)arg2 ;
-(double)headerBottomMargin;
-(double)headerSelectionMargin;
-(BOOL)shouldSnapContent;
-(id)_indexPathForItemAtProposedContentOffset:(CGPoint)arg1 ;
-(void)snapContentToIndexPath:(id)arg1 ;
-(void)setShouldSnapContent:(BOOL)arg1 ;
-(long long)computedRowCount;
-(id)indexPathForSnappedContent;
-(long long)prominentSectionIndex;
-(void)setProminentSectionIndex:(long long)arg1 ;
-(void)setHeaderSelectionMargin:(double)arg1 ;
-(void)setHeaderBottomMargin:(double)arg1 ;
@end

