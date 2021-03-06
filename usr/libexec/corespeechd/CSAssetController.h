//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSEventMonitorDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CSAssetController : NSObject <CSEventMonitorDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_assetsMigrationQueue;	// 16 = 0x10
    NSDictionary *_csAssetsDictionary;	// 24 = 0x18
    NSMutableDictionary *_observers;	// 32 = 0x20
}

+ (id)getAssetTypeStringForType:(unsigned long long)arg1;	// IMP=0x00000001000602dc
+ (id)sharedController;	// IMP=0x0000000100060270
+ (unsigned long long)getSpeakerRecognitionCurrentCompatibilityVersion;	// IMP=0x00000001000648d4
+ (id)getSpeakerRecognitionAssetTypeString;	// IMP=0x00000001000648c8
+ (unsigned long long)getAdBlockerCurrentCompatibilityVersion;	// IMP=0x00000001000648c0
+ (id)getAdBlockerAssetTypeString;	// IMP=0x00000001000648b4
+ (unsigned long long)getLanguageDetectorCurrentCompatibilityVersion;	// IMP=0x00000001000648ac
+ (id)getLanguageDetectorAssetTypeString;	// IMP=0x00000001000648a0
+ (unsigned long long)getEndpointAssetCurrentCompatibilityVersion;	// IMP=0x0000000100064898
+ (id)getEndpointAssetTypeString;	// IMP=0x000000010006488c
+ (unsigned long long)getVoiceTriggerAssetCurrentCompatibilityVersion;	// IMP=0x0000000100064838
+ (id)getVoiceTriggerAssetTypeString;	// IMP=0x00000001000647d0
+ (void)addKeyValuePairForQuery:(id *)arg1 assetType:(unsigned long long)arg2;	// IMP=0x0000000100064618
+ (id)filteredAssetsForAssets:(id)arg1 assetType:(unsigned long long)arg2 language:(id)arg3;	// IMP=0x0000000100064370
+ (id)filteredAssetsForFetchRemoteMetaDataForAssets:(id)arg1 assetType:(unsigned long long)arg2;	// IMP=0x0000000100064350
- (void).cxx_destruct;	// IMP=0x0000000100064308
@property(retain, nonatomic) NSMutableDictionary *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSDictionary *csAssetsDictionary; // @synthesize csAssetsDictionary=_csAssetsDictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetsMigrationQueue; // @synthesize assetsMigrationQueue=_assetsMigrationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)CSEventMonitorDidReceiveEvent:(id)arg1;	// IMP=0x00000001000642b4
- (void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2;	// IMP=0x00000001000640dc
- (void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2;	// IMP=0x0000000100063e98
- (void)_startDownloadingAsset:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000639d8
- (void)_downloadAsset:(id)arg1 withComplete:(CDUnknownBlockType)arg2;	// IMP=0x000000010006366c
- (id)_defaultDownloadOptions;	// IMP=0x0000000100063608
- (void)_updateFromRemoteToLocalAssets:(id)arg1 forAssetType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100062d70
- (_Bool)_isRetryRecommendedWithResult:(long long)arg1;	// IMP=0x0000000100062d2c
- (void)_downloadAssetCatalogForAssetType:(unsigned long long)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100062a7c
- (void)_fetchRemoteAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100062600
- (void)fetchRemoteMetaOfType:(unsigned long long)arg1 allowRetry:(_Bool)arg2;	// IMP=0x00000001000622e4
- (void)fetchRemoteMetaOfType:(unsigned long long)arg1;	// IMP=0x00000001000622d4
- (_Bool)_isReadyToUse;	// IMP=0x0000000100062280
- (void)_runAssetQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100061eec
- (id)_assetQueryForAssetType:(unsigned long long)arg1;	// IMP=0x0000000100061d74
- (id)_findLatestInstalledAsset:(id)arg1;	// IMP=0x0000000100061adc
- (void)_installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000616f8
- (id)_installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2;	// IMP=0x00000001000614b0
- (void)installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100061250
- (id)installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2;	// IMP=0x00000001000610ac
- (void)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100060f6c
- (id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x0000000100060ec0
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100060d00
- (id)allInstalledAssetsOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x00000001000608c0
- (id)assetOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x0000000100060790
- (void)_cleanUpMobileAssetV1Directory;	// IMP=0x0000000100060648
- (id)init;	// IMP=0x0000000100060320

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

