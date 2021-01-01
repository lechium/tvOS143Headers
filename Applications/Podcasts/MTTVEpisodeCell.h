//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTTVEpisodeGenericCell.h"

@class MTEpisodeArtworkView, UIImageView, UILabel;

@interface MTTVEpisodeCell : MTTVEpisodeGenericCell
{
    _Bool _showsPlayState;	// 8 = 0x8
    _Bool _showsArtwork;	// 9 = 0x9
    MTEpisodeArtworkView *_artworkView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_metadataLabel;	// 32 = 0x20
    UIImageView *_explicitIconView;	// 40 = 0x28
    UIImageView *_videoIconView;	// 48 = 0x30
}

+ (id)imageForTreatment:(unsigned long long)arg1;	// IMP=0x0000000100047620
+ (double)capHeightToTop;	// IMP=0x000000010004679c
+ (id)metadataFont;	// IMP=0x000000010004677c
+ (id)titleFont;	// IMP=0x000000010004675c
+ (double)height;	// IMP=0x0000000100046750
- (void).cxx_destruct;	// IMP=0x0000000100048c08
@property(retain, nonatomic) UIImageView *videoIconView; // @synthesize videoIconView=_videoIconView;
@property(retain, nonatomic) UIImageView *explicitIconView; // @synthesize explicitIconView=_explicitIconView;
@property(retain, nonatomic) UILabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MTEpisodeArtworkView *artworkView; // @synthesize artworkView=_artworkView;
@property(nonatomic) _Bool showsArtwork; // @synthesize showsArtwork=_showsArtwork;
@property(nonatomic) _Bool showsPlayState; // @synthesize showsPlayState=_showsPlayState;
- (void)updatePlayStatusViewImage;	// IMP=0x0000000100048ad8
- (void)updateColors;	// IMP=0x0000000100048984
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100048438
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010004836c
- (void)layoutSubviews;	// IMP=0x0000000100047a28
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000001000479b0
- (void)updatePlayStatusForCurrentPlayerItemDidChange;	// IMP=0x0000000100047924
- (void)setCurrentPlayerItem:(_Bool)arg1;	// IMP=0x00000001000478d4
- (void)configureSubviews;	// IMP=0x00000001000476a0
- (id)_fetchMetadataText;	// IMP=0x0000000100047324
- (void)updateArtworkNowPlayingIndicator;	// IMP=0x00000001000472c8
- (void)updateArtworkAsync;	// IMP=0x0000000100046fe8
- (void)artworkDidChange:(id)arg1;	// IMP=0x0000000100046f28
- (void)setExplicitTreatment:(unsigned long long)arg1;	// IMP=0x0000000100046e04
- (void)setEpisode:(id)arg1;	// IMP=0x00000001000468bc
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100046860

@end

