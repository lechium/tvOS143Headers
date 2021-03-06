//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"
#import "LibraryProgress-Protocol.h"

@class NSString, ProgressCache;

@interface LaunchServicesProgress : NSObject <LSApplicationWorkspaceObserverProtocol, LibraryProgress>
{
    ProgressCache *_progressCache;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001002d18b8
- (void).cxx_destruct;	// IMP=0x00000001002d28e8
- (id)_updatePhaseForJobWithBundleID:(id)arg1 phase:(long long)arg2;	// IMP=0x00000001002d2544
- (id)_predicateForBundleID:(id)arg1 toUpdateToPhase:(long long)arg2;	// IMP=0x00000001002d23d4
- (_Bool)observeLaunchProhibitedApps;	// IMP=0x00000001002d23cc
- (void)applicationInstallsDidChange:(id)arg1;	// IMP=0x00000001002d21fc
- (void)resumeApp:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001002d1ff0
- (void)pauseApp:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001002d1de4
- (void)cancelApp:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001002d1bd8
- (void)cancelApp:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001002d1a94
- (id)_initWithProgressCache:(id)arg1;	// IMP=0x00000001002d19e4
- (void)dealloc;	// IMP=0x00000001002d196c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

