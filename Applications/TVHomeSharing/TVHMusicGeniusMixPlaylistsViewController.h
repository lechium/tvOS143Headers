//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHMediaEntitiesFetchViewController.h"

#import "TVHMediaEntitiesFetchViewControllerDelegate-Protocol.h"
#import "TVHMediaEntitiesGridViewControllerDelegate-Protocol.h"

@class NSString, TVHMediaEntitiesGridDataSource, TVHMediaEntitiesGridViewController;

@interface TVHMusicGeniusMixPlaylistsViewController : TVHMediaEntitiesFetchViewController <TVHMediaEntitiesFetchViewControllerDelegate, TVHMediaEntitiesGridViewControllerDelegate>
{
    TVHMediaEntitiesGridDataSource *_gridDataSource;	// 8 = 0x8
    TVHMediaEntitiesGridViewController *_gridViewController;	// 16 = 0x10
    struct CGSize _cellSize;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100073d58
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(retain, nonatomic) TVHMediaEntitiesGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
@property(retain, nonatomic) TVHMediaEntitiesGridDataSource *gridDataSource; // @synthesize gridDataSource=_gridDataSource;
- (void)_updateWithFetchControllerResultSet:(id)arg1;	// IMP=0x0000000100073be4
- (void)_playGeniusMix:(id)arg1;	// IMP=0x0000000100073968
- (void)mediaEntitiesGridViewController:(id)arg1 didPlayMediaEntity:(id)arg2;	// IMP=0x0000000100073958
- (void)mediaEntitiesGridViewController:(id)arg1 didSelectMediaEntity:(id)arg2;	// IMP=0x0000000100073948
- (void)mediaEntitiesGridViewController:(id)arg1 configureLockup:(id)arg2 forMediaEntity:(id)arg3;	// IMP=0x0000000100073894
- (void)mediaEntitiesFetchViewController:(id)arg1 updateContentViewController:(id)arg2 withFetchControllerResultSet:(id)arg3;	// IMP=0x0000000100073884
- (id)mediaEntitiesFetchViewController:(id)arg1 contentViewControllerWithFetchControllerResultSet:(id)arg2 sourceMediaEntity:(id)arg3 sourceMediaEntityBackgroundImageInfo:(id)arg4;	// IMP=0x0000000100073710
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x00000001000733ac
- (id)initWithMediaLibrary:(id)arg1 fetchRequests:(id)arg2 mode:(unsigned long long)arg3 sourceMediaEntity:(id)arg4 sourceMediaEntitiesFetchContext:(id)arg5;	// IMP=0x0000000100073324

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

