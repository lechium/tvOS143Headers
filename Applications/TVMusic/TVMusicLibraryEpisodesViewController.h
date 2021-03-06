//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVMusicMPRequestViewController.h"

#import "TVCollectionViewDelegate-Protocol.h"

@class MPModelTVSeason, NSArray, NSDateFormatter, NSString, TVImageView, UIControl, UIView;

@interface TVMusicLibraryEpisodesViewController : TVMusicMPRequestViewController <TVCollectionViewDelegate>
{
    UIView *_imageViewContainer;	// 8 = 0x8
    TVImageView *_artworkImageView;	// 16 = 0x10
    UIControl *_goToShowButton;	// 24 = 0x18
    UIControl *_moreButton;	// 32 = 0x20
    NSArray *_actionButtons;	// 40 = 0x28
    MPModelTVSeason *_tvSeason;	// 48 = 0x30
    NSDateFormatter *_episodeReleaseDateFormatter;	// 56 = 0x38
    _Bool _visibleOnScreen;	// 64 = 0x40
    _Bool _shouldReloadOnViewDidAppear;	// 65 = 0x41
}

+ (_Bool)_isTVEpisodeWatched:(id)arg1;	// IMP=0x0000000100017f98
- (void).cxx_destruct;	// IMP=0x00000001000185f0
- (struct CGSize)artworkSize;	// IMP=0x00000001000185dc
- (void)_bookmarkWillUpdateNotification:(id)arg1;	// IMP=0x0000000100018354
- (id)_songCellPlaceholderImage;	// IMP=0x00000001000182f0
- (id)_artworkPlaceholderImageForUserInterfaceStyle:(long long)arg1;	// IMP=0x000000010001828c
- (void)_selectedMoreButton;	// IMP=0x0000000100018150
- (void)_setPositionForView:(id)arg1 topLeft:(struct CGPoint)arg2;	// IMP=0x00000001000180f0
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100017b60
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100017ac8
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100017ac0
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001000179c4
- (void)handlePlayPauseCommand;	// IMP=0x000000010001789c
- (double)cellsTopMargin;	// IMP=0x0000000100017890
- (id)cellIdentifier;	// IMP=0x0000000100017884
- (void)_goToShow;	// IMP=0x0000000100017720
- (void)_sizeImageViewToFit;	// IMP=0x0000000100017604
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100017334
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100017028
- (void)viewDidLoad;	// IMP=0x0000000100016234
- (id)_seasonName;	// IMP=0x0000000100016128
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010001608c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100016040
- (void)dealloc;	// IMP=0x0000000100015fc8
- (id)initWithSeason:(id)arg1 libraryRequest:(id)arg2;	// IMP=0x00000001000159b0
- (id)initWithTitle:(id)arg1 libraryRequest:(id)arg2;	// IMP=0x0000000100015998

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

