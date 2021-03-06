//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray, NSMutableDictionary;

@interface PBAppSwitcherFocusLayout : UICollectionViewLayout
{
    NSMutableArray *_insertedIndexPaths;	// 8 = 0x8
    NSMutableArray *_deletedIndexPaths;	// 16 = 0x10
    NSMutableDictionary *_finalIndexPathByOriginalIndexPath;	// 24 = 0x18
    long long _numberOfItemsBeforeUpdate;	// 32 = 0x20
    long long _numberOfItems;	// 40 = 0x28
    double _screenHeight;	// 48 = 0x30
    long long _swipeIndex;	// 56 = 0x38
    double _swipeUpOffset;	// 64 = 0x40
}

+ (double)contentOffsetAdjustmentForLastItem;	// IMP=0x00000001001bf40c
+ (Class)invalidationContextClass;	// IMP=0x00000001001bf084
+ (Class)layoutAttributesClass;	// IMP=0x00000001001bf054
- (void).cxx_destruct;	// IMP=0x00000001001c17f4
@property(readonly, nonatomic) double swipeUpOffset; // @synthesize swipeUpOffset=_swipeUpOffset;
@property(readonly, nonatomic) long long swipeIndex; // @synthesize swipeIndex=_swipeIndex;
@property(readonly, nonatomic) double screenHeight; // @synthesize screenHeight=_screenHeight;
@property(readonly, nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(readonly, nonatomic) long long numberOfItemsBeforeUpdate; // @synthesize numberOfItemsBeforeUpdate=_numberOfItemsBeforeUpdate;
@property(readonly, copy, nonatomic) NSMutableDictionary *finalIndexPathByOriginalIndexPath; // @synthesize finalIndexPathByOriginalIndexPath=_finalIndexPathByOriginalIndexPath;
@property(readonly, copy, nonatomic) NSMutableArray *deletedIndexPaths; // @synthesize deletedIndexPaths=_deletedIndexPaths;
@property(readonly, copy, nonatomic) NSMutableArray *insertedIndexPaths; // @synthesize insertedIndexPaths=_insertedIndexPaths;
- (double)_scrollProgress;	// IMP=0x00000001001c159c
- (id)_attributesForIndexPath:(id)arg1 scrollProgress:(double)arg2 swipeOffset:(double)arg3 swipeIndex:(long long)arg4 allowMask:(_Bool)arg5;	// IMP=0x00000001001c080c
- (void)finalizeCollectionViewUpdates;	// IMP=0x00000001001c0744
- (void)prepareForCollectionViewUpdates:(id)arg1;	// IMP=0x00000001001bffd8
- (void)invalidateLayoutWithContext:(id)arg1;	// IMP=0x00000001001bfdcc
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;	// IMP=0x00000001001bfb2c
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;	// IMP=0x00000001001bf9a8
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x00000001001bf8f0
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x00000001001bf474
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;	// IMP=0x00000001001bf284
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;	// IMP=0x00000001001bf220
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x00000001001bf1f0
- (struct CGSize)collectionViewContentSize;	// IMP=0x00000001001bf0b4
- (id)init;	// IMP=0x00000001001beea0

@end

