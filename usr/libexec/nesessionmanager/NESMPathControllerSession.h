//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMSession.h"

#import "NWNetworkOfInterestManagerDelegate-Protocol.h"

@class NEPathController, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NWInterface, NWMonitor, NWNetworkOfInterest, NWNetworkOfInterestManager;
@protocol OS_dispatch_source, OS_os_transaction;

@interface NESMPathControllerSession : NESMSession <NWNetworkOfInterestManagerDelegate>
{
    _Bool _needsRoamingMonitor;	// 8 = 0x8
    _Bool _needsFallbackNotifications;	// 9 = 0x9
    _Bool _fallbackEnabled;	// 10 = 0xa
    _Bool _weakFallback;	// 11 = 0xb
    _Bool _fallbackInUse;	// 12 = 0xc
    _Bool _watchingFallbackNotifications;	// 13 = 0xd
    int _fallbackInUseToken;	// 16 = 0x10
    NEPathController *_controllerConfiguration;	// 24 = 0x18
    NSMutableArray *_ruleMonitors;	// 32 = 0x20
    NSMutableArray *_rulePolicies;	// 40 = 0x28
    NWMonitor *_roamingMonitor;	// 48 = 0x30
    NSObject<OS_os_transaction> *_roamingMonitorTransaction;	// 56 = 0x38
    NSObject<OS_os_transaction> *_fallbackTransaction;	// 64 = 0x40
    NWInterface *_primaryFallbackInterface;	// 72 = 0x48
    NWInterface *_primaryFallbackFromInterface;	// 80 = 0x50
    NSDictionary *_fallbackInterfacesDict;	// 88 = 0x58
    NSMutableArray *_foregroundBundleIDs;	// 96 = 0x60
    NSMutableArray *_backgroundBundleIDs;	// 104 = 0x68
    NSMutableSet *_fallbackAllowedBundleIDs;	// 112 = 0x70
    NSMutableDictionary *_fallbackAssertions;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_fallbackNotificationTimer;	// 128 = 0x80
    NWNetworkOfInterestManager *_noiManager;	// 136 = 0x88
    NWNetworkOfInterest *_wifiNOI;	// 144 = 0x90
    long long _level;	// 152 = 0x98
}

