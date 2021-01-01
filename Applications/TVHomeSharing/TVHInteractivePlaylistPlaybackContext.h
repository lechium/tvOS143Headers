//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVHPlaybackContext-Protocol.h"
#import "TVPPlaybackViewControllerDelegate-Protocol.h"

@class NSString, TVPPlayer, UIViewController;
@protocol TVHInteractivePlaylistPlaybackContextDelegate, TVHPlaybackViewController;

@interface TVHInteractivePlaylistPlaybackContext : NSObject <TVPPlaybackViewControllerDelegate, TVHPlaybackContext>
{
    _Bool _usingDiskCaching;	// 8 = 0x8
    TVPPlayer *_player;	// 16 = 0x10
    id <TVHInteractivePlaylistPlaybackContextDelegate> _delegate;	// 24 = 0x18
}

+ (id)_contextMenuDataWithMenuItems:(id)arg1 title:(id)arg2 artistName:(id)arg3;	// IMP=0x000000010004d980
+ (id)_mediaItemForPlayerMediaItem:(id)arg1;	// IMP=0x000000010004d910
- (void).cxx_destruct;	// IMP=0x000000010004db4c
@property(nonatomic) __weak id <TVHInteractivePlaylistPlaybackContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool usingDiskCaching; // @synthesize usingDiskCaching=_usingDiskCaching;
@property(readonly, nonatomic) TVPPlayer *player; // @synthesize player=_player;
- (id)_displayCollectionURLForMediaItem:(id)arg1 collectionType:(unsigned long long)arg2;	// IMP=0x000000010004d838
- (void)_displayCollectionForMediaItem:(id)arg1 collectionType:(unsigned long long)arg2;	// IMP=0x000000010004d710
- (id)_displayAlbumArtistMenuWithPlayerMediaItem:(id)arg1;	// IMP=0x000000010004d4f4
- (id)_displayAlbumMenuWithPlayerMediaItem:(id)arg1;	// IMP=0x000000010004d2d8
- (void)_handlePlaybackStateDidChangeNotification:(id)arg1;	// IMP=0x000000010004d198
- (void)_handleMusicNowPlayingWillDisappearNotification:(id)arg1;	// IMP=0x000000010004d11c
- (void)_handleMusicNowPlayingWillAppearNotification:(id)arg1;	// IMP=0x000000010004d094
@property(readonly, copy) NSString *description;
- (void)contextMenuForMediaItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010004ce14
- (void)configureWithPlaylist:(id)arg1 canUseDiskCaching:(_Bool)arg2;	// IMP=0x000000010004ccd0
@property(readonly, nonatomic) UIViewController<TVHPlaybackViewController> *playbackViewController;
- (void)dealloc;	// IMP=0x000000010004cbec
- (id)init;	// IMP=0x000000010004cac8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

