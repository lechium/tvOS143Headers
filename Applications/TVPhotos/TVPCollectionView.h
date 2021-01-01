//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSIndexPath, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol TVPCollectionViewDelegate;

@interface TVPCollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_playButtonRecognizer;	// 8 = 0x8
    UILongPressGestureRecognizer *_longPressRecognizer;	// 16 = 0x10
    struct {
        unsigned int _respondsToDidPlayItem:1;
        unsigned int _respondsToDidLongPressItem:1;
        unsigned int _respondsToCanBecomeFocused:1;
    } _delegateFlags;	// 24 = 0x18
    NSIndexPath *_indexPathForLastFocusedItem;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010007ab54
@property(readonly, copy, nonatomic) NSIndexPath *indexPathForLastFocusedItem; // @synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem;
- (void)_performBlockWithFocusedCellIndexPath:(CDUnknownBlockType)arg1;	// IMP=0x000000010007aa14
- (void)_longPressAction:(id)arg1;	// IMP=0x000000010007a920
- (void)_playButtonAction:(id)arg1;	// IMP=0x000000010007a854
@property(nonatomic) __weak id <TVPCollectionViewDelegate> delegate; // @dynamic delegate;
- (void)_notifyDidScroll;	// IMP=0x000000010007a6ec
- (void)reloadData;	// IMP=0x000000010007a698
- (_Bool)canBecomeFocused;	// IMP=0x000000010007a608
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010007a3d0
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000010007a1dc
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000010007a1d4
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;	// IMP=0x000000010007a064

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
