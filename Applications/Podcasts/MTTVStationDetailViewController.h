//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTTVEpisodeSplitViewController.h"

@class MTPlaylist;

@interface MTTVStationDetailViewController : MTTVEpisodeSplitViewController
{
    MTPlaylist *_playlist;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010003c0bc
@property(readonly, nonatomic) MTPlaylist *playlist; // @synthesize playlist=_playlist;
- (void)_masterListFocusDidChange;	// IMP=0x000000010003c060
- (id)placeholderDetailViewController;	// IMP=0x000000010003bfb8
- (void)viewDidLoad;	// IMP=0x000000010003beb0
- (id)initWithPlaylist:(id)arg1;	// IMP=0x000000010003be30

@end
