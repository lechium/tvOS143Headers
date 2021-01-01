//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVMusicMPRequestViewController.h"

#import "TVCollectionViewDelegate-Protocol.h"

@class NSDateComponentsFormatter, NSString;

@interface TVMusicLibraryShowsViewController : TVMusicMPRequestViewController <TVCollectionViewDelegate>
{
    long long _selectedSegment;	// 8 = 0x8
    NSDateComponentsFormatter *_durationFormatter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010004dcd4
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000010004dca4
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010004dc38
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010004dbe4
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000010004db98
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010004d8dc
- (void)handlePlayPauseCommand;	// IMP=0x000000010004d7d4
- (_Bool)_shouldShowHeadingTitles;	// IMP=0x000000010004d6ec
@property(readonly, nonatomic) NSDateComponentsFormatter *durationFormatter;
- (id)cellIdentifier;	// IMP=0x000000010004d66c
- (struct CGSize)artworkSize;	// IMP=0x000000010004d658
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x000000010004d5c0
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x000000010004d5b8
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000010004d4c8
- (id)cellForItemAtIndexPath:(id)arg1;	// IMP=0x000000010004d074
- (void)setMpResults:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004cd3c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010004c830
- (void)viewDidLoad;	// IMP=0x000000010004c7c0
- (struct CGPoint)cellSpacing;	// IMP=0x000000010004c7ac
- (double)collectionViewTop;	// IMP=0x000000010004c7a0
- (id)initWithTitle:(id)arg1 libraryRequest:(id)arg2;	// IMP=0x000000010004c650

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
