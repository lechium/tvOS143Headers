//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTTVEpisodeListViewController.h"

@class MTAllPropertyChangesQueryObserver, MTPlaylist, UIBarButtonItem;

@interface MTTVStationEpisodeListViewController : MTTVEpisodeListViewController
{
    MTPlaylist *_playlist;	// 8 = 0x8
    UIBarButtonItem *_settingsButtonItem;	// 16 = 0x10
    MTAllPropertyChangesQueryObserver *_playlistPropertiesObserver;	// 24 = 0x18
}

+ (Class)episodeCellClass;	// IMP=0x000000010000fb8c
- (void).cxx_destruct;	// IMP=0x0000000100010eb0
@property(retain, nonatomic) MTAllPropertyChangesQueryObserver *playlistPropertiesObserver; // @synthesize playlistPropertiesObserver=_playlistPropertiesObserver;
@property(retain, nonatomic) UIBarButtonItem *settingsButtonItem; // @synthesize settingsButtonItem=_settingsButtonItem;
@property(retain, nonatomic) MTPlaylist *playlist; // @synthesize playlist=_playlist;
- (void)dealloc;	// IMP=0x0000000100010dd8
- (_Bool)_hasEmptySection;	// IMP=0x0000000100010d60
- (void)_setupPlaylistPropertyObserver;	// IMP=0x0000000100010b18
- (void)_showSettings;	// IMP=0x0000000100010a44
- (_Bool)_isIndexPathForSettings:(id)arg1;	// IMP=0x0000000100010a1c
- (_Bool)hasItems;	// IMP=0x0000000100010a14
- (void)selectedItemAtIndexPath:(id)arg1;	// IMP=0x000000010001095c
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000108a0
- (void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100010714
- (id)newCellInstanceWithReuseIdentifier:(id)arg1;	// IMP=0x0000000100010584
- (id)reuseIdentifierForRow:(id)arg1;	// IMP=0x00000001000104ac
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x0000000100010374
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;	// IMP=0x0000000100010264
- (_Bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;	// IMP=0x000000010001023c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010001016c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100010164
- (void)playEpisodeAtIndexPath:(id)arg1;	// IMP=0x0000000100010044
- (void)settingsTapped:(id)arg1;	// IMP=0x000000010000ffa8
- (id)rightButtonItems;	// IMP=0x000000010000ffa0
- (id)deleteEpisodeAction;	// IMP=0x000000010000fd64
- (void)viewDidLoad;	// IMP=0x000000010000fc64
- (id)initWithPlaylist:(id)arg1;	// IMP=0x000000010000fb98

@end

