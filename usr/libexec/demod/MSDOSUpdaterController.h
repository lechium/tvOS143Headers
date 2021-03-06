//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSOSUpdateManagerClientDelegate-Protocol.h"

@class NSString, PBSOSUpdateDownload, PBSOSUpdateManagerClient;

@interface MSDOSUpdaterController : NSObject <PBSOSUpdateManagerClientDelegate>
{
    _Bool _installUpdateKicked;	// 8 = 0x8
    _Bool _started;	// 9 = 0x9
    _Bool _purged;	// 10 = 0xa
    PBSOSUpdateManagerClient *_manager;	// 16 = 0x10
    PBSOSUpdateDownload *_lastDownload;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010003bd8c
- (void).cxx_destruct;	// IMP=0x000000010003e328
@property _Bool purged; // @synthesize purged=_purged;
@property _Bool started; // @synthesize started=_started;
@property _Bool installUpdateKicked; // @synthesize installUpdateKicked=_installUpdateKicked;
@property(retain, nonatomic) PBSOSUpdateDownload *lastDownload; // @synthesize lastDownload=_lastDownload;
@property(retain, nonatomic) PBSOSUpdateManagerClient *manager; // @synthesize manager=_manager;
- (void)downloadFailed:(id)arg1;	// IMP=0x000000010003e214
- (void)downloadProgressChanged:(id)arg1 withPercent:(float)arg2;	// IMP=0x000000010003df4c
- (void)client:(id)arg1 installDidFinish:(id)arg2;	// IMP=0x000000010003de9c
- (void)client:(id)arg1 installDidFail:(id)arg2 withError:(id)arg3;	// IMP=0x000000010003ddac
- (void)client:(id)arg1 installDidStart:(id)arg2;	// IMP=0x000000010003dd08
- (void)client:(id)arg1 downloadDidFinish:(id)arg2;	// IMP=0x000000010003d964
- (void)client:(id)arg1 downloadDidFail:(id)arg2 withError:(id)arg3;	// IMP=0x000000010003d890
- (void)client:(id)arg1 downloadProgressDidChange:(id)arg2;	// IMP=0x000000010003d728
- (void)client:(id)arg1 downloadDidStart:(id)arg2;	// IMP=0x000000010003d69c
- (void)client:(id)arg1 downloadWasInvalidatedForNewUpdateAvailable:(id)arg2;	// IMP=0x000000010003d628
- (void)client:(id)arg1 automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg2 withError:(id)arg3;	// IMP=0x000000010003d588
- (void)client:(id)arg1 scanDidCompleteWithNewUpdateAvailable:(id)arg2 error:(id)arg3;	// IMP=0x000000010003d4a0
- (void)client:(id)arg1 scanRequestDidFinishForOptions:(id)arg2 update:(id)arg3 error:(id)arg4;	// IMP=0x000000010003d0ac
- (void)client:(id)arg1 scanRequestDidStartForOptions:(id)arg2;	// IMP=0x000000010003d04c
- (_Bool)doesAvailableUpdateVersion:(id)arg1 matcheWithVersion:(id)arg2;	// IMP=0x000000010003cf2c
- (void)bail:(const char *)arg1 error:(id)arg2;	// IMP=0x000000010003cb90
- (_Bool)cleanup;	// IMP=0x000000010003c624
- (void)startOSUpdate;	// IMP=0x000000010003be6c
- (id)init;	// IMP=0x000000010003bdf8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

