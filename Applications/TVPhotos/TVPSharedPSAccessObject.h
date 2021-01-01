//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVPAccessObject.h"

#import "MSASModelObserver-Protocol.h"
#import "TVCKPushNotificationListener-Protocol.h"

@class ACAccount, NSCache, NSString;
@protocol TVPSharedPSAccessObjectDelegate;

@interface TVPSharedPSAccessObject : TVPAccessObject <MSASModelObserver, TVCKPushNotificationListener>
{
    ACAccount *appleAccount;	// 8 = 0x8
    id <TVPSharedPSAccessObjectDelegate> _delegate;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    NSCache *_mediaURLCache;	// 32 = 0x20
}

+ (id)delegatePluginForPersonID:(id)arg1;	// IMP=0x0000000100020618
+ (id)accessObjectWithAppleAccount:(id)arg1;	// IMP=0x000000010001f200
+ (void)initialize;	// IMP=0x000000010001f168
- (void).cxx_destruct;	// IMP=0x00000001000241b4
@property(retain, nonatomic) NSCache *mediaURLCache; // @synthesize mediaURLCache=_mediaURLCache;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak id <TVPSharedPSAccessObjectDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ACAccount *appleAccount; // @synthesize appleAccount;
- (id)_imageTokenForMSAsset:(id)arg1;	// IMP=0x000000010002407c
- (id)_serverSideModel;	// IMP=0x0000000100023fb0
- (void)_didFinishRetrievingAsset:(id)arg1 inAlbum:(id)arg2 imageData:(id)arg3 error:(id)arg4;	// IMP=0x0000000100023e5c
- (void)_loadImageForImageTokens:(id)arg1;	// IMP=0x000000010002395c
- (id)_imageTokenForAssetID:(id)arg1;	// IMP=0x000000010002385c
- (id)_imageForAssetID:(id)arg1 canLoad:(_Bool *)arg2;	// IMP=0x0000000100023848
- (void)_tearDown;	// IMP=0x00000001000236c4
- (void)_runSetup;	// IMP=0x00000001000234e4
- (void)pushNotificationServerTokenDidChange:(id)arg1;	// IMP=0x00000001000234e0
- (void)pushNotificationServer:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000010002333c
- (void)MSASModel:(id)arg1 didFinishCheckingForChangesInfo:(id)arg2 error:(id)arg3;	// IMP=0x000000010002320c
- (void)MSASModel:(id)arg1 didFinishRetrievingAsset:(id)arg2 inAlbum:(id)arg3 error:(id)arg4;	// IMP=0x0000000100022ec0
- (void)MSASModel:(id)arg1 didFinishAcceptingInvitation:(id)arg2 forAlbum:(id)arg3 error:(id)arg4;	// IMP=0x0000000100022cc0
- (void)MSASModel:(id)arg1 didFindCommentChange:(id)arg2 inAssetCollection:(id)arg3 inAlbum:(id)arg4;	// IMP=0x0000000100022a08
- (void)MSASModel:(id)arg1 didFindNewComments:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5;	// IMP=0x0000000100022658
- (void)MSASModel:(id)arg1 didFindDeletedComments:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5;	// IMP=0x0000000100022264
- (void)MSASModel:(id)arg1 didFindLastViewedCommentDate:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4;	// IMP=0x0000000100021fec
- (void)MSASModel:(id)arg1 didMarkAssetCollection:(id)arg2 asHavingUnreadComments:(_Bool)arg3 inAlbum:(id)arg4;	// IMP=0x0000000100021d74
- (void)MSASModel:(id)arg1 didFindDeletedAssetCollections:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;	// IMP=0x0000000100021b1c
- (void)MSASModel:(id)arg1 didFindNewAssetCollections:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;	// IMP=0x0000000100021900
- (void)MSASModel:(id)arg1 didMarkAlbum:(id)arg2 asHavingUnreadContent:(_Bool)arg3;	// IMP=0x0000000100021710
- (void)MSASModel:(id)arg1 didFindAccessControlChange:(id)arg2 inAlbum:(id)arg3;	// IMP=0x0000000100021470
- (void)MSASModel:(id)arg1 didFindDeletedAccessControls:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;	// IMP=0x00000001000210c8
- (void)MSASModel:(id)arg1 didFindNewAccessControls:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;	// IMP=0x0000000100020d20
- (void)MSASModel:(id)arg1 didFindAlbumMetadataChange:(id)arg2;	// IMP=0x0000000100020b5c
- (void)MSASModel:(id)arg1 didFindDeletedAlbums:(id)arg2 info:(id)arg3;	// IMP=0x0000000100020888
- (void)MSASModel:(id)arg1 didFindNewAlbums:(id)arg2 info:(id)arg3;	// IMP=0x0000000100020684
- (void)setLastViewedCommentDate:(id)arg1 forAssetID:(id)arg2;	// IMP=0x0000000100020590
- (id)lastViewedCommentDateForAssetID:(id)arg1;	// IMP=0x0000000100020510
- (void)removeCommentForCommentID:(id)arg1;	// IMP=0x00000001000204a4
- (void)addComment:(id)arg1 forAssetID:(id)arg2;	// IMP=0x00000001000203ac
- (id)captionForAssetID:(id)arg1;	// IMP=0x000000010002032c
- (id)commentsForAssetID:(id)arg1;	// IMP=0x00000001000202ac
- (void)resolveMediaURLForMSAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001fd38
- (_Bool)isAssetUnviewedForAssetID:(id)arg1;	// IMP=0x000000010001fcc0
- (void)removeAssetForAssetID:(id)arg1;	// IMP=0x000000010001fc54
- (id)latestAssetForAlbumID:(id)arg1;	// IMP=0x000000010001fb14
- (id)assetsForAlbumID:(id)arg1;	// IMP=0x000000010001fa94
- (id)assetForAssetID:(id)arg1;	// IMP=0x000000010001fa14
- (unsigned long long)numberOfAssetsForAlbumID:(id)arg1;	// IMP=0x000000010001f958
- (void)unsubsribeFromAlbumForAlbumID:(id)arg1;	// IMP=0x000000010001f8ec
- (void)rejectInvitationForAlbumID:(id)arg1;	// IMP=0x000000010001f80c
- (void)acceptInvitationForAlbumID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f714
- (void)setAlbumIsViewedForAlbumID:(id)arg1;	// IMP=0x000000010001f6a8
- (_Bool)isAlbumUnviewedForAlbumID:(id)arg1;	// IMP=0x000000010001f630
- (id)accessControlsForAlbumID:(id)arg1;	// IMP=0x000000010001f5b0
- (id)invitationForAlbumID:(id)arg1;	// IMP=0x000000010001f530
- (void)removeAlbumForAlbumID:(id)arg1;	// IMP=0x000000010001f4c4
- (id)albumForAlbumID:(id)arg1;	// IMP=0x000000010001f444
- (id)albums;	// IMP=0x000000010001f3f0
- (id)albumIDs;	// IMP=0x000000010001f39c
- (void)tearDown;	// IMP=0x000000010001f330

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

