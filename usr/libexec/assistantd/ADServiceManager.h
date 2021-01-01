//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface ADServiceManager : NSObject
{
    _Bool _bundleServicesLoaded;	// 8 = 0x8
    NSMutableDictionary *_serviceMap;	// 16 = 0x10
    NSMutableDictionary *_commandMap;	// 24 = 0x18
    NSMutableDictionary *_syncKeyMap;	// 32 = 0x20
    NSMutableSet *_pendingServiceReloadNotifications;	// 40 = 0x28
}

+ (id)_serviceBundleIDFromServiceReloadNotification:(id)arg1;	// IMP=0x0000000100093f30
+ (_Bool)isReloadServiceNotification:(id)arg1;	// IMP=0x0000000100093f14
- (void).cxx_destruct;	// IMP=0x000000010009494c
- (void)_reloadServices:(id)arg1;	// IMP=0x00000001000944ac
- (void)reloadServicesForAllPendingServiceNotifications;	// IMP=0x00000001000942fc
- (void)reloadServiceForNotification:(id)arg1;	// IMP=0x00000001000941b4
- (void)pendServiceReloadNotification:(id)arg1;	// IMP=0x0000000100093fec
- (void)cancelOperationForRequest:(id)arg1;	// IMP=0x0000000100093dd0
- (id)controlCenterLockRestrictedCommands;	// IMP=0x0000000100093c54
- (void)preheat;	// IMP=0x0000000100093c48
- (void)preheatBundleServices;	// IMP=0x0000000100093afc
- (void)preheatServicesForDomain:(id)arg1;	// IMP=0x00000001000938b0
- (void)setCommandCenterClient:(id)arg1;	// IMP=0x0000000100093834
- (id)lockRestrictedCommands;	// IMP=0x00000001000936c4
- (id)firstUnlockRestrictedCommands;	// IMP=0x0000000100093548
- (id)allVocabSyncInfo;	// IMP=0x0000000100093474
- (id)allSyncAnchorKeys;	// IMP=0x0000000100093420
- (void)reprioritizeService:(id)arg1;	// IMP=0x0000000100093414
- (void)removeService:(id)arg1;	// IMP=0x0000000100093408
- (void)addServiceWithLowPrecedence:(id)arg1;	// IMP=0x00000001000933f8
- (void)addService:(id)arg1;	// IMP=0x00000001000933e8
- (id)serviceForSyncAnchorKey:(id)arg1;	// IMP=0x00000001000931ec
- (id)serviceForDomain:(id)arg1 command:(id)arg2;	// IMP=0x00000001000930ac
- (id)serviceForIdentifier:(id)arg1;	// IMP=0x000000010009302c
- (id)allServices;	// IMP=0x0000000100092fd8
- (id)_pendingServiceReloadNotifications;	// IMP=0x0000000100092f94
- (id)_syncKeyMap;	// IMP=0x0000000100092f68
- (id)_commandMap;	// IMP=0x0000000100092f3c
- (id)_serviceMap;	// IMP=0x0000000100092f10
- (void)_loadServicesIfNeeded;	// IMP=0x0000000100092e2c
- (void)_loadServiceFromBundlePath:(id)arg1 infoDictionary:(id)arg2;	// IMP=0x0000000100092c90
- (id)_bundleServicesCache;	// IMP=0x0000000100092c60
- (id)_bundleServicesCache:(_Bool *)arg1;	// IMP=0x0000000100092a78
- (void)_writeBundleServicesCache:(id)arg1 toPath:(id)arg2;	// IMP=0x0000000100092924
- (id)_generatedBundleServicesCache;	// IMP=0x0000000100092670
- (id)_buildFliteredInfoDictionaryFromBundleURL:(id)arg1;	// IMP=0x00000001000923b0
- (void)_reprioritizeService:(id)arg1;	// IMP=0x0000000100091f2c
- (void)_removeService:(id)arg1;	// IMP=0x00000001000919cc
- (void)_addService:(id)arg1 precedence:(long long)arg2;	// IMP=0x0000000100091950
- (void)_addServiceWithRecord:(id)arg1;	// IMP=0x00000001000912fc
- (id)init;	// IMP=0x0000000100091268

@end
