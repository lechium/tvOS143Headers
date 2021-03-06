//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVMusicContextMenuFactory : NSObject
{
}

+ (id)_contextMenuForArtist:(id)arg1;	// IMP=0x0000000100069b00
+ (id)_contextMenuForMovie:(id)arg1;	// IMP=0x0000000100069758
+ (id)_contextMenuForTVEpisode:(id)arg1;	// IMP=0x000000010006945c
+ (id)_menuDataWithTitle:(id)arg1 addItemsBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100069380
+ (id)_contextMenuForPlaylist:(id)arg1;	// IMP=0x0000000100068e5c
+ (id)_contextMenuForAlbum:(id)arg1;	// IMP=0x0000000100068994
+ (id)_contextMenuForSong:(id)arg1;	// IMP=0x0000000100068224
+ (_Bool)_hasCloudLibrary;	// IMP=0x00000001000681cc
+ (void)_presentViewController:(id)arg1;	// IMP=0x00000001000680e4
+ (void)_pushViewController:(id)arg1;	// IMP=0x0000000100068000
+ (void)_performWithAppInForeground:(CDUnknownBlockType)arg1;	// IMP=0x0000000100067b80
+ (id)_navigationController;	// IMP=0x0000000100067b24
+ (void)_openJavascriptWithURL:(id)arg1;	// IMP=0x0000000100067a44
+ (void)_removeLibraryItemItemMatchingIdentifiers:(id)arg1 itemKind:(id)arg2;	// IMP=0x0000000100067890
+ (void)_findLibraryItemMatchingIdentifiers:(id)arg1 itemKind:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000676a0
+ (id)_player;	// IMP=0x0000000100067644
+ (id)_propertiesForGenericObjectType:(long long)arg1;	// IMP=0x0000000100067510
+ (id)_kindForGenericObjectType:(long long)arg1;	// IMP=0x00000001000673f4
+ (id)_menuItemForGoToMovieWithStoreID:(long long)arg1;	// IMP=0x0000000100067250
+ (id)_menuItemForGoToMovie:(id)arg1;	// IMP=0x0000000100067130
+ (id)_menuItemForGoToTVShowWithEpisodeStoreID:(long long)arg1;	// IMP=0x0000000100066f8c
+ (id)_menuItemForGoToTVShow:(id)arg1;	// IMP=0x0000000100066e6c
+ (id)_menuItemForCatalogShuffle;	// IMP=0x0000000100066dac
+ (id)_menuItemForCatalogPlaylistUnsubscribe:(id)arg1;	// IMP=0x0000000100066a4c
+ (id)_menuItemForCatalogPlaylistSubscribe:(id)arg1;	// IMP=0x0000000100066610
+ (id)_menuItemForSongLyrics:(id)arg1;	// IMP=0x0000000100066390
+ (id)_menuItemForAddToPlaylist:(id)arg1;	// IMP=0x0000000100066158
+ (void)_goToPlaylistAction:(id)arg1;	// IMP=0x0000000100065f04
+ (id)_menuItemForGoToArtist:(id)arg1;	// IMP=0x0000000100065b24
+ (id)_menuItemForLibraryGoToArtist:(id)arg1;	// IMP=0x00000001000653e0
+ (void)_catalogSongGoToAlbumActon:(id)arg1;	// IMP=0x0000000100065158
+ (id)_menuItemGoToPlaylistWithSong:(id)arg1;	// IMP=0x0000000100064fd0
+ (id)_menuItemGoToPlaylist:(id)arg1;	// IMP=0x0000000100064d9c
+ (id)_menuItemForCatalogSongGoToAlbum:(id)arg1;	// IMP=0x0000000100064ae8
+ (id)_menuItemForCreateStationFromArtist:(id)arg1;	// IMP=0x0000000100064904
+ (id)_menuItemForCreateStationFromAlbum:(id)arg1;	// IMP=0x0000000100064720
+ (id)_menuItemForCreateStationFromSong:(id)arg1;	// IMP=0x0000000100064528
+ (id)_menuItemForAddMPObject:(id)arg1 isExplicit:(_Bool)arg2;	// IMP=0x0000000100064020
+ (id)_menuItemForRemoveMPObject:(id)arg1 title:(id)arg2;	// IMP=0x0000000100063e20
+ (id)_menuItemForAddOrRemoveTVorMovie:(id)arg1 title:(id)arg2 inLibrary:(_Bool)arg3;	// IMP=0x0000000100063cd0
+ (id)_menuItemForAddSong:(id)arg1;	// IMP=0x0000000100063c50
+ (id)_menuItemForRemoveSong:(id)arg1;	// IMP=0x0000000100063bc8
+ (id)_menuItemForRemoveAlbumFromLibrary:(id)arg1;	// IMP=0x000000010006394c
+ (void)_presentExplicitRestrictAlertIfNeededOfType:(long long)arg1 isExplicit:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010006388c
+ (id)_menuItemForAddAlbumToLibrary:(id)arg1;	// IMP=0x000000010006337c
+ (id)_menuItemForAddOrRemoveAlbum:(id)arg1;	// IMP=0x00000001000632e8
+ (void)_showLyricsForContextMenuSubject:(id)arg1;	// IMP=0x000000010006308c
+ (id)_menuItemForLibraryPlayback:(id)arg1 itemType:(unsigned long long)arg2 persistentID:(long long)arg3 playbackAction:(unsigned long long)arg4;	// IMP=0x0000000100062e88
+ (id)_menuItemForPlaySong:(id)arg1 inContainer:(id)arg2 playbackAction:(unsigned long long)arg3;	// IMP=0x0000000100062b20
+ (id)_menuItemForAddToUpNext:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010006285c
+ (id)_menuItemForPlayNext:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010006253c
+ (id)_menuItemForTasteType:(long long)arg1 tasteTitleKey:(id)arg2 neutralTitleKey:(id)arg3 mpObject:(id)arg4;	// IMP=0x0000000100062354
+ (id)_menuItemForHateMPObject:(id)arg1;	// IMP=0x00000001000622f0
+ (id)_menuItemForLoveMPObject:(id)arg1;	// IMP=0x000000010006228c
+ (id)_menuItemForRemoveMPObjectFromLibrary:(id)arg1 title:(id)arg2;	// IMP=0x0000000100062074
+ (void)_deleteConfirmationDialogWithTitle:(id)arg1 CompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100061d40
+ (id)_menuTitleForMPSong:(id)arg1;	// IMP=0x0000000100061bec
+ (id)_menuItemForLibraryRemoveSong:(id)arg1 fromPlaylist:(id)arg2 atPosition:(long long)arg3;	// IMP=0x00000001000618a4
+ (void)_showLibraryArtistWithPID:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100061600
+ (id)_menuItemForLibraryGoToAlbumWithSong:(id)arg1;	// IMP=0x0000000100061098
+ (void)_findAlbumWithPersistentID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100060f60
+ (id)_contextMenuForRadioStation:(id)arg1;	// IMP=0x0000000100060d10
+ (id)_contextMenuForMPTVSeason:(id)arg1;	// IMP=0x0000000100060aa4
+ (void)_contextMenuForLibraryPlaylistEntry:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100060578
+ (void)_contextMenuForLibraryObject:(id)arg1 inContainer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100060418
+ (id)contextMenuForSubject:(id)arg1;	// IMP=0x0000000100060138
+ (void)contextMenuForLibraryPlaylistEntry:(id)arg1 inPlaylist:(id)arg2 atPosition:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010005ff90
+ (void)contextMenuForLibraryObject:(id)arg1 inContainer:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010005fa5c
+ (void)contextMenuForLibraryObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005fa08
+ (void)contextMenuForStoreObject:(id)arg1 inContainer:(id)arg2 isInLibrary:(_Bool)arg3 playbackReportingDictionary:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010005f848
+ (void)contextMenuForMediaItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005f604
+ (void)initialize;	// IMP=0x000000010005f5d0

@end

