//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBInstanceDependable-Protocol.h"
#import "PBSceneManagerObserver-Protocol.h"

@class BKSApplicationStateMonitor, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol OS_os_log;

@interface PBHardwareButtonAccessManager : NSObject <PBSceneManagerObserver, PBInstanceDependable>
{
    NSObject<OS_os_log> *_logObject;	// 8 = 0x8
    BKSApplicationStateMonitor *_applicationStateMonitor;	// 16 = 0x10
    NSMutableSet *_viewServiceApplicationBundleIdentifiers;	// 24 = 0x18
    NSMutableSet *_foregroundApplicationBundleIdentifiers;	// 32 = 0x20
    NSMutableOrderedSet *_appsWithVolumeButtonAccess;	// 40 = 0x28
    NSMutableOrderedSet *_appsWithExclusivePlayPauseButtonAccess;	// 48 = 0x30
    NSMutableSet *_suspendedAppsWithVolumeButtonAccess;	// 56 = 0x38
    NSMutableSet *_suspendedAppsWithExclusivePlayPauseButtonAccess;	// 64 = 0x40
    NSString *_focusedSceneBundleIdentifier;	// 72 = 0x48
    NSString *_appWithVolumeButtonAccess;	// 80 = 0x50
    NSString *_appWithExclusivePlayPauseButtonAccess;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x0000000100220ed4
+ (id)dependencyDescription;	// IMP=0x0000000100220d2c
- (void).cxx_destruct;	// IMP=0x0000000100222e0c
@property(copy, nonatomic) NSString *appWithExclusivePlayPauseButtonAccess; // @synthesize appWithExclusivePlayPauseButtonAccess=_appWithExclusivePlayPauseButtonAccess;
@property(copy, nonatomic) NSString *appWithVolumeButtonAccess; // @synthesize appWithVolumeButtonAccess=_appWithVolumeButtonAccess;
- (void)sceneManager:(id)arg1 didChangeFocusFromScene:(id)arg2 toScene:(id)arg3;	// IMP=0x0000000100222b14
- (void)_updateAppButtonAccess;	// IMP=0x00000001002228b0
- (void)_updateApplicationStateForBundleIdentifier:(id)arg1;	// IMP=0x00000001002226f0
- (void)_updateApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2 withInfo:(id)arg3;	// IMP=0x0000000100221a5c
- (void)setExclusivePlayPauseButtonAccessEnabled:(_Bool)arg1 forApp:(id)arg2;	// IMP=0x0000000100221860
- (void)setVolumeButtonAccessEnabled:(_Bool)arg1 forApp:(id)arg2;	// IMP=0x0000000100221664
- (void)dealloc;	// IMP=0x00000001002215d0
- (id)init;	// IMP=0x0000000100220fd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

