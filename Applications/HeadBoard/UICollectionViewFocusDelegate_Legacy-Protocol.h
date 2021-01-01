//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UICollectionViewDelegate-Protocol.h"

@class NSIndexPath, UICollectionView, UIView;

@protocol UICollectionViewFocusDelegate_Legacy <UICollectionViewDelegate>

@optional
- (NSIndexPath *)indexPathForPreferredFocusedItemForCollectionView:(UICollectionView *)arg1;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldUpdateFocusFromItemAtIndexPath:(NSIndexPath *)arg2 toView:(UIView *)arg3 heading:(unsigned long long)arg4;
- (void)collectionView:(UICollectionView *)arg1 didUnfocusItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didFocusItemAtIndexPath:(NSIndexPath *)arg2;
- (void)_collectionView:(UICollectionView *)arg1 didFocusItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)_collectionView:(UICollectionView *)arg1 canFocusItemAtIndexPath:(NSIndexPath *)arg2;
@end

