//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSAdBlockerMetaUpdateMonitorDelegate-Protocol.h"
#import "CSAssetControllerDelegate-Protocol.h"
#import "CSLanguageCodeUpdateMonitorDelegate-Protocol.h"
#import "CSSpeakerRecognitionAssetMetaUpdateMonitorDelegate-Protocol.h"
#import "CSSpeechEndpointAssetMetaUpdateMonitorDelegate-Protocol.h"
#import "CSVoiceTriggerAssetMetaUpdateMonitorDelegate-Protocol.h"

@class CSAssetDownloadingOption, CSPolicy, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSAssetManager : NSObject <CSVoiceTriggerAssetMetaUpdateMonitorDelegate, CSSpeechEndpointAssetMetaUpdateMonitorDelegate, CSAdBlockerMetaUpdateMonitorDelegate, CSAssetControllerDelegate, CSSpeakerRecognitionAssetMetaUpdateMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate>
{
    CSPolicy *_enablePolicy;	// 8 = 0x8
    NSString *_currentLanguageCode;	// 16 = 0x10
    CSAssetDownloadingOption *_downloadingOption;	// 24 = 0x18
    NSMutableDictionary *_observers;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_downloadTimer;	// 40 = 0x28
    long long _downloadTimerCount;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

+ (id)sharedManager;	// IMP=0x000000010009753c
- (void).cxx_destruct;	// IMP=0x0000000100099810
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_stopPeriodicalDownload;	// IMP=0x0000000100099708
- (void)_startPeriodicalDownload;	// IMP=0x0000000100099618
- (void)_createPeriodicalDownloadTimer;	// IMP=0x00000001000993ec
- (void)CSAssetController:(id)arg1 didDownloadNewAssetForType:(unsigned long long)arg2;	// IMP=0x00000001000991c4
- (void)CSSpeechEndpointAssetMetaUpdateMonitor:(id)arg1 didReceiveNewSpeechEndpointAssetMetaData:(_Bool)arg2;	// IMP=0x000000010009912c
- (void)CSSpeakerRecognitionAssetMetaUpdateMonitor:(id)arg1 didReceiveNewSpeakerRecognitionAssetMetaData:(_Bool)arg2;	// IMP=0x0000000100099094
- (void)CSAdBlockerMetaUpdateMonitor:(id)arg1 didReceiveNewAdBlockerAssetMetaData:(_Bool)arg2;	// IMP=0x0000000100098ffc
- (void)CSVoiceTriggerAssetMetaUpdateMonitor:(id)arg1 didReceiveNewVoiceTriggerAssetMetaData:(_Bool)arg2;	// IMP=0x0000000100098ef0
- (void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2;	// IMP=0x0000000100098d5c
- (void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2;	// IMP=0x0000000100098b68
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;	// IMP=0x0000000100098a80
@property(readonly, nonatomic) NSString *currentLanguageCode;
- (_Bool)_canFetchRemoteAsset:(unsigned long long)arg1;	// IMP=0x00000001000989b4
- (void)_fetchRemoteMetaData;	// IMP=0x0000000100098790
- (void)assetOfType:(unsigned long long)arg1 providerType:(unsigned long long)arg2 language:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000986b8
- (void)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010009861c
- (id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x0000000100098590
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000984c8
- (id)assetOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x0000000100098410
- (void)installedAssetForCurrentLanguageOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100098354
- (id)installedAssetForCurrentLanguageOfType:(unsigned long long)arg1;	// IMP=0x00000001000982b0
- (void)assetForCurrentLanguageOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000981c8
- (id)allInstalledAssetsOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x000000010009813c
- (id)assetForCurrentLanguageOfType:(unsigned long long)arg1;	// IMP=0x000000010009806c
- (void)setAssetDownloadingOption:(id)arg1;	// IMP=0x0000000100097ca4
- (id)initWithDownloadOption:(id)arg1;	// IMP=0x00000001000975d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

