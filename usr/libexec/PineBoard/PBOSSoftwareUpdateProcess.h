//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBInstanceDependable-Protocol.h"

@class MAAsset, MAProgressNotification, MSUUpdateBrainAssetLoader, NSDate, NSString, NSTimer, PBSOSUpdateScanOptions, TVSStateMachine;
@protocol OS_dispatch_queue, PBOSSoftwareUpdateProcessDelegate;

@interface PBOSSoftwareUpdateProcess : NSObject <PBInstanceDependable>
{
    _Bool _needToCancelMSUOperation;	// 8 = 0x8
    _Bool _assetIsLarge;	// 9 = 0x9
    _Bool _downloadAssetWithDiscretionaryPriority;	// 10 = 0xa
    _Bool _isApplyingRecheckedUpdate;	// 11 = 0xb
    _Bool _sentDownloadFinishedCallback;	// 12 = 0xc
    _Bool _userConfirmedApplyAtCheckTime;	// 13 = 0xd
    float _lastMSUPercentCompleted;	// 16 = 0x10
    id <PBOSSoftwareUpdateProcessDelegate> _delegate;	// 24 = 0x18
    unsigned long long _action;	// 32 = 0x20
    unsigned long long _state;	// 40 = 0x28
    TVSStateMachine *_machine;	// 48 = 0x30
    unsigned long long _deferredAction;	// 56 = 0x38
    PBSOSUpdateScanOptions *_scanOptions;	// 64 = 0x40
    MAAsset *_asset;	// 72 = 0x48
    NSDate *_assetReleaseDate;	// 80 = 0x50
    MSUUpdateBrainAssetLoader *_brainLoader;	// 88 = 0x58
    NSTimer *_slowUpdateTimer;	// 96 = 0x60
    MAProgressNotification *_lastDownloadProgressNotification;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_spaceClearingQueue;	// 112 = 0x70
}

