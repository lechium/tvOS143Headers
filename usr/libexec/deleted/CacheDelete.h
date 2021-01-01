//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CacheDeleteClientProtocol-Protocol.h"
#import "CacheDeletePublicClientProtocol-Protocol.h"
#import "CacheDeleteServiceProvider-Protocol.h"

@class CDPurgeableResultCache, CacheDeleteAnalytics, CacheDeleteListener, NSDictionary, NSMutableDictionary, NSMutableSet, NSPointerArray, NSURL, NSUserDefaults;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CacheDelete : NSObject <CacheDeleteClientProtocol, CacheDeletePublicClientProtocol, CacheDeleteServiceProvider>
{
    _Bool _measureElapsedTimes;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_collection_queue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_defaults_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_operations_queue;	// 32 = 0x20
    CacheDeleteListener *_listener;	// 40 = 0x28
    CacheDeleteListener *_publicListener;	// 48 = 0x30
    id _extensionMatchContext;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_notify_queue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_timer_queue;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_persistence_timer;	// 80 = 0x50
    NSURL *_rootPath;	// 88 = 0x58
    NSMutableDictionary *_lastRefreshTimes;	// 96 = 0x60
    NSUserDefaults *_userDefaults;	// 104 = 0x68
    NSMutableDictionary *_services;	// 112 = 0x70
    NSMutableSet *_daemons;	// 120 = 0x78
    NSDictionary *_default_values;	// 128 = 0x80
    NSMutableDictionary *_purgeOperations;	// 136 = 0x88
    CDPurgeableResultCache *_purgeableResultCache;	// 144 = 0x90
    CacheDeleteAnalytics *_analytics;	// 152 = 0x98
    NSPointerArray *_inFlightOperations;	// 160 = 0xa0
    unsigned long long _pendingLowDiskCount;	// 168 = 0xa8
    NSMutableSet *_pendingLowDiskVolumes;	// 176 = 0xb0
    NSMutableDictionary *_lastUpdateTimes;	// 184 = 0xb8
}

