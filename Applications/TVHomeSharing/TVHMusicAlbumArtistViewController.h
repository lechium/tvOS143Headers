//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHMediaEntitiesFetchViewController.h"

#import "TVHMediaEntitiesFetchViewControllerDelegate-Protocol.h"
#import "TVHMediaEntitiesGridViewControllerDelegate-Protocol.h"

@class NSString, TVHMediaEntitiesDataSource, TVHMediaEntitiesGridDataSource, TVHMediaEntitiesGridViewController;

@interface TVHMusicAlbumArtistViewController : TVHMediaEntitiesFetchViewController <TVHMediaEntitiesFetchViewControllerDelegate, TVHMediaEntitiesGridViewControllerDelegate>
{
    TVHMediaEntitiesDataSource *_albumsDataSource;	// 8 = 0x8
    TVHMediaEntitiesDataSource *_musicVideosDataSource;	// 16 = 0x10
    TVHMediaEntitiesGridDataSource *_gridDataSource;	// 24 = 0x18
    TVHMediaEntitiesGridViewController *_gridViewController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010005c1bc
@property(retain, nonatomic) TVHMediaEntitiesGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
@property(retain, nonatomic) TVHMediaEntitiesGridDataSource *gridDataSource; // @synthesize gridDataSource=_gridDataSource;
@property(retain, nonatomic) TVHMediaEntitiesDataSource *musicVideosDataSource; // @synthesize musicVideosDataSource=_musicVideosDataSource;
@property(retain, nonatomic) TVHMediaEntitiesDataSource *albumsDataSource; // @synthesize albumsDataSource=_albumsDataSource;
- (void)_playWithShuffle:(_Bool)arg1;	// IMP=0x000000010005c02c
- (void)_handleShuffleButtonAction;	// IMP=0x000000010005c01c
- (void)_handlePlayButtonAction;	// IMP=0x000000010005c00c
- (void)_updateWithFetchControllerResultSet:(id)arg1;	// IMP=0x000000010005bc5c
- (void)mediaEntitiesGridViewController:(id)arg1 didPlayMediaEntity:(id)arg2;	// IMP=0x000000010005ba7c
- (void)mediaEntitiesGridViewController:(id)arg1 didSelectMediaEntity:(id)arg2;	// IMP=0x000000010005b868
- (void)mediaEntitiesGridViewController:(id)arg1 configureLockup:(id)arg2 forMediaEntity:(id)arg3;	// IMP=0x000000010005b78c
- (void)mediaEntitiesFetchViewController:(id)arg1 updateContentViewController:(id)arg2 withFetchControllerResultSet:(id)arg3;	// IMP=0x000000010005b77c
- (id)mediaEntitiesFetchViewController:(id)arg1 contentViewControllerWithFetchControllerResultSet:(id)arg2 sourceMediaEntity:(id)arg3 sourceMediaEntityBackgroundImageInfo:(id)arg4;	// IMP=0x000000010005b0ec
- (id)initWithAlbumArtist:(id)arg1 mediaLibrary:(id)arg2 albumArtistsFetchContext:(id)arg3;	// IMP=0x000000010005ac04
- (id)initWithMediaLibrary:(id)arg1 fetchRequests:(id)arg2 mode:(unsigned long long)arg3 sourceMediaEntity:(id)arg4 sourceMediaEntitiesFetchContext:(id)arg5;	// IMP=0x000000010005ab7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

