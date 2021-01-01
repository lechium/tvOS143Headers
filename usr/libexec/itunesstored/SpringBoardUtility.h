//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSCountedSet, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SpringBoardUtility : NSObject
{
    BKSApplicationStateMonitor *_applicationStateMonitor;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSDictionary *_enabledRemoteNotificationTypes;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 32 = 0x20
    long long _observeAllIdentifiersCount;	// 40 = 0x28
    NSCountedSet *_observedApplicationIdentifiers;	// 48 = 0x30
    NSMutableArray *_pendingAlerts;	// 56 = 0x38
    SSXPCConnection *_pluginConnection;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_pluginConnectionTimeout;	// 72 = 0x48
    NSMutableArray *_pluginDeferredBlocks;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_springBoardQueue;	// 88 = 0x58
    NSMutableDictionary *_stateCache;	// 96 = 0x60
}

+ (void)_sendUnentitledResponseToMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010015c5a0
+ (_Bool)_hasEntitlements:(id)arg1;	// IMP=0x000000010015bd00
+ (void)testPluginAlertWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010015afb0
+ (void)testLockscreenAccountSheetWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010015af50
+ (void)testBadgingWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010015acfc
+ (void)registerPluginConnectionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010015ac9c
+ (void)restartApplicationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010015ab58
+ (void)observeXPCServer:(id)arg1;	// IMP=0x000000010015aa74
+ (void)dequeueAlertWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010015a9bc
+ (id)sharedInstance;	// IMP=0x0000000100157844
- (void).cxx_destruct;	// IMP=0x000000010015ce38
- (void)_timeoutPluginConnection;	// IMP=0x000000010015cc7c
- (void)_setApplicationStatesWithDictionary:(id)arg1;	// IMP=0x000000010015ca0c
- (void)_setApplicationState:(unsigned int)arg1 forClientID:(id)arg2;	// IMP=0x000000010015c7ec
- (void)_requestPluginConnectionWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010015c148
- (void)_registerPluginConnectionWithMessage:(id)arg1;	// IMP=0x000000010015bd14
- (_Bool)_getProcessID:(int *)arg1 forApplicationIdentifier:(id)arg2;	// IMP=0x000000010015bc70
- (id)_getApplicationInfoForIdentifier:(id)arg1 key:(id)arg2;	// IMP=0x000000010015ba48
- (void)_fireDeferredPluginBlocksWithConnection:(id)arg1;	// IMP=0x000000010015b848
- (void)_disconnectPluginConnection:(id)arg1;	// IMP=0x000000010015b5dc
- (id)_applicationStateMonitor;	// IMP=0x000000010015b400
- (void)sendPluginMessage:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010015b244
- (void)sendPluginMessage:(id)arg1;	// IMP=0x000000010015b198
- (void)_dequeueAlertWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010015a638
- (void)wakeAppUsingRequest:(id)arg1;	// IMP=0x0000000100159ab0
- (void)suspendFrontApplication;	// IMP=0x0000000100159aac
- (void)setBadgeValue:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00000001001597b8
- (void)resetEnabledRemoteNotificationTypes;	// IMP=0x0000000100159750
- (void)removeDefaultPNGSnapshotsForIdentifier:(id)arg1;	// IMP=0x0000000100159418
- (unsigned int)mostElevatedApplicationStateForPID:(int)arg1;	// IMP=0x000000010015932c
- (_Bool)launchApplicationWithIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000001001590e8
@property(readonly, getter=isScreenLocked) _Bool screenLocked;
@property(readonly) NSString *frontmostClientIdentifier;
- (void)endGeneratingStateChangeNotificationsForIdentifiers:(id)arg1;	// IMP=0x0000000100158b10
- (void)endGeneratingStateChangeNotifications;	// IMP=0x0000000100158964
- (id)copyBundleInfoValueForKey:(id)arg1 PID:(int)arg2;	// IMP=0x00000001001587c8
- (void)beginGeneratingStateChangeNotificationsForIdentifiers:(id)arg1;	// IMP=0x0000000100158484
- (void)beginGeneratingStateChangeNotificationsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100158100
- (unsigned int)applicationStateForIdentifier:(id)arg1;	// IMP=0x0000000100157ee8
- (void)activateAlertWithDescription:(id)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001001578e4
- (void)dealloc;	// IMP=0x00000001001577c0
- (id)init;	// IMP=0x00000001001576e0

@end

