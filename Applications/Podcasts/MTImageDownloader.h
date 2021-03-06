//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTURLSessionManager.h"

@class MTImageStore, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MTImageDownloader : MTURLSessionManager
{
    _Bool _hasPurgedTemporaryResourcesDirectory;	// 8 = 0x8
    NSMutableDictionary *_clientRequestsByUrl;	// 16 = 0x10
    MTImageStore *_imageStore;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_syncQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_imageWorkQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100029f7c
@property(nonatomic) _Bool hasPurgedTemporaryResourcesDirectory; // @synthesize hasPurgedTemporaryResourcesDirectory=_hasPurgedTemporaryResourcesDirectory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imageWorkQueue; // @synthesize imageWorkQueue=_imageWorkQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) MTImageStore *imageStore; // @synthesize imageStore=_imageStore;
@property(retain, nonatomic) NSMutableDictionary *clientRequestsByUrl; // @synthesize clientRequestsByUrl=_clientRequestsByUrl;
- (double)_urlSessionResourceTimeout;	// IMP=0x0000000100029ec0
- (_Bool)_shouldDiscardTransparency;	// IMP=0x0000000100029eb8
- (id)_temporaryImagePathByCopyingDownloadedContent:(id)arg1 uuid:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100029aac
- (id)_temporaryImagePathForDownloadedImageWithUuid:(id)arg1;	// IMP=0x00000001000299a4
- (id)_keyForImageDownloaderTempFilename:(id)arg1;	// IMP=0x0000000100029904
- (id)_temporaryResourcesDirectory;	// IMP=0x00000001000298b0
- (void)_onImageWorkQueuePurgeUnneededItemsInTemporaryResourcesDirectoryIfNecessary;	// IMP=0x0000000100029070
- (void)cleanupTemporaryResourcesDirectoryIfNecessary;	// IMP=0x0000000100028fe4
- (void)_dequeueClientRequests:(id)arg1;	// IMP=0x0000000100028c04
- (id)_clientRequestsForUrl:(id)arg1;	// IMP=0x0000000100028a28
- (long long)_enqueueClientInfoWithUrl:(id)arg1 key:(id)arg2 podcastUuid:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100028660
- (void)_finishProcessingClientRequests:(id)arg1 originalUrl:(id)arg2 success:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000100028354
- (void)_saveArtworkImageUrl:(id)arg1 forPodcastUuids:(id)arg2 logHeader:(id)arg3;	// IMP=0x0000000100027fec
- (void)_processFinishedDownloadWithContentURL:(id)arg1 originalUrl:(id)arg2 actualRequestUrl:(id)arg3 finishedWithContentHandler:(CDUnknownBlockType)arg4 processedKeys:(id)arg5;	// IMP=0x0000000100026788
- (void)task:(id)arg1 didCompleteWithDownloadedContentUrl:(id)arg2;	// IMP=0x0000000100026150
- (void)task:(id)arg1 didFailWithError:(id)arg2 orStatusCode:(long long)arg3;	// IMP=0x0000000100025fa0
- (void)configureSession:(id)arg1;	// IMP=0x0000000100025f20
- (_Bool)_completeUsingExistingDownloadedImageForUuid:(id)arg1 imageUrl:(id)arg2;	// IMP=0x0000000100025b68
- (void)_downloadImageUrl:(id)arg1 cacheKey:(id)arg2 podcastUuid:(id)arg3 userInitiated:(_Bool)arg4 backgroundFetch:(_Bool)arg5 callback:(CDUnknownBlockType)arg6;	// IMP=0x0000000100025820
- (void)downloadImageUrl:(id)arg1 cacheKey:(id)arg2 userInitiated:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x000000010002579c
- (void)downloadImageForPodcastUuid:(id)arg1 imageUrl:(id)arg2 userInitiated:(_Bool)arg3 useBackgroundFetch:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;	// IMP=0x0000000100025714
- (void)downloadImageForPodcastUuid:(id)arg1 userInitiated:(_Bool)arg2 backgroundFetch:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x00000001000254c8
- (id)init;	// IMP=0x0000000100025378

@end

