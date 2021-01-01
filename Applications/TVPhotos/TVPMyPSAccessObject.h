//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVPAccessObject.h"

#import "MSDeleterPlugin-Protocol.h"
#import "MSSubscriberPlugin-Protocol.h"
#import "TVCKPushNotificationListener-Protocol.h"

@class NSArray, NSString, TVAssetLibrary, TVPMyPSImageLoadTask;
@protocol MSSubscriber, TVPMyPSAccessObjectDelegate;

@interface TVPMyPSAccessObject : TVPAccessObject <MSSubscriberPlugin, MSDeleterPlugin, TVCKPushNotificationListener>
{
    struct sqlite3 *_db;	// 8 = 0x8
    NSArray *_assets;	// 16 = 0x10
    id <TVPMyPSAccessObjectDelegate> _delegate;	// 24 = 0x18
    TVAssetLibrary *_imageManager;	// 32 = 0x20
    id <MSSubscriber> _subscriber;	// 40 = 0x28
    TVPMyPSImageLoadTask *_imageLoadTask;	// 48 = 0x30
}

+ (id)deleterPluginForPersonID:(id)arg1;	// IMP=0x0000000100070b38
+ (id)personIDForPollingTriggeredByPushNotification;	// IMP=0x00000001000706ec
+ (id)subscriberPluginForPersonID:(id)arg1;	// IMP=0x0000000100070634
+ (id)dbCachePathForPersonID:(id)arg1;	// IMP=0x0000000100070478
+ (id)accessObjectWithAppleAccount:(id)arg1;	// IMP=0x000000010006ff88
- (void).cxx_destruct;	// IMP=0x0000000100072f20
@property(retain, nonatomic) TVPMyPSImageLoadTask *imageLoadTask; // @synthesize imageLoadTask=_imageLoadTask;
@property(nonatomic) __weak id <MSSubscriber> subscriber; // @synthesize subscriber=_subscriber;
@property(retain, nonatomic) TVAssetLibrary *imageManager; // @synthesize imageManager=_imageManager;
@property(nonatomic) __weak id <TVPMyPSAccessObjectDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (void)_removeAssets:(id)arg1;	// IMP=0x0000000100072bb4
- (void)_addNewAssetsFromServerAssets:(id)arg1;	// IMP=0x00000001000727f0
- (id)_assetForAssetID:(id)arg1;	// IMP=0x0000000100072654
- (void)_didFinishDeletingAssetCollection:(id)arg1 error:(id)arg2;	// IMP=0x0000000100072440
- (void)_didReceiveDeleteForAssetCollections:(id)arg1;	// IMP=0x0000000100072224
- (void)_didCompleteCheckForNewAssetCollections;	// IMP=0x0000000100072128
- (void)_didFinishRetrievingAsset:(id)arg1 imageData:(id)arg2 error:(id)arg3;	// IMP=0x0000000100071b24
- (void)_didRequestAssetRetrievalForAssetCollections:(id)arg1;	// IMP=0x0000000100071200
- (void)_loadImageForImageTokens:(id)arg1;	// IMP=0x0000000100071124
- (id)_imageTokenForAssetID:(id)arg1;	// IMP=0x0000000100071118
- (id)_imageForAssetID:(id)arg1 canLoad:(_Bool *)arg2;	// IMP=0x0000000100071048
- (void)_tearDown;	// IMP=0x0000000100070f14
- (void)_runSetup;	// IMP=0x0000000100070de0
- (void)pushNotificationServerTokenDidChange:(id)arg1;	// IMP=0x0000000100070ddc
- (void)pushNotificationServer:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000100070cd4
- (void)deleter:(id)arg1 didFinishDeletingAssetCollection:(id)arg2 error:(id)arg3;	// IMP=0x0000000100070bf0
- (void)subscriberDidCompleteCheckForNewAssetCollections:(id)arg1;	// IMP=0x0000000100070ad0
- (void)subscriber:(id)arg1 didReceiveDeleteForAssetCollections:(id)arg2 streamID:(id)arg3;	// IMP=0x0000000100070a28
- (void)subscriber:(id)arg1 didFailToRetriveSubscriptionUpdateWithError:(id)arg2;	// IMP=0x0000000100070a24
- (void)subscriber:(id)arg1 didFinishRetrievingAsset:(id)arg2 error:(id)arg3;	// IMP=0x000000010007089c
- (void)subscriber:(id)arg1 didFinishRequestingAssetRetrievalForStreamID:(id)arg2;	// IMP=0x0000000100070898
- (void)subscriber:(id)arg1 didRequestAssetRetrievalForAssetCollections:(id)arg2 streamID:(id)arg3;	// IMP=0x00000001000707f0
- (void)subscriberWillAssignPluginAsDelegateOfSubscriber:(id)arg1;	// IMP=0x0000000100070748
- (void)removeAssetForAssetID:(id)arg1;	// IMP=0x0000000100070124
- (void)tearDown;	// IMP=0x00000001000700b8
- (void)_insertDBAsset:(id)arg1;	// IMP=0x0000000100073c58
- (id)_dateFormatter;	// IMP=0x0000000100073b88
- (void)_removeDBAsset:(id)arg1;	// IMP=0x0000000100073aac
- (void)_removeDBAssets:(id)arg1;	// IMP=0x0000000100073924
- (void)_insertDBAssets:(id)arg1;	// IMP=0x00000001000737ac
- (void)_updateDBAsset:(id)arg1 newState:(int)arg2;	// IMP=0x00000001000736a4
- (void)_removeDB;	// IMP=0x0000000100073564
- (id)_loadAssetsFromDB;	// IMP=0x000000010007309c
- (void)_createOrOpenDB;	// IMP=0x0000000100072f94
- (void)_writeImageFromImageData:(id)arg1 assetID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010007413c
- (void)_purgeImages;	// IMP=0x00000001000740f0
- (void)_purgeImageForAssetID:(id)arg1;	// IMP=0x0000000100074084
- (id)_imageForAssetID:(id)arg1;	// IMP=0x0000000100073ff4
- (id)_imagePathForAssetID:(id)arg1;	// IMP=0x0000000100073f64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

