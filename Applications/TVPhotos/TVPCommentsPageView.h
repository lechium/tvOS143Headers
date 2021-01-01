//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UISwipeGestureRecognizer, UITapGestureRecognizer;

@interface TVPCommentsPageView : UICollectionView <UIGestureRecognizerDelegate>
{
    _Bool _isPageScroll;	// 8 = 0x8
    _Bool _isMaxDownScrollLimitReached;	// 9 = 0x9
    double _pageOverlap;	// 16 = 0x10
    UITapGestureRecognizer *_upScrollGestureRecognizer;	// 24 = 0x18
    UITapGestureRecognizer *_downScrollGestureRecognizer;	// 32 = 0x20
    UISwipeGestureRecognizer *_upSwipeGestureRecognizer;	// 40 = 0x28
    UISwipeGestureRecognizer *_downSwipeGestureRecognizer;	// 48 = 0x30
    long long _itemIndex;	// 56 = 0x38
    long long _sectionIndex;	// 64 = 0x40
    long long _maxItems;	// 72 = 0x48
    double _pageScrollIncrementalYOffset;	// 80 = 0x50
    double _pageScrollFinalYOffset;	// 88 = 0x58
    double _pageScrollStartYOffset;	// 96 = 0x60
    double _offsetToAlignLastLine;	// 104 = 0x68
    double _contentHeight;	// 112 = 0x70
    double _contentBeginYOffset;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000010002ea08
@property(nonatomic) double contentBeginYOffset; // @synthesize contentBeginYOffset=_contentBeginYOffset;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) double offsetToAlignLastLine; // @synthesize offsetToAlignLastLine=_offsetToAlignLastLine;
@property(nonatomic) double pageScrollStartYOffset; // @synthesize pageScrollStartYOffset=_pageScrollStartYOffset;
@property(nonatomic) double pageScrollFinalYOffset; // @synthesize pageScrollFinalYOffset=_pageScrollFinalYOffset;
@property(nonatomic) double pageScrollIncrementalYOffset; // @synthesize pageScrollIncrementalYOffset=_pageScrollIncrementalYOffset;
@property(nonatomic) _Bool isMaxDownScrollLimitReached; // @synthesize isMaxDownScrollLimitReached=_isMaxDownScrollLimitReached;
@property(nonatomic) _Bool isPageScroll; // @synthesize isPageScroll=_isPageScroll;
@property(nonatomic) long long maxItems; // @synthesize maxItems=_maxItems;
@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) long long itemIndex; // @synthesize itemIndex=_itemIndex;
@property(retain, nonatomic) UISwipeGestureRecognizer *downSwipeGestureRecognizer; // @synthesize downSwipeGestureRecognizer=_downSwipeGestureRecognizer;
@property(retain, nonatomic) UISwipeGestureRecognizer *upSwipeGestureRecognizer; // @synthesize upSwipeGestureRecognizer=_upSwipeGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *downScrollGestureRecognizer; // @synthesize downScrollGestureRecognizer=_downScrollGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *upScrollGestureRecognizer; // @synthesize upScrollGestureRecognizer=_upScrollGestureRecognizer;
@property(nonatomic) double pageOverlap; // @synthesize pageOverlap=_pageOverlap;
- (long long)_previousSectionWithItems;	// IMP=0x000000010002e794
- (long long)_nextSectionWithItems;	// IMP=0x000000010002e714
- (_Bool)_scrollToPreviousItem;	// IMP=0x000000010002e60c
- (_Bool)_scrollToNextItem;	// IMP=0x000000010002e4f8
- (_Bool)_performPageScrollByEvaluatingOffset:(double)arg1;	// IMP=0x000000010002e440
- (void)_resetPageScrollOffsets;	// IMP=0x000000010002e3f8
- (void)_startPageScroll:(double)arg1;	// IMP=0x000000010002e2e8
- (void)_handleDownScrollButtonGesture:(id)arg1;	// IMP=0x000000010002e0b0
- (void)_handleUpScrollButtonGesture:(id)arg1;	// IMP=0x000000010002dee8
- (id)preferredFocusedView;	// IMP=0x000000010002dee4
- (_Bool)canBecomeFocused;	// IMP=0x000000010002dedc
- (void)reloadData;	// IMP=0x000000010002de48
@property(readonly, nonatomic) long long currentSection;
@property(readonly, nonatomic) long long currentIndex;
- (void)setFlowLayoutDefaultAttributes:(id)arg1;	// IMP=0x000000010002ddb4
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x000000010002dc80
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;	// IMP=0x000000010002d99c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

