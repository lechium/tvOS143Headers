//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC8AppStore25ShelfDisplayingFlowLayout.h"

@class MISSING_TYPE;

@interface _TtC8AppStore29CollectionViewTableFlowLayout : _TtC8AppStore25ShelfDisplayingFlowLayout
{
    MISSING_TYPE *globalHeaderAvoidsOverscroll;	// 24 = 0x18
    MISSING_TYPE *isSupplementaryViewAnimationEnabled;	// 25 = 0x19
    MISSING_TYPE *globalHeaderSize;	// 32 = 0x20
    MISSING_TYPE *globalHeaderFrame;	// 48 = 0x30
    MISSING_TYPE *pendingPrepareObserver;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001001a67a8
- (void)invalidateLayoutWithContext:(id)arg1;	// IMP=0x00000001001a6718
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;	// IMP=0x00000001001a65a4
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x00000001001a6300
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000001001a6038
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000001001a602c
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x00000001001a5f90
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000001001a591c
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000001001a5778
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x00000001001a53ec
@property(nonatomic, readonly) struct CGSize collectionViewContentSize;
- (void)prepareLayout;	// IMP=0x00000001001a50e8
@property(nonatomic) _Bool sectionFootersPinToVisibleBounds;
@property(nonatomic) _Bool sectionHeadersPinToVisibleBounds;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001a4a20
- (id)init;	// IMP=0x00000001001a4a00

@end