+ (id)sharedCacheDelete;	// IMP=0x0000000100004a4c
- (void).cxx_destruct;	// IMP=0x000000010001a334
@property(retain, nonatomic) NSMutableDictionary *lastUpdateTimes; // @synthesize lastUpdateTimes=_lastUpdateTimes;
@property(retain, nonatomic) NSMutableSet *pendingLowDiskVolumes; // @synthesize pendingLowDiskVolumes=_pendingLowDiskVolumes;
@property(nonatomic) unsigned long long pendingLowDiskCount; // @synthesize pendingLowDiskCount=_pendingLowDiskCount;
@property(retain, nonatomic) NSPointerArray *inFlightOperations; // @synthesize inFlightOperations=_inFlightOperations;
@property(retain, nonatomic) CacheDeleteAnalytics *analytics; // @synthesize analytics=_analytics;
@property(retain, nonatomic) CDPurgeableResultCache *purgeableResultCache; // @synthesize purgeableResultCache=_purgeableResultCache;
@property(retain, nonatomic) NSMutableDictionary *purgeOperations; // @synthesize purgeOperations=_purgeOperations;
@property(retain, nonatomic) NSDictionary *default_values; // @synthesize default_values=_default_values;
@property(retain, nonatomic) NSMutableSet *daemons; // @synthesize daemons=_daemons;
@property(retain, nonatomic) NSMutableDictionary *services; // @synthesize services=_services;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) NSMutableDictionary *lastRefreshTimes; // @synthesize lastRefreshTimes=_lastRefreshTimes;
@property(readonly, nonatomic) NSURL *rootPath; // @synthesize rootPath=_rootPath;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *persistence_timer; // @synthesize persistence_timer=_persistence_timer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *timer_queue; // @synthesize timer_queue=_timer_queue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *notify_queue; // @synthesize notify_queue=_notify_queue;
@property(retain, nonatomic) id extensionMatchContext; // @synthesize extensionMatchContext=_extensionMatchContext;
@property(readonly) _Bool measureElapsedTimes; // @synthesize measureElapsedTimes=_measureElapsedTimes;
@property(retain, nonatomic) CacheDeleteListener *publicListener; // @synthesize publicListener=_publicListener;
@property(retain, nonatomic) CacheDeleteListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *operations_queue; // @synthesize operations_queue=_operations_queue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *defaults_queue; // @synthesize defaults_queue=_defaults_queue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *collection_queue; // @synthesize collection_queue=_collection_queue;
- (void)maybeCrashForTest:(id)arg1;	// IMP=0x0000000100019f9c
- (id)servicesDebugState;	// IMP=0x0000000100019e78
- (id)operationsDebugState;	// IMP=0x0000000100019d74
- (id)debugState;	// IMP=0x0000000100019a90
- (void)iteratePendingOperations:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019854
- (void)removeOperation:(id)arg1;	// IMP=0x0000000100019850
- (void)registerOperation:(id)arg1;	// IMP=0x0000000100019750
- (void)clientRegisterLowDiskFailure:(id)arg1 failureType:(int)arg2 isRoot:(_Bool)arg3;	// IMP=0x00000001000196cc
- (void)clientRequestCacheableSpaceGuidance:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000190bc
- (void)clientUpdatePurgeable:(id)arg1;	// IMP=0x0000000100018e78
- (void)clientGetState:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100018c1c
- (void)_clientGetState:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010001864c
- (void)clientSetState:(id)arg1 key:(id)arg2;	// IMP=0x0000000100017f74
- (void)_clientSetState:(id)arg1 key:(id)arg2;	// IMP=0x0000000100017c90
- (_Bool)checkSettingEntitlements:(id)arg1 onConnection:(id)arg2;	// IMP=0x0000000100017b54
- (void)clientPerformOperation:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000178ac
- (void)clientPerformVFSEventWithInfo:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000176b8
- (void)clientPerformServiceRequest:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016e20
- (void)clientPerformPeriodicsWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016834
- (void)clientCancelPurge:(id)arg1;	// IMP=0x00000001000162b8
- (void)clientPurge:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100015f64
- (void)clientPurgeableSpace:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100015d04
- (void)clientItemizedPurgeableSpace:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100015aa4
- (void)clientCheckin:(id)arg1 endpoint:(id)arg2 info:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100014c30
- (void)publicClientAvailableSpaceForVolume:(id)arg1 availableSpaceClass:(int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000144b4
- (void)forcePurgeNotify:(id)arg1;	// IMP=0x0000000100014490
- (void)notifyRecipients:(id)arg1 value:(id)arg2;	// IMP=0x000000010001443c
- (void)_notifyRecipients:(id)arg1 value:(id)arg2 force:(_Bool)arg3;	// IMP=0x0000000100013a58
- (void)processPurgeNotification:(id)arg1 forService:(id)arg2 info:(id)arg3 group:(id)arg4 force:(_Bool)arg5;	// IMP=0x00000001000122b4
- (void)invokeAfterMaxSeconds:(unsigned int)arg1 min:(unsigned int)arg2 group:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000010001204c
- (id)_purge:(id)arg1 volume:(id)arg2 services:(id)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x0000000100010a74
- (id)purge:(id)arg1 volume:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x000000010000f418
- (id)totalAvailable:(id)arg1;	// IMP=0x000000010000c840
- (void)asyncUpdateRecentResultsForAllVolumesWithInfo:(id)arg1;	// IMP=0x000000010000c634
- (void)updateRecentResultsForVolumes:(id)arg1 withInfo:(id)arg2 qos:(unsigned int)arg3 receiveResults:(CDUnknownBlockType)arg4;	// IMP=0x000000010000b458
- (void)timestampUpdateForVolumes:(id)arg1 atUrgency:(int)arg2;	// IMP=0x000000010000b0f4
- (id)shouldUpdateVolumes:(id)arg1 atUrgency:(int)arg2;	// IMP=0x000000010000ac44
- (id)keyForVolume:(id)arg1 atUrgency:(int)arg2;	// IMP=0x000000010000aba0
- (int)normalizeUrgency:(int)arg1;	// IMP=0x000000010000ab8c
- (_Bool)validateService:(id)arg1;	// IMP=0x000000010000a940
- (id)serviceWithID:(id)arg1;	// IMP=0x000000010000a8c8
- (id)copyServices;	// IMP=0x000000010000a700
- (id)fsPurgedVolumes:(id)arg1;	// IMP=0x000000010000a45c
- (void)prunePurgeHistory;	// IMP=0x000000010000a2b8
- (id)applicationExtensions;	// IMP=0x00000001000097a0
- (void)log_recent_info;	// IMP=0x00000001000096dc
- (void)cancelPersistenceTimer;	// IMP=0x00000001000095d4
- (void)startPersistenceTimer;	// IMP=0x0000000100009068
- (void)saveRecentInfo;	// IMP=0x0000000100008ff0
- (id)registerActivityWithIdentifier:(id)arg1 criteria:(id)arg2 runHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008bfc
- (void)endComfortPurgeActivityForVolume:(id)arg1;	// IMP=0x0000000100008b04
- (void)beginComfortPurgeActivityForVolume:(id)arg1;	// IMP=0x0000000100008860
- (void)endCriticalPurgeActivityForVolume:(id)arg1;	// IMP=0x0000000100008754
- (void)beginCriticalPurgeActivityForVolume:(id)arg1;	// IMP=0x00000001000083f0
- (void)handleVFSStreamXPCEvent:(id)arg1;	// IMP=0x000000010000677c
- (void)handleVFSStreamXPCEventForVolume:(id)arg1 event:(id)arg2;	// IMP=0x0000000100006628
- (void)checkNotificationState;	// IMP=0x00000001000062d8
- (void)broadcastLowDiskNotificationForVolume:(id)arg1 key:(id)arg2;	// IMP=0x0000000100005fc8
- (void)updateFollowup:(id)arg1;	// IMP=0x0000000100005fc4
- (struct VolumeThresholdsAndGoals)extractThresholdsAndGoals:(id)arg1;	// IMP=0x0000000100005e3c
- (void)processLowDiskVolume:(id)arg1 key:(id)arg2;	// IMP=0x00000001000051e4
- (void)processLowDiskVolumes:(id)arg1 filteringBySet:(id)arg2 key:(id)arg3;	// IMP=0x0000000100004fc8
- (void)processLowDiskVolumes:(id)arg1 key:(id)arg2;	// IMP=0x0000000100004e44
- (void)scanPlistsAtPath:(id)arg1 execBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004ad0
- (void)beginListening;	// IMP=0x0000000100004968
- (id)init;	// IMP=0x0000000100003c08

@end