+ (long long)_compareOSVersion:(id)arg1 andBuild:(id)arg2 withOSVersion:(id)arg3 andBuild:(id)arg4;	// IMP=0x0000000100065e08
+ (id)sharedProcess;	// IMP=0x00000001000501f4
+ (id)dependencyDescription;	// IMP=0x000000010005013c
- (void).cxx_destruct;	// IMP=0x0000000100067288
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *spaceClearingQueue; // @synthesize spaceClearingQueue=_spaceClearingQueue;
@property(retain, nonatomic) MAProgressNotification *lastDownloadProgressNotification; // @synthesize lastDownloadProgressNotification=_lastDownloadProgressNotification;
@property(nonatomic) float lastMSUPercentCompleted; // @synthesize lastMSUPercentCompleted=_lastMSUPercentCompleted;
@property(nonatomic) _Bool userConfirmedApplyAtCheckTime; // @synthesize userConfirmedApplyAtCheckTime=_userConfirmedApplyAtCheckTime;
@property(nonatomic) _Bool sentDownloadFinishedCallback; // @synthesize sentDownloadFinishedCallback=_sentDownloadFinishedCallback;
@property(nonatomic) _Bool isApplyingRecheckedUpdate; // @synthesize isApplyingRecheckedUpdate=_isApplyingRecheckedUpdate;
@property(nonatomic) _Bool downloadAssetWithDiscretionaryPriority; // @synthesize downloadAssetWithDiscretionaryPriority=_downloadAssetWithDiscretionaryPriority;
@property(nonatomic) _Bool assetIsLarge; // @synthesize assetIsLarge=_assetIsLarge;
@property(nonatomic) _Bool needToCancelMSUOperation; // @synthesize needToCancelMSUOperation=_needToCancelMSUOperation;
@property(retain, nonatomic) NSTimer *slowUpdateTimer; // @synthesize slowUpdateTimer=_slowUpdateTimer;
@property(retain, nonatomic) MSUUpdateBrainAssetLoader *brainLoader; // @synthesize brainLoader=_brainLoader;
@property(copy, nonatomic) NSDate *assetReleaseDate; // @synthesize assetReleaseDate=_assetReleaseDate;
@property(retain, nonatomic) MAAsset *asset; // @synthesize asset=_asset;
@property(copy, nonatomic) PBSOSUpdateScanOptions *scanOptions; // @synthesize scanOptions=_scanOptions;
@property(nonatomic) unsigned long long deferredAction; // @synthesize deferredAction=_deferredAction;
@property(retain, nonatomic) TVSStateMachine *machine; // @synthesize machine=_machine;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(nonatomic) __weak id <PBOSSoftwareUpdateProcessDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_storeURLBagLoaded:(id)arg1;	// IMP=0x0000000100066b90
- (id)_resultUserInfoWithError:(id)arg1;	// IMP=0x00000001000666c8
- (void)_slowUpdateTimerFired:(id)arg1;	// IMP=0x000000010006659c
- (void)_stopSlowUpdateTimer;	// IMP=0x00000001000664e8
- (void)_startSlowUpdateTimer;	// IMP=0x00000001000663e0
- (void)_clearInternalStateOnReturnToIdle;	// IMP=0x00000001000662f0
- (id)_brainAssetDownloadOptions;	// IMP=0x0000000100066270
- (void)_continueWithSufficientSpaceFor:(id)arg1;	// IMP=0x00000001000660d8
- (_Bool)_wasStartedByBackgroundCheck;	// IMP=0x0000000100065fe8
- (_Bool)_wasStartedForRestore;	// IMP=0x0000000100065fa4
- (_Bool)_isManagedAction;	// IMP=0x0000000100065d78
- (void)_restoreAllPurgedApps;	// IMP=0x0000000100065b70
- (long long)_purgeAppsWithBundleIDs:(id)arg1 spaceNeeded:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000100065354
- (void)_clearSpace:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000644d0
- (void)_clearPrepareAndApplySpaceWithInstallationSize:(unsigned long long)arg1 andPadding:(unsigned long long)arg2;	// IMP=0x0000000100063d58
- (void)_clearPrepareAndApplySpace;	// IMP=0x0000000100063a64
- (void)_processBrainDownloadSpaceCheckResultForBrainSize:(long long)arg1 error:(id)arg2;	// IMP=0x00000001000636e0
- (void)_clearBrainDownloadSpace;	// IMP=0x0000000100062e6c
- (void)_processDownloadSpaceCheckResultForRequiredSpace:(unsigned long long)arg1 hasSpace:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000100062ad8
- (void)_clearAssetDownloadSpace;	// IMP=0x0000000100062240
- (void)_forceRebootAfterCancel;	// IMP=0x0000000100061ff8
- (void)_cancelAndRebootDuringApply;	// IMP=0x0000000100061fa8
- (void)_cancelUpdateDuringApply;	// IMP=0x0000000100061d94
- (void)_cancelUpdateDuringDownload;	// IMP=0x0000000100061a48
- (void)_cancelUpdatePreDownload;	// IMP=0x0000000100061824
- (void)_updateProgressStatus:(id)arg1;	// IMP=0x000000010006153c
- (void)_handleBrainDownloadProgressCallbackWithState:(id)arg1 error:(id)arg2;	// IMP=0x0000000100060788
- (void)_handleAssetDownloadProgress:(id)arg1;	// IMP=0x0000000100060070
- (id)_downloadProgressPhaseForCurrentState;	// IMP=0x000000010005ff60
- (void)_prepareAndApplyUpdateThreadedWithImage:(id)arg1;	// IMP=0x000000010005e2c0
- (void)_prepareAndApplyUpdate;	// IMP=0x000000010005dcd0
- (void)_processPrepareAndApplySpaceCheckResultForRequiredSpace:(unsigned long long)arg1 andError:(id)arg2;	// IMP=0x000000010005da40
- (void)_downloadBrain;	// IMP=0x000000010005d868
- (void)_processAssetDownloadFailureWithResult:(long long)arg1;	// IMP=0x000000010005d5f8
- (void)_processAssetDownloadSuccess;	// IMP=0x000000010005d3ec
- (void)_downloadAsset;	// IMP=0x000000010005ca8c
- (void)_sendCheckFinishedNotificationForUpdateAvailable:(_Bool)arg1 withError:(id)arg2;	// IMP=0x000000010005c670
- (void)_sendCheckStartNotification;	// IMP=0x000000010005c560
- (_Bool)_goodTimeToDownloadUpdate;	// IMP=0x000000010005c1a8
- (void)_recheckForNewerUpdate;	// IMP=0x000000010005ba88
- (void)_foundAsset:(id)arg1 releaseDate:(id)arg2 error:(id)arg3;	// IMP=0x000000010005af54
- (void)_performCheck;	// IMP=0x000000010005a374
- (void)_purgePreviousAssets;	// IMP=0x000000010005a0b4
- (void)_registerHandlers;	// IMP=0x0000000100051f1c
- (void)_processEvent:(id)arg1;	// IMP=0x0000000100051e88
- (void)purgeAssetsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100051d64
- (void)purgeableAssetSpaceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100051c40
- (void)rebootDueToSlowUpdate;	// IMP=0x0000000100051c00
- (void)cancelForReason:(unsigned long long)arg1;	// IMP=0x0000000100051bbc
- (void)resumeAfterDownload;	// IMP=0x0000000100051b7c
- (void)resumeAfterUpdateCheck;	// IMP=0x0000000100051b3c
- (void)setAssetDownloadIsDiscretionary:(_Bool)arg1;	// IMP=0x00000001000519bc
- (id)currentDownload;	// IMP=0x000000010005143c
- (_Bool)isRunning;	// IMP=0x00000001000513b0
- (_Bool)isDownloadingUpdate;	// IMP=0x0000000100051340
- (_Bool)isCheckingForUpdate;	// IMP=0x00000001000512d0
- (_Bool)isInitializing;	// IMP=0x000000010005128c
- (void)start;	// IMP=0x0000000100050d80
- (_Bool)configureForAction:(unsigned long long)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100050a80
- (void)dealloc;	// IMP=0x00000001000509b4
- (id)init;	// IMP=0x00000001000502d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