+ (id)monitorStatusString:(long long)arg1;	// IMP=0x000000010008a82c
- (void).cxx_destruct;	// IMP=0x000000010008dbd4
@property long long level; // @synthesize level=_level;
@property(retain) NWNetworkOfInterest *wifiNOI; // @synthesize wifiNOI=_wifiNOI;
@property(retain) NWNetworkOfInterestManager *noiManager; // @synthesize noiManager=_noiManager;
@property(retain) NSObject<OS_dispatch_source> *fallbackNotificationTimer; // @synthesize fallbackNotificationTimer=_fallbackNotificationTimer;
@property _Bool watchingFallbackNotifications; // @synthesize watchingFallbackNotifications=_watchingFallbackNotifications;
@property int fallbackInUseToken; // @synthesize fallbackInUseToken=_fallbackInUseToken;
@property _Bool fallbackInUse; // @synthesize fallbackInUse=_fallbackInUse;
@property(retain) NSMutableDictionary *fallbackAssertions; // @synthesize fallbackAssertions=_fallbackAssertions;
@property(retain) NSMutableSet *fallbackAllowedBundleIDs; // @synthesize fallbackAllowedBundleIDs=_fallbackAllowedBundleIDs;
@property(retain) NSMutableArray *backgroundBundleIDs; // @synthesize backgroundBundleIDs=_backgroundBundleIDs;
@property(retain) NSMutableArray *foregroundBundleIDs; // @synthesize foregroundBundleIDs=_foregroundBundleIDs;
@property(retain) NSDictionary *fallbackInterfacesDict; // @synthesize fallbackInterfacesDict=_fallbackInterfacesDict;
@property(retain) NWInterface *primaryFallbackFromInterface; // @synthesize primaryFallbackFromInterface=_primaryFallbackFromInterface;
@property(retain) NWInterface *primaryFallbackInterface; // @synthesize primaryFallbackInterface=_primaryFallbackInterface;
@property _Bool weakFallback; // @synthesize weakFallback=_weakFallback;
@property _Bool fallbackEnabled; // @synthesize fallbackEnabled=_fallbackEnabled;
@property _Bool needsFallbackNotifications; // @synthesize needsFallbackNotifications=_needsFallbackNotifications;
@property _Bool needsRoamingMonitor; // @synthesize needsRoamingMonitor=_needsRoamingMonitor;
@property(retain) NSObject<OS_os_transaction> *fallbackTransaction; // @synthesize fallbackTransaction=_fallbackTransaction;
@property(retain) NSObject<OS_os_transaction> *roamingMonitorTransaction; // @synthesize roamingMonitorTransaction=_roamingMonitorTransaction;
@property(retain) NWMonitor *roamingMonitor; // @synthesize roamingMonitor=_roamingMonitor;
@property(retain) NSMutableArray *rulePolicies; // @synthesize rulePolicies=_rulePolicies;
@property(retain) NSMutableArray *ruleMonitors; // @synthesize ruleMonitors=_ruleMonitors;
@property(retain) NEPathController *controllerConfiguration; // @synthesize controllerConfiguration=_controllerConfiguration;
- (void)unassertFallbackForClient:(id)arg1;	// IMP=0x000000010008d828
- (void)assertFallbackForClient:(id)arg1 process:(id)arg2;	// IMP=0x000000010008d730
@property(readonly) _Bool weakAdvisory;
@property(readonly) NSArray *predictedInterfaces;
@property(readonly) NSArray *advisoryInterfaces;
- (void)updatePolicies:(_Bool)arg1 agent:(_Bool)arg2;	// IMP=0x000000010008cbd0
- (void)updateFallbackInUse;	// IMP=0x000000010008c91c
- (void)postFallbackInUseWithDelay:(unsigned long long)arg1;	// IMP=0x000000010008c8f0
- (void)postFallbackInUse;	// IMP=0x000000010008c6e0
- (id)copyUUIDsForBundleIDArray:(id)arg1;	// IMP=0x000000010008c460
- (id)currentFallbackBundleIDs;	// IMP=0x000000010008c1c0
- (id)fallbackExceptionBundleIDsForce:(_Bool)arg1;	// IMP=0x000000010008bf1c
- (id)currentRouteRules:(id)arg1 defaultPathRule:(id)arg2;	// IMP=0x000000010008bb58
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010008ac18
- (void)handleChangeEventForFallbackInterfaces:(id)arg1;	// IMP=0x000000010008a858
- (void)dealloc;	// IMP=0x000000010008a7e0
- (void)uninstall;	// IMP=0x000000010008a754
- (void)install;	// IMP=0x000000010008a630
- (void)didStopTrackingAllNOIs:(id)arg1;	// IMP=0x000000010008a4d0
- (void)didStopTrackingNOI:(id)arg1;	// IMP=0x000000010008a3ec
- (void)didStartTrackingNOI:(id)arg1;	// IMP=0x000000010008a304
- (void)removeFallbackNotifications;	// IMP=0x000000010008a0ec
- (void)setupFallbackNotifications;	// IMP=0x0000000100089de0
- (void)cancelFallbackNotificationTimer;	// IMP=0x0000000100089d90
- (void)resetFallbackNotificationTimeout:(unsigned long long)arg1;	// IMP=0x0000000100089d2c
- (void)createFallbackNotificationTimer;	// IMP=0x0000000100089c30
- (void)checkBundleIDsForFallback:(id)arg1;	// IMP=0x00000001000896a0
- (void)teardownRoamingMonitor;	// IMP=0x00000001000895a4
- (void)setupRoamingMonitor;	// IMP=0x00000001000892fc
- (void)handleInstalledAppsChanged;	// IMP=0x00000001000890a8
- (void)handleNetworkDetectionNotification:(int)arg1;	// IMP=0x0000000100088f54
- (_Bool)handleUpdateConfiguration:(id)arg1;	// IMP=0x0000000100088e1c
- (void)handleStopMessageWithReason:(int)arg1;	// IMP=0x0000000100088c9c
- (void)handleStartMessage:(id)arg1;	// IMP=0x0000000100088c20
- (_Bool)shouldBeIdleForStatus:(int)arg1;	// IMP=0x0000000100088c04
- (int)type;	// IMP=0x0000000100088bfc
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2;	// IMP=0x0000000100088a7c
- (_Bool)configurationNeedsFallbackNotifications;	// IMP=0x00000001000889c8
- (_Bool)configurationNeedsRoamingMonitorIgnoreFallback:(_Bool)arg1;	// IMP=0x00000001000887cc
@property(readonly) long long fallbackFlags;

@end

