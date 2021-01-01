//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSSpeakerRecognitionAssetDownloadMonitorDelegate-Protocol.h"
#import "CSVoiceTriggerEnabledMonitorDelegate-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface CSVoiceProfileRetrainManager : NSObject <CSVoiceTriggerEnabledMonitorDelegate, CSSpeakerRecognitionAssetDownloadMonitorDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001000cde88
- (void).cxx_destruct;	// IMP=0x00000001000d0018
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_runVoiceProfileRetrainerWithAsset:(id)arg1 withLanguageCode:(id)arg2;	// IMP=0x00000001000cf650
- (void)_speakerRecognitionCleanupDuplicatedProfilesCallback;	// IMP=0x00000001000cf27c
- (void)_speakerRecognitionModelRetrainCallback;	// IMP=0x00000001000cef2c
- (void)CSSpeakerRecognitionAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(_Bool)arg2 assetProviderType:(unsigned long long)arg3;	// IMP=0x00000001000ceb90
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;	// IMP=0x00000001000ce850
- (void)CSVoiceTriggerEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;	// IMP=0x00000001000ce488
- (void)triggerVoiceProfileRetrainingWithAsset:(id)arg1;	// IMP=0x00000001000ce2a0
- (id)init;	// IMP=0x00000001000cdf60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

