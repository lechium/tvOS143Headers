/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OpusKit-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSMutableArray;

@interface OKWidgetGridViewCondensedLayout : UICollectionViewLayout {

	float _spacingRatio;
	unsigned long long _numberOfRows;
	BOOL _snappingEnabled;
	NSMutableArray* _attributes;
	double _largestWidth;
	CGSize _contentSize;
	CGRect _oldBounds;

}

@property (assign) float spacingRatio;                           //@synthesize spacingRatio=_spacingRatio - In the implementation block
@property (assign) unsigned long long numberOfRows;              //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (assign) BOOL snappingEnabled;                         //@synthesize snappingEnabled=_snappingEnabled - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)numberOfRows;
-(void)setNumberOfRows:(unsigned long long)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(BOOL)shouldUpdateVisibleCellLayoutAttributes;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(void)finalizeAnimatedBoundsChange;
-(void)setSpacingRatio:(float)arg1 ;
-(id)indexPathsForItemsInRect:(CGRect)arg1 ;
-(float)spacingRatio;
-(BOOL)snappingEnabled;
-(void)setSnappingEnabled:(BOOL)arg1 ;
@end
