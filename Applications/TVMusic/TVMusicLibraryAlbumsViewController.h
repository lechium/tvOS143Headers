//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVMusicMPRequestViewController.h"

#import "TVCollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class MPModelArtist, MPModelComposer, MPModelGenre, NSString, UIControl;

@interface TVMusicLibraryAlbumsViewController : TVMusicMPRequestViewController <TVCollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    MPModelArtist *_artist;	// 8 = 0x8
    MPModelGenre *_genre;	// 16 = 0x10
    MPModelComposer *_composer;	// 24 = 0x18
    UIControl *_playButton;	// 32 = 0x20
    UIControl *_shuffleAllButton;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x0000000100034778
- (void).cxx_destruct;	// IMP=0x0000000100035e5c
@property(retain, nonatomic) UIControl *shuffleAllButton; // @synthesize shuffleAllButton=_shuffleAllButton;
@property(retain, nonatomic) UIControl *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) MPModelComposer *composer; // @synthesize composer=_composer;
@property(retain, nonatomic) MPModelGenre *genre; // @synthesize genre=_genre;
@property(retain, nonatomic) MPModelArtist *artist; // @synthesize artist=_artist;
- (id)_genericObjectForitemAtIndexPath:(id)arg1;	// IMP=0x0000000100035c98
- (void)_selectedShuffle;	// IMP=0x0000000100035c88
- (void)_addShuffleButton;	// IMP=0x0000000100035bf4
- (void)_selectedPlay;	// IMP=0x0000000100035be4
- (void)_addPlayButton;	// IMP=0x0000000100035b50
- (void)playShuffled:(_Bool)arg1;	// IMP=0x0000000100035910
- (void)configureCell:(id)arg1 forObject:(id)arg2;	// IMP=0x000000010003573c
- (void)handlePlayPauseCommand;	// IMP=0x000000010003553c
- (id)placeholderImage;	// IMP=0x00000001000354d8
- (id)cellForItemAtIndexPath:(id)arg1;	// IMP=0x00000001000353e4
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001000353d8
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00000001000353b8
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100035368
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100035360
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100035310
- (_Bool)didPlayObject:(id)arg1;	// IMP=0x0000000100035268
- (_Bool)didSelectObject:(id)arg1;	// IMP=0x0000000100034e24
- (id)additionalHeaderControls;	// IMP=0x0000000100034d6c
- (void)viewDidLoad;	// IMP=0x0000000100034c74
- (id)initWithComposer:(id)arg1 showTitle:(_Bool)arg2;	// IMP=0x0000000100034b1c
- (id)initWithArtist:(id)arg1;	// IMP=0x0000000100034a4c
- (id)initWithGenre:(id)arg1 showTitle:(_Bool)arg2;	// IMP=0x00000001000348f4
- (id)initWithCompilations:(_Bool)arg1;	// IMP=0x0000000100034850
- (id)initWithTitle:(id)arg1 libraryRequest:(id)arg2;	// IMP=0x00000001000347bc
- (id)init;	// IMP=0x00000001000347ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

