//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVMusicLibraryUtilities : NSObject
{
}

+ (id)playlistWithPersistentID:(long long)arg1;	// IMP=0x0000000100046bf0
+ (_Bool)playlistFolderExistsWithPersistentID:(long long)arg1;	// IMP=0x0000000100046b18
+ (_Bool)playlistExistsWithPersistentID:(long long)arg1;	// IMP=0x0000000100046abc
+ (id)urlForDisplayingPlaylist:(id)arg1;	// IMP=0x0000000100046768
+ (id)stringWithAppendedExplicitIndicator:(id)arg1;	// IMP=0x000000010004669c
+ (void)findSingleMusicVideoInAlbum:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100046368
+ (id)_modelSongForAdamID:(long long)arg1;	// IMP=0x00000001000462f4
+ (id)_libraryAddRemoveQueue;	// IMP=0x0000000100046284
+ (void)_addItemToPlaylist:(id)arg1 objectToAdd:(id)arg2 itemsToAdd:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100045fc4
+ (void)_storeRequestForID:(id)arg1 profile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100045cf8
+ (void)_storeProductRequestForID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100045c9c
+ (void)showContextMenuForLibraryObject:(id)arg1 inContainer:(id)arg2;	// IMP=0x0000000100045bb0
+ (void)showContextMenuForLibraryObject:(id)arg1;	// IMP=0x0000000100045ba0
+ (void)storeURLRequestForID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100045b44
+ (id)playlistChangeRequestQueue;	// IMP=0x0000000100045aa4
+ (void)getSongsInAlbum:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010004509c
+ (void)getItemsInPlaylist:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000444d4
+ (void)addPlaylist:(id)arg1 toPlaylist:(id)arg2 itemsToAdd:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100044280
+ (void)addAlbum:(id)arg1 toPlaylist:(id)arg2 songsToAdd:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100043fc0
+ (void)addSong:(id)arg1 toPlaylist:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100043ec0
+ (void)removeSong:(id)arg1 fromPlaylist:(id)arg2 atPosition:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100043620
+ (void)findPlaylistWithCloudGlobalID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000433f0
+ (void)findMPSongWithIdentifiers:(id)arg1 itemProperties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100043280
+ (void)findMPSongInLibraryWithSubscriptionAdamID:(long long)arg1 itemProperties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000431d4
+ (void)findItemInLibraryWithPersistentID:(long long)arg1 itemKind:(id)arg2 itemProperties:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100043104
+ (void)findMPObjectWithIdentifiers:(id)arg1 itemKind:(id)arg2 itemProperties:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100042e9c
+ (void)removeItemsFromLibraryWithSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010004274c
+ (void)addGlobalPlaylistToLibraryWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100042498
+ (_Bool)isItemPendingAddToLibraryForAdamID:(long long)arg1;	// IMP=0x0000000100042410
+ (void)removeMPObjectFromLibrary:(id)arg1;	// IMP=0x0000000100042160
+ (void)addItemToLibraryWithAdamID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100041900

@end
