/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SharingUI/SharingUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@protocol SFCollectionViewDelegateLayout;
@class NSArray;

@interface SFCollectionViewLayout : UICollectionViewLayout {

	id<SFCollectionViewDelegateLayout> _fallbackDelegate;
	double _evaluatedHorizontalItemOffset;
	NSArray* _preparedLayoutAttributes;
	NSArray* _preparedUpdateItems;
	CGSize _evaluatedItemSize;
	CGSize _evaluatedContentSize;
	UIEdgeInsets _evaluatedInset;

}

@property (assign,nonatomic) UIEdgeInsets evaluatedInset;                                             //@synthesize evaluatedInset=_evaluatedInset - In the implementation block
@property (assign,nonatomic) CGSize evaluatedItemSize;                                                //@synthesize evaluatedItemSize=_evaluatedItemSize - In the implementation block
@property (assign,nonatomic) CGSize evaluatedContentSize;                                             //@synthesize evaluatedContentSize=_evaluatedContentSize - In the implementation block
@property (assign,nonatomic) double evaluatedHorizontalItemOffset;                                    //@synthesize evaluatedHorizontalItemOffset=_evaluatedHorizontalItemOffset - In the implementation block
@property (nonatomic,copy) NSArray * preparedLayoutAttributes;                                        //@synthesize preparedLayoutAttributes=_preparedLayoutAttributes - In the implementation block
@property (nonatomic,copy) NSArray * preparedUpdateItems;                                             //@synthesize preparedUpdateItems=_preparedUpdateItems - In the implementation block
@property (assign,nonatomic,__weak) id<SFCollectionViewDelegateLayout> fallbackDelegate;              //@synthesize fallbackDelegate=_fallbackDelegate - In the implementation block
-(id)init;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(BOOL)shouldReverseLayoutDirection;
-(UIEdgeInsets)evaluatedInset;
-(id)_indexPathsForItemsInSection:(long long)arg1 ;
-(CGSize)_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)arg1 ;
-(UIEdgeInsets)_evaluateInsetForSectionAtIndex:(long long)arg1 ;
-(void)setEvaluatedHorizontalItemOffset:(double)arg1 ;
-(void)setEvaluatedInset:(UIEdgeInsets)arg1 ;
-(void)setEvaluatedItemSize:(CGSize)arg1 ;
-(CGSize)evaluatedContentSize;
-(void)setEvaluatedContentSize:(CGSize)arg1 ;
-(id)_layoutAttributesForItemAtIndexPath:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2 ;
-(void)setPreparedLayoutAttributes:(NSArray *)arg1 ;
-(NSArray *)preparedLayoutAttributes;
-(NSArray *)preparedUpdateItems;
-(void)setPreparedUpdateItems:(NSArray *)arg1 ;
-(CGSize)evaluatedItemSize;
-(double)evaluatedHorizontalItemOffset;
-(void)invalidateGroupViewLayoutAnimated:(BOOL)arg1 ;
-(BOOL)_shouldScrollToContentBeginningInRightToLeft;
-(void)calculateLayoutValuesForIndexPaths:(id)arg1 containerWidth:(double)arg2 ;
-(double)_evaluateHorizontalItemOffsetForItemSize:(CGSize)arg1 inset:(UIEdgeInsets)arg2 containerWidth:(double)arg3 offscreenPeekInFactor:(float)arg4 ;
-(id<SFCollectionViewDelegateLayout>)fallbackDelegate;
-(CGPoint)firstItemCenterForContainerWidth:(double)arg1 ;
-(void)setFallbackDelegate:(id<SFCollectionViewDelegateLayout>)arg1 ;
@end

